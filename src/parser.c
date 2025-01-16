#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  aux_sym_workspace_declaration_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  anon_sym_DQUOTE = 5,
  sym__string_content = 6,
  sym__simple_identifier = 7,
  anon_sym_DOT = 8,
  sym_wildcard_identifier = 9,
  anon_sym_EQ = 10,
  anon_sym_DASH_GT = 11,
  sym__newline = 12,
  aux_sym_color_token1 = 13,
  aux_sym_color_token2 = 14,
  sym_comment = 15,
  aux_sym_identifiers_statement_token1 = 16,
  anon_sym_hierarchical = 17,
  anon_sym_flat = 18,
  aux_sym_model_declaration_token1 = 19,
  aux_sym_software_system_declaration_token1 = 20,
  aux_sym_container_declaration_token1 = 21,
  aux_sym_person_declaration_token1 = 22,
  anon_sym_tags = 23,
  aux_sym_configuration_declaration_token1 = 24,
  aux_sym_scope_declaration_token1 = 25,
  aux_sym_views_declaration_token1 = 26,
  aux_sym_system_context_view_declaration_token1 = 27,
  aux_sym_include_statement_token1 = 28,
  aux_sym_exclude_statement_token1 = 29,
  aux_sym_autolayout_statement_token1 = 30,
  aux_sym_autolayout_value_token1 = 31,
  aux_sym_autolayout_value_token2 = 32,
  aux_sym_autolayout_value_token3 = 33,
  aux_sym_autolayout_value_token4 = 34,
  aux_sym_default_statement_token1 = 35,
  aux_sym_description_statement_token1 = 36,
  aux_sym_dynamic_view_declaration_token1 = 37,
  aux_sym_styles_declaration_token1 = 38,
  aux_sym_element_declaration_token1 = 39,
  sym_dsl = 40,
  sym_workspace_declaration = 41,
  sym_string = 42,
  sym_dotted_identifier = 43,
  sym_identifier = 44,
  sym_relation_identifier = 45,
  sym__assignment_operator = 46,
  sym__relation_operator = 47,
  sym_color = 48,
  sym_workspace_item_statement = 49,
  sym_identifiers_statement = 50,
  sym_identifiers_value = 51,
  sym_model_declaration = 52,
  sym__model_children = 53,
  sym__model_item_statement = 54,
  sym_variable_declaration = 55,
  sym_relation_statement = 56,
  sym__item_declaration = 57,
  sym_software_system_declaration = 58,
  sym_container_declaration = 59,
  sym_person_declaration = 60,
  sym_tags_declaration = 61,
  sym_configuration_declaration = 62,
  sym_configuration_item_statement = 63,
  sym_scope_declaration = 64,
  sym_views_declaration = 65,
  sym_views_item_statement = 66,
  sym_system_context_view_declaration = 67,
  sym_view_property_statement = 68,
  sym_include_statement = 69,
  sym_exclude_statement = 70,
  sym_autolayout_statement = 71,
  sym_autolayout_value = 72,
  sym_default_statement = 73,
  sym_description_statement = 74,
  sym_container_view_declaration = 75,
  sym_dynamic_view_declaration = 76,
  sym_styles_declaration = 77,
  sym_style_item_statement = 78,
  sym_element_declaration = 79,
  sym_element_property = 80,
  aux_sym_dsl_repeat1 = 81,
  aux_sym_workspace_declaration_repeat1 = 82,
  aux_sym__model_children_repeat1 = 83,
  aux_sym_tags_declaration_repeat1 = 84,
  aux_sym_configuration_declaration_repeat1 = 85,
  aux_sym_views_declaration_repeat1 = 86,
  aux_sym_system_context_view_declaration_repeat1 = 87,
  aux_sym_include_statement_repeat1 = 88,
  aux_sym_exclude_statement_repeat1 = 89,
  aux_sym_styles_declaration_repeat1 = 90,
  aux_sym_element_declaration_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_workspace_declaration_token1] = "workspace_declaration_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_content] = "_string_content",
  [sym__simple_identifier] = "_simple_identifier",
  [anon_sym_DOT] = ".",
  [sym_wildcard_identifier] = "wildcard_identifier",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [sym__newline] = "_newline",
  [aux_sym_color_token1] = "color_token1",
  [aux_sym_color_token2] = "color_token2",
  [sym_comment] = "comment",
  [aux_sym_identifiers_statement_token1] = "identifiers_statement_token1",
  [anon_sym_hierarchical] = "hierarchical",
  [anon_sym_flat] = "flat",
  [aux_sym_model_declaration_token1] = "model_declaration_token1",
  [aux_sym_software_system_declaration_token1] = "software_system_declaration_token1",
  [aux_sym_container_declaration_token1] = "container_declaration_token1",
  [aux_sym_person_declaration_token1] = "person_declaration_token1",
  [anon_sym_tags] = "tags",
  [aux_sym_configuration_declaration_token1] = "configuration_declaration_token1",
  [aux_sym_scope_declaration_token1] = "scope_declaration_token1",
  [aux_sym_views_declaration_token1] = "views_declaration_token1",
  [aux_sym_system_context_view_declaration_token1] = "system_context_view_declaration_token1",
  [aux_sym_include_statement_token1] = "include_statement_token1",
  [aux_sym_exclude_statement_token1] = "exclude_statement_token1",
  [aux_sym_autolayout_statement_token1] = "autolayout_statement_token1",
  [aux_sym_autolayout_value_token1] = "autolayout_value_token1",
  [aux_sym_autolayout_value_token2] = "autolayout_value_token2",
  [aux_sym_autolayout_value_token3] = "autolayout_value_token3",
  [aux_sym_autolayout_value_token4] = "autolayout_value_token4",
  [aux_sym_default_statement_token1] = "default_statement_token1",
  [aux_sym_description_statement_token1] = "description_statement_token1",
  [aux_sym_dynamic_view_declaration_token1] = "dynamic_view_declaration_token1",
  [aux_sym_styles_declaration_token1] = "styles_declaration_token1",
  [aux_sym_element_declaration_token1] = "element_declaration_token1",
  [sym_dsl] = "dsl",
  [sym_workspace_declaration] = "workspace_declaration",
  [sym_string] = "string",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_identifier] = "identifier",
  [sym_relation_identifier] = "relation_identifier",
  [sym__assignment_operator] = "_assignment_operator",
  [sym__relation_operator] = "_relation_operator",
  [sym_color] = "color",
  [sym_workspace_item_statement] = "workspace_item_statement",
  [sym_identifiers_statement] = "identifiers_statement",
  [sym_identifiers_value] = "identifiers_value",
  [sym_model_declaration] = "model_declaration",
  [sym__model_children] = "_model_children",
  [sym__model_item_statement] = "_model_item_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_relation_statement] = "relation_statement",
  [sym__item_declaration] = "_item_declaration",
  [sym_software_system_declaration] = "software_system_declaration",
  [sym_container_declaration] = "container_declaration",
  [sym_person_declaration] = "person_declaration",
  [sym_tags_declaration] = "tags_declaration",
  [sym_configuration_declaration] = "configuration_declaration",
  [sym_configuration_item_statement] = "configuration_item_statement",
  [sym_scope_declaration] = "scope_declaration",
  [sym_views_declaration] = "views_declaration",
  [sym_views_item_statement] = "views_item_statement",
  [sym_system_context_view_declaration] = "system_context_view_declaration",
  [sym_view_property_statement] = "view_property_statement",
  [sym_include_statement] = "include_statement",
  [sym_exclude_statement] = "exclude_statement",
  [sym_autolayout_statement] = "autolayout_statement",
  [sym_autolayout_value] = "autolayout_value",
  [sym_default_statement] = "default_statement",
  [sym_description_statement] = "description_statement",
  [sym_container_view_declaration] = "container_view_declaration",
  [sym_dynamic_view_declaration] = "dynamic_view_declaration",
  [sym_styles_declaration] = "styles_declaration",
  [sym_style_item_statement] = "style_item_statement",
  [sym_element_declaration] = "element_declaration",
  [sym_element_property] = "element_property",
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_declaration_repeat1] = "workspace_declaration_repeat1",
  [aux_sym__model_children_repeat1] = "_model_children_repeat1",
  [aux_sym_tags_declaration_repeat1] = "tags_declaration_repeat1",
  [aux_sym_configuration_declaration_repeat1] = "configuration_declaration_repeat1",
  [aux_sym_views_declaration_repeat1] = "views_declaration_repeat1",
  [aux_sym_system_context_view_declaration_repeat1] = "system_context_view_declaration_repeat1",
  [aux_sym_include_statement_repeat1] = "include_statement_repeat1",
  [aux_sym_exclude_statement_repeat1] = "exclude_statement_repeat1",
  [aux_sym_styles_declaration_repeat1] = "styles_declaration_repeat1",
  [aux_sym_element_declaration_repeat1] = "element_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_workspace_declaration_token1] = aux_sym_workspace_declaration_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_content] = sym__string_content,
  [sym__simple_identifier] = sym__simple_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_wildcard_identifier] = sym_wildcard_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__newline] = sym__newline,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [aux_sym_color_token2] = aux_sym_color_token2,
  [sym_comment] = sym_comment,
  [aux_sym_identifiers_statement_token1] = aux_sym_identifiers_statement_token1,
  [anon_sym_hierarchical] = anon_sym_hierarchical,
  [anon_sym_flat] = anon_sym_flat,
  [aux_sym_model_declaration_token1] = aux_sym_model_declaration_token1,
  [aux_sym_software_system_declaration_token1] = aux_sym_software_system_declaration_token1,
  [aux_sym_container_declaration_token1] = aux_sym_container_declaration_token1,
  [aux_sym_person_declaration_token1] = aux_sym_person_declaration_token1,
  [anon_sym_tags] = anon_sym_tags,
  [aux_sym_configuration_declaration_token1] = aux_sym_configuration_declaration_token1,
  [aux_sym_scope_declaration_token1] = aux_sym_scope_declaration_token1,
  [aux_sym_views_declaration_token1] = aux_sym_views_declaration_token1,
  [aux_sym_system_context_view_declaration_token1] = aux_sym_system_context_view_declaration_token1,
  [aux_sym_include_statement_token1] = aux_sym_include_statement_token1,
  [aux_sym_exclude_statement_token1] = aux_sym_exclude_statement_token1,
  [aux_sym_autolayout_statement_token1] = aux_sym_autolayout_statement_token1,
  [aux_sym_autolayout_value_token1] = aux_sym_autolayout_value_token1,
  [aux_sym_autolayout_value_token2] = aux_sym_autolayout_value_token2,
  [aux_sym_autolayout_value_token3] = aux_sym_autolayout_value_token3,
  [aux_sym_autolayout_value_token4] = aux_sym_autolayout_value_token4,
  [aux_sym_default_statement_token1] = aux_sym_default_statement_token1,
  [aux_sym_description_statement_token1] = aux_sym_description_statement_token1,
  [aux_sym_dynamic_view_declaration_token1] = aux_sym_dynamic_view_declaration_token1,
  [aux_sym_styles_declaration_token1] = aux_sym_styles_declaration_token1,
  [aux_sym_element_declaration_token1] = aux_sym_element_declaration_token1,
  [sym_dsl] = sym_dsl,
  [sym_workspace_declaration] = sym_workspace_declaration,
  [sym_string] = sym_string,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_identifier] = sym_identifier,
  [sym_relation_identifier] = sym_relation_identifier,
  [sym__assignment_operator] = sym__assignment_operator,
  [sym__relation_operator] = sym__relation_operator,
  [sym_color] = sym_color,
  [sym_workspace_item_statement] = sym_workspace_item_statement,
  [sym_identifiers_statement] = sym_identifiers_statement,
  [sym_identifiers_value] = sym_identifiers_value,
  [sym_model_declaration] = sym_model_declaration,
  [sym__model_children] = sym__model_children,
  [sym__model_item_statement] = sym__model_item_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_relation_statement] = sym_relation_statement,
  [sym__item_declaration] = sym__item_declaration,
  [sym_software_system_declaration] = sym_software_system_declaration,
  [sym_container_declaration] = sym_container_declaration,
  [sym_person_declaration] = sym_person_declaration,
  [sym_tags_declaration] = sym_tags_declaration,
  [sym_configuration_declaration] = sym_configuration_declaration,
  [sym_configuration_item_statement] = sym_configuration_item_statement,
  [sym_scope_declaration] = sym_scope_declaration,
  [sym_views_declaration] = sym_views_declaration,
  [sym_views_item_statement] = sym_views_item_statement,
  [sym_system_context_view_declaration] = sym_system_context_view_declaration,
  [sym_view_property_statement] = sym_view_property_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_exclude_statement] = sym_exclude_statement,
  [sym_autolayout_statement] = sym_autolayout_statement,
  [sym_autolayout_value] = sym_autolayout_value,
  [sym_default_statement] = sym_default_statement,
  [sym_description_statement] = sym_description_statement,
  [sym_container_view_declaration] = sym_container_view_declaration,
  [sym_dynamic_view_declaration] = sym_dynamic_view_declaration,
  [sym_styles_declaration] = sym_styles_declaration,
  [sym_style_item_statement] = sym_style_item_statement,
  [sym_element_declaration] = sym_element_declaration,
  [sym_element_property] = sym_element_property,
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_declaration_repeat1] = aux_sym_workspace_declaration_repeat1,
  [aux_sym__model_children_repeat1] = aux_sym__model_children_repeat1,
  [aux_sym_tags_declaration_repeat1] = aux_sym_tags_declaration_repeat1,
  [aux_sym_configuration_declaration_repeat1] = aux_sym_configuration_declaration_repeat1,
  [aux_sym_views_declaration_repeat1] = aux_sym_views_declaration_repeat1,
  [aux_sym_system_context_view_declaration_repeat1] = aux_sym_system_context_view_declaration_repeat1,
  [aux_sym_include_statement_repeat1] = aux_sym_include_statement_repeat1,
  [aux_sym_exclude_statement_repeat1] = aux_sym_exclude_statement_repeat1,
  [aux_sym_styles_declaration_repeat1] = aux_sym_styles_declaration_repeat1,
  [aux_sym_element_declaration_repeat1] = aux_sym_element_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_workspace_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifiers_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hierarchical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flat] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_model_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_software_system_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_container_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_person_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_configuration_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_views_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_context_view_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exclude_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_autolayout_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_autolayout_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_autolayout_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_autolayout_value_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_autolayout_value_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_default_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dynamic_view_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_styles_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dsl] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_identifier] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__assignment_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__relation_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_identifiers_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_identifiers_value] = {
    .visible = true,
    .named = true,
  },
  [sym_model_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__model_children] = {
    .visible = false,
    .named = true,
  },
  [sym__model_item_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__item_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_software_system_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_container_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_person_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_scope_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_views_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_views_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_system_context_view_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_view_property_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exclude_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_autolayout_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_autolayout_value] = {
    .visible = true,
    .named = true,
  },
  [sym_default_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_description_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_container_view_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_view_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_style_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_element_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_element_property] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dsl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workspace_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__model_children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_configuration_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_views_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_context_view_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exclude_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_styles_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_child = 1,
  field_context = 2,
  field_description = 3,
  field_key = 4,
  field_name = 5,
  field_nodeSeparation = 6,
  field_parent = 7,
  field_rankSeparation = 8,
  field_relation = 9,
  field_scope = 10,
  field_source = 11,
  field_target = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child] = "child",
  [field_context] = "context",
  [field_description] = "description",
  [field_key] = "key",
  [field_name] = "name",
  [field_nodeSeparation] = "nodeSeparation",
  [field_parent] = "parent",
  [field_rankSeparation] = "rankSeparation",
  [field_relation] = "relation",
  [field_scope] = "scope",
  [field_source] = "source",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_child, 2},
    {field_parent, 0},
  [3] =
    {field_name, 0},
    {field_value, 2},
  [5] =
    {field_description, 1},
  [6] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
  [9] =
    {field_context, 1},
  [10] =
    {field_scope, 1},
  [11] =
    {field_context, 1},
    {field_key, 2},
  [13] =
    {field_key, 2},
    {field_scope, 1},
  [15] =
    {field_context, 1},
    {field_description, 3},
    {field_key, 2},
  [18] =
    {field_description, 3},
    {field_key, 2},
    {field_scope, 1},
  [21] =
    {field_name, 1},
  [22] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [24] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
    {field_value, 1},
  [27] =
    {field_key, 0},
    {field_value, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 24,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 34,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 72,
  [116] = 97,
  [117] = 117,
  [118] = 34,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 117,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 117,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 91,
  [162] = 162,
  [163] = 153,
  [164] = 164,
  [165] = 165,
  [166] = 153,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 185,
  [187] = 187,
  [188] = 188,
  [189] = 175,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(166);
      ADVANCE_MAP(
        '!', 73,
        '"', 171,
        '#', 165,
        '*', 179,
        '-', 12,
        '.', 178,
        '=', 181,
        'T', 37,
        'f', 24,
        'h', 22,
        't', 13,
        '{', 168,
        '}', 169,
        'A', 148,
        'a', 148,
        'B', 135,
        'b', 135,
        'C', 107,
        'c', 107,
        'D', 50,
        'd', 50,
        'E', 86,
        'e', 86,
        'I', 105,
        'i', 105,
        'L', 119,
        'l', 119,
        'M', 115,
        'm', 115,
        'P', 58,
        'p', 58,
        'R', 84,
        'r', 84,
        'S', 40,
        's', 40,
        'V', 76,
        'v', 76,
        'W', 108,
        'w', 108,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 73,
        '#', 187,
        '/', 8,
        '}', 169,
        'A', 148,
        'a', 148,
        'C', 107,
        'c', 107,
        'D', 50,
        'd', 50,
        'E', 86,
        'e', 86,
        'I', 105,
        'i', 105,
        'M', 115,
        'm', 115,
        'S', 41,
        's', 41,
        'V', 76,
        'v', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '{') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(182);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        'C', 106,
        'c', 106,
        'O', 70,
        'o', 70,
        'T', 157,
        't', 157,
        'Y', 132,
        'y', 132,
      );
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 71:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 92:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 154:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      END_STATE();
    case 155:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 156:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 157:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 158:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 160:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 160},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 160},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_workspace_declaration_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_wildcard_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [aux_sym_color_token2] = ACTIONS(1),
    [aux_sym_identifiers_statement_token1] = ACTIONS(1),
    [anon_sym_hierarchical] = ACTIONS(1),
    [anon_sym_flat] = ACTIONS(1),
    [aux_sym_model_declaration_token1] = ACTIONS(1),
    [aux_sym_software_system_declaration_token1] = ACTIONS(1),
    [aux_sym_container_declaration_token1] = ACTIONS(1),
    [aux_sym_person_declaration_token1] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [aux_sym_configuration_declaration_token1] = ACTIONS(1),
    [aux_sym_scope_declaration_token1] = ACTIONS(1),
    [aux_sym_views_declaration_token1] = ACTIONS(1),
    [aux_sym_system_context_view_declaration_token1] = ACTIONS(1),
    [aux_sym_include_statement_token1] = ACTIONS(1),
    [aux_sym_exclude_statement_token1] = ACTIONS(1),
    [aux_sym_autolayout_statement_token1] = ACTIONS(1),
    [aux_sym_autolayout_value_token1] = ACTIONS(1),
    [aux_sym_autolayout_value_token2] = ACTIONS(1),
    [aux_sym_autolayout_value_token3] = ACTIONS(1),
    [aux_sym_autolayout_value_token4] = ACTIONS(1),
    [aux_sym_default_statement_token1] = ACTIONS(1),
    [aux_sym_description_statement_token1] = ACTIONS(1),
    [aux_sym_dynamic_view_declaration_token1] = ACTIONS(1),
    [aux_sym_styles_declaration_token1] = ACTIONS(1),
    [aux_sym_element_declaration_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(173),
    [sym_workspace_declaration] = STATE(106),
    [aux_sym_dsl_repeat1] = STATE(106),
    [aux_sym_workspace_declaration_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [33] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [66] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [99] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [132] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [165] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [198] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [231] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [264] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [297] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [330] = 9,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym_include_statement_token1,
    ACTIONS(45), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(48), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(51), 1,
      aux_sym_default_statement_token1,
    ACTIONS(54), 1,
      aux_sym_description_statement_token1,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [363] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [396] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [429] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [462] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [495] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [528] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(3), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [561] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [594] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_include_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(15), 1,
      aux_sym_default_statement_token1,
    ACTIONS(17), 1,
      aux_sym_description_statement_token1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(54), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [627] = 8,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(79), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(81), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(83), 1,
      aux_sym_views_declaration_token1,
    STATE(31), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(98), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [656] = 8,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(91), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(93), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(95), 1,
      aux_sym_styles_declaration_token1,
    STATE(26), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(84), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [685] = 8,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(79), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(81), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(83), 1,
      aux_sym_views_declaration_token1,
    STATE(30), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(98), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [714] = 8,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym__simple_identifier,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_tags,
    STATE(114), 1,
      sym_identifier,
    STATE(151), 1,
      sym_dotted_identifier,
    STATE(156), 1,
      sym_relation_identifier,
    STATE(27), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [743] = 8,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(79), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(81), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(83), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(98), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [772] = 8,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(91), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(93), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(95), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(84), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [801] = 8,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      sym__simple_identifier,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_tags,
    STATE(114), 1,
      sym_identifier,
    STATE(151), 1,
      sym_dotted_identifier,
    STATE(156), 1,
      sym_relation_identifier,
    STATE(27), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [830] = 8,
    ACTIONS(99), 1,
      sym__simple_identifier,
    ACTIONS(103), 1,
      anon_sym_tags,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      sym_comment,
    STATE(114), 1,
      sym_identifier,
    STATE(151), 1,
      sym_dotted_identifier,
    STATE(156), 1,
      sym_relation_identifier,
    STATE(24), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [859] = 8,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(132), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(135), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(138), 1,
      aux_sym_styles_declaration_token1,
    STATE(29), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(84), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [888] = 8,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(149), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(152), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_views_declaration_token1,
    STATE(30), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(98), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [917] = 8,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(79), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(81), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(83), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(98), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [946] = 8,
    ACTIONS(99), 1,
      sym__simple_identifier,
    ACTIONS(103), 1,
      anon_sym_tags,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      sym_comment,
    STATE(114), 1,
      sym_identifier,
    STATE(151), 1,
      sym_dotted_identifier,
    STATE(156), 1,
      sym_relation_identifier,
    STATE(33), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [975] = 8,
    ACTIONS(99), 1,
      sym__simple_identifier,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_tags,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_identifier,
    STATE(151), 1,
      sym_dotted_identifier,
    STATE(156), 1,
      sym_relation_identifier,
    STATE(27), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [1004] = 2,
    ACTIONS(168), 1,
      aux_sym_color_token1,
    ACTIONS(166), 8,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [1018] = 6,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      sym__simple_identifier,
    ACTIONS(176), 1,
      aux_sym_color_token1,
    ACTIONS(178), 1,
      aux_sym_color_token2,
    STATE(167), 3,
      sym_string,
      sym_identifier,
      sym_color,
  [1039] = 1,
    ACTIONS(180), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1049] = 6,
    ACTIONS(182), 1,
      sym__simple_identifier,
    ACTIONS(185), 1,
      sym_wildcard_identifier,
    ACTIONS(188), 1,
      sym__newline,
    ACTIONS(190), 1,
      sym_comment,
    STATE(102), 1,
      sym_identifier,
    STATE(37), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1069] = 1,
    ACTIONS(192), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1079] = 1,
    ACTIONS(194), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1089] = 1,
    ACTIONS(196), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1099] = 1,
    ACTIONS(198), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1109] = 4,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(204), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(44), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1125] = 4,
    ACTIONS(206), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(208), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(210), 1,
      aux_sym_person_declaration_token1,
    STATE(119), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [1141] = 4,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(217), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(44), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1157] = 6,
    ACTIONS(219), 1,
      sym__simple_identifier,
    ACTIONS(221), 1,
      sym_wildcard_identifier,
    ACTIONS(223), 1,
      sym__newline,
    ACTIONS(225), 1,
      sym_comment,
    STATE(102), 1,
      sym_identifier,
    STATE(37), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1177] = 1,
    ACTIONS(227), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1187] = 1,
    ACTIONS(229), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1197] = 1,
    ACTIONS(231), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1207] = 1,
    ACTIONS(233), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1217] = 1,
    ACTIONS(235), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1227] = 1,
    ACTIONS(237), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1237] = 1,
    ACTIONS(239), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1247] = 1,
    ACTIONS(241), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1257] = 1,
    ACTIONS(243), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1267] = 1,
    ACTIONS(245), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1277] = 1,
    ACTIONS(247), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1286] = 5,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_element_declaration_token1,
    STATE(139), 1,
      sym_element_declaration,
    STATE(60), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1303] = 1,
    ACTIONS(255), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1312] = 1,
    ACTIONS(257), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1321] = 5,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym_element_declaration,
    STATE(70), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1338] = 4,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym__model_children,
    ACTIONS(263), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(265), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1353] = 4,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym__model_children,
    ACTIONS(267), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(269), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1368] = 1,
    ACTIONS(271), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1377] = 1,
    ACTIONS(273), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1386] = 1,
    ACTIONS(275), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1395] = 1,
    ACTIONS(277), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1404] = 1,
    ACTIONS(279), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1413] = 5,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_scope_declaration_token1,
    STATE(133), 1,
      sym_scope_declaration,
    STATE(81), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1430] = 1,
    ACTIONS(287), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1439] = 5,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_element_declaration_token1,
    STATE(139), 1,
      sym_element_declaration,
    STATE(70), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1456] = 5,
    ACTIONS(297), 1,
      sym__simple_identifier,
    ACTIONS(299), 1,
      sym__newline,
    ACTIONS(301), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(82), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1473] = 1,
    ACTIONS(303), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1482] = 1,
    ACTIONS(305), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1491] = 1,
    ACTIONS(307), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1500] = 1,
    ACTIONS(309), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1509] = 5,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_scope_declaration_token1,
    STATE(133), 1,
      sym_scope_declaration,
    STATE(76), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1526] = 1,
    ACTIONS(319), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1535] = 1,
    ACTIONS(321), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1544] = 1,
    ACTIONS(323), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1553] = 5,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      sym__simple_identifier,
    ACTIONS(329), 1,
      sym_comment,
    STATE(35), 1,
      sym_identifier,
    STATE(92), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1570] = 5,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_scope_declaration,
    STATE(76), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1587] = 5,
    ACTIONS(333), 1,
      sym__simple_identifier,
    ACTIONS(336), 1,
      sym__newline,
    ACTIONS(338), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(82), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1604] = 1,
    ACTIONS(340), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1613] = 1,
    ACTIONS(342), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1622] = 1,
    ACTIONS(344), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1631] = 1,
    ACTIONS(346), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1640] = 1,
    ACTIONS(348), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1649] = 1,
    ACTIONS(350), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1658] = 1,
    ACTIONS(352), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1667] = 1,
    ACTIONS(354), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1676] = 2,
    ACTIONS(358), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(356), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_comment,
  [1687] = 5,
    ACTIONS(327), 1,
      sym__simple_identifier,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      sym_comment,
    STATE(35), 1,
      sym_identifier,
    STATE(96), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1704] = 1,
    ACTIONS(364), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1713] = 1,
    ACTIONS(366), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1722] = 1,
    ACTIONS(368), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1731] = 5,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    ACTIONS(372), 1,
      sym__simple_identifier,
    ACTIONS(375), 1,
      sym_comment,
    STATE(35), 1,
      sym_identifier,
    STATE(96), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1748] = 1,
    ACTIONS(378), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1757] = 1,
    ACTIONS(380), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1766] = 1,
    ACTIONS(382), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1775] = 1,
    ACTIONS(384), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1784] = 2,
    ACTIONS(166), 1,
      sym__newline,
    ACTIONS(168), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [1794] = 3,
    ACTIONS(388), 1,
      anon_sym_DOT,
    ACTIONS(390), 1,
      sym__newline,
    ACTIONS(386), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1806] = 4,
    ACTIONS(219), 1,
      sym__simple_identifier,
    ACTIONS(392), 1,
      sym_wildcard_identifier,
    STATE(102), 1,
      sym_identifier,
    STATE(45), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1820] = 2,
    STATE(137), 1,
      sym_autolayout_value,
    ACTIONS(394), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [1830] = 3,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      aux_sym_workspace_declaration_token1,
    STATE(105), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1841] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1852] = 2,
    ACTIONS(403), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(405), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1861] = 2,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(409), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1870] = 2,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(413), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1879] = 3,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(419), 1,
      sym__newline,
    ACTIONS(415), 2,
      sym__simple_identifier,
      sym_comment,
  [1890] = 2,
    ACTIONS(421), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(423), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1899] = 4,
    ACTIONS(327), 1,
      sym__simple_identifier,
    STATE(144), 1,
      sym_identifier,
    STATE(147), 1,
      sym_relation_identifier,
    STATE(151), 1,
      sym_dotted_identifier,
  [1912] = 3,
    ACTIONS(425), 1,
      sym__simple_identifier,
    STATE(110), 1,
      sym_identifier,
    STATE(71), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1923] = 4,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(429), 1,
      anon_sym_EQ,
    ACTIONS(431), 1,
      anon_sym_DASH_GT,
    STATE(43), 1,
      sym__assignment_operator,
  [1936] = 2,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(433), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1945] = 2,
    ACTIONS(378), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(435), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1954] = 2,
    ACTIONS(439), 1,
      sym__newline,
    ACTIONS(437), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1963] = 2,
    ACTIONS(166), 1,
      sym__newline,
    ACTIONS(168), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [1972] = 2,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(443), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1981] = 1,
    ACTIONS(445), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
  [1987] = 2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(42), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1995] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_string,
  [2005] = 2,
    STATE(65), 1,
      sym_identifiers_value,
    ACTIONS(449), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [2013] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_string,
  [2023] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_string,
  [2033] = 1,
    ACTIONS(455), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
  [2039] = 3,
    ACTIONS(457), 1,
      sym_number,
    ACTIONS(459), 1,
      sym__newline,
    ACTIONS(461), 1,
      sym_comment,
  [2049] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_string,
  [2059] = 3,
    ACTIONS(99), 1,
      sym__simple_identifier,
    ACTIONS(465), 1,
      sym_wildcard_identifier,
    STATE(136), 1,
      sym_identifier,
  [2069] = 1,
    ACTIONS(467), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2075] = 1,
    ACTIONS(469), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2081] = 1,
    ACTIONS(471), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2087] = 1,
    ACTIONS(473), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2093] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_string,
  [2103] = 2,
    ACTIONS(479), 1,
      sym__newline,
    ACTIONS(477), 2,
      sym_number,
      sym_comment,
  [2111] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_string,
  [2121] = 3,
    ACTIONS(483), 1,
      sym_number,
    ACTIONS(485), 1,
      sym__newline,
    ACTIONS(487), 1,
      sym_comment,
  [2131] = 2,
    ACTIONS(439), 1,
      sym__newline,
    ACTIONS(437), 2,
      sym__simple_identifier,
      sym_comment,
  [2139] = 1,
    ACTIONS(489), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
  [2145] = 3,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_string,
  [2155] = 2,
    ACTIONS(493), 1,
      anon_sym_EQ,
    STATE(121), 1,
      sym__assignment_operator,
  [2162] = 2,
    ACTIONS(495), 1,
      sym__newline,
    ACTIONS(497), 1,
      sym_comment,
  [2169] = 2,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_string,
  [2176] = 2,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
  [2183] = 2,
    ACTIONS(327), 1,
      sym__simple_identifier,
    STATE(134), 1,
      sym_identifier,
  [2190] = 2,
    ACTIONS(499), 1,
      sym__newline,
    ACTIONS(501), 1,
      sym_comment,
  [2197] = 2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_string,
  [2204] = 2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_string,
  [2211] = 1,
    ACTIONS(439), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [2216] = 1,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [2221] = 1,
    ACTIONS(431), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [2226] = 2,
    ACTIONS(505), 1,
      sym__newline,
    ACTIONS(507), 1,
      sym_comment,
  [2233] = 2,
    ACTIONS(327), 1,
      sym__simple_identifier,
    STATE(149), 1,
      sym_identifier,
  [2240] = 1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [2245] = 1,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [2250] = 2,
    ACTIONS(513), 1,
      anon_sym_DASH_GT,
    STATE(112), 1,
      sym__relation_operator,
  [2257] = 2,
    ACTIONS(327), 1,
      sym__simple_identifier,
    STATE(125), 1,
      sym_identifier,
  [2264] = 2,
    ACTIONS(515), 1,
      sym__newline,
    ACTIONS(517), 1,
      sym_comment,
  [2271] = 2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string,
  [2278] = 2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_string,
  [2285] = 2,
    ACTIONS(356), 1,
      sym__newline,
    ACTIONS(358), 1,
      sym_comment,
  [2292] = 2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_string,
  [2299] = 2,
    ACTIONS(174), 1,
      sym__simple_identifier,
    STATE(117), 1,
      sym_identifier,
  [2306] = 2,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym__model_children,
  [2313] = 2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_string,
  [2320] = 2,
    ACTIONS(425), 1,
      sym__simple_identifier,
    STATE(138), 1,
      sym_identifier,
  [2327] = 2,
    ACTIONS(521), 1,
      sym__newline,
    ACTIONS(523), 1,
      sym_comment,
  [2334] = 1,
    ACTIONS(525), 1,
      sym__newline,
  [2338] = 1,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
  [2342] = 1,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
  [2346] = 1,
    ACTIONS(531), 1,
      sym__newline,
  [2350] = 1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
  [2354] = 1,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
  [2358] = 1,
    ACTIONS(537), 1,
      sym__newline,
  [2362] = 1,
    ACTIONS(539), 1,
      sym__string_content,
  [2366] = 1,
    ACTIONS(541), 1,
      sym__newline,
  [2370] = 1,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
  [2374] = 1,
    ACTIONS(545), 1,
      sym__simple_identifier,
  [2378] = 1,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
  [2382] = 1,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
  [2386] = 1,
    ACTIONS(551), 1,
      sym__newline,
  [2390] = 1,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
  [2394] = 1,
    ACTIONS(555), 1,
      sym__newline,
  [2398] = 1,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
  [2402] = 1,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
  [2406] = 1,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
  [2410] = 1,
    ACTIONS(563), 1,
      sym__newline,
  [2414] = 1,
    ACTIONS(565), 1,
      sym__newline,
  [2418] = 1,
    ACTIONS(567), 1,
      sym__string_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 462,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 627,
  [SMALL_STATE(22)] = 656,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 714,
  [SMALL_STATE(25)] = 743,
  [SMALL_STATE(26)] = 772,
  [SMALL_STATE(27)] = 801,
  [SMALL_STATE(28)] = 830,
  [SMALL_STATE(29)] = 859,
  [SMALL_STATE(30)] = 888,
  [SMALL_STATE(31)] = 917,
  [SMALL_STATE(32)] = 946,
  [SMALL_STATE(33)] = 975,
  [SMALL_STATE(34)] = 1004,
  [SMALL_STATE(35)] = 1018,
  [SMALL_STATE(36)] = 1039,
  [SMALL_STATE(37)] = 1049,
  [SMALL_STATE(38)] = 1069,
  [SMALL_STATE(39)] = 1079,
  [SMALL_STATE(40)] = 1089,
  [SMALL_STATE(41)] = 1099,
  [SMALL_STATE(42)] = 1109,
  [SMALL_STATE(43)] = 1125,
  [SMALL_STATE(44)] = 1141,
  [SMALL_STATE(45)] = 1157,
  [SMALL_STATE(46)] = 1177,
  [SMALL_STATE(47)] = 1187,
  [SMALL_STATE(48)] = 1197,
  [SMALL_STATE(49)] = 1207,
  [SMALL_STATE(50)] = 1217,
  [SMALL_STATE(51)] = 1227,
  [SMALL_STATE(52)] = 1237,
  [SMALL_STATE(53)] = 1247,
  [SMALL_STATE(54)] = 1257,
  [SMALL_STATE(55)] = 1267,
  [SMALL_STATE(56)] = 1277,
  [SMALL_STATE(57)] = 1286,
  [SMALL_STATE(58)] = 1303,
  [SMALL_STATE(59)] = 1312,
  [SMALL_STATE(60)] = 1321,
  [SMALL_STATE(61)] = 1338,
  [SMALL_STATE(62)] = 1353,
  [SMALL_STATE(63)] = 1368,
  [SMALL_STATE(64)] = 1377,
  [SMALL_STATE(65)] = 1386,
  [SMALL_STATE(66)] = 1395,
  [SMALL_STATE(67)] = 1404,
  [SMALL_STATE(68)] = 1413,
  [SMALL_STATE(69)] = 1430,
  [SMALL_STATE(70)] = 1439,
  [SMALL_STATE(71)] = 1456,
  [SMALL_STATE(72)] = 1473,
  [SMALL_STATE(73)] = 1482,
  [SMALL_STATE(74)] = 1491,
  [SMALL_STATE(75)] = 1500,
  [SMALL_STATE(76)] = 1509,
  [SMALL_STATE(77)] = 1526,
  [SMALL_STATE(78)] = 1535,
  [SMALL_STATE(79)] = 1544,
  [SMALL_STATE(80)] = 1553,
  [SMALL_STATE(81)] = 1570,
  [SMALL_STATE(82)] = 1587,
  [SMALL_STATE(83)] = 1604,
  [SMALL_STATE(84)] = 1613,
  [SMALL_STATE(85)] = 1622,
  [SMALL_STATE(86)] = 1631,
  [SMALL_STATE(87)] = 1640,
  [SMALL_STATE(88)] = 1649,
  [SMALL_STATE(89)] = 1658,
  [SMALL_STATE(90)] = 1667,
  [SMALL_STATE(91)] = 1676,
  [SMALL_STATE(92)] = 1687,
  [SMALL_STATE(93)] = 1704,
  [SMALL_STATE(94)] = 1713,
  [SMALL_STATE(95)] = 1722,
  [SMALL_STATE(96)] = 1731,
  [SMALL_STATE(97)] = 1748,
  [SMALL_STATE(98)] = 1757,
  [SMALL_STATE(99)] = 1766,
  [SMALL_STATE(100)] = 1775,
  [SMALL_STATE(101)] = 1784,
  [SMALL_STATE(102)] = 1794,
  [SMALL_STATE(103)] = 1806,
  [SMALL_STATE(104)] = 1820,
  [SMALL_STATE(105)] = 1830,
  [SMALL_STATE(106)] = 1841,
  [SMALL_STATE(107)] = 1852,
  [SMALL_STATE(108)] = 1861,
  [SMALL_STATE(109)] = 1870,
  [SMALL_STATE(110)] = 1879,
  [SMALL_STATE(111)] = 1890,
  [SMALL_STATE(112)] = 1899,
  [SMALL_STATE(113)] = 1912,
  [SMALL_STATE(114)] = 1923,
  [SMALL_STATE(115)] = 1936,
  [SMALL_STATE(116)] = 1945,
  [SMALL_STATE(117)] = 1954,
  [SMALL_STATE(118)] = 1963,
  [SMALL_STATE(119)] = 1972,
  [SMALL_STATE(120)] = 1981,
  [SMALL_STATE(121)] = 1987,
  [SMALL_STATE(122)] = 1995,
  [SMALL_STATE(123)] = 2005,
  [SMALL_STATE(124)] = 2013,
  [SMALL_STATE(125)] = 2023,
  [SMALL_STATE(126)] = 2033,
  [SMALL_STATE(127)] = 2039,
  [SMALL_STATE(128)] = 2049,
  [SMALL_STATE(129)] = 2059,
  [SMALL_STATE(130)] = 2069,
  [SMALL_STATE(131)] = 2075,
  [SMALL_STATE(132)] = 2081,
  [SMALL_STATE(133)] = 2087,
  [SMALL_STATE(134)] = 2093,
  [SMALL_STATE(135)] = 2103,
  [SMALL_STATE(136)] = 2111,
  [SMALL_STATE(137)] = 2121,
  [SMALL_STATE(138)] = 2131,
  [SMALL_STATE(139)] = 2139,
  [SMALL_STATE(140)] = 2145,
  [SMALL_STATE(141)] = 2155,
  [SMALL_STATE(142)] = 2162,
  [SMALL_STATE(143)] = 2169,
  [SMALL_STATE(144)] = 2176,
  [SMALL_STATE(145)] = 2183,
  [SMALL_STATE(146)] = 2190,
  [SMALL_STATE(147)] = 2197,
  [SMALL_STATE(148)] = 2204,
  [SMALL_STATE(149)] = 2211,
  [SMALL_STATE(150)] = 2216,
  [SMALL_STATE(151)] = 2221,
  [SMALL_STATE(152)] = 2226,
  [SMALL_STATE(153)] = 2233,
  [SMALL_STATE(154)] = 2240,
  [SMALL_STATE(155)] = 2245,
  [SMALL_STATE(156)] = 2250,
  [SMALL_STATE(157)] = 2257,
  [SMALL_STATE(158)] = 2264,
  [SMALL_STATE(159)] = 2271,
  [SMALL_STATE(160)] = 2278,
  [SMALL_STATE(161)] = 2285,
  [SMALL_STATE(162)] = 2292,
  [SMALL_STATE(163)] = 2299,
  [SMALL_STATE(164)] = 2306,
  [SMALL_STATE(165)] = 2313,
  [SMALL_STATE(166)] = 2320,
  [SMALL_STATE(167)] = 2327,
  [SMALL_STATE(168)] = 2334,
  [SMALL_STATE(169)] = 2338,
  [SMALL_STATE(170)] = 2342,
  [SMALL_STATE(171)] = 2346,
  [SMALL_STATE(172)] = 2350,
  [SMALL_STATE(173)] = 2354,
  [SMALL_STATE(174)] = 2358,
  [SMALL_STATE(175)] = 2362,
  [SMALL_STATE(176)] = 2366,
  [SMALL_STATE(177)] = 2370,
  [SMALL_STATE(178)] = 2374,
  [SMALL_STATE(179)] = 2378,
  [SMALL_STATE(180)] = 2382,
  [SMALL_STATE(181)] = 2386,
  [SMALL_STATE(182)] = 2390,
  [SMALL_STATE(183)] = 2394,
  [SMALL_STATE(184)] = 2398,
  [SMALL_STATE(185)] = 2402,
  [SMALL_STATE(186)] = 2406,
  [SMALL_STATE(187)] = 2410,
  [SMALL_STATE(188)] = 2414,
  [SMALL_STATE(189)] = 2418,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 13),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 14),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 13),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 14),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 7),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 8),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 7),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 9),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 8),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 10),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 8),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 10),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 9),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 11),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 10),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 11),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 8),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 12),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 12),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 15),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 15),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [535] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_structurizr(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
