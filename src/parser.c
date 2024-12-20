#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

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
  sym_dsl = 31,
  sym_workspace_declaration = 32,
  sym_string = 33,
  sym_dotted_identifier = 34,
  sym_identifier = 35,
  sym_relation_identifier = 36,
  sym__assignment_operator = 37,
  sym__relation_operator = 38,
  sym_workspace_item_statement = 39,
  sym_model_declaration = 40,
  sym__model_children = 41,
  sym__model_item_statement = 42,
  sym_variable_declaration = 43,
  sym_relation_statement = 44,
  sym__item_declaration = 45,
  sym_software_system_declaration = 46,
  sym_container_declaration = 47,
  sym_person_declaration = 48,
  sym_tags_declaration = 49,
  sym_configuration_declaration = 50,
  sym_configuration_item_statement = 51,
  sym_scope_declaration = 52,
  sym_views_declaration = 53,
  sym_views_item_statement = 54,
  sym_system_context_view_declaration = 55,
  sym_view_property_statement = 56,
  sym_include_statement = 57,
  sym_exclude_statement = 58,
  sym_autolayout_statement = 59,
  sym_autolayout_value = 60,
  sym_default_statement = 61,
  sym_description_statement = 62,
  sym_container_view_declaration = 63,
  aux_sym_dsl_repeat1 = 64,
  aux_sym_workspace_declaration_repeat1 = 65,
  aux_sym__model_children_repeat1 = 66,
  aux_sym_tags_declaration_repeat1 = 67,
  aux_sym_configuration_declaration_repeat1 = 68,
  aux_sym_views_declaration_repeat1 = 69,
  aux_sym_system_context_view_declaration_repeat1 = 70,
  aux_sym_include_statement_repeat1 = 71,
  aux_sym_exclude_statement_repeat1 = 72,
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
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_declaration_repeat1] = "workspace_declaration_repeat1",
  [aux_sym__model_children_repeat1] = "_model_children_repeat1",
  [aux_sym_tags_declaration_repeat1] = "tags_declaration_repeat1",
  [aux_sym_configuration_declaration_repeat1] = "configuration_declaration_repeat1",
  [aux_sym_views_declaration_repeat1] = "views_declaration_repeat1",
  [aux_sym_system_context_view_declaration_repeat1] = "system_context_view_declaration_repeat1",
  [aux_sym_include_statement_repeat1] = "include_statement_repeat1",
  [aux_sym_exclude_statement_repeat1] = "exclude_statement_repeat1",
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
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_declaration_repeat1] = aux_sym_workspace_declaration_repeat1,
  [aux_sym__model_children_repeat1] = aux_sym__model_children_repeat1,
  [aux_sym_tags_declaration_repeat1] = aux_sym_tags_declaration_repeat1,
  [aux_sym_configuration_declaration_repeat1] = aux_sym_configuration_declaration_repeat1,
  [aux_sym_views_declaration_repeat1] = aux_sym_views_declaration_repeat1,
  [aux_sym_system_context_view_declaration_repeat1] = aux_sym_system_context_view_declaration_repeat1,
  [aux_sym_include_statement_repeat1] = aux_sym_include_statement_repeat1,
  [aux_sym_exclude_statement_repeat1] = aux_sym_exclude_statement_repeat1,
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
};

