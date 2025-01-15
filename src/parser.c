#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  aux_sym_identifiers_statement_token1 = 15,
  anon_sym_hierarchical = 16,
  anon_sym_flat = 17,
  aux_sym_model_declaration_token1 = 18,
  aux_sym_software_system_declaration_token1 = 19,
  aux_sym_container_declaration_token1 = 20,
  aux_sym_person_declaration_token1 = 21,
  anon_sym_tags = 22,
  aux_sym_configuration_declaration_token1 = 23,
  aux_sym_scope_declaration_token1 = 24,
  aux_sym_views_declaration_token1 = 25,
  aux_sym_system_context_view_declaration_token1 = 26,
  aux_sym_include_statement_token1 = 27,
  aux_sym_exclude_statement_token1 = 28,
  aux_sym_autolayout_statement_token1 = 29,
  aux_sym_autolayout_value_token1 = 30,
  aux_sym_autolayout_value_token2 = 31,
  aux_sym_autolayout_value_token3 = 32,
  aux_sym_autolayout_value_token4 = 33,
  aux_sym_default_statement_token1 = 34,
  aux_sym_description_statement_token1 = 35,
  aux_sym_dynamic_view_declaration_token1 = 36,
  aux_sym_styles_declaration_token1 = 37,
  aux_sym_element_declaration_token1 = 38,
  sym_dsl = 39,
  sym_workspace_declaration = 40,
  sym_string = 41,
  sym_dotted_identifier = 42,
  sym_identifier = 43,
  sym_relation_identifier = 44,
  sym__assignment_operator = 45,
  sym__relation_operator = 46,
  sym_color = 47,
  sym_workspace_item_statement = 48,
  sym_identifiers_statement = 49,
  sym_identifiers_value = 50,
  sym_model_declaration = 51,
  sym__model_children = 52,
  sym__model_item_statement = 53,
  sym_variable_declaration = 54,
  sym_relation_statement = 55,
  sym__item_declaration = 56,
  sym_software_system_declaration = 57,
  sym_container_declaration = 58,
  sym_person_declaration = 59,
  sym_tags_declaration = 60,
  sym_configuration_declaration = 61,
  sym_configuration_item_statement = 62,
  sym_scope_declaration = 63,
  sym_views_declaration = 64,
  sym_views_item_statement = 65,
  sym_system_context_view_declaration = 66,
  sym_view_property_statement = 67,
  sym_include_statement = 68,
  sym_exclude_statement = 69,
  sym_autolayout_statement = 70,
  sym_autolayout_value = 71,
  sym_default_statement = 72,
  sym_description_statement = 73,
  sym_container_view_declaration = 74,
  sym_dynamic_view_declaration = 75,
  sym_styles_declaration = 76,
  sym_style_item_statement = 77,
  sym_element_declaration = 78,
  sym_element_property = 79,
  aux_sym_dsl_repeat1 = 80,
  aux_sym_workspace_declaration_repeat1 = 81,
  aux_sym__model_children_repeat1 = 82,
  aux_sym_tags_declaration_repeat1 = 83,
  aux_sym_configuration_declaration_repeat1 = 84,
  aux_sym_views_declaration_repeat1 = 85,
  aux_sym_system_context_view_declaration_repeat1 = 86,
  aux_sym_include_statement_repeat1 = 87,
  aux_sym_exclude_statement_repeat1 = 88,
  aux_sym_styles_declaration_repeat1 = 89,
  aux_sym_element_declaration_repeat1 = 90,
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
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
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
  [115] = 115,
  [116] = 93,
  [117] = 117,
  [118] = 69,
  [119] = 119,
  [120] = 34,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 119,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
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
  [149] = 139,
  [150] = 150,
  [151] = 139,
  [152] = 119,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 51,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 162,
  [171] = 171,
  [172] = 172,
  [173] = 166,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '!', 66,
        '"', 164,
        '#', 158,
        '*', 172,
        '-', 6,
        '.', 171,
        '=', 174,
        'T', 31,
        'f', 18,
        'h', 16,
        't', 7,
        '{', 161,
        '}', 162,
        'A', 141,
        'a', 141,
        'B', 128,
        'b', 128,
        'C', 100,
        'c', 100,
        'D', 43,
        'd', 43,
        'E', 79,
        'e', 79,
        'I', 98,
        'i', 98,
        'L', 112,
        'l', 112,
        'M', 108,
        'm', 108,
        'P', 51,
        'p', 51,
        'R', 77,
        'r', 77,
        'S', 34,
        's', 34,
        'V', 69,
        'v', 69,
        'W', 101,
        'w', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '.') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '.') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        'C', 99,
        'c', 99,
        'O', 63,
        'o', 63,
        'T', 150,
        't', 150,
        'Y', 125,
        'y', 125,
      );
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 61:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 64:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 86:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 87:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 109:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 111:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 147:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 148:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 149:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 152:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 153:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 153},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 153},
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
    [sym_dsl] = STATE(168),
    [sym_workspace_declaration] = STATE(102),
    [aux_sym_dsl_repeat1] = STATE(102),
    [aux_sym_workspace_declaration_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [30] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [60] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [90] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [120] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [150] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [180] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [210] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [240] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [270] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [300] = 8,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      aux_sym_include_statement_token1,
    ACTIONS(40), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(43), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(46), 1,
      aux_sym_default_statement_token1,
    ACTIONS(49), 1,
      aux_sym_description_statement_token1,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [330] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [360] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [390] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [420] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [450] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [480] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(3), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [510] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [540] = 8,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(9), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(11), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(13), 1,
      aux_sym_default_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(44), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [570] = 7,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(72), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(74), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(76), 1,
      aux_sym_views_declaration_token1,
    STATE(31), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(88), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [596] = 7,
    ACTIONS(70), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(72), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(74), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(76), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(88), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [622] = 7,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      sym__simple_identifier,
    ACTIONS(84), 1,
      anon_sym_tags,
    STATE(97), 1,
      sym_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(148), 1,
      sym_relation_identifier,
    STATE(29), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [648] = 7,
    ACTIONS(82), 1,
      sym__simple_identifier,
    ACTIONS(84), 1,
      anon_sym_tags,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(148), 1,
      sym_relation_identifier,
    STATE(29), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [674] = 7,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(92), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(94), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(96), 1,
      aux_sym_styles_declaration_token1,
    STATE(26), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(62), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [700] = 7,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(103), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(106), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(109), 1,
      aux_sym_styles_declaration_token1,
    STATE(26), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(62), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [726] = 7,
    ACTIONS(90), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(92), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(94), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(96), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(62), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [752] = 7,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(119), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(122), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(125), 1,
      aux_sym_views_declaration_token1,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(88), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [778] = 7,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      sym__simple_identifier,
    ACTIONS(133), 1,
      anon_sym_tags,
    STATE(97), 1,
      sym_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(148), 1,
      sym_relation_identifier,
    STATE(29), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [804] = 7,
    ACTIONS(82), 1,
      sym__simple_identifier,
    ACTIONS(84), 1,
      anon_sym_tags,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(148), 1,
      sym_relation_identifier,
    STATE(23), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [830] = 7,
    ACTIONS(70), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(72), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(74), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(76), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(88), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [856] = 7,
    ACTIONS(70), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(72), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(74), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(76), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(88), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [882] = 7,
    ACTIONS(82), 1,
      sym__simple_identifier,
    ACTIONS(84), 1,
      anon_sym_tags,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(148), 1,
      sym_relation_identifier,
    STATE(24), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [908] = 2,
    ACTIONS(144), 1,
      aux_sym_color_token1,
    ACTIONS(142), 8,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [922] = 6,
    ACTIONS(146), 1,
      sym_number,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym__simple_identifier,
    ACTIONS(152), 1,
      aux_sym_color_token1,
    ACTIONS(154), 1,
      aux_sym_color_token2,
    STATE(155), 3,
      sym_string,
      sym_identifier,
      sym_color,
  [943] = 4,
    ACTIONS(156), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(160), 1,
      aux_sym_person_declaration_token1,
    STATE(106), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [959] = 4,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(40), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [974] = 1,
    ACTIONS(168), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [983] = 5,
    ACTIONS(170), 1,
      sym__simple_identifier,
    ACTIONS(172), 1,
      sym_wildcard_identifier,
    ACTIONS(174), 1,
      sym__newline,
    STATE(100), 1,
      sym_identifier,
    STATE(45), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1000] = 4,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(40), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1015] = 1,
    ACTIONS(183), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1024] = 1,
    ACTIONS(185), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1033] = 1,
    ACTIONS(187), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1042] = 1,
    ACTIONS(189), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1051] = 5,
    ACTIONS(191), 1,
      sym__simple_identifier,
    ACTIONS(194), 1,
      sym_wildcard_identifier,
    ACTIONS(197), 1,
      sym__newline,
    STATE(100), 1,
      sym_identifier,
    STATE(45), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1068] = 1,
    ACTIONS(199), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1077] = 1,
    ACTIONS(201), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1086] = 1,
    ACTIONS(203), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1095] = 4,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym__simple_identifier,
    STATE(35), 1,
      sym_identifier,
    STATE(92), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1109] = 4,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      aux_sym_element_declaration_token1,
    STATE(146), 1,
      sym_element_declaration,
    STATE(64), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1123] = 2,
    ACTIONS(215), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(213), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1133] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym__model_children,
    ACTIONS(221), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1147] = 1,
    ACTIONS(223), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1155] = 4,
    ACTIONS(170), 1,
      sym__simple_identifier,
    ACTIONS(225), 1,
      sym_wildcard_identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(39), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1169] = 2,
    STATE(144), 1,
      sym_autolayout_value,
    ACTIONS(227), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [1179] = 1,
    ACTIONS(229), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1187] = 1,
    ACTIONS(231), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1195] = 1,
    ACTIONS(233), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1203] = 4,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      aux_sym_scope_declaration_token1,
    STATE(153), 1,
      sym_scope_declaration,
    STATE(76), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1217] = 1,
    ACTIONS(239), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1225] = 1,
    ACTIONS(241), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1233] = 1,
    ACTIONS(243), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1241] = 1,
    ACTIONS(245), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1249] = 4,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 1,
      aux_sym_element_declaration_token1,
    STATE(146), 1,
      sym_element_declaration,
    STATE(64), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1263] = 1,
    ACTIONS(252), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1271] = 4,
    ACTIONS(254), 1,
      sym__simple_identifier,
    ACTIONS(256), 1,
      sym__newline,
    STATE(109), 1,
      sym_identifier,
    STATE(79), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1285] = 1,
    ACTIONS(258), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1293] = 1,
    ACTIONS(260), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1301] = 1,
    ACTIONS(262), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1309] = 1,
    ACTIONS(264), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1317] = 1,
    ACTIONS(266), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1325] = 1,
    ACTIONS(268), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1333] = 1,
    ACTIONS(270), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1341] = 1,
    ACTIONS(272), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1349] = 1,
    ACTIONS(274), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1357] = 4,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      aux_sym_scope_declaration_token1,
    STATE(153), 1,
      sym_scope_declaration,
    STATE(76), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1371] = 4,
    ACTIONS(207), 1,
      sym__simple_identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_identifier,
    STATE(49), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1385] = 4,
    ACTIONS(211), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      sym_element_declaration,
    STATE(50), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1399] = 4,
    ACTIONS(285), 1,
      sym__simple_identifier,
    ACTIONS(288), 1,
      sym__newline,
    STATE(109), 1,
      sym_identifier,
    STATE(79), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1413] = 1,
    ACTIONS(290), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1421] = 4,
    ACTIONS(237), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_scope_declaration,
    STATE(59), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1435] = 1,
    ACTIONS(294), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1443] = 1,
    ACTIONS(296), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1451] = 1,
    ACTIONS(298), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1459] = 1,
    ACTIONS(300), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1467] = 1,
    ACTIONS(302), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1475] = 1,
    ACTIONS(304), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1483] = 1,
    ACTIONS(306), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1491] = 1,
    ACTIONS(308), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1499] = 1,
    ACTIONS(310), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1507] = 1,
    ACTIONS(312), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1515] = 4,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      sym__simple_identifier,
    STATE(35), 1,
      sym_identifier,
    STATE(92), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1529] = 1,
    ACTIONS(319), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1537] = 1,
    ACTIONS(321), 5,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1545] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym__model_children,
    ACTIONS(325), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1559] = 3,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      aux_sym_workspace_declaration_token1,
    STATE(96), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1570] = 4,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_EQ,
    ACTIONS(336), 1,
      anon_sym_DASH_GT,
    STATE(36), 1,
      sym__assignment_operator,
  [1583] = 4,
    ACTIONS(207), 1,
      sym__simple_identifier,
    STATE(133), 1,
      sym_identifier,
    STATE(134), 1,
      sym_relation_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
  [1596] = 3,
    ACTIONS(338), 1,
      sym__simple_identifier,
    STATE(109), 1,
      sym_identifier,
    STATE(66), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1607] = 3,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      sym__newline,
    ACTIONS(340), 2,
      sym__simple_identifier,
      sym_wildcard_identifier,
  [1618] = 2,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(144), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
  [1627] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    STATE(96), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1638] = 2,
    STATE(65), 1,
      sym_identifiers_value,
    ACTIONS(348), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [1646] = 2,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1654] = 2,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1662] = 2,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1670] = 2,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1678] = 2,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1686] = 3,
    ACTIONS(370), 1,
      sym__simple_identifier,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      sym__newline,
  [1696] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_string,
  [1706] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_string,
  [1716] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_string,
  [1726] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(37), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1734] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_string,
  [1744] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_string,
  [1754] = 2,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1762] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_string,
  [1772] = 2,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1780] = 2,
    ACTIONS(394), 1,
      sym__newline,
    ACTIONS(392), 2,
      sym__simple_identifier,
      sym_wildcard_identifier,
  [1788] = 2,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(144), 2,
      sym__simple_identifier,
      anon_sym_DOT,
  [1796] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_string,
  [1806] = 3,
    ACTIONS(82), 1,
      sym__simple_identifier,
    ACTIONS(398), 1,
      sym_wildcard_identifier,
    STATE(117), 1,
      sym_identifier,
  [1816] = 2,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym__model_children,
  [1823] = 1,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1828] = 2,
    ACTIONS(207), 1,
      sym__simple_identifier,
    STATE(112), 1,
      sym_identifier,
  [1835] = 2,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string,
  [1842] = 2,
    ACTIONS(207), 1,
      sym__simple_identifier,
    STATE(114), 1,
      sym_identifier,
  [1849] = 1,
    ACTIONS(394), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1854] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_string,
  [1861] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_string,
  [1868] = 2,
    ACTIONS(404), 1,
      sym_number,
    ACTIONS(406), 1,
      sym__newline,
  [1875] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_string,
  [1882] = 2,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
  [1889] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_string,
  [1896] = 1,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1901] = 1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1906] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_string,
  [1913] = 1,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1918] = 2,
    ACTIONS(207), 1,
      sym__simple_identifier,
    STATE(128), 1,
      sym_identifier,
  [1925] = 2,
    ACTIONS(414), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym__assignment_operator,
  [1932] = 1,
    ACTIONS(336), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1937] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_string,
  [1944] = 2,
    ACTIONS(416), 1,
      sym_number,
    ACTIONS(418), 1,
      sym__newline,
  [1951] = 2,
    ACTIONS(420), 1,
      sym_number,
    ACTIONS(422), 1,
      sym__newline,
  [1958] = 1,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1963] = 1,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1968] = 1,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [1973] = 2,
    ACTIONS(430), 1,
      anon_sym_DASH_GT,
    STATE(98), 1,
      sym__relation_operator,
  [1980] = 2,
    ACTIONS(150), 1,
      sym__simple_identifier,
    STATE(119), 1,
      sym_identifier,
  [1987] = 1,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1992] = 2,
    ACTIONS(338), 1,
      sym__simple_identifier,
    STATE(152), 1,
      sym_identifier,
  [1999] = 2,
    ACTIONS(392), 1,
      sym__simple_identifier,
    ACTIONS(394), 1,
      sym__newline,
  [2006] = 1,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [2011] = 1,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
  [2015] = 1,
    ACTIONS(438), 1,
      sym__newline,
  [2019] = 1,
    ACTIONS(440), 1,
      sym__newline,
  [2023] = 1,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
  [2027] = 1,
    ACTIONS(444), 1,
      sym__newline,
  [2031] = 1,
    ACTIONS(446), 1,
      sym__newline,
  [2035] = 1,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
  [2039] = 1,
    ACTIONS(213), 1,
      sym__newline,
  [2043] = 1,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
  [2047] = 1,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
  [2051] = 1,
    ACTIONS(454), 1,
      sym__newline,
  [2055] = 1,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
  [2059] = 1,
    ACTIONS(458), 1,
      sym__string_content,
  [2063] = 1,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
  [2067] = 1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
  [2071] = 1,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
  [2075] = 1,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
  [2079] = 1,
    ACTIONS(468), 1,
      sym__simple_identifier,
  [2083] = 1,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [2087] = 1,
    ACTIONS(472), 1,
      sym__string_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 390,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 450,
  [SMALL_STATE(18)] = 480,
  [SMALL_STATE(19)] = 510,
  [SMALL_STATE(20)] = 540,
  [SMALL_STATE(21)] = 570,
  [SMALL_STATE(22)] = 596,
  [SMALL_STATE(23)] = 622,
  [SMALL_STATE(24)] = 648,
  [SMALL_STATE(25)] = 674,
  [SMALL_STATE(26)] = 700,
  [SMALL_STATE(27)] = 726,
  [SMALL_STATE(28)] = 752,
  [SMALL_STATE(29)] = 778,
  [SMALL_STATE(30)] = 804,
  [SMALL_STATE(31)] = 830,
  [SMALL_STATE(32)] = 856,
  [SMALL_STATE(33)] = 882,
  [SMALL_STATE(34)] = 908,
  [SMALL_STATE(35)] = 922,
  [SMALL_STATE(36)] = 943,
  [SMALL_STATE(37)] = 959,
  [SMALL_STATE(38)] = 974,
  [SMALL_STATE(39)] = 983,
  [SMALL_STATE(40)] = 1000,
  [SMALL_STATE(41)] = 1015,
  [SMALL_STATE(42)] = 1024,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1042,
  [SMALL_STATE(45)] = 1051,
  [SMALL_STATE(46)] = 1068,
  [SMALL_STATE(47)] = 1077,
  [SMALL_STATE(48)] = 1086,
  [SMALL_STATE(49)] = 1095,
  [SMALL_STATE(50)] = 1109,
  [SMALL_STATE(51)] = 1123,
  [SMALL_STATE(52)] = 1133,
  [SMALL_STATE(53)] = 1147,
  [SMALL_STATE(54)] = 1155,
  [SMALL_STATE(55)] = 1169,
  [SMALL_STATE(56)] = 1179,
  [SMALL_STATE(57)] = 1187,
  [SMALL_STATE(58)] = 1195,
  [SMALL_STATE(59)] = 1203,
  [SMALL_STATE(60)] = 1217,
  [SMALL_STATE(61)] = 1225,
  [SMALL_STATE(62)] = 1233,
  [SMALL_STATE(63)] = 1241,
  [SMALL_STATE(64)] = 1249,
  [SMALL_STATE(65)] = 1263,
  [SMALL_STATE(66)] = 1271,
  [SMALL_STATE(67)] = 1285,
  [SMALL_STATE(68)] = 1293,
  [SMALL_STATE(69)] = 1301,
  [SMALL_STATE(70)] = 1309,
  [SMALL_STATE(71)] = 1317,
  [SMALL_STATE(72)] = 1325,
  [SMALL_STATE(73)] = 1333,
  [SMALL_STATE(74)] = 1341,
  [SMALL_STATE(75)] = 1349,
  [SMALL_STATE(76)] = 1357,
  [SMALL_STATE(77)] = 1371,
  [SMALL_STATE(78)] = 1385,
  [SMALL_STATE(79)] = 1399,
  [SMALL_STATE(80)] = 1413,
  [SMALL_STATE(81)] = 1421,
  [SMALL_STATE(82)] = 1435,
  [SMALL_STATE(83)] = 1443,
  [SMALL_STATE(84)] = 1451,
  [SMALL_STATE(85)] = 1459,
  [SMALL_STATE(86)] = 1467,
  [SMALL_STATE(87)] = 1475,
  [SMALL_STATE(88)] = 1483,
  [SMALL_STATE(89)] = 1491,
  [SMALL_STATE(90)] = 1499,
  [SMALL_STATE(91)] = 1507,
  [SMALL_STATE(92)] = 1515,
  [SMALL_STATE(93)] = 1529,
  [SMALL_STATE(94)] = 1537,
  [SMALL_STATE(95)] = 1545,
  [SMALL_STATE(96)] = 1559,
  [SMALL_STATE(97)] = 1570,
  [SMALL_STATE(98)] = 1583,
  [SMALL_STATE(99)] = 1596,
  [SMALL_STATE(100)] = 1607,
  [SMALL_STATE(101)] = 1618,
  [SMALL_STATE(102)] = 1627,
  [SMALL_STATE(103)] = 1638,
  [SMALL_STATE(104)] = 1646,
  [SMALL_STATE(105)] = 1654,
  [SMALL_STATE(106)] = 1662,
  [SMALL_STATE(107)] = 1670,
  [SMALL_STATE(108)] = 1678,
  [SMALL_STATE(109)] = 1686,
  [SMALL_STATE(110)] = 1696,
  [SMALL_STATE(111)] = 1706,
  [SMALL_STATE(112)] = 1716,
  [SMALL_STATE(113)] = 1726,
  [SMALL_STATE(114)] = 1734,
  [SMALL_STATE(115)] = 1744,
  [SMALL_STATE(116)] = 1754,
  [SMALL_STATE(117)] = 1762,
  [SMALL_STATE(118)] = 1772,
  [SMALL_STATE(119)] = 1780,
  [SMALL_STATE(120)] = 1788,
  [SMALL_STATE(121)] = 1796,
  [SMALL_STATE(122)] = 1806,
  [SMALL_STATE(123)] = 1816,
  [SMALL_STATE(124)] = 1823,
  [SMALL_STATE(125)] = 1828,
  [SMALL_STATE(126)] = 1835,
  [SMALL_STATE(127)] = 1842,
  [SMALL_STATE(128)] = 1849,
  [SMALL_STATE(129)] = 1854,
  [SMALL_STATE(130)] = 1861,
  [SMALL_STATE(131)] = 1868,
  [SMALL_STATE(132)] = 1875,
  [SMALL_STATE(133)] = 1882,
  [SMALL_STATE(134)] = 1889,
  [SMALL_STATE(135)] = 1896,
  [SMALL_STATE(136)] = 1901,
  [SMALL_STATE(137)] = 1906,
  [SMALL_STATE(138)] = 1913,
  [SMALL_STATE(139)] = 1918,
  [SMALL_STATE(140)] = 1925,
  [SMALL_STATE(141)] = 1932,
  [SMALL_STATE(142)] = 1937,
  [SMALL_STATE(143)] = 1944,
  [SMALL_STATE(144)] = 1951,
  [SMALL_STATE(145)] = 1958,
  [SMALL_STATE(146)] = 1963,
  [SMALL_STATE(147)] = 1968,
  [SMALL_STATE(148)] = 1973,
  [SMALL_STATE(149)] = 1980,
  [SMALL_STATE(150)] = 1987,
  [SMALL_STATE(151)] = 1992,
  [SMALL_STATE(152)] = 1999,
  [SMALL_STATE(153)] = 2006,
  [SMALL_STATE(154)] = 2011,
  [SMALL_STATE(155)] = 2015,
  [SMALL_STATE(156)] = 2019,
  [SMALL_STATE(157)] = 2023,
  [SMALL_STATE(158)] = 2027,
  [SMALL_STATE(159)] = 2031,
  [SMALL_STATE(160)] = 2035,
  [SMALL_STATE(161)] = 2039,
  [SMALL_STATE(162)] = 2043,
  [SMALL_STATE(163)] = 2047,
  [SMALL_STATE(164)] = 2051,
  [SMALL_STATE(165)] = 2055,
  [SMALL_STATE(166)] = 2059,
  [SMALL_STATE(167)] = 2063,
  [SMALL_STATE(168)] = 2067,
  [SMALL_STATE(169)] = 2071,
  [SMALL_STATE(170)] = 2075,
  [SMALL_STATE(171)] = 2079,
  [SMALL_STATE(172)] = 2083,
  [SMALL_STATE(173)] = 2087,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 13),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 14),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 7),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 8),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 9),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 8),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 10),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 8),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 10),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 9),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 11),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 10),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 10),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 11),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 12),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 12),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 15),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [462] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
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
