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
    $.statement
  ],

  rules: {

    dsl: $ => repeat($.statement),

    statement: $ => choice(
      $.hello_statement,
      $.meh_statement,
      $.greeting_statement,
      $.workspace_declaration,
    ),

    hello_statement: $ => "hello",

    meh_statement: $ => "meh",

    positional_statement: _ => choice("here", "there"),

    greeting_statement: $ => seq(
      $.hello_statement,
      $.positional_statement,
    ),

    string: $ => seq("\"", $.string_content, "\""),
    string_content: _ => token(prec(-1, /[^"$\\]+/)),

    workspace_declaration: $ => seq(
      "workspace",
      $.string,
      $.string
    ),
  }
});