enum ts_field_identifiers {
  field_child = 1,
  field_context = 2,
  field_description = 3,
  field_name = 4,
  field_nodeSeparation = 5,
  field_parent = 6,
  field_rankSeparation = 7,
  field_relation = 8,
  field_source = 9,
  field_target = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child] = "child",
  [field_context] = "context",
  [field_description] = "description",
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
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 3},
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
    {field_rankSeparation, 2},
    {field_value, 1},
  [13] =
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
  [9] = 7,
  [10] = 10,
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
  [65] = 52,
  [66] = 51,
  [67] = 45,
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
  [92] = 51,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 37,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 100,
  [107] = 107,
  [108] = 108,
  [109] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(113);
      ADVANCE_MAP(
        '"', 119,
        '*', 228,
        '-', 5,
        '.', 214,
        '=', 215,
        'T', 132,
        't', 122,
        '{', 116,
        '}', 117,
        'A', 203,
        'a', 203,
        'B', 195,
        'b', 195,
        'C', 174,
        'c', 174,
        'D', 143,
        'd', 143,
        'E', 210,
        'e', 210,
        'I', 168,
        'i', 168,
        'L', 183,
        'l', 183,
        'M', 172,
        'm', 172,
        'P', 148,
        'p', 148,
        'R', 162,
        'r', 162,
        'S', 134,
        's', 134,
        'V', 156,
        'v', 156,
        'W', 176,
        'w', 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '*') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '}') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 12:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(7);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 38:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 48:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 67:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 69:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 73:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 77:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 80:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 82:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 88:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 89:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 90:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 91:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 95:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 96:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 97:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 98:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 103:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 104:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 105:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 106:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 107:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 109:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 110:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(110);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 111:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 112:
      if (eof) ADVANCE(113);
      ADVANCE_MAP(
        '}', 117,
        'A', 98,
        'a', 98,
        'B', 87,
        'b', 87,
        'C', 63,
        'c', 63,
        'D', 22,
        'd', 22,
        'E', 106,
        'e', 106,
        'I', 60,
        'i', 60,
        'L', 74,
        'l', 74,
        'M', 61,
        'm', 61,
        'P', 30,
        'p', 30,
        'R', 46,
        'r', 46,
        'S', 14,
        's', 14,
        'T', 12,
        't', 12,
        'V', 40,
        'v', 40,
        'W', 65,
        'w', 65,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(155);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 112},
  [2] = {.lex_state = 112},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 112},
  [6] = {.lex_state = 112},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 112},
  [13] = {.lex_state = 112},
  [14] = {.lex_state = 112},
  [15] = {.lex_state = 112},
  [16] = {.lex_state = 112},
  [17] = {.lex_state = 112},
  [18] = {.lex_state = 112},
  [19] = {.lex_state = 112},
  [20] = {.lex_state = 112},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 112},
  [24] = {.lex_state = 112},
  [25] = {.lex_state = 112},
  [26] = {.lex_state = 112},
  [27] = {.lex_state = 112},
  [28] = {.lex_state = 112},
  [29] = {.lex_state = 112},
  [30] = {.lex_state = 112},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 112},
  [36] = {.lex_state = 112},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 112},
  [40] = {.lex_state = 110},
  [41] = {.lex_state = 112},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 112},
  [45] = {.lex_state = 112},
  [46] = {.lex_state = 112},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 112},
  [49] = {.lex_state = 112},
  [50] = {.lex_state = 112},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 112},
  [53] = {.lex_state = 112},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 112},
  [56] = {.lex_state = 112},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 110},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 112},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 112},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 112},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 110},
  [71] = {.lex_state = 112},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 112},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 112},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 112},
  [90] = {.lex_state = 110},
  [91] = {.lex_state = 110},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 110},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 111},
  [109] = {.lex_state = 111},
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
  },
  [1] = {
    [sym_dsl] = STATE(107),
    [sym_workspace_declaration] = STATE(44),
    [aux_sym_dsl_repeat1] = STATE(44),
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
    STATE(5), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(23), 5,
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
    STATE(23), 5,
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
    STATE(3), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(23), 5,
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
    STATE(6), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(23), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [120] = 8,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      aux_sym_include_statement_token1,
    ACTIONS(28), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(31), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(34), 1,
      aux_sym_default_statement_token1,
    ACTIONS(37), 1,
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
  [150] = 7,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    STATE(38), 1,
      sym_identifier,
    STATE(76), 1,
      sym_dotted_identifier,
    STATE(79), 1,
      sym_relation_identifier,
    STATE(10), 5,
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
    STATE(38), 1,
      sym_identifier,
    STATE(76), 1,
      sym_dotted_identifier,
    STATE(79), 1,
      sym_relation_identifier,
    STATE(9), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [202] = 7,
    ACTIONS(42), 1,
      sym__simple_identifier,
    ACTIONS(44), 1,
      anon_sym_tags,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_identifier,
    STATE(76), 1,
      sym_dotted_identifier,
    STATE(79), 1,
      sym_relation_identifier,
    STATE(10), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [228] = 7,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym__simple_identifier,
    ACTIONS(55), 1,
      anon_sym_tags,
    STATE(38), 1,
      sym_identifier,
    STATE(76), 1,
      sym_dotted_identifier,
    STATE(79), 1,
      sym_relation_identifier,
    STATE(10), 5,
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
    STATE(38), 1,
      sym_identifier,
    STATE(76), 1,
      sym_dotted_identifier,
    STATE(79), 1,
      sym_relation_identifier,
    STATE(7), 5,
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
    STATE(39), 3,
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
    STATE(14), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(39), 3,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [324] = 6,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(75), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(78), 1,
      aux_sym_views_declaration_token1,
    STATE(14), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(39), 3,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [346] = 5,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(85), 1,
      aux_sym_system_context_view_declaration_token1,
    STATE(16), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(68), 2,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
  [364] = 5,
    ACTIONS(83), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(85), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(68), 2,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
  [382] = 4,
    ACTIONS(89), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(91), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(93), 1,
      aux_sym_person_declaration_token1,
    STATE(59), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [398] = 5,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_system_context_view_declaration_token1,
    STATE(18), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(68), 2,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
  [416] = 1,
    ACTIONS(103), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [425] = 1,
    ACTIONS(105), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [434] = 4,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(22), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [449] = 4,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(22), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [464] = 1,
    ACTIONS(120), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [473] = 1,
    ACTIONS(122), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [482] = 1,
    ACTIONS(124), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [491] = 1,
    ACTIONS(126), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [500] = 1,
    ACTIONS(128), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [509] = 1,
    ACTIONS(130), 6,
      anon_sym_RBRACE,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [518] = 2,
    STATE(81), 1,
      sym_autolayout_value,
    ACTIONS(132), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [528] = 4,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      aux_sym_scope_declaration_token1,
    STATE(89), 1,
      sym_scope_declaration,
    STATE(36), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [542] = 4,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym__model_children,
    ACTIONS(142), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [556] = 4,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym__model_children,
    ACTIONS(146), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [570] = 4,
    ACTIONS(148), 1,
      sym__simple_identifier,
    ACTIONS(150), 1,
      sym__newline,
    ACTIONS(152), 1,
      anon_sym_STAR,
    STATE(34), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [584] = 4,
    ACTIONS(154), 1,
      sym__simple_identifier,
    ACTIONS(157), 1,
      sym__newline,
    ACTIONS(159), 1,
      anon_sym_STAR,
    STATE(34), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [598] = 4,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      aux_sym_scope_declaration_token1,
    STATE(89), 1,
      sym_scope_declaration,
    STATE(35), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [612] = 4,
    ACTIONS(136), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_scope_declaration,
    STATE(35), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [626] = 2,
    ACTIONS(171), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(169), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [636] = 4,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(177), 1,
      anon_sym_DASH_GT,
    STATE(17), 1,
      sym__assignment_operator,
  [649] = 1,
    ACTIONS(179), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [656] = 4,
    ACTIONS(181), 1,
      sym__simple_identifier,
    STATE(76), 1,
      sym_dotted_identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(88), 1,
      sym_relation_identifier,
  [669] = 3,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      aux_sym_workspace_declaration_token1,
    STATE(41), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [680] = 3,
    ACTIONS(148), 1,
      sym__simple_identifier,
    ACTIONS(188), 1,
      anon_sym_STAR,
    STATE(33), 2,
      sym_identifier,
      aux_sym_include_statement_repeat1,
  [691] = 3,
    ACTIONS(190), 1,
      sym__simple_identifier,
    ACTIONS(192), 1,
      sym__newline,
    STATE(47), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [702] = 3,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(41), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [713] = 1,
    ACTIONS(196), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [720] = 1,
    ACTIONS(198), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [727] = 3,
    ACTIONS(200), 1,
      sym__simple_identifier,
    ACTIONS(203), 1,
      sym__newline,
    STATE(47), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [738] = 1,
    ACTIONS(205), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [745] = 1,
    ACTIONS(207), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [752] = 1,
    ACTIONS(209), 4,
      anon_sym_RBRACE,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [759] = 1,
    ACTIONS(211), 4,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
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
  [780] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(21), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [788] = 1,
    ACTIONS(217), 3,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
  [794] = 1,
    ACTIONS(219), 3,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
  [800] = 2,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [808] = 2,
    ACTIONS(225), 1,
      sym__simple_identifier,
    STATE(43), 2,
      sym_identifier,
      aux_sym_exclude_statement_repeat1,
  [816] = 2,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [824] = 1,
    ACTIONS(231), 3,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
  [830] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [838] = 1,
    ACTIONS(237), 3,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
  [844] = 2,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [852] = 2,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [860] = 2,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [868] = 2,
    ACTIONS(211), 1,
      sym__newline,
    ACTIONS(249), 2,
      sym__simple_identifier,
      anon_sym_STAR,
  [876] = 2,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [884] = 1,
    ACTIONS(253), 3,
      anon_sym_RBRACE,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
  [890] = 2,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(257), 1,
      sym__newline,
  [897] = 2,
    ACTIONS(181), 1,
      sym__simple_identifier,
    STATE(83), 1,
      sym_identifier,
  [904] = 1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [909] = 2,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym__model_children,
  [916] = 2,
    ACTIONS(263), 1,
      anon_sym_EQ,
    STATE(54), 1,
      sym__assignment_operator,
  [923] = 2,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_string,
  [930] = 1,
    ACTIONS(267), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [935] = 1,
    ACTIONS(177), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [940] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_string,
  [947] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_string,
  [954] = 2,
    ACTIONS(269), 1,
      anon_sym_DASH_GT,
    STATE(40), 1,
      sym__relation_operator,
  [961] = 2,
    ACTIONS(271), 1,
      sym_number,
    ACTIONS(273), 1,
      sym__newline,
  [968] = 2,
    ACTIONS(275), 1,
      sym_number,
    ACTIONS(277), 1,
      sym__newline,
  [975] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_string,
  [982] = 1,
    ACTIONS(279), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [987] = 1,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
  [992] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_string,
  [999] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string,
  [1006] = 2,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
  [1013] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_string,
  [1020] = 1,
    ACTIONS(283), 2,
      anon_sym_RBRACE,
      aux_sym_scope_declaration_token1,
  [1025] = 2,
    ACTIONS(181), 1,
      sym__simple_identifier,
    STATE(77), 1,
      sym_identifier,
  [1032] = 2,
    ACTIONS(181), 1,
      sym__simple_identifier,
    STATE(78), 1,
      sym_identifier,
  [1039] = 2,
    ACTIONS(211), 1,
      sym__newline,
    ACTIONS(249), 1,
      sym__simple_identifier,
  [1046] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_string,
  [1053] = 2,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [1060] = 1,
    ACTIONS(285), 1,
      sym__newline,
  [1064] = 1,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
  [1068] = 1,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [1072] = 1,
    ACTIONS(291), 1,
      sym__newline,
  [1076] = 1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
  [1080] = 1,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
  [1084] = 1,
    ACTIONS(169), 1,
      sym__newline,
  [1088] = 1,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
  [1092] = 1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
  [1096] = 1,
    ACTIONS(301), 1,
      sym__newline,
  [1100] = 1,
    ACTIONS(303), 1,
      sym__simple_identifier,
  [1104] = 1,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
  [1108] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [1112] = 1,
    ACTIONS(309), 1,
      sym__string_content,
  [1116] = 1,
    ACTIONS(311), 1,
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
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 398,
  [SMALL_STATE(19)] = 416,
  [SMALL_STATE(20)] = 425,
  [SMALL_STATE(21)] = 434,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 464,
  [SMALL_STATE(24)] = 473,
  [SMALL_STATE(25)] = 482,
  [SMALL_STATE(26)] = 491,
  [SMALL_STATE(27)] = 500,
  [SMALL_STATE(28)] = 509,
  [SMALL_STATE(29)] = 518,
  [SMALL_STATE(30)] = 528,
  [SMALL_STATE(31)] = 542,
  [SMALL_STATE(32)] = 556,
  [SMALL_STATE(33)] = 570,
  [SMALL_STATE(34)] = 584,
  [SMALL_STATE(35)] = 598,
  [SMALL_STATE(36)] = 612,
  [SMALL_STATE(37)] = 626,
  [SMALL_STATE(38)] = 636,
  [SMALL_STATE(39)] = 649,
  [SMALL_STATE(40)] = 656,
  [SMALL_STATE(41)] = 669,
  [SMALL_STATE(42)] = 680,
  [SMALL_STATE(43)] = 691,
  [SMALL_STATE(44)] = 702,
  [SMALL_STATE(45)] = 713,
  [SMALL_STATE(46)] = 720,
  [SMALL_STATE(47)] = 727,
  [SMALL_STATE(48)] = 738,
  [SMALL_STATE(49)] = 745,
  [SMALL_STATE(50)] = 752,
  [SMALL_STATE(51)] = 759,
  [SMALL_STATE(52)] = 766,
  [SMALL_STATE(53)] = 773,
  [SMALL_STATE(54)] = 780,
  [SMALL_STATE(55)] = 788,
  [SMALL_STATE(56)] = 794,
  [SMALL_STATE(57)] = 800,
  [SMALL_STATE(58)] = 808,
  [SMALL_STATE(59)] = 816,
  [SMALL_STATE(60)] = 824,
  [SMALL_STATE(61)] = 830,
  [SMALL_STATE(62)] = 838,
  [SMALL_STATE(63)] = 844,
  [SMALL_STATE(64)] = 852,
  [SMALL_STATE(65)] = 860,
  [SMALL_STATE(66)] = 868,
  [SMALL_STATE(67)] = 876,
  [SMALL_STATE(68)] = 884,
  [SMALL_STATE(69)] = 890,
  [SMALL_STATE(70)] = 897,
  [SMALL_STATE(71)] = 904,
  [SMALL_STATE(72)] = 909,
  [SMALL_STATE(73)] = 916,
  [SMALL_STATE(74)] = 923,
  [SMALL_STATE(75)] = 930,
  [SMALL_STATE(76)] = 935,
  [SMALL_STATE(77)] = 940,
  [SMALL_STATE(78)] = 947,
  [SMALL_STATE(79)] = 954,
  [SMALL_STATE(80)] = 961,
  [SMALL_STATE(81)] = 968,
  [SMALL_STATE(82)] = 975,
  [SMALL_STATE(83)] = 982,
  [SMALL_STATE(84)] = 987,
  [SMALL_STATE(85)] = 992,
  [SMALL_STATE(86)] = 999,
  [SMALL_STATE(87)] = 1006,
  [SMALL_STATE(88)] = 1013,
  [SMALL_STATE(89)] = 1020,
  [SMALL_STATE(90)] = 1025,
  [SMALL_STATE(91)] = 1032,
  [SMALL_STATE(92)] = 1039,
  [SMALL_STATE(93)] = 1046,
  [SMALL_STATE(94)] = 1053,
  [SMALL_STATE(95)] = 1060,
  [SMALL_STATE(96)] = 1064,
  [SMALL_STATE(97)] = 1068,
  [SMALL_STATE(98)] = 1072,
  [SMALL_STATE(99)] = 1076,
  [SMALL_STATE(100)] = 1080,
  [SMALL_STATE(101)] = 1084,
  [SMALL_STATE(102)] = 1088,
  [SMALL_STATE(103)] = 1092,
  [SMALL_STATE(104)] = 1096,
  [SMALL_STATE(105)] = 1100,
  [SMALL_STATE(106)] = 1104,
  [SMALL_STATE(107)] = 1108,
  [SMALL_STATE(108)] = 1112,
  [SMALL_STATE(109)] = 1116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
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
