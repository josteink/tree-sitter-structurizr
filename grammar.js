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
    identifier: _ => token(/[a-zA-Z_*][a-zA-Z0-9_]*/),
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
      $.assignment_statement,
      $.relation_statement,
    ),

    assignment_statement: $ => seq(
      field("name", $.identifier),
      $._assignment_operator,
      field("value", $._item_declaration),
    ),

    relation_statement: $ => seq(
      field("source", $.identifier),
      $._relation_operator,
      field("target", $.identifier),
      field("relation", $.string),
    ),

    _item_declaration: $ => choice(

    ),
  }
});
