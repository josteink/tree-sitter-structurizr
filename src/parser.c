#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  aux_sym_model_declaration_token1 = 12,
  aux_sym_software_system_declaration_token1 = 13,
  aux_sym_container_declaration_token1 = 14,
  aux_sym_person_declaration_token1 = 15,
  anon_sym_tags = 16,
  aux_sym_configuration_declaration_token1 = 17,
  aux_sym_scope_declaration_token1 = 18,
  aux_sym_views_declaration_token1 = 19,
  aux_sym_system_context_view_declaration_token1 = 20,
  aux_sym_include_statement_token1 = 21,
  anon_sym_STAR = 22,
  aux_sym_exclude_statement_token1 = 23,
  aux_sym_autolayout_statement_token1 = 24,
  aux_sym_autolayout_value_token1 = 25,
  aux_sym_autolayout_value_token2 = 26,
  aux_sym_autolayout_value_token3 = 27,
  aux_sym_autolayout_value_token4 = 28,
  aux_sym_default_statement_token1 = 29,
  aux_sym_description_statement_token1 = 30,
  aux_sym_styles_declaration_token1 = 31,
  aux_sym_element_declaration_token1 = 32,
  sym_dsl = 33,
  sym_workspace_declaration = 34,
  sym_string = 35,
  sym_dotted_identifier = 36,
  sym_identifier = 37,
  sym_relation_identifier = 38,
  sym__assignment_operator = 39,
  sym__relation_operator = 40,
  sym_workspace_item_statement = 41,
  sym_model_declaration = 42,
  sym__model_children = 43,
  sym__model_item_statement = 44,
  sym_variable_declaration = 45,
  sym_relation_statement = 46,
  sym__item_declaration = 47,
  sym_software_system_declaration = 48,
  sym_container_declaration = 49,
  sym_person_declaration = 50,
  sym_tags_declaration = 51,
  sym_configuration_declaration = 52,
  sym_configuration_item_statement = 53,
  sym_scope_declaration = 54,
  sym_views_declaration = 55,
  sym_views_item_statement = 56,
  sym_system_context_view_declaration = 57,
  sym_view_property_statement = 58,
  sym_include_statement = 59,
  sym_exclude_statement = 60,
  sym_autolayout_statement = 61,
  sym_autolayout_value = 62,
  sym_default_statement = 63,
  sym_description_statement = 64,
  sym_container_view_declaration = 65,
  sym_styles_declaration = 66,
  sym_style_item_statement = 67,
  sym_element_declaration = 68,
  sym_element_property = 69,
  aux_sym_dsl_repeat1 = 70,
  aux_sym_workspace_declaration_repeat1 = 71,
  aux_sym__model_children_repeat1 = 72,
  aux_sym_tags_declaration_repeat1 = 73,
  aux_sym_configuration_declaration_repeat1 = 74,
  aux_sym_views_declaration_repeat1 = 75,
  aux_sym_system_context_view_declaration_repeat1 = 76,
  aux_sym_include_statement_repeat1 = 77,
  aux_sym_exclude_statement_repeat1 = 78,
  aux_sym_styles_declaration_repeat1 = 79,
  aux_sym_element_declaration_repeat1 = 80,
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
  [sym_workspace_item_statement] = "workspace_item_statement",
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
  [sym_workspace_item_statement] = sym_workspace_item_statement,
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
  [sym_workspace_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [10] = 7,
  [11] = 8,
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
  [68] = 66,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 52,
  [77] = 21,
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
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 21,
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
  [118] = 34,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 116,
  [124] = 124,
  [125] = 125,
  [126] = 121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        '"', 128,
        '*', 244,
        '-', 6,
        '.', 230,
        '=', 231,
        'T', 141,
        't', 131,
        '{', 125,
        '}', 126,
        'A', 219,
        'a', 219,
        'B', 211,
        'b', 211,
        'C', 190,
        'c', 190,
        'D', 152,
        'd', 152,
        'E', 176,
        'e', 176,
        'I', 184,
        'i', 184,
        'L', 199,
        'l', 199,
        'M', 188,
        'm', 188,
        'P', 157,
        'p', 157,
        'R', 174,
        'r', 174,
        'S', 143,
        's', 143,
        'V', 169,
        'v', 169,
        'W', 191,
        'w', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '*') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == '}') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead == '}') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(232);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        'C', 70,
        'c', 70,
        'O', 41,
        'o', 41,
        'T', 117,
        't', 117,
        'Y', 93,
        'y', 93,
      );
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(7);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 41:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 45:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 51:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 53:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 56:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 59:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 63:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 64:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 69:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 79:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 80:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 83:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 84:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 85:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 88:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 90:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      END_STATE();
    case 91:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 97:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 98:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 101:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 107:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 108:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 110:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 111:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 112:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 113:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 114:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 115:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 116:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 118:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 119:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 120:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      ADVANCE_MAP(
        '}', 126,
        'A', 108,
        'a', 108,
        'B', 96,
        'b', 96,
        'C', 71,
        'c', 71,
        'D', 23,
        'd', 23,
        'E', 53,
        'e', 53,
        'I', 68,
        'i', 68,
        'L', 82,
        'l', 82,
        'M', 69,
        'm', 69,
        'P', 31,
        'p', 31,
        'R', 50,
        'r', 50,
        'S', 15,
        's', 15,
        'T', 13,
        't', 13,
        'V', 45,
        'v', 45,
        'W', 72,
        'w', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_identifier);
      ADVANCE_MAP(
        'C', 189,
        'c', 189,
        'O', 165,
        'o', 165,
        'T', 226,
        't', 226,
        'Y', 208,
        'y', 208,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(167);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 121},
  [2] = {.lex_state = 121},
  [3] = {.lex_state = 121},
  [4] = {.lex_state = 121},
  [5] = {.lex_state = 121},
  [6] = {.lex_state = 121},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 121},
  [13] = {.lex_state = 121},
  [14] = {.lex_state = 121},
  [15] = {.lex_state = 121},
  [16] = {.lex_state = 121},
  [17] = {.lex_state = 121},
  [18] = {.lex_state = 121},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 121},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 121},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 121},
  [25] = {.lex_state = 121},
  [26] = {.lex_state = 121},
  [27] = {.lex_state = 121},
  [28] = {.lex_state = 121},
  [29] = {.lex_state = 121},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 121},
  [33] = {.lex_state = 121},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 121},
  [36] = {.lex_state = 121},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 121},
  [40] = {.lex_state = 121},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 121},
  [46] = {.lex_state = 121},
  [47] = {.lex_state = 121},
  [48] = {.lex_state = 121},
  [49] = {.lex_state = 121},
  [50] = {.lex_state = 121},
  [51] = {.lex_state = 121},
  [52] = {.lex_state = 121},
  [53] = {.lex_state = 121},
  [54] = {.lex_state = 121},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 121},
  [57] = {.lex_state = 121},
  [58] = {.lex_state = 121},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 121},
  [61] = {.lex_state = 121},
  [62] = {.lex_state = 121},
  [63] = {.lex_state = 121},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 121},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 121},
  [79] = {.lex_state = 121},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 121},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 121},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 121},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 121},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 121},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 120},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 120},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_workspace_declaration_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__simple_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [sym_dsl] = STATE(124),
    [sym_workspace_declaration] = STATE(57),
    [aux_sym_dsl_repeat1] = STATE(57),
    [aux_sym_workspace_declaration_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      aux_sym_include_statement_token1,
    ACTIONS(10), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(13), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(16), 1,
      aux_sym_default_statement_token1,
    ACTIONS(19), 1,
      aux_sym_description_statement_token1,
    STATE(2), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(22), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [30] = 8,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      aux_sym_include_statement_token1,
    ACTIONS(26), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(28), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(30), 1,
      aux_sym_default_statement_token1,
    ACTIONS(32), 1,
      aux_sym_description_statement_token1,
    STATE(6), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(22), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [60] = 8,
    ACTIONS(24), 1,
      aux_sym_include_statement_token1,
    ACTIONS(26), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(28), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(30), 1,
      aux_sym_default_statement_token1,
    ACTIONS(32), 1,
      aux_sym_description_statement_token1,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(22), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [90] = 8,
    ACTIONS(24), 1,
      aux_sym_include_statement_token1,
    ACTIONS(26), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(28), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(30), 1,
      aux_sym_default_statement_token1,
    ACTIONS(32), 1,
      aux_sym_description_statement_token1,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(22), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [120] = 8,
    ACTIONS(24), 1,
      aux_sym_include_statement_token1,
    ACTIONS(26), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(28), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(30), 1,
      aux_sym_default_statement_token1,
    ACTIONS(32), 1,
      aux_sym_description_statement_token1,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(22), 5,
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
    STATE(67), 1,
      sym_identifier,
    STATE(83), 1,
      sym_dotted_identifier,
    STATE(86), 1,
      sym_relation_identifier,
    STATE(8), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [176] = 7,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_identifier,
    STATE(83), 1,
      sym_dotted_identifier,
    STATE(86), 1,
      sym_relation_identifier,
    STATE(9), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [202] = 7,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      sym__simple_identifier,
    ACTIONS(53), 1,
      anon_sym_tags,
    STATE(67), 1,
      sym_identifier,
    STATE(83), 1,
      sym_dotted_identifier,
    STATE(86), 1,
      sym_relation_identifier,
    STATE(9), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [228] = 7,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_identifier,
    STATE(83), 1,
      sym_dotted_identifier,
    STATE(86), 1,
      sym_relation_identifier,
    STATE(11), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [254] = 7,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_identifier,
    STATE(83), 1,
      sym_dotted_identifier,
    STATE(86), 1,
      sym_relation_identifier,
    STATE(9), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [280] = 6,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(64), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(66), 1,
      aux_sym_views_declaration_token1,
    STATE(13), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(48), 3,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [302] = 6,
    ACTIONS(62), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(64), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(66), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(48), 3,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [324] = 6,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(74), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(76), 1,
      aux_sym_styles_declaration_token1,
    STATE(16), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(63), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [346] = 6,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(83), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(86), 1,
      aux_sym_views_declaration_token1,
    STATE(15), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(48), 3,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [368] = 6,
    ACTIONS(72), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(74), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(76), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(63), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [390] = 6,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(96), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(99), 1,
      aux_sym_styles_declaration_token1,
    STATE(17), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(63), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [412] = 4,
    ACTIONS(102), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(104), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(106), 1,
      aux_sym_person_declaration_token1,
    STATE(74), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [428] = 4,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(19), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [443] = 1,
    ACTIONS(115), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [452] = 1,
    ACTIONS(117), 6,
      sym_number,
      anon_sym_DQUOTE,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [461] = 1,
    ACTIONS(119), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [470] = 4,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(19), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [485] = 1,
    ACTIONS(127), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [494] = 1,
    ACTIONS(129), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [503] = 1,
    ACTIONS(131), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [512] = 1,
    ACTIONS(133), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [521] = 1,
    ACTIONS(135), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [530] = 1,
    ACTIONS(137), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [539] = 4,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__model_children,
    ACTIONS(143), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [553] = 4,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym__model_children,
    ACTIONS(147), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [567] = 4,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      aux_sym_element_declaration_token1,
    STATE(79), 1,
      sym_element_declaration,
    STATE(32), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [581] = 2,
    STATE(91), 1,
      sym_autolayout_value,
    ACTIONS(154), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [591] = 2,
    ACTIONS(158), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(156), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [601] = 4,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      aux_sym_scope_declaration_token1,
    STATE(78), 1,
      sym_scope_declaration,
    STATE(35), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [615] = 4,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      aux_sym_element_declaration_token1,
    STATE(79), 1,
      sym_element_declaration,
    STATE(45), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [629] = 4,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      sym__simple_identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(42), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [643] = 4,
    ACTIONS(173), 1,
      sym__simple_identifier,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [657] = 4,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      aux_sym_scope_declaration_token1,
    STATE(78), 1,
      sym_scope_declaration,
    STATE(40), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [671] = 4,
    ACTIONS(181), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_scope_declaration,
    STATE(35), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [685] = 4,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym__simple_identifier,
    STATE(43), 1,
      sym_identifier,
    STATE(41), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [699] = 4,
    ACTIONS(171), 1,
      sym__simple_identifier,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_identifier,
    STATE(41), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [713] = 4,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      sym__simple_identifier,
    STATE(111), 2,
      sym_string,
      sym_identifier,
  [727] = 4,
    ACTIONS(198), 1,
      sym__simple_identifier,
    ACTIONS(201), 1,
      sym__newline,
    ACTIONS(203), 1,
      anon_sym_STAR,
    STATE(44), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [741] = 4,
    ACTIONS(167), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_element_declaration,
    STATE(32), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [755] = 3,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      aux_sym_workspace_declaration_token1,
    STATE(46), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [766] = 1,
    ACTIONS(213), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [773] = 1,
    ACTIONS(215), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [780] = 1,
    ACTIONS(217), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [787] = 1,
    ACTIONS(219), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [794] = 1,
    ACTIONS(221), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [801] = 1,
    ACTIONS(223), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [808] = 1,
    ACTIONS(225), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [815] = 1,
    ACTIONS(227), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [822] = 3,
    ACTIONS(173), 1,
      sym__simple_identifier,
    ACTIONS(229), 1,
      anon_sym_STAR,
    STATE(38), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [833] = 1,
    ACTIONS(231), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [840] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(46), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [851] = 1,
    ACTIONS(235), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [858] = 3,
    ACTIONS(237), 1,
      sym__simple_identifier,
    ACTIONS(239), 1,
      sym__newline,
    STATE(64), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
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
  [883] = 1,
    ACTIONS(245), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [890] = 1,
    ACTIONS(247), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [897] = 3,
    ACTIONS(249), 1,
      sym__simple_identifier,
    ACTIONS(252), 1,
      sym__newline,
    STATE(64), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [908] = 4,
    ACTIONS(171), 1,
      sym__simple_identifier,
    STATE(83), 1,
      sym_dotted_identifier,
    STATE(93), 1,
      sym_identifier,
    STATE(95), 1,
      sym_relation_identifier,
  [921] = 1,
    ACTIONS(254), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [928] = 4,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_EQ,
    ACTIONS(260), 1,
      anon_sym_DASH_GT,
    STATE(18), 1,
      sym__assignment_operator,
  [941] = 2,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [949] = 2,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [957] = 2,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [965] = 2,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [973] = 2,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [981] = 2,
    ACTIONS(280), 1,
      sym__simple_identifier,
    STATE(59), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [989] = 2,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [997] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(23), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [1005] = 2,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1013] = 2,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(288), 2,
      sym__simple_identifier,
      anon_sym_STAR,
  [1021] = 1,
    ACTIONS(290), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1026] = 1,
    ACTIONS(292), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1031] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_string,
  [1038] = 1,
    ACTIONS(294), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1043] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_string,
  [1050] = 1,
    ACTIONS(260), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1055] = 2,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_string,
  [1062] = 1,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1067] = 2,
    ACTIONS(298), 1,
      anon_sym_DASH_GT,
    STATE(65), 1,
      sym__relation_operator,
  [1074] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [1081] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [1088] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_string,
  [1095] = 2,
    ACTIONS(300), 1,
      sym_number,
    ACTIONS(302), 1,
      sym__newline,
  [1102] = 2,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      sym__newline,
  [1109] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_string,
  [1116] = 2,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
  [1123] = 1,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1128] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_string,
  [1135] = 1,
    ACTIONS(310), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1140] = 2,
    ACTIONS(171), 1,
      sym__simple_identifier,
    STATE(80), 1,
      sym_identifier,
  [1147] = 2,
    ACTIONS(312), 1,
      sym_number,
    ACTIONS(314), 1,
      sym__newline,
  [1154] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__model_children,
  [1161] = 1,
    ACTIONS(318), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1166] = 2,
    ACTIONS(171), 1,
      sym__simple_identifier,
    STATE(81), 1,
      sym_identifier,
  [1173] = 1,
    ACTIONS(320), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [1178] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_string,
  [1185] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_string,
  [1192] = 2,
    ACTIONS(322), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym__assignment_operator,
  [1199] = 1,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1204] = 2,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(288), 1,
      sym__simple_identifier,
  [1211] = 2,
    ACTIONS(171), 1,
      sym__simple_identifier,
    STATE(82), 1,
      sym_identifier,
  [1218] = 1,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
  [1222] = 1,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
  [1226] = 1,
    ACTIONS(330), 1,
      sym__newline,
  [1230] = 1,
    ACTIONS(332), 1,
      sym__newline,
  [1234] = 1,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
  [1238] = 1,
    ACTIONS(336), 1,
      sym__newline,
  [1242] = 1,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
  [1246] = 1,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
  [1250] = 1,
    ACTIONS(342), 1,
      sym__newline,
  [1254] = 1,
    ACTIONS(156), 1,
      sym__newline,
  [1258] = 1,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
  [1262] = 1,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
  [1266] = 1,
    ACTIONS(348), 1,
      sym__string_content,
  [1270] = 1,
    ACTIONS(350), 1,
      sym__simple_identifier,
  [1274] = 1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [1278] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [1282] = 1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [1286] = 1,
    ACTIONS(358), 1,
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
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 346,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 390,
  [SMALL_STATE(18)] = 412,
  [SMALL_STATE(19)] = 428,
  [SMALL_STATE(20)] = 443,
  [SMALL_STATE(21)] = 452,
  [SMALL_STATE(22)] = 461,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 485,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 503,
  [SMALL_STATE(27)] = 512,
  [SMALL_STATE(28)] = 521,
  [SMALL_STATE(29)] = 530,
  [SMALL_STATE(30)] = 539,
  [SMALL_STATE(31)] = 553,
  [SMALL_STATE(32)] = 567,
  [SMALL_STATE(33)] = 581,
  [SMALL_STATE(34)] = 591,
  [SMALL_STATE(35)] = 601,
  [SMALL_STATE(36)] = 615,
  [SMALL_STATE(37)] = 629,
  [SMALL_STATE(38)] = 643,
  [SMALL_STATE(39)] = 657,
  [SMALL_STATE(40)] = 671,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 699,
  [SMALL_STATE(43)] = 713,
  [SMALL_STATE(44)] = 727,
  [SMALL_STATE(45)] = 741,
  [SMALL_STATE(46)] = 755,
  [SMALL_STATE(47)] = 766,
  [SMALL_STATE(48)] = 773,
  [SMALL_STATE(49)] = 780,
  [SMALL_STATE(50)] = 787,
  [SMALL_STATE(51)] = 794,
  [SMALL_STATE(52)] = 801,
  [SMALL_STATE(53)] = 808,
  [SMALL_STATE(54)] = 815,
  [SMALL_STATE(55)] = 822,
  [SMALL_STATE(56)] = 833,
  [SMALL_STATE(57)] = 840,
  [SMALL_STATE(58)] = 851,
  [SMALL_STATE(59)] = 858,
  [SMALL_STATE(60)] = 869,
  [SMALL_STATE(61)] = 876,
  [SMALL_STATE(62)] = 883,
  [SMALL_STATE(63)] = 890,
  [SMALL_STATE(64)] = 897,
  [SMALL_STATE(65)] = 908,
  [SMALL_STATE(66)] = 921,
  [SMALL_STATE(67)] = 928,
  [SMALL_STATE(68)] = 941,
  [SMALL_STATE(69)] = 949,
  [SMALL_STATE(70)] = 957,
  [SMALL_STATE(71)] = 965,
  [SMALL_STATE(72)] = 973,
  [SMALL_STATE(73)] = 981,
  [SMALL_STATE(74)] = 989,
  [SMALL_STATE(75)] = 997,
  [SMALL_STATE(76)] = 1005,
  [SMALL_STATE(77)] = 1013,
  [SMALL_STATE(78)] = 1021,
  [SMALL_STATE(79)] = 1026,
  [SMALL_STATE(80)] = 1031,
  [SMALL_STATE(81)] = 1038,
  [SMALL_STATE(82)] = 1043,
  [SMALL_STATE(83)] = 1050,
  [SMALL_STATE(84)] = 1055,
  [SMALL_STATE(85)] = 1062,
  [SMALL_STATE(86)] = 1067,
  [SMALL_STATE(87)] = 1074,
  [SMALL_STATE(88)] = 1081,
  [SMALL_STATE(89)] = 1088,
  [SMALL_STATE(90)] = 1095,
  [SMALL_STATE(91)] = 1102,
  [SMALL_STATE(92)] = 1109,
  [SMALL_STATE(93)] = 1116,
  [SMALL_STATE(94)] = 1123,
  [SMALL_STATE(95)] = 1128,
  [SMALL_STATE(96)] = 1135,
  [SMALL_STATE(97)] = 1140,
  [SMALL_STATE(98)] = 1147,
  [SMALL_STATE(99)] = 1154,
  [SMALL_STATE(100)] = 1161,
  [SMALL_STATE(101)] = 1166,
  [SMALL_STATE(102)] = 1173,
  [SMALL_STATE(103)] = 1178,
  [SMALL_STATE(104)] = 1185,
  [SMALL_STATE(105)] = 1192,
  [SMALL_STATE(106)] = 1199,
  [SMALL_STATE(107)] = 1204,
  [SMALL_STATE(108)] = 1211,
  [SMALL_STATE(109)] = 1218,
  [SMALL_STATE(110)] = 1222,
  [SMALL_STATE(111)] = 1226,
  [SMALL_STATE(112)] = 1230,
  [SMALL_STATE(113)] = 1234,
  [SMALL_STATE(114)] = 1238,
  [SMALL_STATE(115)] = 1242,
  [SMALL_STATE(116)] = 1246,
  [SMALL_STATE(117)] = 1250,
  [SMALL_STATE(118)] = 1254,
  [SMALL_STATE(119)] = 1258,
  [SMALL_STATE(120)] = 1262,
  [SMALL_STATE(121)] = 1266,
  [SMALL_STATE(122)] = 1270,
  [SMALL_STATE(123)] = 1274,
  [SMALL_STATE(124)] = 1278,
  [SMALL_STATE(125)] = 1282,
  [SMALL_STATE(126)] = 1286,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 7),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 9),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [354] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
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
