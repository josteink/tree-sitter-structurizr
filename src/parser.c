#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  aux_sym_workspace_declaration_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  anon_sym_DQUOTE = 5,
  sym__string_content = 6,
  sym__simple_identifier = 7,
  anon_sym_DOT = 8,
  anon_sym_EQ = 9,
  anon_sym_DASH_GT = 10,
  sym__newline = 11,
  aux_sym_color_token1 = 12,
  aux_sym_color_token2 = 13,
  aux_sym_identifiers_statement_token1 = 14,
  anon_sym_hierarchical = 15,
  anon_sym_flat = 16,
  aux_sym_model_declaration_token1 = 17,
  aux_sym_software_system_declaration_token1 = 18,
  aux_sym_container_declaration_token1 = 19,
  aux_sym_person_declaration_token1 = 20,
  anon_sym_tags = 21,
  aux_sym_configuration_declaration_token1 = 22,
  aux_sym_scope_declaration_token1 = 23,
  aux_sym_views_declaration_token1 = 24,
  aux_sym_system_context_view_declaration_token1 = 25,
  aux_sym_include_statement_token1 = 26,
  anon_sym_STAR = 27,
  aux_sym_exclude_statement_token1 = 28,
  aux_sym_autolayout_statement_token1 = 29,
  aux_sym_autolayout_value_token1 = 30,
  aux_sym_autolayout_value_token2 = 31,
  aux_sym_autolayout_value_token3 = 32,
  aux_sym_autolayout_value_token4 = 33,
  aux_sym_default_statement_token1 = 34,
  aux_sym_description_statement_token1 = 35,
  aux_sym_styles_declaration_token1 = 36,
  aux_sym_element_declaration_token1 = 37,
  sym_dsl = 38,
  sym_workspace_declaration = 39,
  sym_string = 40,
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
  sym_styles_declaration = 74,
  sym_style_item_statement = 75,
  sym_element_declaration = 76,
  sym_element_property = 77,
  aux_sym_dsl_repeat1 = 78,
  aux_sym_workspace_declaration_repeat1 = 79,
  aux_sym__model_children_repeat1 = 80,
  aux_sym_tags_declaration_repeat1 = 81,
  aux_sym_configuration_declaration_repeat1 = 82,
  aux_sym_views_declaration_repeat1 = 83,
  aux_sym_system_context_view_declaration_repeat1 = 84,
  aux_sym_include_statement_repeat1 = 85,
  aux_sym_exclude_statement_repeat1 = 86,
  aux_sym_styles_declaration_repeat1 = 87,
  aux_sym_element_declaration_repeat1 = 88,
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
  [anon_sym_STAR] = "*",
  [aux_sym_exclude_statement_token1] = "exclude_statement_token1",
  [aux_sym_autolayout_statement_token1] = "autolayout_statement_token1",
  [aux_sym_autolayout_value_token1] = "autolayout_value_token1",
  [aux_sym_autolayout_value_token2] = "autolayout_value_token2",
  [aux_sym_autolayout_value_token3] = "autolayout_value_token3",
  [aux_sym_autolayout_value_token4] = "autolayout_value_token4",
  [aux_sym_default_statement_token1] = "default_statement_token1",
  [aux_sym_description_statement_token1] = "description_statement_token1",
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
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_exclude_statement_token1] = aux_sym_exclude_statement_token1,
  [aux_sym_autolayout_statement_token1] = aux_sym_autolayout_statement_token1,
  [aux_sym_autolayout_value_token1] = aux_sym_autolayout_value_token1,
  [aux_sym_autolayout_value_token2] = aux_sym_autolayout_value_token2,
  [aux_sym_autolayout_value_token3] = aux_sym_autolayout_value_token3,
  [aux_sym_autolayout_value_token4] = aux_sym_autolayout_value_token4,
  [aux_sym_default_statement_token1] = aux_sym_default_statement_token1,
  [aux_sym_description_statement_token1] = aux_sym_description_statement_token1,
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
  [anon_sym_STAR] = {
    .visible = true,
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
  field_source = 10,
  field_target = 11,
  field_value = 12,
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
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
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
    {field_description, 2},
  [11] =
    {field_name, 1},
  [12] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [14] =
    {field_key, 0},
    {field_value, 1},
  [16] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
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
  [12] = 7,
  [13] = 13,
  [14] = 10,
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
  [32] = 32,
  [33] = 33,
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
  [77] = 39,
  [78] = 18,
  [79] = 31,
  [80] = 80,
  [81] = 18,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 40,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      ADVANCE_MAP(
        '!', 64,
        '"', 159,
        '#', 153,
        '*', 186,
        '-', 6,
        '.', 166,
        '=', 167,
        'T', 30,
        'f', 18,
        'h', 16,
        't', 7,
        '{', 156,
        '}', 157,
        'A', 136,
        'a', 136,
        'B', 123,
        'b', 123,
        'C', 95,
        'c', 95,
        'D', 41,
        'd', 41,
        'E', 77,
        'e', 77,
        'I', 93,
        'i', 93,
        'L', 107,
        'l', 107,
        'M', 102,
        'm', 102,
        'P', 49,
        'p', 49,
        'R', 74,
        'r', 74,
        'S', 32,
        's', 32,
        'V', 68,
        'v', 68,
        'W', 96,
        'w', 96,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '*') ADVANCE(187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '}') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '{') ADVANCE(156);
      if (lookahead == '}') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(168);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
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
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        'C', 94,
        'c', 94,
        'O', 61,
        'o', 61,
        'T', 145,
        't', 145,
        'Y', 120,
        'y', 120,
      );
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(65);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 61:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 84:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 105:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 115:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 117:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 136:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 137:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 139:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 140:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 142:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 143:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 144:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 145:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 148:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 197:
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
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 2},
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
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 148},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 148},
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
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_exclude_statement_token1] = ACTIONS(1),
    [aux_sym_autolayout_statement_token1] = ACTIONS(1),
    [aux_sym_autolayout_value_token1] = ACTIONS(1),
    [aux_sym_autolayout_value_token2] = ACTIONS(1),
    [aux_sym_autolayout_value_token3] = ACTIONS(1),
    [aux_sym_autolayout_value_token4] = ACTIONS(1),
    [aux_sym_default_statement_token1] = ACTIONS(1),
    [aux_sym_description_statement_token1] = ACTIONS(1),
    [aux_sym_styles_declaration_token1] = ACTIONS(1),
    [aux_sym_element_declaration_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(116),
    [sym_workspace_declaration] = STATE(66),
    [aux_sym_dsl_repeat1] = STATE(66),
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
    STATE(4), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(30), 5,
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
    STATE(6), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(30), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [60] = 8,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      aux_sym_include_statement_token1,
    ACTIONS(24), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(27), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(30), 1,
      aux_sym_default_statement_token1,
    ACTIONS(33), 1,
      aux_sym_description_statement_token1,
    STATE(4), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(30), 5,
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
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(30), 5,
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
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(30), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [150] = 7,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    STATE(62), 1,
      sym_identifier,
    STATE(84), 1,
      sym_dotted_identifier,
    STATE(88), 1,
      sym_relation_identifier,
    STATE(13), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [176] = 7,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(50), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(52), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(54), 1,
      aux_sym_views_declaration_token1,
    STATE(9), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(35), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [202] = 7,
    ACTIONS(48), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(50), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(52), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(54), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(35), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [228] = 7,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_identifier,
    STATE(84), 1,
      sym_dotted_identifier,
    STATE(88), 1,
      sym_relation_identifier,
    STATE(12), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [254] = 7,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(65), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(68), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(71), 1,
      aux_sym_views_declaration_token1,
    STATE(11), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(35), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [280] = 7,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_identifier,
    STATE(84), 1,
      sym_dotted_identifier,
    STATE(88), 1,
      sym_relation_identifier,
    STATE(13), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [306] = 7,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      sym__simple_identifier,
    ACTIONS(81), 1,
      anon_sym_tags,
    STATE(62), 1,
      sym_identifier,
    STATE(84), 1,
      sym_dotted_identifier,
    STATE(88), 1,
      sym_relation_identifier,
    STATE(13), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [332] = 7,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_identifier,
    STATE(84), 1,
      sym_dotted_identifier,
    STATE(88), 1,
      sym_relation_identifier,
    STATE(7), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [358] = 6,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(90), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(92), 1,
      aux_sym_styles_declaration_token1,
    STATE(17), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(69), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [380] = 6,
    ACTIONS(88), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(90), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(92), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(69), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [402] = 6,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(101), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(104), 1,
      aux_sym_styles_declaration_token1,
    STATE(17), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(69), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [424] = 2,
    ACTIONS(109), 1,
      aux_sym_color_token1,
    ACTIONS(107), 7,
      sym_number,
      anon_sym_DQUOTE,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [437] = 6,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym__simple_identifier,
    ACTIONS(117), 1,
      aux_sym_color_token1,
    ACTIONS(119), 1,
      aux_sym_color_token2,
    STATE(114), 3,
      sym_string,
      sym_identifier,
      sym_color,
  [458] = 4,
    ACTIONS(121), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(123), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(125), 1,
      aux_sym_person_declaration_token1,
    STATE(76), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [474] = 1,
    ACTIONS(127), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [483] = 1,
    ACTIONS(129), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [492] = 4,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(24), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [507] = 4,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(24), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [522] = 1,
    ACTIONS(144), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [531] = 1,
    ACTIONS(146), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [540] = 1,
    ACTIONS(148), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [549] = 1,
    ACTIONS(150), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [558] = 1,
    ACTIONS(152), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [567] = 1,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [576] = 1,
    ACTIONS(156), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [584] = 1,
    ACTIONS(158), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [592] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__model_children,
    ACTIONS(164), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [606] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym__model_children,
    ACTIONS(168), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [620] = 1,
    ACTIONS(170), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [628] = 4,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      aux_sym_element_declaration_token1,
    STATE(101), 1,
      sym_element_declaration,
    STATE(36), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [642] = 2,
    STATE(93), 1,
      sym_autolayout_value,
    ACTIONS(177), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [652] = 1,
    ACTIONS(179), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [660] = 1,
    ACTIONS(181), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [668] = 2,
    ACTIONS(185), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(183), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [678] = 4,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      sym__simple_identifier,
    STATE(19), 1,
      sym_identifier,
    STATE(45), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [692] = 4,
    ACTIONS(191), 1,
      sym__simple_identifier,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(195), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [706] = 4,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      aux_sym_scope_declaration_token1,
    STATE(96), 1,
      sym_scope_declaration,
    STATE(43), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [720] = 1,
    ACTIONS(202), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [728] = 4,
    ACTIONS(189), 1,
      sym__simple_identifier,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_identifier,
    STATE(51), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [742] = 4,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      aux_sym_element_declaration_token1,
    STATE(101), 1,
      sym_element_declaration,
    STATE(53), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [756] = 4,
    ACTIONS(210), 1,
      sym__simple_identifier,
    ACTIONS(213), 1,
      sym__newline,
    ACTIONS(215), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [770] = 1,
    ACTIONS(218), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [778] = 1,
    ACTIONS(220), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [786] = 4,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      aux_sym_scope_declaration_token1,
    STATE(96), 1,
      sym_scope_declaration,
    STATE(54), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [800] = 4,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym__simple_identifier,
    STATE(19), 1,
      sym_identifier,
    STATE(51), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [814] = 1,
    ACTIONS(231), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [822] = 4,
    ACTIONS(208), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_element_declaration,
    STATE(36), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [836] = 4,
    ACTIONS(224), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_scope_declaration,
    STATE(43), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [850] = 1,
    ACTIONS(237), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [858] = 3,
    ACTIONS(191), 1,
      sym__simple_identifier,
    ACTIONS(239), 1,
      anon_sym_STAR,
    STATE(42), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [869] = 1,
    ACTIONS(241), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [876] = 1,
    ACTIONS(243), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [883] = 3,
    ACTIONS(245), 1,
      sym__simple_identifier,
    ACTIONS(247), 1,
      sym__newline,
    STATE(65), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [894] = 4,
    ACTIONS(189), 1,
      sym__simple_identifier,
    STATE(84), 1,
      sym_dotted_identifier,
    STATE(97), 1,
      sym_identifier,
    STATE(99), 1,
      sym_relation_identifier,
  [907] = 1,
    ACTIONS(249), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [914] = 4,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(253), 1,
      anon_sym_EQ,
    ACTIONS(255), 1,
      anon_sym_DASH_GT,
    STATE(20), 1,
      sym__assignment_operator,
  [927] = 1,
    ACTIONS(257), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [934] = 1,
    ACTIONS(259), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [941] = 3,
    ACTIONS(261), 1,
      sym__simple_identifier,
    ACTIONS(264), 1,
      sym__newline,
    STATE(65), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [952] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(67), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [963] = 3,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      aux_sym_workspace_declaration_token1,
    STATE(67), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [974] = 1,
    ACTIONS(273), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [981] = 1,
    ACTIONS(275), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [988] = 2,
    STATE(38), 1,
      sym_identifiers_value,
    ACTIONS(277), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [996] = 2,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1004] = 2,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1012] = 2,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1020] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(23), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1028] = 2,
    ACTIONS(291), 1,
      sym__simple_identifier,
    STATE(59), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [1036] = 2,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1044] = 2,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1052] = 2,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(109), 2,
      sym__simple_identifier,
      anon_sym_STAR,
  [1060] = 2,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1068] = 2,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1076] = 2,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(109), 1,
      sym__simple_identifier,
  [1083] = 2,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym__assignment_operator,
  [1090] = 1,
    ACTIONS(307), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1095] = 1,
    ACTIONS(255), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1100] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_string,
  [1107] = 2,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_string,
  [1114] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_string,
  [1121] = 2,
    ACTIONS(309), 1,
      anon_sym_DASH_GT,
    STATE(60), 1,
      sym__relation_operator,
  [1128] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_string,
  [1135] = 1,
    ACTIONS(311), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1140] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_string,
  [1147] = 2,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(315), 1,
      sym__newline,
  [1154] = 2,
    ACTIONS(317), 1,
      sym_number,
    ACTIONS(319), 1,
      sym__newline,
  [1161] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
  [1168] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_string,
  [1175] = 1,
    ACTIONS(321), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1180] = 2,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
  [1187] = 1,
    ACTIONS(323), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1192] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_string,
  [1199] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_string,
  [1206] = 1,
    ACTIONS(325), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1211] = 2,
    ACTIONS(327), 1,
      sym_number,
    ACTIONS(329), 1,
      sym__newline,
  [1218] = 1,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1223] = 2,
    ACTIONS(189), 1,
      sym__simple_identifier,
    STATE(85), 1,
      sym_identifier,
  [1230] = 1,
    ACTIONS(333), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1235] = 2,
    ACTIONS(189), 1,
      sym__simple_identifier,
    STATE(87), 1,
      sym_identifier,
  [1242] = 1,
    ACTIONS(335), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [1247] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_string,
  [1254] = 2,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym__model_children,
  [1261] = 1,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1266] = 2,
    ACTIONS(189), 1,
      sym__simple_identifier,
    STATE(90), 1,
      sym_identifier,
  [1273] = 1,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
  [1277] = 1,
    ACTIONS(343), 1,
      sym__newline,
  [1281] = 1,
    ACTIONS(345), 1,
      sym__newline,
  [1285] = 1,
    ACTIONS(347), 1,
      sym__newline,
  [1289] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
  [1293] = 1,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [1297] = 1,
    ACTIONS(353), 1,
      sym__newline,
  [1301] = 1,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
  [1305] = 1,
    ACTIONS(357), 1,
      sym__string_content,
  [1309] = 1,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
  [1313] = 1,
    ACTIONS(183), 1,
      sym__newline,
  [1317] = 1,
    ACTIONS(361), 1,
      sym__newline,
  [1321] = 1,
    ACTIONS(363), 1,
      sym__simple_identifier,
  [1325] = 1,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
  [1329] = 1,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
  [1333] = 1,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
  [1337] = 1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
  [1341] = 1,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
  [1345] = 1,
    ACTIONS(375), 1,
      sym__string_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 228,
  [SMALL_STATE(11)] = 254,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 380,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 437,
  [SMALL_STATE(20)] = 458,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 483,
  [SMALL_STATE(23)] = 492,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 522,
  [SMALL_STATE(26)] = 531,
  [SMALL_STATE(27)] = 540,
  [SMALL_STATE(28)] = 549,
  [SMALL_STATE(29)] = 558,
  [SMALL_STATE(30)] = 567,
  [SMALL_STATE(31)] = 576,
  [SMALL_STATE(32)] = 584,
  [SMALL_STATE(33)] = 592,
  [SMALL_STATE(34)] = 606,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 628,
  [SMALL_STATE(37)] = 642,
  [SMALL_STATE(38)] = 652,
  [SMALL_STATE(39)] = 660,
  [SMALL_STATE(40)] = 668,
  [SMALL_STATE(41)] = 678,
  [SMALL_STATE(42)] = 692,
  [SMALL_STATE(43)] = 706,
  [SMALL_STATE(44)] = 720,
  [SMALL_STATE(45)] = 728,
  [SMALL_STATE(46)] = 742,
  [SMALL_STATE(47)] = 756,
  [SMALL_STATE(48)] = 770,
  [SMALL_STATE(49)] = 778,
  [SMALL_STATE(50)] = 786,
  [SMALL_STATE(51)] = 800,
  [SMALL_STATE(52)] = 814,
  [SMALL_STATE(53)] = 822,
  [SMALL_STATE(54)] = 836,
  [SMALL_STATE(55)] = 850,
  [SMALL_STATE(56)] = 858,
  [SMALL_STATE(57)] = 869,
  [SMALL_STATE(58)] = 876,
  [SMALL_STATE(59)] = 883,
  [SMALL_STATE(60)] = 894,
  [SMALL_STATE(61)] = 907,
  [SMALL_STATE(62)] = 914,
  [SMALL_STATE(63)] = 927,
  [SMALL_STATE(64)] = 934,
  [SMALL_STATE(65)] = 941,
  [SMALL_STATE(66)] = 952,
  [SMALL_STATE(67)] = 963,
  [SMALL_STATE(68)] = 974,
  [SMALL_STATE(69)] = 981,
  [SMALL_STATE(70)] = 988,
  [SMALL_STATE(71)] = 996,
  [SMALL_STATE(72)] = 1004,
  [SMALL_STATE(73)] = 1012,
  [SMALL_STATE(74)] = 1020,
  [SMALL_STATE(75)] = 1028,
  [SMALL_STATE(76)] = 1036,
  [SMALL_STATE(77)] = 1044,
  [SMALL_STATE(78)] = 1052,
  [SMALL_STATE(79)] = 1060,
  [SMALL_STATE(80)] = 1068,
  [SMALL_STATE(81)] = 1076,
  [SMALL_STATE(82)] = 1083,
  [SMALL_STATE(83)] = 1090,
  [SMALL_STATE(84)] = 1095,
  [SMALL_STATE(85)] = 1100,
  [SMALL_STATE(86)] = 1107,
  [SMALL_STATE(87)] = 1114,
  [SMALL_STATE(88)] = 1121,
  [SMALL_STATE(89)] = 1128,
  [SMALL_STATE(90)] = 1135,
  [SMALL_STATE(91)] = 1140,
  [SMALL_STATE(92)] = 1147,
  [SMALL_STATE(93)] = 1154,
  [SMALL_STATE(94)] = 1161,
  [SMALL_STATE(95)] = 1168,
  [SMALL_STATE(96)] = 1175,
  [SMALL_STATE(97)] = 1180,
  [SMALL_STATE(98)] = 1187,
  [SMALL_STATE(99)] = 1192,
  [SMALL_STATE(100)] = 1199,
  [SMALL_STATE(101)] = 1206,
  [SMALL_STATE(102)] = 1211,
  [SMALL_STATE(103)] = 1218,
  [SMALL_STATE(104)] = 1223,
  [SMALL_STATE(105)] = 1230,
  [SMALL_STATE(106)] = 1235,
  [SMALL_STATE(107)] = 1242,
  [SMALL_STATE(108)] = 1247,
  [SMALL_STATE(109)] = 1254,
  [SMALL_STATE(110)] = 1261,
  [SMALL_STATE(111)] = 1266,
  [SMALL_STATE(112)] = 1273,
  [SMALL_STATE(113)] = 1277,
  [SMALL_STATE(114)] = 1281,
  [SMALL_STATE(115)] = 1285,
  [SMALL_STATE(116)] = 1289,
  [SMALL_STATE(117)] = 1293,
  [SMALL_STATE(118)] = 1297,
  [SMALL_STATE(119)] = 1301,
  [SMALL_STATE(120)] = 1305,
  [SMALL_STATE(121)] = 1309,
  [SMALL_STATE(122)] = 1313,
  [SMALL_STATE(123)] = 1317,
  [SMALL_STATE(124)] = 1321,
  [SMALL_STATE(125)] = 1325,
  [SMALL_STATE(126)] = 1329,
  [SMALL_STATE(127)] = 1333,
  [SMALL_STATE(128)] = 1337,
  [SMALL_STATE(129)] = 1341,
  [SMALL_STATE(130)] = 1345,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 8),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 7),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 9),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
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
