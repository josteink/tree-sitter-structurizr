/**
 * @file Parser for the Structurizr DSL used to support C4 architecture models.
 * @author Jostein Kjønigsen <jostein@kjonigsen.net>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// creates a case-insensitive match for the keyword.
// structurizr is case-insensitive!
// https://docs.structurizr.com/dsl/basics#dsl-rules
function keyword(value) {
  return new RegExp(
    value
      .split("")
      .map((char) => {
        if (/[a-zA-Z]/.test(char)) {
          return `[${char.toLowerCase()}${char.toUpperCase()}]`;
        }
        return char;
      })
      .join("")
  );
}

function optionalSeq(first, ...rest) {
  if (rest.length === 0) {
    return optional(first);
  } else {
    return optional(seq(first, optionalSeq(...rest)));
  }
}

module.exports = grammar({
  name: "structurizr",

  supertypes: $ => [
    $.workspace_item_statement,
    $.relation_identifier,
    $.configuration_item_statement,
    $.views_item_statement,
    $.view_property_statement,
    $.style_item_statement,
  ],

  rules: {

    dsl: $ => repeat1($.workspace_declaration),

    workspace_declaration: $ => seq(
      keyword("workspace"),
      $.string,
      optional($.string),
      "{",
      repeat($.workspace_item_statement),
      "}",
    ),

    number: _ => token(/[0-9]+/),
    string: $ => token(seq("\"", /[^"$\\]+/, "\"")),

    _simple_identifier: _ => token(/[a-zA-Z_*][a-zA-Z0-9_]*/),
    dotted_identifier: $ => seq(
      field("parent", $.identifier),
      ".",
      field("child", $.identifier),
    ),
    identifier: $ => $._simple_identifier,

    wildcard_identifier: () => "*",

    relation_identifier: $ => choice(
      $.identifier,
      $.dotted_identifier
    ),
    _assignment_operator: _ => "=",
    _relation_operator: _ => "->",
    _newline: _ => /\n/,
    color: _ => choice(
      /#[0-9a-zA-Z]{3}/,
      /#[0-9a-zA-Z]{6}/,
    ),

    comment: _ => token(choice(
      seq("#", /(\\(.|\r?\n)|[^\\\n])*/),
      seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
      seq(
        "/*",
        /[^*]*\*+([^/*][^*]*\*+)*/,
        "/",
      ),
    )),

    workspace_item_statement: $ => choice(
      $.identifiers_statement,
      $.model_declaration,
      $.configuration_declaration,
      $.views_declaration,
      $.comment,
    ),

    // https://docs.structurizr.com/dsl/language#identifiers
    identifiers_statement: $ => seq(
      keyword("!identifiers"),
      field("value", $.identifiers_value),
    ),

    identifiers_value: _ => choice(
      "hierarchical",
      "flat",
    ),

    model_declaration: $ => seq(
      keyword("model"),
      $._model_children,
    ),

    _model_children: $ => seq(
      "{",
      repeat($._model_item_statement),
      "}",
    ),

    _model_item_statement: $ => choice(
      $.variable_declaration,
      $.relation_statement,
      $.tags_declaration,
      $.comment,
    ),

    variable_declaration: $ => seq(
      field("name", $.identifier),
      $._assignment_operator,
      field("value", $._item_declaration),
    ),

    relation_statement: $ => seq(
      field("source", $.relation_identifier),
      $._relation_operator,
      field("target", $.relation_identifier),
      field("relation", $.string),
    ),

    _item_declaration: $ => choice(
      $.software_system_declaration,
      $.container_declaration,
      $.person_declaration,
    ),

    software_system_declaration: $ => seq(
      keyword("softwareSystem"),
      field("description", $.string),
      optional($._model_children),
    ),

    container_declaration: $ => seq(
      keyword("container"),
      field("description", $.string),
      optional($._model_children),
    ),

    _optional_children: $ => optional(seq(
      "{",
      repeat($._model_item_statement),
      "}",
    )),

    person_declaration: $ => seq(
      keyword("person"),
      $.string,
    ),

    tags_declaration: $ => seq(
      "tags", // TODO: make case-insensitive... somehow!
      $._assignment_operator,
      repeat1($.string),
    ),

    configuration_declaration: $ => seq(
      keyword("configuration"),
      "{",
      repeat($.configuration_item_statement),
      "}",
    ),

    configuration_item_statement: $ => choice(
      $.scope_declaration,
      $.comment,
    ),

    scope_declaration: $ => seq(
      keyword("scope"),
      field("value", $._simple_identifier),
    ),

    views_declaration: $ => seq(
      keyword("views"),
      "{",
      repeat($.views_item_statement),
      "}"
    ),

    views_item_statement: $ => choice(
      $.system_context_view_declaration,
      $.container_view_declaration,
      $.dynamic_view_declaration,
      $.styles_declaration,
      $.comment,
    ),

    system_context_view_declaration: $ => seq(
      keyword("systemcontext"),
      field("context", $.identifier),
      optionalSeq(
        field("key", $.string),
        field("description", $.string),
      ),
      "{",
      repeat($.view_property_statement),
      "}",
    ),

    view_property_statement: $ => choice(
      $.include_statement,
      $.exclude_statement,
      $.autolayout_statement,
      $.default_statement,
      $.description_statement,
      $.comment,
    ),

    include_statement: $ => seq(
      keyword("include"),
      repeat1(choice(
        $.identifier,
        $.dotted_identifier,
        $.wildcard_identifier,
      )),
      optional($.comment),
      $._newline,
    ),

    exclude_statement: $ => seq(
      keyword("exclude"),
      repeat1(choice(
        $.identifier,
        $.dotted_identifier,
      )),
      optional($.comment),
      $._newline,
    ),

    autolayout_statement: $ => seq(
      keyword("autolayout"),
      field("value", $.autolayout_value),
      optional(seq(
        field("rankSeparation", $.number),
        optional(field("nodeSeparation", $.number)),
      )),
      optional($.comment),
      $._newline,
    ),

    autolayout_value: _ => choice(
      keyword("lr"),
      keyword("rl"),
      keyword("tb"),
      keyword("bt"),
    ),

    default_statement: $ => seq(
      keyword("default"),
      optional($.comment),
      $._newline,
    ),

    description_statement: $ => seq(
      keyword("description"),
      $.string,
      optional($.comment),
      $._newline,
    ),

    container_view_declaration: $ => seq(
      keyword("container"),
      field("context", $.identifier),
      optionalSeq(
        field("key", $.string),
        field("description", $.string),
      ),
      "{",
      repeat($.view_property_statement),
      "}",
    ),

    dynamic_view_declaration: $ => seq(
      keyword("dynamic"),
      field("scope", choice(
        $.identifier,
        $.wildcard_identifier,
      )),
      optionalSeq(
        field("key", $.string),
        field("description", $.string),
      ),
      "{",
      repeat($.view_property_statement),
      "}",
    ),

    // https://docs.structurizr.com/dsl/language#styles
    styles_declaration: $ => seq(
      keyword("styles"),
      "{",
      repeat($.style_item_statement),
      "}",
    ),

    style_item_statement: $ => choice(
      $.element_declaration,
      $.comment,
    ),

    element_declaration: $ => seq(
      keyword("element"),
      field("name", $.string),
      "{",
      repeat(choice(
        $.element_property,
        $.comment,
      )),
      "}",
    ),

    element_property: $ => seq(
      field("key", $.identifier),
      field("value", choice(
        $.identifier,
        $.string,
        $.number,
        $.color,
      )),
      optional($.comment),
      $._newline,
    )
  }
});
