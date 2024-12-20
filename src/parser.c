#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  aux_sym_identifiers_statement_token1 = 12,
  anon_sym_hierarchical = 13,
  anon_sym_flat = 14,
  aux_sym_model_declaration_token1 = 15,
  aux_sym_software_system_declaration_token1 = 16,
  aux_sym_container_declaration_token1 = 17,
  aux_sym_person_declaration_token1 = 18,
  anon_sym_tags = 19,
  aux_sym_configuration_declaration_token1 = 20,
  aux_sym_scope_declaration_token1 = 21,
  aux_sym_views_declaration_token1 = 22,
  aux_sym_system_context_view_declaration_token1 = 23,
  aux_sym_include_statement_token1 = 24,
  anon_sym_STAR = 25,
  aux_sym_exclude_statement_token1 = 26,
  aux_sym_autolayout_statement_token1 = 27,
  aux_sym_autolayout_value_token1 = 28,
  aux_sym_autolayout_value_token2 = 29,
  aux_sym_autolayout_value_token3 = 30,
  aux_sym_autolayout_value_token4 = 31,
  aux_sym_default_statement_token1 = 32,
  aux_sym_description_statement_token1 = 33,
  aux_sym_styles_declaration_token1 = 34,
  aux_sym_element_declaration_token1 = 35,
  sym_dsl = 36,
  sym_workspace_declaration = 37,
  sym_string = 38,
  sym_dotted_identifier = 39,
  sym_identifier = 40,
  sym_relation_identifier = 41,
  sym__assignment_operator = 42,
  sym__relation_operator = 43,
  sym_workspace_item_statement = 44,
  sym_identifiers_statement = 45,
  sym_identifiers_value = 46,
  sym_model_declaration = 47,
  sym__model_children = 48,
  sym__model_item_statement = 49,
  sym_variable_declaration = 50,
  sym_relation_statement = 51,
  sym__item_declaration = 52,
  sym_software_system_declaration = 53,
  sym_container_declaration = 54,
  sym_person_declaration = 55,
  sym_tags_declaration = 56,
  sym_configuration_declaration = 57,
  sym_configuration_item_statement = 58,
  sym_scope_declaration = 59,
  sym_views_declaration = 60,
  sym_views_item_statement = 61,
  sym_system_context_view_declaration = 62,
  sym_view_property_statement = 63,
  sym_include_statement = 64,
  sym_exclude_statement = 65,
  sym_autolayout_statement = 66,
  sym_autolayout_value = 67,
  sym_default_statement = 68,
  sym_description_statement = 69,
  sym_container_view_declaration = 70,
  sym_styles_declaration = 71,
  sym_style_item_statement = 72,
  sym_element_declaration = 73,
  sym_element_property = 74,
  aux_sym_dsl_repeat1 = 75,
  aux_sym_workspace_declaration_repeat1 = 76,
  aux_sym__model_children_repeat1 = 77,
  aux_sym_tags_declaration_repeat1 = 78,
  aux_sym_configuration_declaration_repeat1 = 79,
  aux_sym_views_declaration_repeat1 = 80,
  aux_sym_system_context_view_declaration_repeat1 = 81,
  aux_sym_include_statement_repeat1 = 82,
  aux_sym_exclude_statement_repeat1 = 83,
  aux_sym_styles_declaration_repeat1 = 84,
  aux_sym_element_declaration_repeat1 = 85,
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
  [12] = 12,
  [13] = 9,
  [14] = 11,
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
  [77] = 33,
  [78] = 21,
  [79] = 48,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 21,
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
  [121] = 49,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
  [128] = 128,
  [129] = 118,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(149);
      ADVANCE_MAP(
        '!', 64,
        '"', 154,
        '*', 179,
        '-', 6,
        '.', 161,
        '=', 162,
        'T', 30,
        'f', 18,
        'h', 16,
        't', 7,
        '{', 151,
        '}', 152,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '*') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == '}') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '}') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(185);
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
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(167);
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
          lookahead == 'b') ADVANCE(185);
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
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
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
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
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
          lookahead == 'm') ADVANCE(169);
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
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
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
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
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
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 117:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
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
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
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
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 190:
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
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 148},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 148},
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
    [sym_dsl] = STATE(127),
    [sym_workspace_declaration] = STATE(64),
    [aux_sym_dsl_repeat1] = STATE(64),
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
    STATE(23), 5,
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
    STATE(23), 5,
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
    STATE(23), 5,
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
    STATE(23), 5,
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
    STATE(23), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [150] = 7,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(44), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(46), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(48), 1,
      aux_sym_views_declaration_token1,
    STATE(8), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [176] = 7,
    ACTIONS(42), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(44), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(46), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(48), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [202] = 7,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      sym__simple_identifier,
    ACTIONS(56), 1,
      anon_sym_tags,
    STATE(68), 1,
      sym_identifier,
    STATE(85), 1,
      sym_dotted_identifier,
    STATE(104), 1,
      sym_relation_identifier,
    STATE(11), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [228] = 7,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(63), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(66), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(69), 1,
      aux_sym_views_declaration_token1,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(43), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [254] = 7,
    ACTIONS(54), 1,
      sym__simple_identifier,
    ACTIONS(56), 1,
      anon_sym_tags,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_identifier,
    STATE(85), 1,
      sym_dotted_identifier,
    STATE(104), 1,
      sym_relation_identifier,
    STATE(12), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [280] = 7,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      sym__simple_identifier,
    ACTIONS(79), 1,
      anon_sym_tags,
    STATE(68), 1,
      sym_identifier,
    STATE(85), 1,
      sym_dotted_identifier,
    STATE(104), 1,
      sym_relation_identifier,
    STATE(12), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [306] = 7,
    ACTIONS(54), 1,
      sym__simple_identifier,
    ACTIONS(56), 1,
      anon_sym_tags,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_identifier,
    STATE(85), 1,
      sym_dotted_identifier,
    STATE(104), 1,
      sym_relation_identifier,
    STATE(14), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [332] = 7,
    ACTIONS(54), 1,
      sym__simple_identifier,
    ACTIONS(56), 1,
      anon_sym_tags,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_identifier,
    STATE(85), 1,
      sym_dotted_identifier,
    STATE(104), 1,
      sym_relation_identifier,
    STATE(12), 5,
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
    STATE(16), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(59), 3,
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
    STATE(17), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(59), 3,
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
    STATE(59), 3,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_styles_declaration,
  [424] = 4,
    ACTIONS(107), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(109), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(111), 1,
      aux_sym_person_declaration_token1,
    STATE(80), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [440] = 4,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(19), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [455] = 1,
    ACTIONS(120), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [464] = 1,
    ACTIONS(122), 6,
      sym_number,
      anon_sym_DQUOTE,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [473] = 4,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(19), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [488] = 1,
    ACTIONS(130), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [497] = 1,
    ACTIONS(132), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [506] = 1,
    ACTIONS(134), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [515] = 1,
    ACTIONS(136), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [524] = 1,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [533] = 1,
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [542] = 1,
    ACTIONS(142), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [551] = 4,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym__model_children,
    ACTIONS(148), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [565] = 4,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      aux_sym_scope_declaration_token1,
    STATE(109), 1,
      sym_scope_declaration,
    STATE(42), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [579] = 1,
    ACTIONS(154), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [587] = 1,
    ACTIONS(156), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [595] = 4,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      aux_sym_element_declaration_token1,
    STATE(101), 1,
      sym_element_declaration,
    STATE(37), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [609] = 4,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym__model_children,
    ACTIONS(164), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [623] = 1,
    ACTIONS(166), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [631] = 4,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      aux_sym_element_declaration_token1,
    STATE(101), 1,
      sym_element_declaration,
    STATE(37), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [645] = 2,
    STATE(94), 1,
      sym_autolayout_value,
    ACTIONS(173), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [655] = 1,
    ACTIONS(175), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [663] = 4,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      sym__simple_identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(45), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [677] = 4,
    ACTIONS(181), 1,
      sym__simple_identifier,
    ACTIONS(183), 1,
      sym__newline,
    ACTIONS(185), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [691] = 4,
    ACTIONS(152), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_scope_declaration,
    STATE(53), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [705] = 1,
    ACTIONS(189), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [713] = 4,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym__simple_identifier,
    STATE(114), 2,
      sym_string,
      sym_identifier,
  [727] = 4,
    ACTIONS(179), 1,
      sym__simple_identifier,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_identifier,
    STATE(52), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [741] = 1,
    ACTIONS(199), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [749] = 4,
    ACTIONS(201), 1,
      sym__simple_identifier,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(206), 1,
      anon_sym_STAR,
    STATE(47), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [763] = 1,
    ACTIONS(209), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [771] = 2,
    ACTIONS(213), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(211), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [781] = 1,
    ACTIONS(215), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [789] = 1,
    ACTIONS(217), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [797] = 4,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      sym__simple_identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(52), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [811] = 4,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      aux_sym_scope_declaration_token1,
    STATE(109), 1,
      sym_scope_declaration,
    STATE(53), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [825] = 4,
    ACTIONS(160), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_element_declaration,
    STATE(34), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [839] = 1,
    ACTIONS(231), 5,
      anon_sym_RBRACE,
      aux_sym_identifiers_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [847] = 1,
    ACTIONS(233), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [854] = 1,
    ACTIONS(235), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [861] = 1,
    ACTIONS(237), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [868] = 1,
    ACTIONS(239), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [875] = 3,
    ACTIONS(241), 1,
      sym__simple_identifier,
    ACTIONS(243), 1,
      sym__newline,
    STATE(66), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [886] = 1,
    ACTIONS(245), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [893] = 1,
    ACTIONS(247), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [900] = 4,
    ACTIONS(179), 1,
      sym__simple_identifier,
    STATE(85), 1,
      sym_dotted_identifier,
    STATE(96), 1,
      sym_identifier,
    STATE(97), 1,
      sym_relation_identifier,
  [913] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(65), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [924] = 3,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      aux_sym_workspace_declaration_token1,
    STATE(65), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [935] = 3,
    ACTIONS(256), 1,
      sym__simple_identifier,
    ACTIONS(259), 1,
      sym__newline,
    STATE(66), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [946] = 3,
    ACTIONS(181), 1,
      sym__simple_identifier,
    ACTIONS(261), 1,
      anon_sym_STAR,
    STATE(41), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [957] = 4,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
    STATE(18), 1,
      sym__assignment_operator,
  [970] = 1,
    ACTIONS(269), 4,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [977] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(22), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [985] = 2,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [993] = 2,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1001] = 2,
    STATE(51), 1,
      sym_identifiers_value,
    ACTIONS(279), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [1009] = 2,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1017] = 2,
    ACTIONS(285), 1,
      sym__simple_identifier,
    STATE(60), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [1025] = 2,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1033] = 2,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1041] = 2,
    ACTIONS(122), 1,
      sym__newline,
    ACTIONS(293), 2,
      sym__simple_identifier,
      anon_sym_STAR,
  [1049] = 2,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1057] = 2,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1065] = 1,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1070] = 2,
    ACTIONS(303), 1,
      anon_sym_EQ,
    STATE(70), 1,
      sym__assignment_operator,
  [1077] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_string,
  [1084] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_string,
  [1091] = 1,
    ACTIONS(267), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1096] = 2,
    ACTIONS(179), 1,
      sym__simple_identifier,
    STATE(83), 1,
      sym_identifier,
  [1103] = 2,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_string,
  [1110] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_string,
  [1117] = 2,
    ACTIONS(179), 1,
      sym__simple_identifier,
    STATE(84), 1,
      sym_identifier,
  [1124] = 1,
    ACTIONS(305), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [1129] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
  [1136] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [1143] = 2,
    ACTIONS(307), 1,
      sym_number,
    ACTIONS(309), 1,
      sym__newline,
  [1150] = 2,
    ACTIONS(311), 1,
      sym_number,
    ACTIONS(313), 1,
      sym__newline,
  [1157] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_string,
  [1164] = 2,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
  [1171] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_string,
  [1178] = 1,
    ACTIONS(315), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1183] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_string,
  [1190] = 2,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_string,
  [1197] = 1,
    ACTIONS(317), 2,
      anon_sym_RBRACE,
      aux_sym_element_declaration_token1,
  [1202] = 2,
    ACTIONS(319), 1,
      sym_number,
    ACTIONS(321), 1,
      sym__newline,
  [1209] = 1,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1214] = 2,
    ACTIONS(325), 1,
      anon_sym_DASH_GT,
    STATE(63), 1,
      sym__relation_operator,
  [1221] = 2,
    ACTIONS(179), 1,
      sym__simple_identifier,
    STATE(90), 1,
      sym_identifier,
  [1228] = 1,
    ACTIONS(327), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [1233] = 1,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [1238] = 2,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym__model_children,
  [1245] = 1,
    ACTIONS(333), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1250] = 2,
    ACTIONS(122), 1,
      sym__newline,
    ACTIONS(293), 1,
      sym__simple_identifier,
  [1257] = 1,
    ACTIONS(335), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1262] = 1,
    ACTIONS(337), 1,
      sym__simple_identifier,
  [1266] = 1,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
  [1270] = 1,
    ACTIONS(341), 1,
      sym__newline,
  [1274] = 1,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
  [1278] = 1,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
  [1282] = 1,
    ACTIONS(347), 1,
      sym__newline,
  [1286] = 1,
    ACTIONS(349), 1,
      sym__string_content,
  [1290] = 1,
    ACTIONS(351), 1,
      sym__newline,
  [1294] = 1,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
  [1298] = 1,
    ACTIONS(211), 1,
      sym__newline,
  [1302] = 1,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
  [1306] = 1,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
  [1310] = 1,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
  [1314] = 1,
    ACTIONS(361), 1,
      sym__newline,
  [1318] = 1,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
  [1322] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1326] = 1,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
  [1330] = 1,
    ACTIONS(369), 1,
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
  [SMALL_STATE(19)] = 440,
  [SMALL_STATE(20)] = 455,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 497,
  [SMALL_STATE(25)] = 506,
  [SMALL_STATE(26)] = 515,
  [SMALL_STATE(27)] = 524,
  [SMALL_STATE(28)] = 533,
  [SMALL_STATE(29)] = 542,
  [SMALL_STATE(30)] = 551,
  [SMALL_STATE(31)] = 565,
  [SMALL_STATE(32)] = 579,
  [SMALL_STATE(33)] = 587,
  [SMALL_STATE(34)] = 595,
  [SMALL_STATE(35)] = 609,
  [SMALL_STATE(36)] = 623,
  [SMALL_STATE(37)] = 631,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 655,
  [SMALL_STATE(40)] = 663,
  [SMALL_STATE(41)] = 677,
  [SMALL_STATE(42)] = 691,
  [SMALL_STATE(43)] = 705,
  [SMALL_STATE(44)] = 713,
  [SMALL_STATE(45)] = 727,
  [SMALL_STATE(46)] = 741,
  [SMALL_STATE(47)] = 749,
  [SMALL_STATE(48)] = 763,
  [SMALL_STATE(49)] = 771,
  [SMALL_STATE(50)] = 781,
  [SMALL_STATE(51)] = 789,
  [SMALL_STATE(52)] = 797,
  [SMALL_STATE(53)] = 811,
  [SMALL_STATE(54)] = 825,
  [SMALL_STATE(55)] = 839,
  [SMALL_STATE(56)] = 847,
  [SMALL_STATE(57)] = 854,
  [SMALL_STATE(58)] = 861,
  [SMALL_STATE(59)] = 868,
  [SMALL_STATE(60)] = 875,
  [SMALL_STATE(61)] = 886,
  [SMALL_STATE(62)] = 893,
  [SMALL_STATE(63)] = 900,
  [SMALL_STATE(64)] = 913,
  [SMALL_STATE(65)] = 924,
  [SMALL_STATE(66)] = 935,
  [SMALL_STATE(67)] = 946,
  [SMALL_STATE(68)] = 957,
  [SMALL_STATE(69)] = 970,
  [SMALL_STATE(70)] = 977,
  [SMALL_STATE(71)] = 985,
  [SMALL_STATE(72)] = 993,
  [SMALL_STATE(73)] = 1001,
  [SMALL_STATE(74)] = 1009,
  [SMALL_STATE(75)] = 1017,
  [SMALL_STATE(76)] = 1025,
  [SMALL_STATE(77)] = 1033,
  [SMALL_STATE(78)] = 1041,
  [SMALL_STATE(79)] = 1049,
  [SMALL_STATE(80)] = 1057,
  [SMALL_STATE(81)] = 1065,
  [SMALL_STATE(82)] = 1070,
  [SMALL_STATE(83)] = 1077,
  [SMALL_STATE(84)] = 1084,
  [SMALL_STATE(85)] = 1091,
  [SMALL_STATE(86)] = 1096,
  [SMALL_STATE(87)] = 1103,
  [SMALL_STATE(88)] = 1110,
  [SMALL_STATE(89)] = 1117,
  [SMALL_STATE(90)] = 1124,
  [SMALL_STATE(91)] = 1129,
  [SMALL_STATE(92)] = 1136,
  [SMALL_STATE(93)] = 1143,
  [SMALL_STATE(94)] = 1150,
  [SMALL_STATE(95)] = 1157,
  [SMALL_STATE(96)] = 1164,
  [SMALL_STATE(97)] = 1171,
  [SMALL_STATE(98)] = 1178,
  [SMALL_STATE(99)] = 1183,
  [SMALL_STATE(100)] = 1190,
  [SMALL_STATE(101)] = 1197,
  [SMALL_STATE(102)] = 1202,
  [SMALL_STATE(103)] = 1209,
  [SMALL_STATE(104)] = 1214,
  [SMALL_STATE(105)] = 1221,
  [SMALL_STATE(106)] = 1228,
  [SMALL_STATE(107)] = 1233,
  [SMALL_STATE(108)] = 1238,
  [SMALL_STATE(109)] = 1245,
  [SMALL_STATE(110)] = 1250,
  [SMALL_STATE(111)] = 1257,
  [SMALL_STATE(112)] = 1262,
  [SMALL_STATE(113)] = 1266,
  [SMALL_STATE(114)] = 1270,
  [SMALL_STATE(115)] = 1274,
  [SMALL_STATE(116)] = 1278,
  [SMALL_STATE(117)] = 1282,
  [SMALL_STATE(118)] = 1286,
  [SMALL_STATE(119)] = 1290,
  [SMALL_STATE(120)] = 1294,
  [SMALL_STATE(121)] = 1298,
  [SMALL_STATE(122)] = 1302,
  [SMALL_STATE(123)] = 1306,
  [SMALL_STATE(124)] = 1310,
  [SMALL_STATE(125)] = 1314,
  [SMALL_STATE(126)] = 1318,
  [SMALL_STATE(127)] = 1322,
  [SMALL_STATE(128)] = 1326,
  [SMALL_STATE(129)] = 1330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 8),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 9),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
