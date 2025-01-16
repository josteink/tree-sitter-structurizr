#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
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
  sym_string = 5,
  sym__simple_identifier = 6,
  anon_sym_DOT = 7,
  sym_wildcard_identifier = 8,
  anon_sym_EQ = 9,
  anon_sym_DASH_GT = 10,
  sym__newline = 11,
  aux_sym_color_token1 = 12,
  aux_sym_color_token2 = 13,
  sym_comment = 14,
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
  sym_dotted_identifier = 41,
  sym_identifier = 42,
  sym_relation_identifier = 43,
  sym__assignment_operator = 44,
  sym__relation_operator = 45,
  sym_color = 46,
  sym_workspace_item_statement = 47,
  sym_identifiers_statement = 48,
  sym_identifiers_value = 49,
  sym_model_declaration = 50,
  sym__model_children = 51,
  sym__model_item_statement = 52,
  sym_variable_declaration = 53,
  sym_relation_statement = 54,
  sym__item_declaration = 55,
  sym_software_system_declaration = 56,
  sym_container_declaration = 57,
  sym_person_declaration = 58,
  sym_tags_declaration = 59,
  sym_configuration_declaration = 60,
  sym_configuration_item_statement = 61,
  sym_scope_declaration = 62,
  sym_views_declaration = 63,
  sym_views_item_statement = 64,
  sym_system_context_view_declaration = 65,
  sym_view_property_statement = 66,
  sym_include_statement = 67,
  sym_exclude_statement = 68,
  sym_autolayout_statement = 69,
  sym_autolayout_value = 70,
  sym_default_statement = 71,
  sym_description_statement = 72,
  sym_container_view_declaration = 73,
  sym_dynamic_view_declaration = 74,
  sym_styles_declaration = 75,
  sym_style_item_statement = 76,
  sym_element_declaration = 77,
  sym_element_property = 78,
  aux_sym_dsl_repeat1 = 79,
  aux_sym_workspace_declaration_repeat1 = 80,
  aux_sym__model_children_repeat1 = 81,
  aux_sym_tags_declaration_repeat1 = 82,
  aux_sym_configuration_declaration_repeat1 = 83,
  aux_sym_views_declaration_repeat1 = 84,
  aux_sym_system_context_view_declaration_repeat1 = 85,
  aux_sym_include_statement_repeat1 = 86,
  aux_sym_exclude_statement_repeat1 = 87,
  aux_sym_styles_declaration_repeat1 = 88,
  aux_sym_element_declaration_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_workspace_declaration_token1] = "workspace_declaration_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [sym_string] = "string",
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
  [sym_string] = sym_string,
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
  [sym_string] = {
    .visible = true,
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
  [31] = 24,
  [32] = 32,
  [33] = 29,
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
  [101] = 101,
  [102] = 102,
  [103] = 34,
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
  [115] = 61,
  [116] = 80,
  [117] = 117,
  [118] = 34,
  [119] = 119,
  [120] = 104,
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
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 104,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 133,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 133,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      ADVANCE_MAP(
        '!', 74,
        '"', 166,
        '#', 165,
        '*', 178,
        '-', 13,
        '.', 177,
        '=', 180,
        'T', 38,
        'f', 25,
        'h', 23,
        't', 14,
        '{', 169,
        '}', 170,
        'A', 149,
        'a', 149,
        'B', 136,
        'b', 136,
        'C', 108,
        'c', 108,
        'D', 51,
        'd', 51,
        'E', 87,
        'e', 87,
        'I', 106,
        'i', 106,
        'L', 120,
        'l', 120,
        'M', 116,
        'm', 116,
        'P', 59,
        'p', 59,
        'R', 85,
        'r', 85,
        'S', 41,
        's', 41,
        'V', 77,
        'v', 77,
        'W', 109,
        'w', 109,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(187);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 74,
        '#', 186,
        '/', 9,
        '}', 170,
        'A', 149,
        'a', 149,
        'C', 108,
        'c', 108,
        'D', 51,
        'd', 51,
        'E', 87,
        'e', 87,
        'I', 106,
        'i', 106,
        'M', 116,
        'm', 116,
        'S', 42,
        's', 42,
        'V', 77,
        'v', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '{') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '}') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(181);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        'C', 107,
        'c', 107,
        'O', 71,
        'o', 71,
        'T', 158,
        't', 158,
        'Y', 133,
        'y', 133,
      );
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 71:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 72:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 84:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 94:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 119:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 155:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 156:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 157:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 158:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
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
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 212:
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
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
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
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_workspace_declaration_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
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
    [sym_dsl] = STATE(172),
    [sym_workspace_declaration] = STATE(117),
    [aux_sym_dsl_repeat1] = STATE(117),
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
    STATE(11), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(10), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(6), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(14), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [330] = 9,
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
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [363] = 9,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_include_statement_token1,
    ACTIONS(47), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(50), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(53), 1,
      aux_sym_default_statement_token1,
    ACTIONS(56), 1,
      aux_sym_description_statement_token1,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(17), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(19), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(20), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(42), 5,
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
    ACTIONS(78), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(81), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(84), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(87), 1,
      aux_sym_views_declaration_token1,
    STATE(21), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [656] = 8,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(96), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(98), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_views_declaration_token1,
    STATE(21), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [685] = 8,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(108), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(110), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(112), 1,
      aux_sym_styles_declaration_token1,
    STATE(25), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(73), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [714] = 8,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      sym__simple_identifier,
    ACTIONS(118), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_tags,
    STATE(106), 1,
      sym_identifier,
    STATE(142), 1,
      sym_relation_identifier,
    STATE(144), 1,
      sym_dotted_identifier,
    STATE(26), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [743] = 8,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(108), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(110), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(112), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(73), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [772] = 8,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      sym__simple_identifier,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_tags,
    STATE(106), 1,
      sym_identifier,
    STATE(142), 1,
      sym_relation_identifier,
    STATE(144), 1,
      sym_dotted_identifier,
    STATE(26), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [801] = 8,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(143), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(146), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(149), 1,
      aux_sym_styles_declaration_token1,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(73), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [830] = 8,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(96), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(98), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [859] = 8,
    ACTIONS(116), 1,
      sym__simple_identifier,
    ACTIONS(120), 1,
      anon_sym_tags,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      sym_comment,
    STATE(106), 1,
      sym_identifier,
    STATE(142), 1,
      sym_relation_identifier,
    STATE(144), 1,
      sym_dotted_identifier,
    STATE(24), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [888] = 8,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(96), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(98), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [917] = 8,
    ACTIONS(116), 1,
      sym__simple_identifier,
    ACTIONS(118), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_tags,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_identifier,
    STATE(142), 1,
      sym_relation_identifier,
    STATE(144), 1,
      sym_dotted_identifier,
    STATE(26), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [946] = 8,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(96), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(98), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [975] = 8,
    ACTIONS(116), 1,
      sym__simple_identifier,
    ACTIONS(120), 1,
      anon_sym_tags,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      sym_comment,
    STATE(106), 1,
      sym_identifier,
    STATE(142), 1,
      sym_relation_identifier,
    STATE(144), 1,
      sym_dotted_identifier,
    STATE(31), 5,
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
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [1018] = 1,
    ACTIONS(170), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1028] = 6,
    ACTIONS(172), 1,
      sym__simple_identifier,
    ACTIONS(175), 1,
      sym_wildcard_identifier,
    ACTIONS(178), 1,
      sym__newline,
    ACTIONS(180), 1,
      sym_comment,
    STATE(100), 1,
      sym_identifier,
    STATE(36), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1048] = 1,
    ACTIONS(182), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1058] = 1,
    ACTIONS(184), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1068] = 1,
    ACTIONS(186), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1078] = 1,
    ACTIONS(188), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1088] = 1,
    ACTIONS(190), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1098] = 1,
    ACTIONS(192), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1108] = 4,
    ACTIONS(194), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(196), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(198), 1,
      aux_sym_person_declaration_token1,
    STATE(105), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [1124] = 5,
    ACTIONS(202), 1,
      sym__simple_identifier,
    ACTIONS(204), 1,
      aux_sym_color_token1,
    ACTIONS(206), 1,
      aux_sym_color_token2,
    ACTIONS(200), 2,
      sym_number,
      sym_string,
    STATE(140), 2,
      sym_identifier,
      sym_color,
  [1142] = 6,
    ACTIONS(208), 1,
      sym__simple_identifier,
    ACTIONS(210), 1,
      sym_wildcard_identifier,
    ACTIONS(212), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym_comment,
    STATE(100), 1,
      sym_identifier,
    STATE(36), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1162] = 1,
    ACTIONS(216), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1172] = 1,
    ACTIONS(218), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1182] = 1,
    ACTIONS(220), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1192] = 1,
    ACTIONS(222), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1202] = 1,
    ACTIONS(224), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1212] = 1,
    ACTIONS(226), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1222] = 1,
    ACTIONS(228), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1232] = 1,
    ACTIONS(230), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1242] = 1,
    ACTIONS(232), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1251] = 1,
    ACTIONS(234), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1260] = 5,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_element_declaration_token1,
    STATE(121), 1,
      sym_element_declaration,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1277] = 4,
    ACTIONS(244), 1,
      sym_string,
    STATE(57), 1,
      aux_sym_tags_declaration_repeat1,
    ACTIONS(242), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(247), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1292] = 4,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym__model_children,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(253), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1307] = 4,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym__model_children,
    ACTIONS(255), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(257), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1322] = 1,
    ACTIONS(259), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1331] = 1,
    ACTIONS(261), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1340] = 1,
    ACTIONS(263), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1349] = 1,
    ACTIONS(265), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1358] = 1,
    ACTIONS(267), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1367] = 1,
    ACTIONS(269), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1376] = 5,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_element_declaration_token1,
    STATE(121), 1,
      sym_element_declaration,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1393] = 1,
    ACTIONS(279), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1402] = 5,
    ACTIONS(281), 1,
      sym__simple_identifier,
    ACTIONS(283), 1,
      sym__newline,
    ACTIONS(285), 1,
      sym_comment,
    STATE(113), 1,
      sym_identifier,
    STATE(79), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1419] = 1,
    ACTIONS(287), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1428] = 5,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_scope_declaration_token1,
    STATE(127), 1,
      sym_scope_declaration,
    STATE(89), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1445] = 1,
    ACTIONS(295), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1454] = 1,
    ACTIONS(297), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1463] = 1,
    ACTIONS(299), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1472] = 1,
    ACTIONS(301), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1481] = 1,
    ACTIONS(303), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1490] = 1,
    ACTIONS(305), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1499] = 1,
    ACTIONS(307), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1508] = 5,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      sym__simple_identifier,
    ACTIONS(313), 1,
      sym_comment,
    STATE(44), 1,
      sym_identifier,
    STATE(90), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1525] = 5,
    ACTIONS(315), 1,
      sym__simple_identifier,
    ACTIONS(318), 1,
      sym__newline,
    ACTIONS(320), 1,
      sym_comment,
    STATE(113), 1,
      sym_identifier,
    STATE(79), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1542] = 1,
    ACTIONS(322), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1551] = 1,
    ACTIONS(324), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1560] = 1,
    ACTIONS(326), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1569] = 1,
    ACTIONS(328), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1578] = 1,
    ACTIONS(330), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1587] = 1,
    ACTIONS(332), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1596] = 1,
    ACTIONS(334), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1605] = 1,
    ACTIONS(336), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1614] = 1,
    ACTIONS(338), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1623] = 5,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_scope_declaration_token1,
    STATE(127), 1,
      sym_scope_declaration,
    STATE(89), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1640] = 5,
    ACTIONS(311), 1,
      sym__simple_identifier,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      sym_comment,
    STATE(44), 1,
      sym_identifier,
    STATE(96), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1657] = 5,
    ACTIONS(238), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_element_declaration,
    STATE(56), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1674] = 1,
    ACTIONS(354), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1683] = 1,
    ACTIONS(356), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1692] = 1,
    ACTIONS(358), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1701] = 1,
    ACTIONS(360), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1710] = 5,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      sym__simple_identifier,
    ACTIONS(367), 1,
      sym_comment,
    STATE(44), 1,
      sym_identifier,
    STATE(96), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1727] = 5,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_scope_declaration,
    STATE(70), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1744] = 4,
    ACTIONS(374), 1,
      sym_string,
    STATE(57), 1,
      aux_sym_tags_declaration_repeat1,
    ACTIONS(372), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(376), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1759] = 1,
    ACTIONS(378), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1768] = 3,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      sym__newline,
    ACTIONS(380), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1780] = 4,
    ACTIONS(208), 1,
      sym__simple_identifier,
    ACTIONS(386), 1,
      sym_wildcard_identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(45), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1794] = 2,
    STATE(125), 1,
      sym_autolayout_value,
    ACTIONS(388), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [1804] = 2,
    ACTIONS(166), 1,
      sym__newline,
    ACTIONS(168), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [1814] = 2,
    ACTIONS(392), 1,
      sym__newline,
    ACTIONS(390), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1823] = 2,
    ACTIONS(394), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(396), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1832] = 4,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      anon_sym_EQ,
    ACTIONS(402), 1,
      anon_sym_DASH_GT,
    STATE(43), 1,
      sym__assignment_operator,
  [1845] = 2,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(406), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1854] = 2,
    ACTIONS(408), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(410), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1863] = 4,
    ACTIONS(311), 1,
      sym__simple_identifier,
    STATE(144), 1,
      sym_dotted_identifier,
    STATE(158), 1,
      sym_identifier,
    STATE(170), 1,
      sym_relation_identifier,
  [1876] = 2,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(414), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1885] = 2,
    ACTIONS(416), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(418), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1894] = 3,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      aux_sym_workspace_declaration_token1,
    STATE(112), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1905] = 3,
    ACTIONS(427), 1,
      anon_sym_DOT,
    ACTIONS(429), 1,
      sym__newline,
    ACTIONS(425), 2,
      sym__simple_identifier,
      sym_comment,
  [1916] = 3,
    ACTIONS(431), 1,
      sym__simple_identifier,
    STATE(113), 1,
      sym_identifier,
    STATE(68), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1927] = 2,
    ACTIONS(261), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(433), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1936] = 2,
    ACTIONS(322), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(435), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1945] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    STATE(112), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1956] = 2,
    ACTIONS(166), 1,
      sym__newline,
    ACTIONS(168), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [1965] = 2,
    STATE(77), 1,
      sym_identifiers_value,
    ACTIONS(439), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [1973] = 2,
    ACTIONS(392), 1,
      sym__newline,
    ACTIONS(390), 2,
      sym__simple_identifier,
      sym_comment,
  [1981] = 1,
    ACTIONS(441), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
  [1987] = 1,
    ACTIONS(443), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [1993] = 3,
    ACTIONS(445), 1,
      sym_number,
    ACTIONS(447), 1,
      sym__newline,
    ACTIONS(449), 1,
      sym_comment,
  [2003] = 2,
    ACTIONS(453), 1,
      sym__newline,
    ACTIONS(451), 2,
      sym_number,
      sym_comment,
  [2011] = 3,
    ACTIONS(455), 1,
      sym_number,
    ACTIONS(457), 1,
      sym__newline,
    ACTIONS(459), 1,
      sym_comment,
  [2021] = 1,
    ACTIONS(461), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
  [2027] = 1,
    ACTIONS(463), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2033] = 1,
    ACTIONS(465), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
  [2039] = 1,
    ACTIONS(467), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2045] = 1,
    ACTIONS(469), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2051] = 3,
    ACTIONS(116), 1,
      sym__simple_identifier,
    ACTIONS(471), 1,
      sym_wildcard_identifier,
    STATE(134), 1,
      sym_identifier,
  [2061] = 2,
    ACTIONS(473), 1,
      sym__newline,
    ACTIONS(475), 1,
      sym_comment,
  [2068] = 2,
    ACTIONS(311), 1,
      sym__simple_identifier,
    STATE(147), 1,
      sym_identifier,
  [2075] = 2,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(479), 1,
      sym_string,
  [2082] = 1,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [2087] = 2,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(485), 1,
      sym_string,
  [2094] = 2,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      sym_string,
  [2101] = 2,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      sym_string,
  [2108] = 2,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym__model_children,
  [2115] = 2,
    ACTIONS(497), 1,
      sym__newline,
    ACTIONS(499), 1,
      sym_comment,
  [2122] = 2,
    ACTIONS(501), 1,
      sym__newline,
    ACTIONS(503), 1,
      sym_comment,
  [2129] = 2,
    ACTIONS(505), 1,
      anon_sym_DASH_GT,
    STATE(109), 1,
      sym__relation_operator,
  [2136] = 2,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(157), 1,
      sym__assignment_operator,
  [2143] = 1,
    ACTIONS(402), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2148] = 2,
    ACTIONS(311), 1,
      sym__simple_identifier,
    STATE(148), 1,
      sym_identifier,
  [2155] = 2,
    ACTIONS(509), 1,
      sym__newline,
    ACTIONS(511), 1,
      sym_comment,
  [2162] = 1,
    ACTIONS(392), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2167] = 2,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      sym_string,
  [2174] = 1,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [2179] = 2,
    ACTIONS(311), 1,
      sym__simple_identifier,
    STATE(152), 1,
      sym_identifier,
  [2186] = 2,
    ACTIONS(202), 1,
      sym__simple_identifier,
    STATE(104), 1,
      sym_identifier,
  [2193] = 2,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      sym_string,
  [2200] = 2,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      sym_string,
  [2207] = 1,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [2212] = 2,
    ACTIONS(431), 1,
      sym__simple_identifier,
    STATE(120), 1,
      sym_identifier,
  [2219] = 2,
    ACTIONS(529), 1,
      sym__newline,
    ACTIONS(531), 1,
      sym_comment,
  [2226] = 2,
    ACTIONS(533), 1,
      sym_string,
    STATE(98), 1,
      aux_sym_tags_declaration_repeat1,
  [2233] = 2,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      sym_string,
  [2240] = 1,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
  [2244] = 1,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
  [2248] = 1,
    ACTIONS(539), 1,
      sym_string,
  [2252] = 1,
    ACTIONS(541), 1,
      sym__newline,
  [2256] = 1,
    ACTIONS(543), 1,
      sym_string,
  [2260] = 1,
    ACTIONS(545), 1,
      sym_string,
  [2264] = 1,
    ACTIONS(547), 1,
      sym_string,
  [2268] = 1,
    ACTIONS(549), 1,
      sym__simple_identifier,
  [2272] = 1,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
  [2276] = 1,
    ACTIONS(553), 1,
      sym__newline,
  [2280] = 1,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
  [2284] = 1,
    ACTIONS(557), 1,
      sym_string,
  [2288] = 1,
    ACTIONS(559), 1,
      sym__newline,
  [2292] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
  [2296] = 1,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
  [2300] = 1,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
  [2304] = 1,
    ACTIONS(567), 1,
      sym__newline,
  [2308] = 1,
    ACTIONS(569), 1,
      sym__newline,
  [2312] = 1,
    ACTIONS(571), 1,
      sym_string,
  [2316] = 1,
    ACTIONS(573), 1,
      sym__newline,
  [2320] = 1,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
  [2324] = 1,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
  [2328] = 1,
    ACTIONS(579), 1,
      sym__newline,
  [2332] = 1,
    ACTIONS(581), 1,
      sym_string,
  [2336] = 1,
    ACTIONS(583), 1,
      sym__newline,
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
  [SMALL_STATE(36)] = 1028,
  [SMALL_STATE(37)] = 1048,
  [SMALL_STATE(38)] = 1058,
  [SMALL_STATE(39)] = 1068,
  [SMALL_STATE(40)] = 1078,
  [SMALL_STATE(41)] = 1088,
  [SMALL_STATE(42)] = 1098,
  [SMALL_STATE(43)] = 1108,
  [SMALL_STATE(44)] = 1124,
  [SMALL_STATE(45)] = 1142,
  [SMALL_STATE(46)] = 1162,
  [SMALL_STATE(47)] = 1172,
  [SMALL_STATE(48)] = 1182,
  [SMALL_STATE(49)] = 1192,
  [SMALL_STATE(50)] = 1202,
  [SMALL_STATE(51)] = 1212,
  [SMALL_STATE(52)] = 1222,
  [SMALL_STATE(53)] = 1232,
  [SMALL_STATE(54)] = 1242,
  [SMALL_STATE(55)] = 1251,
  [SMALL_STATE(56)] = 1260,
  [SMALL_STATE(57)] = 1277,
  [SMALL_STATE(58)] = 1292,
  [SMALL_STATE(59)] = 1307,
  [SMALL_STATE(60)] = 1322,
  [SMALL_STATE(61)] = 1331,
  [SMALL_STATE(62)] = 1340,
  [SMALL_STATE(63)] = 1349,
  [SMALL_STATE(64)] = 1358,
  [SMALL_STATE(65)] = 1367,
  [SMALL_STATE(66)] = 1376,
  [SMALL_STATE(67)] = 1393,
  [SMALL_STATE(68)] = 1402,
  [SMALL_STATE(69)] = 1419,
  [SMALL_STATE(70)] = 1428,
  [SMALL_STATE(71)] = 1445,
  [SMALL_STATE(72)] = 1454,
  [SMALL_STATE(73)] = 1463,
  [SMALL_STATE(74)] = 1472,
  [SMALL_STATE(75)] = 1481,
  [SMALL_STATE(76)] = 1490,
  [SMALL_STATE(77)] = 1499,
  [SMALL_STATE(78)] = 1508,
  [SMALL_STATE(79)] = 1525,
  [SMALL_STATE(80)] = 1542,
  [SMALL_STATE(81)] = 1551,
  [SMALL_STATE(82)] = 1560,
  [SMALL_STATE(83)] = 1569,
  [SMALL_STATE(84)] = 1578,
  [SMALL_STATE(85)] = 1587,
  [SMALL_STATE(86)] = 1596,
  [SMALL_STATE(87)] = 1605,
  [SMALL_STATE(88)] = 1614,
  [SMALL_STATE(89)] = 1623,
  [SMALL_STATE(90)] = 1640,
  [SMALL_STATE(91)] = 1657,
  [SMALL_STATE(92)] = 1674,
  [SMALL_STATE(93)] = 1683,
  [SMALL_STATE(94)] = 1692,
  [SMALL_STATE(95)] = 1701,
  [SMALL_STATE(96)] = 1710,
  [SMALL_STATE(97)] = 1727,
  [SMALL_STATE(98)] = 1744,
  [SMALL_STATE(99)] = 1759,
  [SMALL_STATE(100)] = 1768,
  [SMALL_STATE(101)] = 1780,
  [SMALL_STATE(102)] = 1794,
  [SMALL_STATE(103)] = 1804,
  [SMALL_STATE(104)] = 1814,
  [SMALL_STATE(105)] = 1823,
  [SMALL_STATE(106)] = 1832,
  [SMALL_STATE(107)] = 1845,
  [SMALL_STATE(108)] = 1854,
  [SMALL_STATE(109)] = 1863,
  [SMALL_STATE(110)] = 1876,
  [SMALL_STATE(111)] = 1885,
  [SMALL_STATE(112)] = 1894,
  [SMALL_STATE(113)] = 1905,
  [SMALL_STATE(114)] = 1916,
  [SMALL_STATE(115)] = 1927,
  [SMALL_STATE(116)] = 1936,
  [SMALL_STATE(117)] = 1945,
  [SMALL_STATE(118)] = 1956,
  [SMALL_STATE(119)] = 1965,
  [SMALL_STATE(120)] = 1973,
  [SMALL_STATE(121)] = 1981,
  [SMALL_STATE(122)] = 1987,
  [SMALL_STATE(123)] = 1993,
  [SMALL_STATE(124)] = 2003,
  [SMALL_STATE(125)] = 2011,
  [SMALL_STATE(126)] = 2021,
  [SMALL_STATE(127)] = 2027,
  [SMALL_STATE(128)] = 2033,
  [SMALL_STATE(129)] = 2039,
  [SMALL_STATE(130)] = 2045,
  [SMALL_STATE(131)] = 2051,
  [SMALL_STATE(132)] = 2061,
  [SMALL_STATE(133)] = 2068,
  [SMALL_STATE(134)] = 2075,
  [SMALL_STATE(135)] = 2082,
  [SMALL_STATE(136)] = 2087,
  [SMALL_STATE(137)] = 2094,
  [SMALL_STATE(138)] = 2101,
  [SMALL_STATE(139)] = 2108,
  [SMALL_STATE(140)] = 2115,
  [SMALL_STATE(141)] = 2122,
  [SMALL_STATE(142)] = 2129,
  [SMALL_STATE(143)] = 2136,
  [SMALL_STATE(144)] = 2143,
  [SMALL_STATE(145)] = 2148,
  [SMALL_STATE(146)] = 2155,
  [SMALL_STATE(147)] = 2162,
  [SMALL_STATE(148)] = 2167,
  [SMALL_STATE(149)] = 2174,
  [SMALL_STATE(150)] = 2179,
  [SMALL_STATE(151)] = 2186,
  [SMALL_STATE(152)] = 2193,
  [SMALL_STATE(153)] = 2200,
  [SMALL_STATE(154)] = 2207,
  [SMALL_STATE(155)] = 2212,
  [SMALL_STATE(156)] = 2219,
  [SMALL_STATE(157)] = 2226,
  [SMALL_STATE(158)] = 2233,
  [SMALL_STATE(159)] = 2240,
  [SMALL_STATE(160)] = 2244,
  [SMALL_STATE(161)] = 2248,
  [SMALL_STATE(162)] = 2252,
  [SMALL_STATE(163)] = 2256,
  [SMALL_STATE(164)] = 2260,
  [SMALL_STATE(165)] = 2264,
  [SMALL_STATE(166)] = 2268,
  [SMALL_STATE(167)] = 2272,
  [SMALL_STATE(168)] = 2276,
  [SMALL_STATE(169)] = 2280,
  [SMALL_STATE(170)] = 2284,
  [SMALL_STATE(171)] = 2288,
  [SMALL_STATE(172)] = 2292,
  [SMALL_STATE(173)] = 2296,
  [SMALL_STATE(174)] = 2300,
  [SMALL_STATE(175)] = 2304,
  [SMALL_STATE(176)] = 2308,
  [SMALL_STATE(177)] = 2312,
  [SMALL_STATE(178)] = 2316,
  [SMALL_STATE(179)] = 2320,
  [SMALL_STATE(180)] = 2324,
  [SMALL_STATE(181)] = 2328,
  [SMALL_STATE(182)] = 2332,
  [SMALL_STATE(183)] = 2336,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 13),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 14),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 13),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 14),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 7),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 8),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 9),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 10),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 8),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 10),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 11),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 10),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 11),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 8),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 12),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 12),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 15),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 15),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [561] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
