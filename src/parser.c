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
  anon_sym_workspace = 1,
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
  anon_sym_BANGidentifiers = 15,
  anon_sym_hierarchical = 16,
  anon_sym_flat = 17,
  anon_sym_model = 18,
  anon_sym_softwaresystem = 19,
  anon_sym_container = 20,
  anon_sym_person = 21,
  anon_sym_tags = 22,
  anon_sym_configuration = 23,
  anon_sym_scope = 24,
  anon_sym_views = 25,
  anon_sym_systemcontext = 26,
  anon_sym_include = 27,
  anon_sym_exclude = 28,
  anon_sym_autolayout = 29,
  anon_sym_lr = 30,
  anon_sym_rl = 31,
  anon_sym_tb = 32,
  anon_sym_bt = 33,
  anon_sym_default = 34,
  anon_sym_description = 35,
  anon_sym_dynamic = 36,
  anon_sym_styles = 37,
  anon_sym_element = 38,
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
  [anon_sym_workspace] = "workspace",
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
  [anon_sym_BANGidentifiers] = "!identifiers",
  [anon_sym_hierarchical] = "hierarchical",
  [anon_sym_flat] = "flat",
  [anon_sym_model] = "model",
  [anon_sym_softwaresystem] = "softwaresystem",
  [anon_sym_container] = "container",
  [anon_sym_person] = "person",
  [anon_sym_tags] = "tags",
  [anon_sym_configuration] = "configuration",
  [anon_sym_scope] = "scope",
  [anon_sym_views] = "views",
  [anon_sym_systemcontext] = "systemcontext",
  [anon_sym_include] = "include",
  [anon_sym_exclude] = "exclude",
  [anon_sym_autolayout] = "autolayout",
  [anon_sym_lr] = "lr",
  [anon_sym_rl] = "rl",
  [anon_sym_tb] = "tb",
  [anon_sym_bt] = "bt",
  [anon_sym_default] = "default",
  [anon_sym_description] = "description",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_styles] = "styles",
  [anon_sym_element] = "element",
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
  [anon_sym_workspace] = anon_sym_workspace,
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
  [anon_sym_BANGidentifiers] = anon_sym_BANGidentifiers,
  [anon_sym_hierarchical] = anon_sym_hierarchical,
  [anon_sym_flat] = anon_sym_flat,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_softwaresystem] = anon_sym_softwaresystem,
  [anon_sym_container] = anon_sym_container,
  [anon_sym_person] = anon_sym_person,
  [anon_sym_tags] = anon_sym_tags,
  [anon_sym_configuration] = anon_sym_configuration,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_views] = anon_sym_views,
  [anon_sym_systemcontext] = anon_sym_systemcontext,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_autolayout] = anon_sym_autolayout,
  [anon_sym_lr] = anon_sym_lr,
  [anon_sym_rl] = anon_sym_rl,
  [anon_sym_tb] = anon_sym_tb,
  [anon_sym_bt] = anon_sym_bt,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_styles] = anon_sym_styles,
  [anon_sym_element] = anon_sym_element,
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
  [anon_sym_workspace] = {
    .visible = true,
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
  [anon_sym_BANGidentifiers] = {
    .visible = true,
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
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_softwaresystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_container] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_person] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_configuration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_views] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_systemcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autolayout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_styles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_element] = {
    .visible = true,
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
  [103] = 103,
  [104] = 34,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 61,
  [115] = 115,
  [116] = 81,
  [117] = 117,
  [118] = 34,
  [119] = 119,
  [120] = 117,
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
  [147] = 117,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 143,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 143,
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
      if (eof) ADVANCE(166);
      ADVANCE_MAP(
        '!', 64,
        '"', 164,
        '#', 163,
        '*', 177,
        '-', 12,
        '.', 176,
        '=', 179,
        'a', 147,
        'b', 133,
        'c', 102,
        'd', 38,
        'e', 81,
        'f', 77,
        'h', 72,
        'i', 100,
        'l', 114,
        'm', 109,
        'p', 46,
        'r', 78,
        's', 27,
        't', 13,
        'v', 67,
        'w', 103,
        '{', 168,
        '}', 169,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '{') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(178);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      ADVANCE_MAP(
        '!', 64,
        '#', 185,
        '/', 8,
        'a', 147,
        'c', 102,
        'd', 38,
        'e', 81,
        'i', 100,
        'm', 109,
        's', 28,
        'v', 67,
        'w', 103,
        '}', 169,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_workspace);
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
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BANGidentifiers);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_softwaresystem);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_person);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_configuration);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_views);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_systemcontext);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_autolayout);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_rl);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_tb);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_bt);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_element);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 165},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 165},
  [11] = {.lex_state = 165},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 165},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 165},
  [19] = {.lex_state = 165},
  [20] = {.lex_state = 165},
  [21] = {.lex_state = 165},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 165},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 165},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 165},
  [28] = {.lex_state = 165},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 165},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 165},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 165},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 165},
  [38] = {.lex_state = 165},
  [39] = {.lex_state = 165},
  [40] = {.lex_state = 165},
  [41] = {.lex_state = 165},
  [42] = {.lex_state = 165},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 165},
  [47] = {.lex_state = 165},
  [48] = {.lex_state = 165},
  [49] = {.lex_state = 165},
  [50] = {.lex_state = 165},
  [51] = {.lex_state = 165},
  [52] = {.lex_state = 165},
  [53] = {.lex_state = 165},
  [54] = {.lex_state = 165},
  [55] = {.lex_state = 165},
  [56] = {.lex_state = 165},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 165},
  [61] = {.lex_state = 165},
  [62] = {.lex_state = 165},
  [63] = {.lex_state = 165},
  [64] = {.lex_state = 165},
  [65] = {.lex_state = 165},
  [66] = {.lex_state = 165},
  [67] = {.lex_state = 165},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 165},
  [70] = {.lex_state = 165},
  [71] = {.lex_state = 165},
  [72] = {.lex_state = 165},
  [73] = {.lex_state = 165},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 165},
  [76] = {.lex_state = 165},
  [77] = {.lex_state = 165},
  [78] = {.lex_state = 165},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 165},
  [82] = {.lex_state = 165},
  [83] = {.lex_state = 165},
  [84] = {.lex_state = 165},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 165},
  [88] = {.lex_state = 165},
  [89] = {.lex_state = 165},
  [90] = {.lex_state = 165},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 165},
  [93] = {.lex_state = 165},
  [94] = {.lex_state = 165},
  [95] = {.lex_state = 165},
  [96] = {.lex_state = 165},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 165},
  [99] = {.lex_state = 165},
  [100] = {.lex_state = 165},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 165},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 165},
  [122] = {.lex_state = 165},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 165},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 165},
  [128] = {.lex_state = 165},
  [129] = {.lex_state = 165},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 165},
  [134] = {.lex_state = 165},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
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
    [anon_sym_workspace] = ACTIONS(1),
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
    [anon_sym_BANGidentifiers] = ACTIONS(1),
    [anon_sym_hierarchical] = ACTIONS(1),
    [anon_sym_flat] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_softwaresystem] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_person] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_configuration] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_views] = ACTIONS(1),
    [anon_sym_systemcontext] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_autolayout] = ACTIONS(1),
    [anon_sym_lr] = ACTIONS(1),
    [anon_sym_rl] = ACTIONS(1),
    [anon_sym_tb] = ACTIONS(1),
    [anon_sym_bt] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [anon_sym_element] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(172),
    [sym_workspace_declaration] = STATE(100),
    [aux_sym_dsl_repeat1] = STATE(100),
    [anon_sym_workspace] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(21), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(23), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(25), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(27), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(29), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(31), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(33), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
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
  [297] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
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
  [330] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(39), 1,
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
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_include,
    ACTIONS(49), 1,
      anon_sym_exclude,
    ACTIONS(52), 1,
      anon_sym_autolayout,
    ACTIONS(55), 1,
      anon_sym_default,
    ACTIONS(58), 1,
      anon_sym_description,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(61), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(63), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(65), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(67), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(69), 1,
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
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
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
  [594] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(73), 1,
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
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(83), 1,
      anon_sym_model,
    ACTIONS(86), 1,
      anon_sym_configuration,
    ACTIONS(89), 1,
      anon_sym_views,
    STATE(21), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(84), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [656] = 8,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(98), 1,
      anon_sym_model,
    ACTIONS(100), 1,
      anon_sym_configuration,
    ACTIONS(102), 1,
      anon_sym_views,
    STATE(21), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(84), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [685] = 8,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_container,
    ACTIONS(110), 1,
      anon_sym_systemcontext,
    ACTIONS(112), 1,
      anon_sym_dynamic,
    ACTIONS(114), 1,
      anon_sym_styles,
    STATE(25), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(73), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [714] = 8,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      sym__simple_identifier,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_tags,
    STATE(109), 1,
      sym_identifier,
    STATE(142), 1,
      sym_dotted_identifier,
    STATE(153), 1,
      sym_relation_identifier,
    STATE(26), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [743] = 8,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_container,
    ACTIONS(110), 1,
      anon_sym_systemcontext,
    ACTIONS(112), 1,
      anon_sym_dynamic,
    ACTIONS(114), 1,
      anon_sym_styles,
    ACTIONS(124), 1,
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
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      sym__simple_identifier,
    ACTIONS(131), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_tags,
    STATE(109), 1,
      sym_identifier,
    STATE(142), 1,
      sym_dotted_identifier,
    STATE(153), 1,
      sym_relation_identifier,
    STATE(26), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [801] = 8,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_container,
    ACTIONS(145), 1,
      anon_sym_systemcontext,
    ACTIONS(148), 1,
      anon_sym_dynamic,
    ACTIONS(151), 1,
      anon_sym_styles,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(73), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [830] = 8,
    ACTIONS(94), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(98), 1,
      anon_sym_model,
    ACTIONS(100), 1,
      anon_sym_configuration,
    ACTIONS(102), 1,
      anon_sym_views,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(84), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [859] = 8,
    ACTIONS(118), 1,
      sym__simple_identifier,
    ACTIONS(122), 1,
      anon_sym_tags,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      sym_comment,
    STATE(109), 1,
      sym_identifier,
    STATE(142), 1,
      sym_dotted_identifier,
    STATE(153), 1,
      sym_relation_identifier,
    STATE(24), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [888] = 8,
    ACTIONS(94), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(98), 1,
      anon_sym_model,
    ACTIONS(100), 1,
      anon_sym_configuration,
    ACTIONS(102), 1,
      anon_sym_views,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(84), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [917] = 8,
    ACTIONS(118), 1,
      sym__simple_identifier,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_tags,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_identifier,
    STATE(142), 1,
      sym_dotted_identifier,
    STATE(153), 1,
      sym_relation_identifier,
    STATE(26), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [946] = 8,
    ACTIONS(94), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(98), 1,
      anon_sym_model,
    ACTIONS(100), 1,
      anon_sym_configuration,
    ACTIONS(102), 1,
      anon_sym_views,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(84), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [975] = 8,
    ACTIONS(118), 1,
      sym__simple_identifier,
    ACTIONS(122), 1,
      anon_sym_tags,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      sym_comment,
    STATE(109), 1,
      sym_identifier,
    STATE(142), 1,
      sym_dotted_identifier,
    STATE(153), 1,
      sym_relation_identifier,
    STATE(31), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [1004] = 2,
    ACTIONS(170), 1,
      aux_sym_color_token1,
    ACTIONS(168), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [1018] = 1,
    ACTIONS(172), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1028] = 6,
    ACTIONS(174), 1,
      sym__simple_identifier,
    ACTIONS(177), 1,
      sym_wildcard_identifier,
    ACTIONS(180), 1,
      sym__newline,
    ACTIONS(182), 1,
      sym_comment,
    STATE(101), 1,
      sym_identifier,
    STATE(36), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1048] = 1,
    ACTIONS(184), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1058] = 1,
    ACTIONS(186), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1068] = 1,
    ACTIONS(188), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1078] = 1,
    ACTIONS(190), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1088] = 1,
    ACTIONS(192), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1098] = 1,
    ACTIONS(194), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1108] = 4,
    ACTIONS(196), 1,
      anon_sym_softwaresystem,
    ACTIONS(198), 1,
      anon_sym_container,
    ACTIONS(200), 1,
      anon_sym_person,
    STATE(106), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [1124] = 5,
    ACTIONS(204), 1,
      sym__simple_identifier,
    ACTIONS(206), 1,
      aux_sym_color_token1,
    ACTIONS(208), 1,
      aux_sym_color_token2,
    ACTIONS(202), 2,
      sym_number,
      sym_string,
    STATE(140), 2,
      sym_identifier,
      sym_color,
  [1142] = 6,
    ACTIONS(210), 1,
      sym__simple_identifier,
    ACTIONS(212), 1,
      sym_wildcard_identifier,
    ACTIONS(214), 1,
      sym__newline,
    ACTIONS(216), 1,
      sym_comment,
    STATE(101), 1,
      sym_identifier,
    STATE(36), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1162] = 1,
    ACTIONS(218), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1172] = 1,
    ACTIONS(220), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1182] = 1,
    ACTIONS(222), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1192] = 1,
    ACTIONS(224), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1202] = 1,
    ACTIONS(226), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1212] = 1,
    ACTIONS(228), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1222] = 1,
    ACTIONS(230), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1232] = 1,
    ACTIONS(232), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1242] = 1,
    ACTIONS(234), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1251] = 1,
    ACTIONS(236), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1260] = 5,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_element,
    STATE(127), 1,
      sym_element_declaration,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1277] = 4,
    ACTIONS(246), 1,
      sym_string,
    STATE(57), 1,
      aux_sym_tags_declaration_repeat1,
    ACTIONS(244), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(249), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1292] = 4,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym__model_children,
    ACTIONS(253), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(255), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1307] = 4,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym__model_children,
    ACTIONS(257), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(259), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1322] = 1,
    ACTIONS(261), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1331] = 1,
    ACTIONS(263), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1340] = 1,
    ACTIONS(265), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1349] = 1,
    ACTIONS(267), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1358] = 1,
    ACTIONS(269), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1367] = 1,
    ACTIONS(271), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1376] = 5,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_element,
    STATE(127), 1,
      sym_element_declaration,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1393] = 1,
    ACTIONS(281), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1402] = 5,
    ACTIONS(283), 1,
      sym__simple_identifier,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(287), 1,
      sym_comment,
    STATE(113), 1,
      sym_identifier,
    STATE(80), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1419] = 1,
    ACTIONS(289), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1428] = 5,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_scope,
    STATE(134), 1,
      sym_scope_declaration,
    STATE(90), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1445] = 1,
    ACTIONS(297), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1454] = 1,
    ACTIONS(299), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1463] = 1,
    ACTIONS(301), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1472] = 4,
    ACTIONS(305), 1,
      sym_string,
    STATE(57), 1,
      aux_sym_tags_declaration_repeat1,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(307), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1487] = 1,
    ACTIONS(309), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1496] = 1,
    ACTIONS(311), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1505] = 1,
    ACTIONS(313), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1514] = 1,
    ACTIONS(315), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1523] = 5,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      sym__simple_identifier,
    ACTIONS(321), 1,
      sym_comment,
    STATE(44), 1,
      sym_identifier,
    STATE(91), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1540] = 5,
    ACTIONS(323), 1,
      sym__simple_identifier,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(328), 1,
      sym_comment,
    STATE(113), 1,
      sym_identifier,
    STATE(80), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1557] = 1,
    ACTIONS(330), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1566] = 1,
    ACTIONS(332), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1575] = 1,
    ACTIONS(334), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1584] = 1,
    ACTIONS(336), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1593] = 1,
    ACTIONS(338), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1602] = 1,
    ACTIONS(340), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1611] = 1,
    ACTIONS(342), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1620] = 1,
    ACTIONS(344), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1629] = 1,
    ACTIONS(346), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1638] = 5,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_scope,
    STATE(134), 1,
      sym_scope_declaration,
    STATE(90), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1655] = 5,
    ACTIONS(319), 1,
      sym__simple_identifier,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      sym_comment,
    STATE(44), 1,
      sym_identifier,
    STATE(97), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1672] = 5,
    ACTIONS(240), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_element,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_element_declaration,
    STATE(56), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1689] = 1,
    ACTIONS(362), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1698] = 1,
    ACTIONS(364), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1707] = 1,
    ACTIONS(366), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1716] = 1,
    ACTIONS(368), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1725] = 5,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    ACTIONS(372), 1,
      sym__simple_identifier,
    ACTIONS(375), 1,
      sym_comment,
    STATE(44), 1,
      sym_identifier,
    STATE(97), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1742] = 5,
    ACTIONS(293), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_scope,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_scope_declaration,
    STATE(70), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1759] = 1,
    ACTIONS(380), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1768] = 4,
    ACTIONS(3), 1,
      anon_sym_workspace,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      sym_comment,
    STATE(102), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1782] = 3,
    ACTIONS(388), 1,
      anon_sym_DOT,
    ACTIONS(390), 1,
      sym__newline,
    ACTIONS(386), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1794] = 4,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      anon_sym_workspace,
    ACTIONS(397), 1,
      sym_comment,
    STATE(102), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1808] = 4,
    ACTIONS(210), 1,
      sym__simple_identifier,
    ACTIONS(400), 1,
      sym_wildcard_identifier,
    STATE(101), 1,
      sym_identifier,
    STATE(45), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1822] = 2,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(170), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [1832] = 2,
    STATE(126), 1,
      sym_autolayout_value,
    ACTIONS(402), 4,
      anon_sym_lr,
      anon_sym_rl,
      anon_sym_tb,
      anon_sym_bt,
  [1842] = 2,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(406), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1851] = 4,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(142), 1,
      sym_dotted_identifier,
    STATE(158), 1,
      sym_identifier,
    STATE(170), 1,
      sym_relation_identifier,
  [1864] = 2,
    ACTIONS(408), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(410), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1873] = 4,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    STATE(43), 1,
      sym__assignment_operator,
  [1886] = 2,
    ACTIONS(418), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(420), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1895] = 2,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(424), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1904] = 2,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(428), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1913] = 3,
    ACTIONS(432), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      sym__newline,
    ACTIONS(430), 2,
      sym__simple_identifier,
      sym_comment,
  [1924] = 2,
    ACTIONS(263), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(436), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1933] = 3,
    ACTIONS(438), 1,
      sym__simple_identifier,
    STATE(113), 1,
      sym_identifier,
    STATE(68), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1944] = 2,
    ACTIONS(330), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(440), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [1953] = 2,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(442), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1962] = 2,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(170), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [1971] = 2,
    STATE(78), 1,
      sym_identifiers_value,
    ACTIONS(446), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [1979] = 2,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(442), 2,
      sym__simple_identifier,
      sym_comment,
  [1987] = 1,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [1993] = 1,
    ACTIONS(450), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [1999] = 3,
    ACTIONS(118), 1,
      sym__simple_identifier,
    ACTIONS(452), 1,
      sym_wildcard_identifier,
    STATE(150), 1,
      sym_identifier,
  [2009] = 1,
    ACTIONS(454), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2015] = 2,
    ACTIONS(458), 1,
      sym__newline,
    ACTIONS(456), 2,
      sym_number,
      sym_comment,
  [2023] = 3,
    ACTIONS(460), 1,
      sym_number,
    ACTIONS(462), 1,
      sym__newline,
    ACTIONS(464), 1,
      sym_comment,
  [2033] = 1,
    ACTIONS(466), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2039] = 1,
    ACTIONS(468), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2045] = 1,
    ACTIONS(470), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2051] = 1,
    ACTIONS(472), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2057] = 1,
    ACTIONS(474), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2063] = 3,
    ACTIONS(476), 1,
      sym_number,
    ACTIONS(478), 1,
      sym__newline,
    ACTIONS(480), 1,
      sym_comment,
  [2073] = 1,
    ACTIONS(482), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2079] = 1,
    ACTIONS(484), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [2085] = 2,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(148), 1,
      sym_identifier,
  [2092] = 2,
    ACTIONS(486), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym__assignment_operator,
  [2099] = 2,
    ACTIONS(488), 1,
      sym__newline,
    ACTIONS(490), 1,
      sym_comment,
  [2106] = 2,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      sym_string,
  [2113] = 2,
    ACTIONS(496), 1,
      sym_string,
    STATE(74), 1,
      aux_sym_tags_declaration_repeat1,
  [2120] = 2,
    ACTIONS(498), 1,
      sym__newline,
    ACTIONS(500), 1,
      sym_comment,
  [2127] = 2,
    ACTIONS(502), 1,
      sym__newline,
    ACTIONS(504), 1,
      sym_comment,
  [2134] = 1,
    ACTIONS(416), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2139] = 2,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(147), 1,
      sym_identifier,
  [2146] = 2,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(508), 1,
      sym_string,
  [2153] = 2,
    ACTIONS(510), 1,
      sym__newline,
    ACTIONS(512), 1,
      sym_comment,
  [2160] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      sym_string,
  [2167] = 1,
    ACTIONS(444), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2172] = 2,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    ACTIONS(520), 1,
      sym_string,
  [2179] = 2,
    ACTIONS(522), 1,
      sym__newline,
    ACTIONS(524), 1,
      sym_comment,
  [2186] = 2,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      sym_string,
  [2193] = 2,
    ACTIONS(204), 1,
      sym__simple_identifier,
    STATE(117), 1,
      sym_identifier,
  [2200] = 2,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(146), 1,
      sym_identifier,
  [2207] = 2,
    ACTIONS(530), 1,
      anon_sym_DASH_GT,
    STATE(107), 1,
      sym__relation_operator,
  [2214] = 2,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym__model_children,
  [2221] = 2,
    ACTIONS(438), 1,
      sym__simple_identifier,
    STATE(120), 1,
      sym_identifier,
  [2228] = 2,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    ACTIONS(536), 1,
      sym_string,
  [2235] = 2,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 1,
      sym_string,
  [2242] = 2,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym_string,
  [2249] = 1,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
  [2253] = 1,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
  [2257] = 1,
    ACTIONS(546), 1,
      sym_string,
  [2261] = 1,
    ACTIONS(548), 1,
      sym__newline,
  [2265] = 1,
    ACTIONS(550), 1,
      sym_string,
  [2269] = 1,
    ACTIONS(552), 1,
      sym_string,
  [2273] = 1,
    ACTIONS(554), 1,
      sym_string,
  [2277] = 1,
    ACTIONS(556), 1,
      sym__simple_identifier,
  [2281] = 1,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
  [2285] = 1,
    ACTIONS(560), 1,
      sym__newline,
  [2289] = 1,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [2293] = 1,
    ACTIONS(564), 1,
      sym_string,
  [2297] = 1,
    ACTIONS(566), 1,
      sym__newline,
  [2301] = 1,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
  [2305] = 1,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [2309] = 1,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
  [2313] = 1,
    ACTIONS(574), 1,
      sym__newline,
  [2317] = 1,
    ACTIONS(576), 1,
      sym__newline,
  [2321] = 1,
    ACTIONS(578), 1,
      sym_string,
  [2325] = 1,
    ACTIONS(580), 1,
      sym__newline,
  [2329] = 1,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
  [2333] = 1,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
  [2337] = 1,
    ACTIONS(586), 1,
      sym__newline,
  [2341] = 1,
    ACTIONS(588), 1,
      sym_string,
  [2345] = 1,
    ACTIONS(590), 1,
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
  [SMALL_STATE(75)] = 1487,
  [SMALL_STATE(76)] = 1496,
  [SMALL_STATE(77)] = 1505,
  [SMALL_STATE(78)] = 1514,
  [SMALL_STATE(79)] = 1523,
  [SMALL_STATE(80)] = 1540,
  [SMALL_STATE(81)] = 1557,
  [SMALL_STATE(82)] = 1566,
  [SMALL_STATE(83)] = 1575,
  [SMALL_STATE(84)] = 1584,
  [SMALL_STATE(85)] = 1593,
  [SMALL_STATE(86)] = 1602,
  [SMALL_STATE(87)] = 1611,
  [SMALL_STATE(88)] = 1620,
  [SMALL_STATE(89)] = 1629,
  [SMALL_STATE(90)] = 1638,
  [SMALL_STATE(91)] = 1655,
  [SMALL_STATE(92)] = 1672,
  [SMALL_STATE(93)] = 1689,
  [SMALL_STATE(94)] = 1698,
  [SMALL_STATE(95)] = 1707,
  [SMALL_STATE(96)] = 1716,
  [SMALL_STATE(97)] = 1725,
  [SMALL_STATE(98)] = 1742,
  [SMALL_STATE(99)] = 1759,
  [SMALL_STATE(100)] = 1768,
  [SMALL_STATE(101)] = 1782,
  [SMALL_STATE(102)] = 1794,
  [SMALL_STATE(103)] = 1808,
  [SMALL_STATE(104)] = 1822,
  [SMALL_STATE(105)] = 1832,
  [SMALL_STATE(106)] = 1842,
  [SMALL_STATE(107)] = 1851,
  [SMALL_STATE(108)] = 1864,
  [SMALL_STATE(109)] = 1873,
  [SMALL_STATE(110)] = 1886,
  [SMALL_STATE(111)] = 1895,
  [SMALL_STATE(112)] = 1904,
  [SMALL_STATE(113)] = 1913,
  [SMALL_STATE(114)] = 1924,
  [SMALL_STATE(115)] = 1933,
  [SMALL_STATE(116)] = 1944,
  [SMALL_STATE(117)] = 1953,
  [SMALL_STATE(118)] = 1962,
  [SMALL_STATE(119)] = 1971,
  [SMALL_STATE(120)] = 1979,
  [SMALL_STATE(121)] = 1987,
  [SMALL_STATE(122)] = 1993,
  [SMALL_STATE(123)] = 1999,
  [SMALL_STATE(124)] = 2009,
  [SMALL_STATE(125)] = 2015,
  [SMALL_STATE(126)] = 2023,
  [SMALL_STATE(127)] = 2033,
  [SMALL_STATE(128)] = 2039,
  [SMALL_STATE(129)] = 2045,
  [SMALL_STATE(130)] = 2051,
  [SMALL_STATE(131)] = 2057,
  [SMALL_STATE(132)] = 2063,
  [SMALL_STATE(133)] = 2073,
  [SMALL_STATE(134)] = 2079,
  [SMALL_STATE(135)] = 2085,
  [SMALL_STATE(136)] = 2092,
  [SMALL_STATE(137)] = 2099,
  [SMALL_STATE(138)] = 2106,
  [SMALL_STATE(139)] = 2113,
  [SMALL_STATE(140)] = 2120,
  [SMALL_STATE(141)] = 2127,
  [SMALL_STATE(142)] = 2134,
  [SMALL_STATE(143)] = 2139,
  [SMALL_STATE(144)] = 2146,
  [SMALL_STATE(145)] = 2153,
  [SMALL_STATE(146)] = 2160,
  [SMALL_STATE(147)] = 2167,
  [SMALL_STATE(148)] = 2172,
  [SMALL_STATE(149)] = 2179,
  [SMALL_STATE(150)] = 2186,
  [SMALL_STATE(151)] = 2193,
  [SMALL_STATE(152)] = 2200,
  [SMALL_STATE(153)] = 2207,
  [SMALL_STATE(154)] = 2214,
  [SMALL_STATE(155)] = 2221,
  [SMALL_STATE(156)] = 2228,
  [SMALL_STATE(157)] = 2235,
  [SMALL_STATE(158)] = 2242,
  [SMALL_STATE(159)] = 2249,
  [SMALL_STATE(160)] = 2253,
  [SMALL_STATE(161)] = 2257,
  [SMALL_STATE(162)] = 2261,
  [SMALL_STATE(163)] = 2265,
  [SMALL_STATE(164)] = 2269,
  [SMALL_STATE(165)] = 2273,
  [SMALL_STATE(166)] = 2277,
  [SMALL_STATE(167)] = 2281,
  [SMALL_STATE(168)] = 2285,
  [SMALL_STATE(169)] = 2289,
  [SMALL_STATE(170)] = 2293,
  [SMALL_STATE(171)] = 2297,
  [SMALL_STATE(172)] = 2301,
  [SMALL_STATE(173)] = 2305,
  [SMALL_STATE(174)] = 2309,
  [SMALL_STATE(175)] = 2313,
  [SMALL_STATE(176)] = 2317,
  [SMALL_STATE(177)] = 2321,
  [SMALL_STATE(178)] = 2325,
  [SMALL_STATE(179)] = 2329,
  [SMALL_STATE(180)] = 2333,
  [SMALL_STATE(181)] = 2337,
  [SMALL_STATE(182)] = 2341,
  [SMALL_STATE(183)] = 2345,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 13),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 14),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 13),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 14),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 7),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 8),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 8),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 8),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 10),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 8),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 10),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 9),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 11),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 10),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 11),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 12),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 12),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 15),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 15),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [568] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
