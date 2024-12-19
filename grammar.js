/**
 * @file Parser for the Structurizr DSL used to support C4 architecture models.
 * @author Jostein Kjønigsen <jostein@kjonigsen.net>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "structurizr",

  supertypes: $ => [
    $.workspace_item_statement
  ],

  rules: {

    dsl: $ => repeat1($.workspace_declaration),

    workspace_declaration: $ => seq(
      "workspace",
      $.string,
      $.string,
      "{",
      repeat($.workspace_item_statement),
      "}",
    ),

    string: $ => seq("\"", $._string_content, "\""),
    _string_content: _ => token(prec(-1, /[^"$\\]+/)),
    _simple_identifier: _ => token(/[a-zA-Z_*][a-zA-Z0-9_]*/),
    _dotted_identifier: $ => seq(
      $._simple_identifier,
      ".",
      $._simple_identifier,
    ),
    identifier: $ => $._simple_identifier,
    relation_identifier: $ => choice(
      $._simple_identifier,
      $._dotted_identifier,
    ),
    _assignment_operator: _ => "=",
    _relation_operator: _ => "->",

    workspace_item_statement: $ => choice(
      $.model_declaration,
      // tood: view statement, etc
    ),

    model_declaration: $ => seq(
      "model",
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
      "softwareSystem",
      field("description", $.string),
      optional(seq(
        "{",
        repeat($._model_item_statement),
        "}",
      )),
    ),

    container_declaration: $ => seq(
      "container",
      field("description", $.string),
      optional(seq(
        "{",
        repeat($._model_item_statement),
        "}",
      )),
    ),

    person_declaration: $ => seq(
      "person",
      $.string,
    ),

    tags_declaration: $ => seq(
      "tags",
      $._assignment_operator,
      repeat1($.string),
    ),
  }
});
