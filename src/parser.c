#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

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
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 2},
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
    {field_context, 1},
    {field_key, 2},
  [12] =
    {field_context, 1},
    {field_description, 3},
    {field_key, 2},
  [15] =
    {field_name, 1},
  [16] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [18] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
    {field_value, 1},
  [21] =
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
  [23] = 18,
  [24] = 22,
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
  [69] = 25,
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
  [97] = 25,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 67,
  [105] = 105,
  [106] = 49,
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
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 109,
  [132] = 132,
  [133] = 133,
  [134] = 109,
  [135] = 107,
  [136] = 136,
  [137] = 137,
  [138] = 107,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 68,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 141,
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
      if (lookahead == '.') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '.') ADVANCE(166);
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
      if (lookahead == '{') ADVANCE(156);
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
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 148},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 148},
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
    [sym_dsl] = STATE(151),
    [sym_workspace_declaration] = STATE(73),
    [aux_sym_dsl_repeat1] = STATE(73),
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
    STATE(14), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    STATE(5), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    STATE(8), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    STATE(33), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [150] = 8,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      aux_sym_include_statement_token1,
    ACTIONS(30), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(33), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(36), 1,
      aux_sym_default_statement_token1,
    ACTIONS(39), 1,
      aux_sym_description_statement_token1,
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [300] = 8,
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
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
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
    STATE(7), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(33), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [390] = 7,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(60), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(62), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(64), 1,
      aux_sym_views_declaration_token1,
    STATE(16), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [416] = 7,
    ACTIONS(58), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(60), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(62), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(64), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [442] = 7,
    ACTIONS(58), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(60), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(62), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(64), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [468] = 7,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym__simple_identifier,
    ACTIONS(72), 1,
      anon_sym_tags,
    STATE(72), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(132), 1,
      sym_relation_identifier,
    STATE(22), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [494] = 7,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      sym__simple_identifier,
    ACTIONS(79), 1,
      anon_sym_tags,
    STATE(72), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(132), 1,
      sym_relation_identifier,
    STATE(19), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [520] = 7,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(87), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(90), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(93), 1,
      aux_sym_views_declaration_token1,
    STATE(20), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [546] = 7,
    ACTIONS(58), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(60), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(62), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(64), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [572] = 7,
    ACTIONS(70), 1,
      sym__simple_identifier,
    ACTIONS(72), 1,
      anon_sym_tags,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(132), 1,
      sym_relation_identifier,
    STATE(19), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [598] = 7,
    ACTIONS(70), 1,
      sym__simple_identifier,
    ACTIONS(72), 1,
      anon_sym_tags,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(132), 1,
      sym_relation_identifier,
    STATE(24), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [624] = 7,
    ACTIONS(70), 1,
      sym__simple_identifier,
    ACTIONS(72), 1,
      anon_sym_tags,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(132), 1,
      sym_relation_identifier,
    STATE(19), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [650] = 2,
    ACTIONS(106), 1,
      aux_sym_color_token1,
    ACTIONS(104), 8,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [664] = 6,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(112), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(114), 1,
      aux_sym_styles_declaration_token1,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(79), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [686] = 6,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(121), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(124), 1,
      aux_sym_styles_declaration_token1,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(79), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [708] = 6,
    ACTIONS(110), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(112), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(114), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(79), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [730] = 6,
    ACTIONS(129), 1,
      sym_number,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym__simple_identifier,
    ACTIONS(135), 1,
      aux_sym_color_token1,
    ACTIONS(137), 1,
      aux_sym_color_token2,
    STATE(139), 3,
      sym_string,
      sym_identifier,
      sym_color,
  [751] = 4,
    ACTIONS(139), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(141), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(143), 1,
      aux_sym_person_declaration_token1,
    STATE(103), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [767] = 1,
    ACTIONS(145), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [776] = 4,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(32), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [791] = 1,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [800] = 5,
    ACTIONS(156), 1,
      sym__simple_identifier,
    ACTIONS(158), 1,
      sym__newline,
    ACTIONS(160), 1,
      anon_sym_STAR,
    STATE(90), 1,
      sym_identifier,
    STATE(37), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [817] = 1,
    ACTIONS(162), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [826] = 1,
    ACTIONS(164), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [835] = 5,
    ACTIONS(166), 1,
      sym__simple_identifier,
    ACTIONS(169), 1,
      sym__newline,
    ACTIONS(171), 1,
      anon_sym_STAR,
    STATE(90), 1,
      sym_identifier,
    STATE(37), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [852] = 1,
    ACTIONS(174), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [861] = 1,
    ACTIONS(176), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [870] = 1,
    ACTIONS(178), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [879] = 1,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [888] = 4,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(32), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [903] = 1,
    ACTIONS(188), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [911] = 4,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym__model_children,
    ACTIONS(194), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [925] = 4,
    ACTIONS(196), 1,
      sym__simple_identifier,
    ACTIONS(198), 1,
      sym__newline,
    STATE(98), 1,
      sym_identifier,
    STATE(56), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [939] = 4,
    ACTIONS(156), 1,
      sym__simple_identifier,
    ACTIONS(200), 1,
      anon_sym_STAR,
    STATE(90), 1,
      sym_identifier,
    STATE(34), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [953] = 4,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      aux_sym_scope_declaration_token1,
    STATE(118), 1,
      sym_scope_declaration,
    STATE(58), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [967] = 4,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      aux_sym_element_declaration_token1,
    STATE(111), 1,
      sym_element_declaration,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [981] = 1,
    ACTIONS(210), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [989] = 1,
    ACTIONS(212), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [997] = 1,
    ACTIONS(214), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1005] = 4,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(218), 1,
      sym__simple_identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(62), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1019] = 2,
    STATE(130), 1,
      sym_autolayout_value,
    ACTIONS(220), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [1029] = 4,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__model_children,
    ACTIONS(224), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1043] = 1,
    ACTIONS(226), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1051] = 4,
    ACTIONS(228), 1,
      sym__simple_identifier,
    ACTIONS(231), 1,
      sym__newline,
    STATE(98), 1,
      sym_identifier,
    STATE(56), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1065] = 1,
    ACTIONS(233), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1073] = 4,
    ACTIONS(204), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_scope_declaration,
    STATE(59), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1087] = 4,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      aux_sym_scope_declaration_token1,
    STATE(118), 1,
      sym_scope_declaration,
    STATE(59), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1101] = 4,
    ACTIONS(208), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_element_declaration,
    STATE(48), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1115] = 1,
    ACTIONS(244), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1123] = 4,
    ACTIONS(218), 1,
      sym__simple_identifier,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_identifier,
    STATE(64), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1137] = 1,
    ACTIONS(248), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1145] = 4,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      sym__simple_identifier,
    STATE(29), 1,
      sym_identifier,
    STATE(64), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1159] = 1,
    ACTIONS(255), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1167] = 4,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 1,
      aux_sym_element_declaration_token1,
    STATE(111), 1,
      sym_element_declaration,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1181] = 1,
    ACTIONS(262), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1189] = 2,
    ACTIONS(266), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(264), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1199] = 2,
    ACTIONS(104), 1,
      sym__newline,
    ACTIONS(106), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_STAR,
  [1208] = 1,
    ACTIONS(268), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1215] = 1,
    ACTIONS(270), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1222] = 4,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_DASH_GT,
    STATE(30), 1,
      sym__assignment_operator,
  [1235] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1246] = 1,
    ACTIONS(280), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1253] = 3,
    ACTIONS(282), 1,
      sym__simple_identifier,
    STATE(98), 1,
      sym_identifier,
    STATE(45), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1264] = 3,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      aux_sym_workspace_declaration_token1,
    STATE(76), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1275] = 1,
    ACTIONS(289), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1282] = 1,
    ACTIONS(291), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1289] = 1,
    ACTIONS(293), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1296] = 1,
    ACTIONS(295), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1303] = 1,
    ACTIONS(297), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1310] = 4,
    ACTIONS(218), 1,
      sym__simple_identifier,
    STATE(108), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(136), 1,
      sym_relation_identifier,
  [1323] = 1,
    ACTIONS(299), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1330] = 1,
    ACTIONS(301), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1337] = 1,
    ACTIONS(303), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1344] = 1,
    ACTIONS(305), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1351] = 1,
    ACTIONS(307), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1358] = 1,
    ACTIONS(309), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1365] = 1,
    ACTIONS(311), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [1372] = 3,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      sym__newline,
    ACTIONS(313), 2,
      sym__simple_identifier,
      anon_sym_STAR,
  [1383] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_string,
  [1393] = 2,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1401] = 2,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1409] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_string,
  [1419] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_string,
  [1429] = 2,
    STATE(63), 1,
      sym_identifiers_value,
    ACTIONS(333), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [1437] = 2,
    ACTIONS(104), 1,
      sym__newline,
    ACTIONS(106), 2,
      sym__simple_identifier,
      anon_sym_DOT,
  [1445] = 3,
    ACTIONS(335), 1,
      sym__simple_identifier,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      sym__newline,
  [1455] = 2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(42), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1463] = 2,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1471] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_string,
  [1481] = 2,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1489] = 2,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1497] = 2,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1505] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_string,
  [1515] = 2,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1523] = 2,
    ACTIONS(363), 1,
      sym__newline,
    ACTIONS(361), 2,
      sym__simple_identifier,
      anon_sym_STAR,
  [1531] = 2,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
  [1538] = 2,
    ACTIONS(218), 1,
      sym__simple_identifier,
    STATE(138), 1,
      sym_identifier,
  [1545] = 2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_string,
  [1552] = 1,
    ACTIONS(365), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1557] = 2,
    ACTIONS(218), 1,
      sym__simple_identifier,
    STATE(95), 1,
      sym_identifier,
  [1564] = 1,
    ACTIONS(367), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1569] = 1,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1574] = 1,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1579] = 2,
    ACTIONS(373), 1,
      sym_number,
    ACTIONS(375), 1,
      sym__newline,
  [1586] = 2,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym__model_children,
  [1593] = 1,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1598] = 2,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      sym_string,
  [1605] = 1,
    ACTIONS(381), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1610] = 1,
    ACTIONS(276), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1615] = 2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_string,
  [1622] = 2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_string,
  [1629] = 2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_string,
  [1636] = 1,
    ACTIONS(383), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1641] = 2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_string,
  [1648] = 1,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1653] = 1,
    ACTIONS(387), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [1658] = 2,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(391), 1,
      sym__newline,
  [1665] = 2,
    ACTIONS(393), 1,
      sym_number,
    ACTIONS(395), 1,
      sym__newline,
  [1672] = 2,
    ACTIONS(133), 1,
      sym__simple_identifier,
    STATE(107), 1,
      sym_identifier,
  [1679] = 2,
    ACTIONS(397), 1,
      anon_sym_DASH_GT,
    STATE(82), 1,
      sym__relation_operator,
  [1686] = 2,
    ACTIONS(218), 1,
      sym__simple_identifier,
    STATE(94), 1,
      sym_identifier,
  [1693] = 2,
    ACTIONS(282), 1,
      sym__simple_identifier,
    STATE(135), 1,
      sym_identifier,
  [1700] = 2,
    ACTIONS(361), 1,
      sym__simple_identifier,
    ACTIONS(363), 1,
      sym__newline,
  [1707] = 2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
  [1714] = 2,
    ACTIONS(399), 1,
      anon_sym_EQ,
    STATE(99), 1,
      sym__assignment_operator,
  [1721] = 1,
    ACTIONS(363), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1726] = 1,
    ACTIONS(401), 1,
      sym__newline,
  [1730] = 1,
    ACTIONS(403), 1,
      sym__newline,
  [1734] = 1,
    ACTIONS(405), 1,
      sym__string_content,
  [1738] = 1,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
  [1742] = 1,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
  [1746] = 1,
    ACTIONS(411), 1,
      sym__newline,
  [1750] = 1,
    ACTIONS(264), 1,
      sym__newline,
  [1754] = 1,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
  [1758] = 1,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
  [1762] = 1,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
  [1766] = 1,
    ACTIONS(419), 1,
      anon_sym_LBRACE,
  [1770] = 1,
    ACTIONS(421), 1,
      sym__newline,
  [1774] = 1,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [1778] = 1,
    ACTIONS(425), 1,
      sym__newline,
  [1782] = 1,
    ACTIONS(427), 1,
      sym__simple_identifier,
  [1786] = 1,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
  [1790] = 1,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
  [1794] = 1,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
  [1798] = 1,
    ACTIONS(435), 1,
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
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 442,
  [SMALL_STATE(18)] = 468,
  [SMALL_STATE(19)] = 494,
  [SMALL_STATE(20)] = 520,
  [SMALL_STATE(21)] = 546,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 598,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 664,
  [SMALL_STATE(27)] = 686,
  [SMALL_STATE(28)] = 708,
  [SMALL_STATE(29)] = 730,
  [SMALL_STATE(30)] = 751,
  [SMALL_STATE(31)] = 767,
  [SMALL_STATE(32)] = 776,
  [SMALL_STATE(33)] = 791,
  [SMALL_STATE(34)] = 800,
  [SMALL_STATE(35)] = 817,
  [SMALL_STATE(36)] = 826,
  [SMALL_STATE(37)] = 835,
  [SMALL_STATE(38)] = 852,
  [SMALL_STATE(39)] = 861,
  [SMALL_STATE(40)] = 870,
  [SMALL_STATE(41)] = 879,
  [SMALL_STATE(42)] = 888,
  [SMALL_STATE(43)] = 903,
  [SMALL_STATE(44)] = 911,
  [SMALL_STATE(45)] = 925,
  [SMALL_STATE(46)] = 939,
  [SMALL_STATE(47)] = 953,
  [SMALL_STATE(48)] = 967,
  [SMALL_STATE(49)] = 981,
  [SMALL_STATE(50)] = 989,
  [SMALL_STATE(51)] = 997,
  [SMALL_STATE(52)] = 1005,
  [SMALL_STATE(53)] = 1019,
  [SMALL_STATE(54)] = 1029,
  [SMALL_STATE(55)] = 1043,
  [SMALL_STATE(56)] = 1051,
  [SMALL_STATE(57)] = 1065,
  [SMALL_STATE(58)] = 1073,
  [SMALL_STATE(59)] = 1087,
  [SMALL_STATE(60)] = 1101,
  [SMALL_STATE(61)] = 1115,
  [SMALL_STATE(62)] = 1123,
  [SMALL_STATE(63)] = 1137,
  [SMALL_STATE(64)] = 1145,
  [SMALL_STATE(65)] = 1159,
  [SMALL_STATE(66)] = 1167,
  [SMALL_STATE(67)] = 1181,
  [SMALL_STATE(68)] = 1189,
  [SMALL_STATE(69)] = 1199,
  [SMALL_STATE(70)] = 1208,
  [SMALL_STATE(71)] = 1215,
  [SMALL_STATE(72)] = 1222,
  [SMALL_STATE(73)] = 1235,
  [SMALL_STATE(74)] = 1246,
  [SMALL_STATE(75)] = 1253,
  [SMALL_STATE(76)] = 1264,
  [SMALL_STATE(77)] = 1275,
  [SMALL_STATE(78)] = 1282,
  [SMALL_STATE(79)] = 1289,
  [SMALL_STATE(80)] = 1296,
  [SMALL_STATE(81)] = 1303,
  [SMALL_STATE(82)] = 1310,
  [SMALL_STATE(83)] = 1323,
  [SMALL_STATE(84)] = 1330,
  [SMALL_STATE(85)] = 1337,
  [SMALL_STATE(86)] = 1344,
  [SMALL_STATE(87)] = 1351,
  [SMALL_STATE(88)] = 1358,
  [SMALL_STATE(89)] = 1365,
  [SMALL_STATE(90)] = 1372,
  [SMALL_STATE(91)] = 1383,
  [SMALL_STATE(92)] = 1393,
  [SMALL_STATE(93)] = 1401,
  [SMALL_STATE(94)] = 1409,
  [SMALL_STATE(95)] = 1419,
  [SMALL_STATE(96)] = 1429,
  [SMALL_STATE(97)] = 1437,
  [SMALL_STATE(98)] = 1445,
  [SMALL_STATE(99)] = 1455,
  [SMALL_STATE(100)] = 1463,
  [SMALL_STATE(101)] = 1471,
  [SMALL_STATE(102)] = 1481,
  [SMALL_STATE(103)] = 1489,
  [SMALL_STATE(104)] = 1497,
  [SMALL_STATE(105)] = 1505,
  [SMALL_STATE(106)] = 1515,
  [SMALL_STATE(107)] = 1523,
  [SMALL_STATE(108)] = 1531,
  [SMALL_STATE(109)] = 1538,
  [SMALL_STATE(110)] = 1545,
  [SMALL_STATE(111)] = 1552,
  [SMALL_STATE(112)] = 1557,
  [SMALL_STATE(113)] = 1564,
  [SMALL_STATE(114)] = 1569,
  [SMALL_STATE(115)] = 1574,
  [SMALL_STATE(116)] = 1579,
  [SMALL_STATE(117)] = 1586,
  [SMALL_STATE(118)] = 1593,
  [SMALL_STATE(119)] = 1598,
  [SMALL_STATE(120)] = 1605,
  [SMALL_STATE(121)] = 1610,
  [SMALL_STATE(122)] = 1615,
  [SMALL_STATE(123)] = 1622,
  [SMALL_STATE(124)] = 1629,
  [SMALL_STATE(125)] = 1636,
  [SMALL_STATE(126)] = 1641,
  [SMALL_STATE(127)] = 1648,
  [SMALL_STATE(128)] = 1653,
  [SMALL_STATE(129)] = 1658,
  [SMALL_STATE(130)] = 1665,
  [SMALL_STATE(131)] = 1672,
  [SMALL_STATE(132)] = 1679,
  [SMALL_STATE(133)] = 1686,
  [SMALL_STATE(134)] = 1693,
  [SMALL_STATE(135)] = 1700,
  [SMALL_STATE(136)] = 1707,
  [SMALL_STATE(137)] = 1714,
  [SMALL_STATE(138)] = 1721,
  [SMALL_STATE(139)] = 1726,
  [SMALL_STATE(140)] = 1730,
  [SMALL_STATE(141)] = 1734,
  [SMALL_STATE(142)] = 1738,
  [SMALL_STATE(143)] = 1742,
  [SMALL_STATE(144)] = 1746,
  [SMALL_STATE(145)] = 1750,
  [SMALL_STATE(146)] = 1754,
  [SMALL_STATE(147)] = 1758,
  [SMALL_STATE(148)] = 1762,
  [SMALL_STATE(149)] = 1766,
  [SMALL_STATE(150)] = 1770,
  [SMALL_STATE(151)] = 1774,
  [SMALL_STATE(152)] = 1778,
  [SMALL_STATE(153)] = 1782,
  [SMALL_STATE(154)] = 1786,
  [SMALL_STATE(155)] = 1790,
  [SMALL_STATE(156)] = 1794,
  [SMALL_STATE(157)] = 1798,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 10),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 11),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 8),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 8),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 7),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 8),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 8),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 9),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 12),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [423] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
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
