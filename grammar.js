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

module.exports = grammar({
  name: "structurizr",

  supertypes: $ => [
    $.workspace_item_statement,
    $.relation_identifier,
    $.configuration_item_statement,
    $.views_item_statement,
    $.view_property_statement,
  ],

  rules: {

    dsl: $ => repeat1($.workspace_declaration),

    workspace_declaration: $ => seq(
      keyword("workspace"),
      $.string,
      $.string,
      "{",
      repeat($.workspace_item_statement),
      "}",
    ),

    number: _ => token(/[0-9]+/),
    string: $ => seq("\"", $._string_content, "\""),
    _string_content: _ => token(prec(-1, /[^"$\\]+/)),
    _simple_identifier: _ => token(/[a-zA-Z_*][a-zA-Z0-9_]*/),
    dotted_identifier: $ => seq(
      field("parent", $.identifier),
      ".",
      field("child", $.identifier),
    ),
    identifier: $ => $._simple_identifier,
    relation_identifier: $ => choice(
      $.identifier,
      $.dotted_identifier
    ),
    _assignment_operator: _ => "=",
    _relation_operator: _ => "->",
    _newline: _ => /\n/,

    workspace_item_statement: $ => choice(
      $.model_declaration,
      $.configuration_declaration,
      $.views_declaration,
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
    ),

    system_context_view_declaration: $ => seq(
      keyword("systemcontext"),
      field("context", $.identifier),
      field("description", $.string),
      "{",
      repeat($.view_property_statement),
      "}",
    ),

    view_property_statement: $ => choice(
      $.include_statement,
      $.exclude_statement,
      $.autolayout_statement,
      $.default_statement,
    ),

    include_statement: $ => seq(
      keyword("include"),
      repeat1(choice(
        "*",
        $.identifier,
      )),
      $._newline,
    ),

    exclude_statement: $ => seq(
      keyword("exclude"),
      repeat1($.identifier),
      $._newline,
    ),

    autolayout_statement: $ => seq(
      keyword("autolayout"),
      field("value", $.autolayout_value),
      optional(seq(
        field("rankSeparation", $.number),
        optional(field("nodeSeparation", $.number)),
      )),
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
      $._newline,
    ),

    // TODO: container
    // TODO: styles
  }
});
