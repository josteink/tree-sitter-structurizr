#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_tag = 22,
  anon_sym_tags = 23,
  anon_sym_configuration = 24,
  anon_sym_scope = 25,
  anon_sym_views = 26,
  anon_sym_systemcontext = 27,
  anon_sym_include = 28,
  anon_sym_exclude = 29,
  anon_sym_autolayout = 30,
  anon_sym_lr = 31,
  anon_sym_rl = 32,
  anon_sym_tb = 33,
  anon_sym_bt = 34,
  anon_sym_default = 35,
  anon_sym_description = 36,
  anon_sym_dynamic = 37,
  anon_sym_styles = 38,
  anon_sym_element = 39,
  sym_dsl = 40,
  sym_workspace_declaration = 41,
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
  sym_tag_declaration = 60,
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
  aux_sym_software_system_declaration_repeat1 = 84,
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
  [anon_sym_tag] = "tag",
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
  [sym_tag_declaration] = "tag_declaration",
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
  [aux_sym_software_system_declaration_repeat1] = "software_system_declaration_repeat1",
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
  [anon_sym_tag] = anon_sym_tag,
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
  [sym_tag_declaration] = sym_tag_declaration,
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
  [aux_sym_software_system_declaration_repeat1] = aux_sym_software_system_declaration_repeat1,
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
  [anon_sym_tag] = {
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
  [sym_tag_declaration] = {
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
  [aux_sym_software_system_declaration_repeat1] = {
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
  field_tags = 12,
  field_target = 13,
  field_value = 14,
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
  [field_tags] = "tags",
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
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 2},
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
    {field_name, 1},
  [6] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
  [9] =
    {field_context, 1},
  [10] =
    {field_scope, 1},
  [11] =
    {field_description, 2},
    {field_name, 1},
  [13] =
    {field_context, 1},
    {field_key, 2},
  [15] =
    {field_key, 2},
    {field_scope, 1},
  [17] =
    {field_description, 2},
    {field_name, 1},
    {field_tags, 3},
  [20] =
    {field_context, 1},
    {field_description, 3},
    {field_key, 2},
  [23] =
    {field_description, 3},
    {field_key, 2},
    {field_scope, 1},
  [26] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [28] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
    {field_value, 1},
  [31] =
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
  [24] = 14,
  [25] = 7,
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
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 79,
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
  [125] = 86,
  [126] = 40,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 40,
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
  [148] = 130,
  [149] = 149,
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
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 130,
  [170] = 163,
  [171] = 163,
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
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '!', 64,
        '"', 163,
        '#', 162,
        '*', 175,
        '-', 12,
        '.', 174,
        '=', 177,
        'a', 146,
        'b', 132,
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
        '{', 167,
        '}', 168,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '{') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '}') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(133);
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
      if (lookahead == 'a') ADVANCE(145);
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
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'y') ADVANCE(129);
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
      if (lookahead == 'e') ADVANCE(152);
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
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(154);
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
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(128);
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
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(148);
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
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(189);
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
      if (lookahead == 'n') ADVANCE(191);
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
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(143);
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
      if (lookahead == 'o') ADVANCE(149);
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
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(130);
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
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 152:
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
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
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '!', 64,
        '#', 183,
        '/', 8,
        'a', 146,
        'c', 102,
        'd', 38,
        'e', 81,
        'i', 100,
        'm', 109,
        's', 28,
        'v', 67,
        'w', 103,
        '}', 168,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANGidentifiers);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_softwaresystem);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_person);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
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
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 164},
  [5] = {.lex_state = 164},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 164},
  [9] = {.lex_state = 164},
  [10] = {.lex_state = 164},
  [11] = {.lex_state = 164},
  [12] = {.lex_state = 164},
  [13] = {.lex_state = 164},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 164},
  [16] = {.lex_state = 164},
  [17] = {.lex_state = 164},
  [18] = {.lex_state = 164},
  [19] = {.lex_state = 164},
  [20] = {.lex_state = 164},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 164},
  [23] = {.lex_state = 164},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 164},
  [28] = {.lex_state = 164},
  [29] = {.lex_state = 164},
  [30] = {.lex_state = 164},
  [31] = {.lex_state = 164},
  [32] = {.lex_state = 164},
  [33] = {.lex_state = 164},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 164},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 164},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 164},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 164},
  [53] = {.lex_state = 164},
  [54] = {.lex_state = 164},
  [55] = {.lex_state = 164},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 164},
  [58] = {.lex_state = 164},
  [59] = {.lex_state = 164},
  [60] = {.lex_state = 164},
  [61] = {.lex_state = 164},
  [62] = {.lex_state = 164},
  [63] = {.lex_state = 164},
  [64] = {.lex_state = 164},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 164},
  [67] = {.lex_state = 164},
  [68] = {.lex_state = 164},
  [69] = {.lex_state = 164},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 164},
  [72] = {.lex_state = 164},
  [73] = {.lex_state = 164},
  [74] = {.lex_state = 164},
  [75] = {.lex_state = 164},
  [76] = {.lex_state = 164},
  [77] = {.lex_state = 164},
  [78] = {.lex_state = 164},
  [79] = {.lex_state = 164},
  [80] = {.lex_state = 164},
  [81] = {.lex_state = 164},
  [82] = {.lex_state = 164},
  [83] = {.lex_state = 164},
  [84] = {.lex_state = 164},
  [85] = {.lex_state = 164},
  [86] = {.lex_state = 164},
  [87] = {.lex_state = 164},
  [88] = {.lex_state = 164},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 164},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 164},
  [93] = {.lex_state = 164},
  [94] = {.lex_state = 164},
  [95] = {.lex_state = 164},
  [96] = {.lex_state = 164},
  [97] = {.lex_state = 164},
  [98] = {.lex_state = 164},
  [99] = {.lex_state = 164},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 164},
  [102] = {.lex_state = 164},
  [103] = {.lex_state = 164},
  [104] = {.lex_state = 164},
  [105] = {.lex_state = 164},
  [106] = {.lex_state = 164},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 164},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 164},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 164},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 164},
  [138] = {.lex_state = 164},
  [139] = {.lex_state = 164},
  [140] = {.lex_state = 164},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 164},
  [143] = {.lex_state = 164},
  [144] = {.lex_state = 164},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
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
    [anon_sym_tag] = ACTIONS(1),
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
    [sym_dsl] = STATE(196),
    [sym_workspace_declaration] = STATE(112),
    [aux_sym_dsl_repeat1] = STATE(112),
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    STATE(16), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    STATE(11), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    STATE(2), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [132] = 9,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym__simple_identifier,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_tag,
    ACTIONS(38), 1,
      anon_sym_tags,
    STATE(129), 1,
      sym_identifier,
    STATE(155), 1,
      sym_relation_identifier,
    STATE(168), 1,
      sym_dotted_identifier,
    STATE(6), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [165] = 9,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    STATE(129), 1,
      sym_identifier,
    STATE(155), 1,
      sym_relation_identifier,
    STATE(168), 1,
      sym_dotted_identifier,
    STATE(6), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
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
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [363] = 9,
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [396] = 9,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_comment,
    STATE(129), 1,
      sym_identifier,
    STATE(155), 1,
      sym_relation_identifier,
    STATE(168), 1,
      sym_dotted_identifier,
    STATE(7), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [429] = 9,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_include,
    ACTIONS(75), 1,
      anon_sym_exclude,
    ACTIONS(78), 1,
      anon_sym_autolayout,
    ACTIONS(81), 1,
      anon_sym_default,
    ACTIONS(84), 1,
      anon_sym_description,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
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
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [627] = 9,
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
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [660] = 9,
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
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [693] = 9,
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
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(45), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [726] = 9,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym_comment,
    STATE(129), 1,
      sym_identifier,
    STATE(155), 1,
      sym_relation_identifier,
    STATE(168), 1,
      sym_dotted_identifier,
    STATE(25), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [759] = 9,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_identifier,
    STATE(155), 1,
      sym_relation_identifier,
    STATE(168), 1,
      sym_dotted_identifier,
    STATE(6), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [792] = 8,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [821] = 8,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_container,
    ACTIONS(129), 1,
      anon_sym_systemcontext,
    ACTIONS(132), 1,
      anon_sym_dynamic,
    ACTIONS(135), 1,
      anon_sym_styles,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(72), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [850] = 8,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(146), 1,
      anon_sym_model,
    ACTIONS(149), 1,
      anon_sym_configuration,
    ACTIONS(152), 1,
      anon_sym_views,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [879] = 8,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_container,
    ACTIONS(161), 1,
      anon_sym_systemcontext,
    ACTIONS(163), 1,
      anon_sym_dynamic,
    ACTIONS(165), 1,
      anon_sym_styles,
    STATE(30), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(72), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [908] = 8,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_container,
    ACTIONS(161), 1,
      anon_sym_systemcontext,
    ACTIONS(163), 1,
      anon_sym_dynamic,
    ACTIONS(165), 1,
      anon_sym_styles,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(72), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [937] = 8,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [966] = 8,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [995] = 8,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(83), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [1024] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_string,
    STATE(37), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(116), 1,
      sym__model_children,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(179), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1046] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(124), 1,
      sym__model_children,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(185), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1068] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(122), 1,
      sym__model_children,
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(189), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1090] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(123), 1,
      sym__model_children,
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(193), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1112] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_string,
    STATE(35), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(117), 1,
      sym__model_children,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(199), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1134] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_string,
    STATE(36), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(115), 1,
      sym__model_children,
    ACTIONS(201), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(205), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1156] = 2,
    ACTIONS(209), 1,
      aux_sym_color_token1,
    ACTIONS(207), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [1170] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      sym_string,
    STATE(107), 1,
      sym__model_children,
    ACTIONS(211), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(215), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1189] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_string,
    STATE(111), 1,
      sym__model_children,
    ACTIONS(217), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(221), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1208] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      sym_string,
    STATE(109), 1,
      sym__model_children,
    ACTIONS(223), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(227), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1227] = 4,
    ACTIONS(231), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(229), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(234), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1244] = 1,
    ACTIONS(236), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1254] = 4,
    ACTIONS(183), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(238), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(240), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1270] = 1,
    ACTIONS(242), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1280] = 6,
    ACTIONS(244), 1,
      sym__simple_identifier,
    ACTIONS(246), 1,
      sym_wildcard_identifier,
    ACTIONS(248), 1,
      sym__newline,
    ACTIONS(250), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(51), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1300] = 4,
    ACTIONS(252), 1,
      anon_sym_softwaresystem,
    ACTIONS(254), 1,
      anon_sym_container,
    ACTIONS(256), 1,
      anon_sym_person,
    STATE(114), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [1316] = 1,
    ACTIONS(258), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1326] = 6,
    ACTIONS(260), 1,
      sym__simple_identifier,
    ACTIONS(263), 1,
      sym_wildcard_identifier,
    ACTIONS(266), 1,
      sym__newline,
    ACTIONS(268), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(51), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1346] = 1,
    ACTIONS(270), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1356] = 1,
    ACTIONS(272), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1366] = 1,
    ACTIONS(274), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1376] = 1,
    ACTIONS(276), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1386] = 5,
    ACTIONS(280), 1,
      sym__simple_identifier,
    ACTIONS(282), 1,
      aux_sym_color_token1,
    ACTIONS(284), 1,
      aux_sym_color_token2,
    ACTIONS(278), 2,
      sym_number,
      sym_string,
    STATE(164), 2,
      sym_identifier,
      sym_color,
  [1404] = 1,
    ACTIONS(286), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1414] = 1,
    ACTIONS(288), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1424] = 1,
    ACTIONS(290), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1434] = 1,
    ACTIONS(292), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1444] = 1,
    ACTIONS(294), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1454] = 1,
    ACTIONS(296), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1464] = 1,
    ACTIONS(298), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1474] = 1,
    ACTIONS(300), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1484] = 5,
    ACTIONS(302), 1,
      sym__simple_identifier,
    ACTIONS(305), 1,
      sym__newline,
    ACTIONS(307), 1,
      sym_comment,
    STATE(127), 1,
      sym_identifier,
    STATE(65), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1501] = 1,
    ACTIONS(309), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1510] = 1,
    ACTIONS(311), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1519] = 1,
    ACTIONS(313), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1528] = 1,
    ACTIONS(315), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1537] = 5,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      sym__simple_identifier,
    ACTIONS(321), 1,
      sym_comment,
    STATE(56), 1,
      sym_identifier,
    STATE(91), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1554] = 1,
    ACTIONS(323), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1563] = 1,
    ACTIONS(325), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1572] = 5,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_scope,
    STATE(137), 1,
      sym_scope_declaration,
    STATE(90), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1589] = 1,
    ACTIONS(333), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1598] = 5,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_element,
    STATE(139), 1,
      sym_element_declaration,
    STATE(75), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1615] = 1,
    ACTIONS(343), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1624] = 1,
    ACTIONS(345), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1633] = 1,
    ACTIONS(347), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1642] = 1,
    ACTIONS(349), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1651] = 1,
    ACTIONS(351), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1660] = 1,
    ACTIONS(353), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1669] = 1,
    ACTIONS(355), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1678] = 1,
    ACTIONS(357), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1687] = 1,
    ACTIONS(359), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1696] = 1,
    ACTIONS(361), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1705] = 1,
    ACTIONS(363), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1714] = 1,
    ACTIONS(365), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1723] = 1,
    ACTIONS(367), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1732] = 5,
    ACTIONS(369), 1,
      sym__simple_identifier,
    ACTIONS(371), 1,
      sym__newline,
    ACTIONS(373), 1,
      sym_comment,
    STATE(127), 1,
      sym_identifier,
    STATE(65), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1749] = 5,
    ACTIONS(329), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_scope,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_scope_declaration,
    STATE(96), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1766] = 5,
    ACTIONS(319), 1,
      sym__simple_identifier,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      sym_comment,
    STATE(56), 1,
      sym_identifier,
    STATE(100), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1783] = 1,
    ACTIONS(381), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1792] = 1,
    ACTIONS(383), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1801] = 1,
    ACTIONS(385), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1810] = 1,
    ACTIONS(387), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1819] = 5,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    ACTIONS(391), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_scope,
    STATE(137), 1,
      sym_scope_declaration,
    STATE(96), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1836] = 1,
    ACTIONS(397), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1845] = 1,
    ACTIONS(399), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1854] = 1,
    ACTIONS(401), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1863] = 5,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      sym__simple_identifier,
    ACTIONS(408), 1,
      sym_comment,
    STATE(56), 1,
      sym_identifier,
    STATE(100), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1880] = 1,
    ACTIONS(411), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1889] = 1,
    ACTIONS(413), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1898] = 5,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_element,
    STATE(139), 1,
      sym_element_declaration,
    STATE(105), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1915] = 1,
    ACTIONS(421), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1924] = 5,
    ACTIONS(417), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_element,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym_element_declaration,
    STATE(75), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1941] = 1,
    ACTIONS(425), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1950] = 2,
    ACTIONS(427), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(429), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1960] = 2,
    ACTIONS(349), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(431), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1970] = 2,
    ACTIONS(433), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(435), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1980] = 3,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(441), 1,
      sym__newline,
    ACTIONS(437), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1992] = 2,
    ACTIONS(443), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(445), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2002] = 4,
    ACTIONS(3), 1,
      anon_sym_workspace,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(449), 1,
      sym_comment,
    STATE(118), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2016] = 2,
    ACTIONS(451), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(453), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2026] = 2,
    ACTIONS(455), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(457), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2036] = 2,
    ACTIONS(459), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(461), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2046] = 2,
    ACTIONS(463), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(465), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2056] = 2,
    ACTIONS(467), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(469), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2066] = 4,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 1,
      anon_sym_workspace,
    ACTIONS(476), 1,
      sym_comment,
    STATE(118), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2080] = 2,
    ACTIONS(479), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(481), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2090] = 4,
    ACTIONS(244), 1,
      sym__simple_identifier,
    ACTIONS(483), 1,
      sym_wildcard_identifier,
    STATE(110), 1,
      sym_identifier,
    STATE(48), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2104] = 2,
    STATE(134), 1,
      sym_autolayout_value,
    ACTIONS(485), 4,
      anon_sym_lr,
      anon_sym_rl,
      anon_sym_tb,
      anon_sym_bt,
  [2114] = 2,
    ACTIONS(487), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(489), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2124] = 2,
    ACTIONS(491), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(493), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2134] = 2,
    ACTIONS(495), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(497), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2144] = 2,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(499), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2154] = 2,
    ACTIONS(207), 1,
      sym__newline,
    ACTIONS(209), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [2164] = 3,
    ACTIONS(503), 1,
      anon_sym_DOT,
    ACTIONS(505), 1,
      sym__newline,
    ACTIONS(501), 2,
      sym__simple_identifier,
      sym_comment,
  [2175] = 3,
    ACTIONS(507), 1,
      sym__simple_identifier,
    STATE(127), 1,
      sym_identifier,
    STATE(89), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2186] = 4,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      anon_sym_EQ,
    ACTIONS(513), 1,
      anon_sym_DASH_GT,
    STATE(49), 1,
      sym__assignment_operator,
  [2199] = 2,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(515), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2208] = 4,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(160), 1,
      sym_identifier,
    STATE(168), 1,
      sym_dotted_identifier,
    STATE(188), 1,
      sym_relation_identifier,
  [2221] = 2,
    ACTIONS(207), 1,
      sym__newline,
    ACTIONS(209), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [2230] = 1,
    ACTIONS(519), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2236] = 3,
    ACTIONS(521), 1,
      sym_number,
    ACTIONS(523), 1,
      sym__newline,
    ACTIONS(525), 1,
      sym_comment,
  [2246] = 2,
    ACTIONS(529), 1,
      sym__newline,
    ACTIONS(527), 2,
      sym_number,
      sym_comment,
  [2254] = 3,
    ACTIONS(531), 1,
      sym_number,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(535), 1,
      sym_comment,
  [2264] = 1,
    ACTIONS(537), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [2270] = 1,
    ACTIONS(539), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2276] = 1,
    ACTIONS(541), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2282] = 1,
    ACTIONS(543), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2288] = 3,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(545), 1,
      sym_wildcard_identifier,
    STATE(167), 1,
      sym_identifier,
  [2298] = 1,
    ACTIONS(547), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2304] = 1,
    ACTIONS(549), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [2310] = 1,
    ACTIONS(551), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2316] = 1,
    ACTIONS(553), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2322] = 1,
    ACTIONS(555), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2328] = 2,
    STATE(68), 1,
      sym_identifiers_value,
    ACTIONS(557), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [2336] = 2,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(515), 2,
      sym__simple_identifier,
      sym_comment,
  [2344] = 2,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      sym_string,
  [2351] = 2,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym__model_children,
  [2358] = 2,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    ACTIONS(567), 1,
      sym_string,
  [2365] = 2,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(149), 1,
      sym_identifier,
  [2372] = 2,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(151), 1,
      sym_identifier,
  [2379] = 2,
    ACTIONS(569), 1,
      sym__newline,
    ACTIONS(571), 1,
      sym_comment,
  [2386] = 2,
    ACTIONS(573), 1,
      anon_sym_DASH_GT,
    STATE(131), 1,
      sym__relation_operator,
  [2393] = 2,
    ACTIONS(575), 1,
      sym__newline,
    ACTIONS(577), 1,
      sym_comment,
  [2400] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      sym_string,
  [2407] = 2,
    ACTIONS(583), 1,
      anon_sym_EQ,
    STATE(175), 1,
      sym__assignment_operator,
  [2414] = 2,
    ACTIONS(585), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym__assignment_operator,
  [2421] = 2,
    ACTIONS(509), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      sym_string,
  [2428] = 2,
    ACTIONS(587), 1,
      sym__newline,
    ACTIONS(589), 1,
      sym_comment,
  [2435] = 2,
    ACTIONS(591), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_software_system_declaration_repeat1,
  [2442] = 2,
    ACTIONS(319), 1,
      sym__simple_identifier,
    STATE(169), 1,
      sym_identifier,
  [2449] = 2,
    ACTIONS(593), 1,
      sym__newline,
    ACTIONS(595), 1,
      sym_comment,
  [2456] = 2,
    ACTIONS(597), 1,
      sym__newline,
    ACTIONS(599), 1,
      sym_comment,
  [2463] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      sym_string,
  [2470] = 2,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(607), 1,
      sym_string,
  [2477] = 1,
    ACTIONS(513), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2482] = 1,
    ACTIONS(517), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2487] = 2,
    ACTIONS(280), 1,
      sym__simple_identifier,
    STATE(130), 1,
      sym_identifier,
  [2494] = 2,
    ACTIONS(507), 1,
      sym__simple_identifier,
    STATE(148), 1,
      sym_identifier,
  [2501] = 2,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      sym_string,
  [2508] = 2,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_string,
  [2515] = 1,
    ACTIONS(617), 1,
      sym__simple_identifier,
  [2519] = 1,
    ACTIONS(619), 1,
      sym_string,
  [2523] = 1,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
  [2527] = 1,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
  [2531] = 1,
    ACTIONS(625), 1,
      sym_string,
  [2535] = 1,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
  [2539] = 1,
    ACTIONS(629), 1,
      sym_string,
  [2543] = 1,
    ACTIONS(631), 1,
      sym__newline,
  [2547] = 1,
    ACTIONS(633), 1,
      sym__newline,
  [2551] = 1,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
  [2555] = 1,
    ACTIONS(637), 1,
      sym__newline,
  [2559] = 1,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
  [2563] = 1,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
  [2567] = 1,
    ACTIONS(643), 1,
      sym__newline,
  [2571] = 1,
    ACTIONS(645), 1,
      sym_string,
  [2575] = 1,
    ACTIONS(647), 1,
      sym__newline,
  [2579] = 1,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
  [2583] = 1,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
  [2587] = 1,
    ACTIONS(653), 1,
      sym__newline,
  [2591] = 1,
    ACTIONS(655), 1,
      sym_string,
  [2595] = 1,
    ACTIONS(657), 1,
      sym_string,
  [2599] = 1,
    ACTIONS(659), 1,
      sym_string,
  [2603] = 1,
    ACTIONS(661), 1,
      ts_builtin_sym_end,
  [2607] = 1,
    ACTIONS(663), 1,
      sym__newline,
  [2611] = 1,
    ACTIONS(665), 1,
      sym__newline,
  [2615] = 1,
    ACTIONS(667), 1,
      sym_string,
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
  [SMALL_STATE(22)] = 660,
  [SMALL_STATE(23)] = 693,
  [SMALL_STATE(24)] = 726,
  [SMALL_STATE(25)] = 759,
  [SMALL_STATE(26)] = 792,
  [SMALL_STATE(27)] = 821,
  [SMALL_STATE(28)] = 850,
  [SMALL_STATE(29)] = 879,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 937,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 995,
  [SMALL_STATE(34)] = 1024,
  [SMALL_STATE(35)] = 1046,
  [SMALL_STATE(36)] = 1068,
  [SMALL_STATE(37)] = 1090,
  [SMALL_STATE(38)] = 1112,
  [SMALL_STATE(39)] = 1134,
  [SMALL_STATE(40)] = 1156,
  [SMALL_STATE(41)] = 1170,
  [SMALL_STATE(42)] = 1189,
  [SMALL_STATE(43)] = 1208,
  [SMALL_STATE(44)] = 1227,
  [SMALL_STATE(45)] = 1244,
  [SMALL_STATE(46)] = 1254,
  [SMALL_STATE(47)] = 1270,
  [SMALL_STATE(48)] = 1280,
  [SMALL_STATE(49)] = 1300,
  [SMALL_STATE(50)] = 1316,
  [SMALL_STATE(51)] = 1326,
  [SMALL_STATE(52)] = 1346,
  [SMALL_STATE(53)] = 1356,
  [SMALL_STATE(54)] = 1366,
  [SMALL_STATE(55)] = 1376,
  [SMALL_STATE(56)] = 1386,
  [SMALL_STATE(57)] = 1404,
  [SMALL_STATE(58)] = 1414,
  [SMALL_STATE(59)] = 1424,
  [SMALL_STATE(60)] = 1434,
  [SMALL_STATE(61)] = 1444,
  [SMALL_STATE(62)] = 1454,
  [SMALL_STATE(63)] = 1464,
  [SMALL_STATE(64)] = 1474,
  [SMALL_STATE(65)] = 1484,
  [SMALL_STATE(66)] = 1501,
  [SMALL_STATE(67)] = 1510,
  [SMALL_STATE(68)] = 1519,
  [SMALL_STATE(69)] = 1528,
  [SMALL_STATE(70)] = 1537,
  [SMALL_STATE(71)] = 1554,
  [SMALL_STATE(72)] = 1563,
  [SMALL_STATE(73)] = 1572,
  [SMALL_STATE(74)] = 1589,
  [SMALL_STATE(75)] = 1598,
  [SMALL_STATE(76)] = 1615,
  [SMALL_STATE(77)] = 1624,
  [SMALL_STATE(78)] = 1633,
  [SMALL_STATE(79)] = 1642,
  [SMALL_STATE(80)] = 1651,
  [SMALL_STATE(81)] = 1660,
  [SMALL_STATE(82)] = 1669,
  [SMALL_STATE(83)] = 1678,
  [SMALL_STATE(84)] = 1687,
  [SMALL_STATE(85)] = 1696,
  [SMALL_STATE(86)] = 1705,
  [SMALL_STATE(87)] = 1714,
  [SMALL_STATE(88)] = 1723,
  [SMALL_STATE(89)] = 1732,
  [SMALL_STATE(90)] = 1749,
  [SMALL_STATE(91)] = 1766,
  [SMALL_STATE(92)] = 1783,
  [SMALL_STATE(93)] = 1792,
  [SMALL_STATE(94)] = 1801,
  [SMALL_STATE(95)] = 1810,
  [SMALL_STATE(96)] = 1819,
  [SMALL_STATE(97)] = 1836,
  [SMALL_STATE(98)] = 1845,
  [SMALL_STATE(99)] = 1854,
  [SMALL_STATE(100)] = 1863,
  [SMALL_STATE(101)] = 1880,
  [SMALL_STATE(102)] = 1889,
  [SMALL_STATE(103)] = 1898,
  [SMALL_STATE(104)] = 1915,
  [SMALL_STATE(105)] = 1924,
  [SMALL_STATE(106)] = 1941,
  [SMALL_STATE(107)] = 1950,
  [SMALL_STATE(108)] = 1960,
  [SMALL_STATE(109)] = 1970,
  [SMALL_STATE(110)] = 1980,
  [SMALL_STATE(111)] = 1992,
  [SMALL_STATE(112)] = 2002,
  [SMALL_STATE(113)] = 2016,
  [SMALL_STATE(114)] = 2026,
  [SMALL_STATE(115)] = 2036,
  [SMALL_STATE(116)] = 2046,
  [SMALL_STATE(117)] = 2056,
  [SMALL_STATE(118)] = 2066,
  [SMALL_STATE(119)] = 2080,
  [SMALL_STATE(120)] = 2090,
  [SMALL_STATE(121)] = 2104,
  [SMALL_STATE(122)] = 2114,
  [SMALL_STATE(123)] = 2124,
  [SMALL_STATE(124)] = 2134,
  [SMALL_STATE(125)] = 2144,
  [SMALL_STATE(126)] = 2154,
  [SMALL_STATE(127)] = 2164,
  [SMALL_STATE(128)] = 2175,
  [SMALL_STATE(129)] = 2186,
  [SMALL_STATE(130)] = 2199,
  [SMALL_STATE(131)] = 2208,
  [SMALL_STATE(132)] = 2221,
  [SMALL_STATE(133)] = 2230,
  [SMALL_STATE(134)] = 2236,
  [SMALL_STATE(135)] = 2246,
  [SMALL_STATE(136)] = 2254,
  [SMALL_STATE(137)] = 2264,
  [SMALL_STATE(138)] = 2270,
  [SMALL_STATE(139)] = 2276,
  [SMALL_STATE(140)] = 2282,
  [SMALL_STATE(141)] = 2288,
  [SMALL_STATE(142)] = 2298,
  [SMALL_STATE(143)] = 2304,
  [SMALL_STATE(144)] = 2310,
  [SMALL_STATE(145)] = 2316,
  [SMALL_STATE(146)] = 2322,
  [SMALL_STATE(147)] = 2328,
  [SMALL_STATE(148)] = 2336,
  [SMALL_STATE(149)] = 2344,
  [SMALL_STATE(150)] = 2351,
  [SMALL_STATE(151)] = 2358,
  [SMALL_STATE(152)] = 2365,
  [SMALL_STATE(153)] = 2372,
  [SMALL_STATE(154)] = 2379,
  [SMALL_STATE(155)] = 2386,
  [SMALL_STATE(156)] = 2393,
  [SMALL_STATE(157)] = 2400,
  [SMALL_STATE(158)] = 2407,
  [SMALL_STATE(159)] = 2414,
  [SMALL_STATE(160)] = 2421,
  [SMALL_STATE(161)] = 2428,
  [SMALL_STATE(162)] = 2435,
  [SMALL_STATE(163)] = 2442,
  [SMALL_STATE(164)] = 2449,
  [SMALL_STATE(165)] = 2456,
  [SMALL_STATE(166)] = 2463,
  [SMALL_STATE(167)] = 2470,
  [SMALL_STATE(168)] = 2477,
  [SMALL_STATE(169)] = 2482,
  [SMALL_STATE(170)] = 2487,
  [SMALL_STATE(171)] = 2494,
  [SMALL_STATE(172)] = 2501,
  [SMALL_STATE(173)] = 2508,
  [SMALL_STATE(174)] = 2515,
  [SMALL_STATE(175)] = 2519,
  [SMALL_STATE(176)] = 2523,
  [SMALL_STATE(177)] = 2527,
  [SMALL_STATE(178)] = 2531,
  [SMALL_STATE(179)] = 2535,
  [SMALL_STATE(180)] = 2539,
  [SMALL_STATE(181)] = 2543,
  [SMALL_STATE(182)] = 2547,
  [SMALL_STATE(183)] = 2551,
  [SMALL_STATE(184)] = 2555,
  [SMALL_STATE(185)] = 2559,
  [SMALL_STATE(186)] = 2563,
  [SMALL_STATE(187)] = 2567,
  [SMALL_STATE(188)] = 2571,
  [SMALL_STATE(189)] = 2575,
  [SMALL_STATE(190)] = 2579,
  [SMALL_STATE(191)] = 2583,
  [SMALL_STATE(192)] = 2587,
  [SMALL_STATE(193)] = 2591,
  [SMALL_STATE(194)] = 2595,
  [SMALL_STATE(195)] = 2599,
  [SMALL_STATE(196)] = 2603,
  [SMALL_STATE(197)] = 2607,
  [SMALL_STATE(198)] = 2611,
  [SMALL_STATE(199)] = 2615,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 8),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 11),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 11),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 11),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 11),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 11),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 8),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 8),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 14),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 15),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 14),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 15),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 7),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 10),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 9),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 12),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 9),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 13),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 9),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 12),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 13),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 9),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 12),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 8),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 8),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 8),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 8),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 8),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 8),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 11),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 11),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 11),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 11),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 11),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 11),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 16),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 16),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [661] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
