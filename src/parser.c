#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 247
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  aux_sym_workspace_declaration_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  sym_string = 5,
  sym_class_value = 6,
  sym_path_value = 7,
  sym__simple_identifier = 8,
  anon_sym_DOT = 9,
  sym_wildcard_identifier = 10,
  sym__newline = 11,
  aux_sym_color_token1 = 12,
  aux_sym_color_token2 = 13,
  sym_comment = 14,
  aux_sym_identifiers_statement_token1 = 15,
  anon_sym_hierarchical = 16,
  anon_sym_flat = 17,
  aux_sym_name_statement_token1 = 18,
  aux_sym_description_statement_token1 = 19,
  aux_sym_docs_statement_token1 = 20,
  aux_sym_adrs_statement_token1 = 21,
  aux_sym_model_declaration_token1 = 22,
  anon_sym_EQ = 23,
  anon_sym_DASH_GT = 24,
  aux_sym_software_system_declaration_token1 = 25,
  aux_sym_container_declaration_token1 = 26,
  aux_sym_component_declaration_token1 = 27,
  aux_sym_person_declaration_token1 = 28,
  anon_sym_tag = 29,
  anon_sym_tags = 30,
  aux_sym_configuration_declaration_token1 = 31,
  aux_sym_scope_declaration_token1 = 32,
  aux_sym_views_declaration_token1 = 33,
  aux_sym_system_context_view_declaration_token1 = 34,
  aux_sym_include_statement_token1 = 35,
  aux_sym_exclude_statement_token1 = 36,
  aux_sym_autolayout_statement_token1 = 37,
  aux_sym_autolayout_value_token1 = 38,
  aux_sym_autolayout_value_token2 = 39,
  aux_sym_autolayout_value_token3 = 40,
  aux_sym_autolayout_value_token4 = 41,
  aux_sym_default_statement_token1 = 42,
  aux_sym_dynamic_view_declaration_token1 = 43,
  aux_sym_styles_declaration_token1 = 44,
  aux_sym_theme_statement_token1 = 45,
  aux_sym_themes_statement_token1 = 46,
  anon_sym_default = 47,
  aux_sym_element_declaration_token1 = 48,
  aux_sym_relationship_declaration_token1 = 49,
  sym_dsl = 50,
  sym_workspace_declaration = 51,
  sym_dotted_identifier = 52,
  sym_identifier = 53,
  sym_relation_identifier = 54,
  sym_color = 55,
  sym_workspace_item_statement = 56,
  sym_identifiers_statement = 57,
  sym_identifiers_value = 58,
  sym_name_statement = 59,
  sym_description_statement = 60,
  sym_docs_statement = 61,
  sym_adrs_statement = 62,
  sym_model_declaration = 63,
  sym__model_children = 64,
  sym__model_item_statement = 65,
  sym_variable_declaration = 66,
  sym_relation_statement = 67,
  sym__item_declaration = 68,
  sym_software_system_declaration = 69,
  sym_container_declaration = 70,
  sym_component_declaration = 71,
  sym_person_declaration = 72,
  sym_tag_declaration = 73,
  sym_tags_declaration = 74,
  sym_configuration_declaration = 75,
  sym_configuration_item_statement = 76,
  sym_scope_declaration = 77,
  sym_views_declaration = 78,
  sym_views_item_statement = 79,
  sym_system_context_view_declaration = 80,
  sym_view_property_statement = 81,
  sym_include_statement = 82,
  sym_exclude_statement = 83,
  sym_autolayout_statement = 84,
  sym_autolayout_value = 85,
  sym_default_statement = 86,
  sym_container_view_declaration = 87,
  sym_dynamic_view_declaration = 88,
  sym_styles_declaration = 89,
  sym_theme_statement = 90,
  sym_themes_statement = 91,
  sym_theme_value = 92,
  sym_style_item_statement = 93,
  sym_element_declaration = 94,
  sym_relationship_declaration = 95,
  sym_element_property = 96,
  aux_sym_dsl_repeat1 = 97,
  aux_sym_workspace_declaration_repeat1 = 98,
  aux_sym__model_children_repeat1 = 99,
  aux_sym_software_system_declaration_repeat1 = 100,
  aux_sym_configuration_declaration_repeat1 = 101,
  aux_sym_views_declaration_repeat1 = 102,
  aux_sym_system_context_view_declaration_repeat1 = 103,
  aux_sym_include_statement_repeat1 = 104,
  aux_sym_exclude_statement_repeat1 = 105,
  aux_sym_styles_declaration_repeat1 = 106,
  aux_sym_themes_statement_repeat1 = 107,
  aux_sym_element_declaration_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_workspace_declaration_token1] = "workspace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_class_value] = "class_value",
  [sym_path_value] = "path_value",
  [sym__simple_identifier] = "_simple_identifier",
  [anon_sym_DOT] = ".",
  [sym_wildcard_identifier] = "wildcard_identifier",
  [sym__newline] = "_newline",
  [aux_sym_color_token1] = "color_token1",
  [aux_sym_color_token2] = "color_token2",
  [sym_comment] = "comment",
  [aux_sym_identifiers_statement_token1] = "!identifiers",
  [anon_sym_hierarchical] = "hierarchical",
  [anon_sym_flat] = "flat",
  [aux_sym_name_statement_token1] = "name",
  [aux_sym_description_statement_token1] = "description",
  [aux_sym_docs_statement_token1] = "!docs",
  [aux_sym_adrs_statement_token1] = "!adrs",
  [aux_sym_model_declaration_token1] = "model",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [aux_sym_software_system_declaration_token1] = "softwaresystem",
  [aux_sym_container_declaration_token1] = "container",
  [aux_sym_component_declaration_token1] = "component",
  [aux_sym_person_declaration_token1] = "person",
  [anon_sym_tag] = "tag",
  [anon_sym_tags] = "tags",
  [aux_sym_configuration_declaration_token1] = "configuration",
  [aux_sym_scope_declaration_token1] = "scope",
  [aux_sym_views_declaration_token1] = "views",
  [aux_sym_system_context_view_declaration_token1] = "systemcontext",
  [aux_sym_include_statement_token1] = "include",
  [aux_sym_exclude_statement_token1] = "exclude",
  [aux_sym_autolayout_statement_token1] = "autolayout",
  [aux_sym_autolayout_value_token1] = "lr",
  [aux_sym_autolayout_value_token2] = "rl",
  [aux_sym_autolayout_value_token3] = "tb",
  [aux_sym_autolayout_value_token4] = "bt",
  [aux_sym_default_statement_token1] = "default",
  [aux_sym_dynamic_view_declaration_token1] = "dynamic",
  [aux_sym_styles_declaration_token1] = "styles",
  [aux_sym_theme_statement_token1] = "theme",
  [aux_sym_themes_statement_token1] = "themes",
  [anon_sym_default] = "default",
  [aux_sym_element_declaration_token1] = "element",
  [aux_sym_relationship_declaration_token1] = "relationship",
  [sym_dsl] = "dsl",
  [sym_workspace_declaration] = "workspace_declaration",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_identifier] = "identifier",
  [sym_relation_identifier] = "relation_identifier",
  [sym_color] = "color",
  [sym_workspace_item_statement] = "workspace_item_statement",
  [sym_identifiers_statement] = "identifiers_statement",
  [sym_identifiers_value] = "identifiers_value",
  [sym_name_statement] = "name_statement",
  [sym_description_statement] = "description_statement",
  [sym_docs_statement] = "docs_statement",
  [sym_adrs_statement] = "adrs_statement",
  [sym_model_declaration] = "model_declaration",
  [sym__model_children] = "_model_children",
  [sym__model_item_statement] = "_model_item_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_relation_statement] = "relation_statement",
  [sym__item_declaration] = "_item_declaration",
  [sym_software_system_declaration] = "software_system_declaration",
  [sym_container_declaration] = "container_declaration",
  [sym_component_declaration] = "component_declaration",
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
  [sym_container_view_declaration] = "container_view_declaration",
  [sym_dynamic_view_declaration] = "dynamic_view_declaration",
  [sym_styles_declaration] = "styles_declaration",
  [sym_theme_statement] = "theme_statement",
  [sym_themes_statement] = "themes_statement",
  [sym_theme_value] = "theme_value",
  [sym_style_item_statement] = "style_item_statement",
  [sym_element_declaration] = "element_declaration",
  [sym_relationship_declaration] = "relationship_declaration",
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
  [aux_sym_themes_statement_repeat1] = "themes_statement_repeat1",
  [aux_sym_element_declaration_repeat1] = "element_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_workspace_declaration_token1] = aux_sym_workspace_declaration_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_class_value] = sym_class_value,
  [sym_path_value] = sym_path_value,
  [sym__simple_identifier] = sym__simple_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_wildcard_identifier] = sym_wildcard_identifier,
  [sym__newline] = sym__newline,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [aux_sym_color_token2] = aux_sym_color_token2,
  [sym_comment] = sym_comment,
  [aux_sym_identifiers_statement_token1] = aux_sym_identifiers_statement_token1,
  [anon_sym_hierarchical] = anon_sym_hierarchical,
  [anon_sym_flat] = anon_sym_flat,
  [aux_sym_name_statement_token1] = aux_sym_name_statement_token1,
  [aux_sym_description_statement_token1] = aux_sym_description_statement_token1,
  [aux_sym_docs_statement_token1] = aux_sym_docs_statement_token1,
  [aux_sym_adrs_statement_token1] = aux_sym_adrs_statement_token1,
  [aux_sym_model_declaration_token1] = aux_sym_model_declaration_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [aux_sym_software_system_declaration_token1] = aux_sym_software_system_declaration_token1,
  [aux_sym_container_declaration_token1] = aux_sym_container_declaration_token1,
  [aux_sym_component_declaration_token1] = aux_sym_component_declaration_token1,
  [aux_sym_person_declaration_token1] = aux_sym_person_declaration_token1,
  [anon_sym_tag] = anon_sym_tag,
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
  [aux_sym_default_statement_token1] = anon_sym_default,
  [aux_sym_dynamic_view_declaration_token1] = aux_sym_dynamic_view_declaration_token1,
  [aux_sym_styles_declaration_token1] = aux_sym_styles_declaration_token1,
  [aux_sym_theme_statement_token1] = aux_sym_theme_statement_token1,
  [aux_sym_themes_statement_token1] = aux_sym_themes_statement_token1,
  [anon_sym_default] = anon_sym_default,
  [aux_sym_element_declaration_token1] = aux_sym_element_declaration_token1,
  [aux_sym_relationship_declaration_token1] = aux_sym_relationship_declaration_token1,
  [sym_dsl] = sym_dsl,
  [sym_workspace_declaration] = sym_workspace_declaration,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_identifier] = sym_identifier,
  [sym_relation_identifier] = sym_relation_identifier,
  [sym_color] = sym_color,
  [sym_workspace_item_statement] = sym_workspace_item_statement,
  [sym_identifiers_statement] = sym_identifiers_statement,
  [sym_identifiers_value] = sym_identifiers_value,
  [sym_name_statement] = sym_name_statement,
  [sym_description_statement] = sym_description_statement,
  [sym_docs_statement] = sym_docs_statement,
  [sym_adrs_statement] = sym_adrs_statement,
  [sym_model_declaration] = sym_model_declaration,
  [sym__model_children] = sym__model_children,
  [sym__model_item_statement] = sym__model_item_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_relation_statement] = sym_relation_statement,
  [sym__item_declaration] = sym__item_declaration,
  [sym_software_system_declaration] = sym_software_system_declaration,
  [sym_container_declaration] = sym_container_declaration,
  [sym_component_declaration] = sym_component_declaration,
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
  [sym_container_view_declaration] = sym_container_view_declaration,
  [sym_dynamic_view_declaration] = sym_dynamic_view_declaration,
  [sym_styles_declaration] = sym_styles_declaration,
  [sym_theme_statement] = sym_theme_statement,
  [sym_themes_statement] = sym_themes_statement,
  [sym_theme_value] = sym_theme_value,
  [sym_style_item_statement] = sym_style_item_statement,
  [sym_element_declaration] = sym_element_declaration,
  [sym_relationship_declaration] = sym_relationship_declaration,
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
  [aux_sym_themes_statement_repeat1] = aux_sym_themes_statement_repeat1,
  [aux_sym_element_declaration_repeat1] = aux_sym_element_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_workspace_declaration_token1] = {
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
  [sym_class_value] = {
    .visible = true,
    .named = true,
  },
  [sym_path_value] = {
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
  [aux_sym_name_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_description_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_docs_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_adrs_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_model_declaration_token1] = {
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
  [aux_sym_software_system_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_container_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_component_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_person_declaration_token1] = {
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
  [aux_sym_configuration_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scope_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_views_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_system_context_view_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_exclude_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_autolayout_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_autolayout_value_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_autolayout_value_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_autolayout_value_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_autolayout_value_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dynamic_view_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_styles_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_theme_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_themes_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_element_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relationship_declaration_token1] = {
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
  [sym_name_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_description_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_docs_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_adrs_statement] = {
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
  [sym_component_declaration] = {
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
  [sym_theme_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_themes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_theme_value] = {
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
  [sym_relationship_declaration] = {
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
  [aux_sym_themes_statement_repeat1] = {
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
  field_classname = 2,
  field_context = 3,
  field_description = 4,
  field_key = 5,
  field_name = 6,
  field_nodeSeparation = 7,
  field_parent = 8,
  field_rankSeparation = 9,
  field_relation = 10,
  field_scope = 11,
  field_source = 12,
  field_tags = 13,
  field_target = 14,
  field_technology = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child] = "child",
  [field_classname] = "classname",
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
  [field_technology] = "technology",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 4},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 5},
  [15] = {.index = 31, .length = 3},
  [16] = {.index = 34, .length = 3},
  [17] = {.index = 37, .length = 2},
  [18] = {.index = 39, .length = 3},
  [19] = {.index = 42, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_classname, 2},
    {field_value, 1},
  [3] =
    {field_child, 2},
    {field_parent, 0},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_name, 1},
  [8] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
  [11] =
    {field_context, 1},
  [12] =
    {field_scope, 1},
  [13] =
    {field_description, 2},
    {field_name, 1},
  [15] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
    {field_technology, 4},
  [19] =
    {field_context, 1},
    {field_key, 2},
  [21] =
    {field_key, 2},
    {field_scope, 1},
  [23] =
    {field_description, 2},
    {field_name, 1},
    {field_tags, 3},
  [26] =
    {field_relation, 3},
    {field_source, 0},
    {field_tags, 5},
    {field_target, 2},
    {field_technology, 4},
  [31] =
    {field_context, 1},
    {field_description, 3},
    {field_key, 2},
  [34] =
    {field_description, 3},
    {field_key, 2},
    {field_scope, 1},
  [37] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [39] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
    {field_value, 1},
  [42] =
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
  [9] = 8,
  [10] = 10,
  [11] = 7,
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
  [124] = 49,
  [125] = 55,
  [126] = 54,
  [127] = 58,
  [128] = 53,
  [129] = 44,
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
  [149] = 149,
  [150] = 65,
  [151] = 151,
  [152] = 65,
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
  [164] = 162,
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
  [197] = 162,
  [198] = 198,
  [199] = 192,
  [200] = 192,
  [201] = 186,
  [202] = 189,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 210,
  [242] = 218,
  [243] = 243,
  [244] = 232,
  [245] = 216,
  [246] = 246,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(215);
      ADVANCE_MAP(
        '!', 44,
        '"', 212,
        '#', 211,
        '*', 234,
        '-', 19,
        '.', 233,
        '=', 250,
        'D', 69,
        'T', 54,
        'd', 21,
        'f', 37,
        'h', 35,
        't', 26,
        '{', 217,
        '}', 218,
        'A', 194,
        'a', 194,
        'B', 179,
        'b', 179,
        'C', 140,
        'c', 140,
        'E', 118,
        'e', 118,
        'I', 139,
        'i', 139,
        'L', 159,
        'l', 159,
        'M', 152,
        'm', 152,
        'N', 45,
        'n', 45,
        'P', 80,
        'p', 80,
        'R', 71,
        'r', 71,
        'S', 59,
        's', 59,
        'V', 102,
        'v', 102,
        'W', 143,
        'w', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(241);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '}') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '{') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '}') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(240);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(251);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 22:
      if (lookahead == 'F') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(271);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 25:
      if (lookahead == 'U') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 42:
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        'C', 142,
        'c', 142,
        'O', 95,
        'o', 95,
        'T', 203,
        't', 203,
        'Y', 176,
        'y', 176,
      );
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 94:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 96:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 111:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 121:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 122:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 123:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 136:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 139:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 140:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 143:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 144:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 154:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 155:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 156:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 157:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 158:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      END_STATE();
    case 169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      END_STATE();
    case 170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 175:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      END_STATE();
    case 176:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 177:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 178:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 180:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 186:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 188:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 189:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 190:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 191:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 194:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 195:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 196:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 197:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 198:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 199:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 200:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 201:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 202:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(184);
      END_STATE();
    case 203:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 204:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 205:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 206:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 212:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 213:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    case 214:
      if (eof) ADVANCE(215);
      ADVANCE_MAP(
        '!', 44,
        '#', 240,
        '/', 14,
        '}', 218,
        'A', 194,
        'a', 194,
        'C', 149,
        'c', 149,
        'D', 69,
        'd', 69,
        'E', 118,
        'e', 118,
        'I', 139,
        'i', 139,
        'M', 152,
        'm', 152,
        'N', 45,
        'n', 45,
        'R', 70,
        'r', 70,
        'S', 60,
        's', 60,
        'T', 98,
        't', 98,
        'V', 102,
        'v', 102,
        'W', 143,
        'w', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_path_value);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_name_statement_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_docs_statement_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_adrs_statement_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_component_declaration_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_theme_statement_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_themes_statement_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 214},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 214},
  [5] = {.lex_state = 214},
  [6] = {.lex_state = 214},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 214},
  [13] = {.lex_state = 214},
  [14] = {.lex_state = 214},
  [15] = {.lex_state = 214},
  [16] = {.lex_state = 214},
  [17] = {.lex_state = 214},
  [18] = {.lex_state = 214},
  [19] = {.lex_state = 214},
  [20] = {.lex_state = 214},
  [21] = {.lex_state = 214},
  [22] = {.lex_state = 214},
  [23] = {.lex_state = 214},
  [24] = {.lex_state = 214},
  [25] = {.lex_state = 214},
  [26] = {.lex_state = 214},
  [27] = {.lex_state = 214},
  [28] = {.lex_state = 214},
  [29] = {.lex_state = 214},
  [30] = {.lex_state = 214},
  [31] = {.lex_state = 214},
  [32] = {.lex_state = 214},
  [33] = {.lex_state = 214},
  [34] = {.lex_state = 214},
  [35] = {.lex_state = 214},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 214},
  [45] = {.lex_state = 214},
  [46] = {.lex_state = 214},
  [47] = {.lex_state = 214},
  [48] = {.lex_state = 214},
  [49] = {.lex_state = 214},
  [50] = {.lex_state = 214},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 214},
  [53] = {.lex_state = 214},
  [54] = {.lex_state = 214},
  [55] = {.lex_state = 214},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 214},
  [58] = {.lex_state = 214},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 214},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 214},
  [67] = {.lex_state = 214},
  [68] = {.lex_state = 214},
  [69] = {.lex_state = 214},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 214},
  [72] = {.lex_state = 214},
  [73] = {.lex_state = 214},
  [74] = {.lex_state = 214},
  [75] = {.lex_state = 214},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 214},
  [78] = {.lex_state = 214},
  [79] = {.lex_state = 214},
  [80] = {.lex_state = 214},
  [81] = {.lex_state = 214},
  [82] = {.lex_state = 214},
  [83] = {.lex_state = 214},
  [84] = {.lex_state = 214},
  [85] = {.lex_state = 214},
  [86] = {.lex_state = 214},
  [87] = {.lex_state = 214},
  [88] = {.lex_state = 214},
  [89] = {.lex_state = 214},
  [90] = {.lex_state = 214},
  [91] = {.lex_state = 214},
  [92] = {.lex_state = 214},
  [93] = {.lex_state = 214},
  [94] = {.lex_state = 214},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 214},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 214},
  [103] = {.lex_state = 214},
  [104] = {.lex_state = 214},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 214},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 214},
  [116] = {.lex_state = 214},
  [117] = {.lex_state = 214},
  [118] = {.lex_state = 214},
  [119] = {.lex_state = 214},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 214},
  [122] = {.lex_state = 214},
  [123] = {.lex_state = 214},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 214},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 214},
  [139] = {.lex_state = 214},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 214},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 214},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 214},
  [156] = {.lex_state = 214},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 214},
  [159] = {.lex_state = 214},
  [160] = {.lex_state = 214},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 214},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 214},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 214},
  [174] = {.lex_state = 214},
  [175] = {.lex_state = 214},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 2},
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
    [aux_sym_color_token1] = ACTIONS(1),
    [aux_sym_color_token2] = ACTIONS(1),
    [aux_sym_identifiers_statement_token1] = ACTIONS(1),
    [anon_sym_hierarchical] = ACTIONS(1),
    [anon_sym_flat] = ACTIONS(1),
    [aux_sym_name_statement_token1] = ACTIONS(1),
    [aux_sym_description_statement_token1] = ACTIONS(1),
    [aux_sym_docs_statement_token1] = ACTIONS(1),
    [aux_sym_adrs_statement_token1] = ACTIONS(1),
    [aux_sym_model_declaration_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [aux_sym_software_system_declaration_token1] = ACTIONS(1),
    [aux_sym_container_declaration_token1] = ACTIONS(1),
    [aux_sym_component_declaration_token1] = ACTIONS(1),
    [aux_sym_person_declaration_token1] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
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
    [aux_sym_dynamic_view_declaration_token1] = ACTIONS(1),
    [aux_sym_styles_declaration_token1] = ACTIONS(1),
    [aux_sym_theme_statement_token1] = ACTIONS(1),
    [aux_sym_themes_statement_token1] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [aux_sym_element_declaration_token1] = ACTIONS(1),
    [aux_sym_relationship_declaration_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(230),
    [sym_workspace_declaration] = STATE(149),
    [aux_sym_dsl_repeat1] = STATE(149),
    [aux_sym_workspace_declaration_token1] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(13), 1,
      aux_sym_name_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(17), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(19), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(21), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(25), 1,
      aux_sym_views_declaration_token1,
    STATE(4), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(57), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [45] = 12,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(13), 1,
      aux_sym_name_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(17), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(19), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(21), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(25), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(57), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [90] = 12,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(37), 1,
      aux_sym_name_statement_token1,
    ACTIONS(40), 1,
      aux_sym_description_statement_token1,
    ACTIONS(43), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(46), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(49), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(52), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(55), 1,
      aux_sym_views_declaration_token1,
    STATE(4), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(57), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [135] = 12,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(13), 1,
      aux_sym_name_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(17), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(19), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(21), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(25), 1,
      aux_sym_views_declaration_token1,
    STATE(3), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(57), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [180] = 12,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(13), 1,
      aux_sym_name_statement_token1,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(17), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(19), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(21), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(23), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(25), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(57), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [225] = 11,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym__simple_identifier,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(68), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(70), 1,
      anon_sym_tag,
    ACTIONS(72), 1,
      anon_sym_tags,
    STATE(166), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(225), 1,
      sym_relation_identifier,
    STATE(8), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [266] = 11,
    ACTIONS(62), 1,
      sym__simple_identifier,
    ACTIONS(66), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(68), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(70), 1,
      anon_sym_tag,
    ACTIONS(72), 1,
      anon_sym_tags,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      sym_comment,
    STATE(166), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(225), 1,
      sym_relation_identifier,
    STATE(10), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [307] = 11,
    ACTIONS(62), 1,
      sym__simple_identifier,
    ACTIONS(66), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(68), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(70), 1,
      anon_sym_tag,
    ACTIONS(72), 1,
      anon_sym_tags,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(225), 1,
      sym_relation_identifier,
    STATE(10), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [348] = 11,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      sym__simple_identifier,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(91), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(94), 1,
      anon_sym_tag,
    ACTIONS(97), 1,
      anon_sym_tags,
    STATE(166), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(225), 1,
      sym_relation_identifier,
    STATE(10), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [389] = 11,
    ACTIONS(62), 1,
      sym__simple_identifier,
    ACTIONS(66), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(68), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(70), 1,
      anon_sym_tag,
    ACTIONS(72), 1,
      anon_sym_tags,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym_comment,
    STATE(166), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(225), 1,
      sym_relation_identifier,
    STATE(9), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [430] = 10,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(112), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(115), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(118), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(121), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(124), 1,
      aux_sym_themes_statement_token1,
    STATE(12), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(75), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [467] = 10,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(133), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(135), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(137), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(139), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(141), 1,
      aux_sym_themes_statement_token1,
    STATE(12), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(75), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [504] = 10,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(133), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(135), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(137), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(139), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(141), 1,
      aux_sym_themes_statement_token1,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(75), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [541] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    STATE(16), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [574] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [607] = 1,
    ACTIONS(159), 14,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [624] = 1,
    ACTIONS(161), 14,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [641] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [674] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [707] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [740] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [773] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [806] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [839] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [872] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [905] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [938] = 9,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym_description_statement_token1,
    ACTIONS(189), 1,
      aux_sym_include_statement_token1,
    ACTIONS(192), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(195), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(198), 1,
      aux_sym_default_statement_token1,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [971] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1004] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1037] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1070] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1103] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1136] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1169] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_include_statement_token1,
    ACTIONS(151), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(153), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(155), 1,
      aux_sym_default_statement_token1,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(119), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1202] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(112), 1,
      sym__model_children,
    ACTIONS(221), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(217), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1226] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(99), 1,
      sym__model_children,
    ACTIONS(227), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(223), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1250] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(97), 1,
      sym__model_children,
    ACTIONS(233), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(229), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1274] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym_string,
    STATE(36), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(111), 1,
      sym__model_children,
    ACTIONS(239), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(235), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1298] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(130), 1,
      sym__model_children,
    ACTIONS(245), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(241), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1322] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(131), 1,
      sym__model_children,
    ACTIONS(249), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(247), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1346] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(114), 1,
      sym__model_children,
    ACTIONS(253), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(251), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1370] = 6,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(113), 1,
      sym__model_children,
    ACTIONS(257), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(255), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1394] = 1,
    ACTIONS(259), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1407] = 1,
    ACTIONS(261), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1420] = 1,
    ACTIONS(263), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1433] = 1,
    ACTIONS(265), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1446] = 1,
    ACTIONS(267), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1459] = 1,
    ACTIONS(269), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1472] = 1,
    ACTIONS(271), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1485] = 4,
    ACTIONS(275), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(278), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(273), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1504] = 1,
    ACTIONS(280), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1517] = 1,
    ACTIONS(282), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1530] = 1,
    ACTIONS(284), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1543] = 1,
    ACTIONS(286), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1556] = 5,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_string,
    STATE(109), 1,
      sym__model_children,
    ACTIONS(292), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(288), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1577] = 1,
    ACTIONS(294), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1590] = 1,
    ACTIONS(296), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1603] = 5,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      sym_string,
    STATE(106), 1,
      sym__model_children,
    ACTIONS(302), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(298), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1624] = 5,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      sym_string,
    STATE(98), 1,
      sym__model_children,
    ACTIONS(308), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(304), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1645] = 5,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      sym_string,
    STATE(105), 1,
      sym__model_children,
    ACTIONS(314), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(310), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1666] = 1,
    ACTIONS(316), 10,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_name_statement_token1,
      aux_sym_description_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1679] = 5,
    ACTIONS(318), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(320), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(322), 1,
      aux_sym_component_declaration_token1,
    ACTIONS(324), 1,
      aux_sym_person_declaration_token1,
    STATE(96), 5,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_component_declaration,
      sym_person_declaration,
  [1699] = 4,
    ACTIONS(219), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(328), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(326), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1717] = 2,
    ACTIONS(332), 1,
      aux_sym_color_token1,
    ACTIONS(330), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      aux_sym_color_token2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [1731] = 2,
    ACTIONS(336), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(334), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1744] = 6,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(344), 1,
      aux_sym_relationship_declaration_token1,
    STATE(81), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(158), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1765] = 2,
    ACTIONS(348), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(346), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1778] = 2,
    ACTIONS(352), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(350), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1791] = 3,
    ACTIONS(356), 1,
      sym_string,
    ACTIONS(358), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(354), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1806] = 2,
    ACTIONS(362), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(360), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1819] = 2,
    ACTIONS(366), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(364), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1832] = 2,
    ACTIONS(370), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(368), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1845] = 2,
    ACTIONS(374), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(372), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1858] = 2,
    ACTIONS(378), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(376), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1871] = 3,
    ACTIONS(382), 1,
      sym_string,
    ACTIONS(384), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(380), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1886] = 2,
    ACTIONS(388), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(386), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1899] = 2,
    ACTIONS(392), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(390), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1912] = 2,
    ACTIONS(396), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(394), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1925] = 2,
    ACTIONS(400), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(398), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1938] = 6,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(410), 1,
      aux_sym_relationship_declaration_token1,
    STATE(81), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(158), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1959] = 2,
    ACTIONS(415), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(413), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1972] = 2,
    ACTIONS(419), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(417), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1985] = 2,
    ACTIONS(423), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(421), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [1998] = 2,
    ACTIONS(427), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(425), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2011] = 2,
    ACTIONS(431), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(429), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2024] = 2,
    ACTIONS(435), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(433), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2037] = 2,
    ACTIONS(439), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(437), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2050] = 6,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(344), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(67), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(158), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [2071] = 2,
    ACTIONS(445), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(443), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2084] = 2,
    ACTIONS(449), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(447), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2097] = 2,
    ACTIONS(453), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(451), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2110] = 2,
    ACTIONS(457), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(455), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2123] = 2,
    ACTIONS(461), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(459), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2136] = 2,
    ACTIONS(465), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(463), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2148] = 2,
    ACTIONS(469), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(467), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2160] = 2,
    ACTIONS(473), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(471), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2172] = 2,
    ACTIONS(477), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(475), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2184] = 2,
    ACTIONS(481), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(479), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2196] = 1,
    ACTIONS(483), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2206] = 6,
    ACTIONS(485), 1,
      sym__simple_identifier,
    ACTIONS(488), 1,
      sym_wildcard_identifier,
    ACTIONS(491), 1,
      sym__newline,
    ACTIONS(493), 1,
      sym_comment,
    STATE(148), 1,
      sym_identifier,
    STATE(101), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2226] = 1,
    ACTIONS(495), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2236] = 1,
    ACTIONS(497), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2246] = 1,
    ACTIONS(499), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2256] = 2,
    ACTIONS(503), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(501), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2268] = 2,
    ACTIONS(507), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(505), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2280] = 6,
    ACTIONS(509), 1,
      sym__simple_identifier,
    ACTIONS(511), 1,
      sym_wildcard_identifier,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(515), 1,
      sym_comment,
    STATE(148), 1,
      sym_identifier,
    STATE(101), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2300] = 1,
    ACTIONS(517), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2310] = 2,
    ACTIONS(521), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(519), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2322] = 5,
    ACTIONS(525), 1,
      sym__simple_identifier,
    ACTIONS(527), 1,
      aux_sym_color_token1,
    ACTIONS(529), 1,
      aux_sym_color_token2,
    ACTIONS(523), 2,
      sym_number,
      sym_string,
    STATE(190), 2,
      sym_identifier,
      sym_color,
  [2340] = 2,
    ACTIONS(533), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(531), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2352] = 2,
    ACTIONS(537), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(535), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2364] = 2,
    ACTIONS(541), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(539), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2376] = 2,
    ACTIONS(545), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(543), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2388] = 1,
    ACTIONS(547), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2398] = 1,
    ACTIONS(549), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2408] = 1,
    ACTIONS(551), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2418] = 1,
    ACTIONS(553), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2428] = 1,
    ACTIONS(555), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2438] = 2,
    ACTIONS(559), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(557), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2450] = 1,
    ACTIONS(561), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2460] = 1,
    ACTIONS(563), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2470] = 1,
    ACTIONS(565), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2480] = 2,
    ACTIONS(567), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(269), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2492] = 2,
    ACTIONS(569), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(286), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2504] = 2,
    ACTIONS(571), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(284), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2516] = 2,
    ACTIONS(573), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(296), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2528] = 2,
    ACTIONS(575), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(282), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2540] = 2,
    ACTIONS(577), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(259), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2552] = 2,
    ACTIONS(581), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(579), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2564] = 2,
    ACTIONS(585), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(583), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2576] = 5,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    ACTIONS(589), 1,
      sym__simple_identifier,
    ACTIONS(591), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(133), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2593] = 5,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(595), 1,
      sym__simple_identifier,
    ACTIONS(598), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(133), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2610] = 3,
    ACTIONS(604), 1,
      sym__newline,
    STATE(134), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(601), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [2623] = 5,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(608), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_scope_declaration_token1,
    STATE(168), 1,
      sym_scope_declaration,
    STATE(139), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2640] = 5,
    ACTIONS(612), 1,
      sym__simple_identifier,
    ACTIONS(614), 1,
      sym__newline,
    ACTIONS(616), 1,
      sym_comment,
    STATE(153), 1,
      sym_identifier,
    STATE(142), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2657] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(134), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(618), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [2670] = 5,
    ACTIONS(608), 1,
      sym_comment,
    ACTIONS(610), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_scope_declaration,
    STATE(135), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2687] = 5,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_scope_declaration_token1,
    STATE(168), 1,
      sym_scope_declaration,
    STATE(139), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2704] = 3,
    ACTIONS(632), 1,
      sym__newline,
    STATE(137), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(618), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [2717] = 5,
    ACTIONS(589), 1,
      sym__simple_identifier,
    ACTIONS(591), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      sym_identifier,
    STATE(133), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2734] = 5,
    ACTIONS(636), 1,
      sym__simple_identifier,
    ACTIONS(639), 1,
      sym__newline,
    ACTIONS(641), 1,
      sym_comment,
    STATE(153), 1,
      sym_identifier,
    STATE(142), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2751] = 5,
    ACTIONS(589), 1,
      sym__simple_identifier,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(141), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2768] = 5,
    ACTIONS(589), 1,
      sym__simple_identifier,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      sym_comment,
    STATE(110), 1,
      sym_identifier,
    STATE(132), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2785] = 2,
    STATE(165), 1,
      sym_autolayout_value,
    ACTIONS(651), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [2795] = 4,
    ACTIONS(653), 1,
      ts_builtin_sym_end,
    ACTIONS(655), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(658), 1,
      sym_comment,
    STATE(146), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2809] = 4,
    ACTIONS(509), 1,
      sym__simple_identifier,
    ACTIONS(661), 1,
      sym_wildcard_identifier,
    STATE(148), 1,
      sym_identifier,
    STATE(107), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2823] = 3,
    ACTIONS(665), 1,
      anon_sym_DOT,
    ACTIONS(667), 1,
      sym__newline,
    ACTIONS(663), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2835] = 4,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    ACTIONS(671), 1,
      sym_comment,
    STATE(146), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2849] = 2,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(332), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [2859] = 2,
    ACTIONS(675), 1,
      sym__newline,
    ACTIONS(673), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [2868] = 2,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(332), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [2877] = 3,
    ACTIONS(679), 1,
      anon_sym_DOT,
    ACTIONS(681), 1,
      sym__newline,
    ACTIONS(677), 2,
      sym__simple_identifier,
      sym_comment,
  [2888] = 3,
    ACTIONS(683), 1,
      sym__simple_identifier,
    STATE(153), 1,
      sym_identifier,
    STATE(136), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2899] = 1,
    ACTIONS(685), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2906] = 1,
    ACTIONS(687), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2913] = 3,
    ACTIONS(689), 1,
      sym_string,
    STATE(228), 1,
      sym_theme_value,
    ACTIONS(618), 2,
      sym_path_value,
      anon_sym_default,
  [2924] = 1,
    ACTIONS(691), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2931] = 1,
    ACTIONS(693), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2938] = 1,
    ACTIONS(695), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2945] = 4,
    ACTIONS(589), 1,
      sym__simple_identifier,
    STATE(179), 1,
      sym_identifier,
    STATE(198), 1,
      sym_dotted_identifier,
    STATE(205), 1,
      sym_relation_identifier,
  [2958] = 2,
    ACTIONS(699), 1,
      sym__newline,
    ACTIONS(697), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2967] = 2,
    ACTIONS(703), 1,
      sym__newline,
    ACTIONS(701), 2,
      sym_number,
      sym_comment,
  [2975] = 2,
    ACTIONS(699), 1,
      sym__newline,
    ACTIONS(697), 2,
      sym__simple_identifier,
      sym_comment,
  [2983] = 3,
    ACTIONS(705), 1,
      sym_number,
    ACTIONS(707), 1,
      sym__newline,
    ACTIONS(709), 1,
      sym_comment,
  [2993] = 3,
    ACTIONS(711), 1,
      anon_sym_DOT,
    ACTIONS(713), 1,
      anon_sym_EQ,
    ACTIONS(715), 1,
      anon_sym_DASH_GT,
  [3003] = 3,
    ACTIONS(717), 1,
      sym_number,
    ACTIONS(719), 1,
      sym__newline,
    ACTIONS(721), 1,
      sym_comment,
  [3013] = 1,
    ACTIONS(723), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [3019] = 3,
    ACTIONS(62), 1,
      sym__simple_identifier,
    ACTIONS(725), 1,
      sym_wildcard_identifier,
    STATE(183), 1,
      sym_identifier,
  [3029] = 1,
    ACTIONS(727), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3035] = 1,
    ACTIONS(729), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [3041] = 1,
    ACTIONS(731), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [3047] = 1,
    ACTIONS(733), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3053] = 1,
    ACTIONS(735), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3059] = 1,
    ACTIONS(737), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [3065] = 2,
    STATE(214), 1,
      sym_identifiers_value,
    ACTIONS(739), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [3073] = 2,
    ACTIONS(741), 1,
      sym__newline,
    ACTIONS(743), 1,
      sym_comment,
  [3080] = 2,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym_string,
  [3087] = 2,
    ACTIONS(711), 1,
      anon_sym_DOT,
    ACTIONS(715), 1,
      sym_string,
  [3094] = 2,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
    ACTIONS(751), 1,
      sym_string,
  [3101] = 2,
    ACTIONS(589), 1,
      sym__simple_identifier,
    STATE(178), 1,
      sym_identifier,
  [3108] = 2,
    ACTIONS(589), 1,
      sym__simple_identifier,
    STATE(185), 1,
      sym_identifier,
  [3115] = 2,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
    ACTIONS(755), 1,
      sym_string,
  [3122] = 2,
    ACTIONS(757), 1,
      sym__newline,
    ACTIONS(759), 1,
      sym_comment,
  [3129] = 2,
    ACTIONS(761), 1,
      anon_sym_LBRACE,
    ACTIONS(763), 1,
      sym_string,
  [3136] = 2,
    ACTIONS(765), 1,
      sym_class_value,
    ACTIONS(767), 1,
      sym__newline,
  [3143] = 2,
    ACTIONS(769), 1,
      anon_sym_LBRACE,
    ACTIONS(771), 1,
      sym_string,
  [3150] = 2,
    ACTIONS(773), 1,
      sym__newline,
    ACTIONS(775), 1,
      sym_comment,
  [3157] = 2,
    ACTIONS(777), 1,
      sym_class_value,
    ACTIONS(779), 1,
      sym__newline,
  [3164] = 2,
    ACTIONS(781), 1,
      sym__newline,
    ACTIONS(783), 1,
      sym_comment,
  [3171] = 2,
    ACTIONS(785), 1,
      sym__newline,
    ACTIONS(787), 1,
      sym_comment,
  [3178] = 2,
    ACTIONS(589), 1,
      sym__simple_identifier,
    STATE(197), 1,
      sym_identifier,
  [3185] = 2,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
    ACTIONS(791), 1,
      sym_string,
  [3192] = 2,
    ACTIONS(793), 1,
      sym_string,
    STATE(64), 1,
      aux_sym_software_system_declaration_repeat1,
  [3199] = 2,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym__model_children,
  [3206] = 2,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    ACTIONS(799), 1,
      sym_string,
  [3213] = 1,
    ACTIONS(699), 2,
      sym_string,
      anon_sym_DASH_GT,
  [3218] = 1,
    ACTIONS(715), 2,
      sym_string,
      anon_sym_DASH_GT,
  [3223] = 2,
    ACTIONS(525), 1,
      sym__simple_identifier,
    STATE(162), 1,
      sym_identifier,
  [3230] = 2,
    ACTIONS(683), 1,
      sym__simple_identifier,
    STATE(164), 1,
      sym_identifier,
  [3237] = 2,
    ACTIONS(801), 1,
      sym_class_value,
    ACTIONS(803), 1,
      sym__newline,
  [3244] = 2,
    ACTIONS(805), 1,
      sym_class_value,
    ACTIONS(807), 1,
      sym__newline,
  [3251] = 1,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
  [3255] = 1,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
  [3259] = 1,
    ACTIONS(813), 1,
      sym_string,
  [3263] = 1,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
  [3267] = 1,
    ACTIONS(817), 1,
      sym__simple_identifier,
  [3271] = 1,
    ACTIONS(819), 1,
      sym__newline,
  [3275] = 1,
    ACTIONS(821), 1,
      sym__newline,
  [3279] = 1,
    ACTIONS(823), 1,
      sym__newline,
  [3283] = 1,
    ACTIONS(825), 1,
      sym_string,
  [3287] = 1,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
  [3291] = 1,
    ACTIONS(829), 1,
      sym_string,
  [3295] = 1,
    ACTIONS(831), 1,
      sym__newline,
  [3299] = 1,
    ACTIONS(833), 1,
      sym__newline,
  [3303] = 1,
    ACTIONS(835), 1,
      sym_path_value,
  [3307] = 1,
    ACTIONS(837), 1,
      anon_sym_LBRACE,
  [3311] = 1,
    ACTIONS(839), 1,
      sym__newline,
  [3315] = 1,
    ACTIONS(841), 1,
      sym_string,
  [3319] = 1,
    ACTIONS(843), 1,
      sym__newline,
  [3323] = 1,
    ACTIONS(845), 1,
      anon_sym_LBRACE,
  [3327] = 1,
    ACTIONS(847), 1,
      anon_sym_EQ,
  [3331] = 1,
    ACTIONS(849), 1,
      sym__newline,
  [3335] = 1,
    ACTIONS(851), 1,
      sym__newline,
  [3339] = 1,
    ACTIONS(853), 1,
      anon_sym_DASH_GT,
  [3343] = 1,
    ACTIONS(855), 1,
      sym__newline,
  [3347] = 1,
    ACTIONS(857), 1,
      sym_string,
  [3351] = 1,
    ACTIONS(859), 1,
      sym__newline,
  [3355] = 1,
    ACTIONS(861), 1,
      anon_sym_LBRACE,
  [3359] = 1,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
  [3363] = 1,
    ACTIONS(865), 1,
      sym_string,
  [3367] = 1,
    ACTIONS(867), 1,
      sym_path_value,
  [3371] = 1,
    ACTIONS(869), 1,
      sym_string,
  [3375] = 1,
    ACTIONS(871), 1,
      sym_string,
  [3379] = 1,
    ACTIONS(873), 1,
      sym_string,
  [3383] = 1,
    ACTIONS(875), 1,
      anon_sym_LBRACE,
  [3387] = 1,
    ACTIONS(877), 1,
      sym_string,
  [3391] = 1,
    ACTIONS(879), 1,
      sym__newline,
  [3395] = 1,
    ACTIONS(881), 1,
      anon_sym_LBRACE,
  [3399] = 1,
    ACTIONS(883), 1,
      sym_string,
  [3403] = 1,
    ACTIONS(885), 1,
      sym__newline,
  [3407] = 1,
    ACTIONS(887), 1,
      sym__newline,
  [3411] = 1,
    ACTIONS(889), 1,
      sym__newline,
  [3415] = 1,
    ACTIONS(891), 1,
      sym_path_value,
  [3419] = 1,
    ACTIONS(893), 1,
      sym_path_value,
  [3423] = 1,
    ACTIONS(895), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 348,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 430,
  [SMALL_STATE(13)] = 467,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 607,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 641,
  [SMALL_STATE(20)] = 674,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 740,
  [SMALL_STATE(23)] = 773,
  [SMALL_STATE(24)] = 806,
  [SMALL_STATE(25)] = 839,
  [SMALL_STATE(26)] = 872,
  [SMALL_STATE(27)] = 905,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 971,
  [SMALL_STATE(30)] = 1004,
  [SMALL_STATE(31)] = 1037,
  [SMALL_STATE(32)] = 1070,
  [SMALL_STATE(33)] = 1103,
  [SMALL_STATE(34)] = 1136,
  [SMALL_STATE(35)] = 1169,
  [SMALL_STATE(36)] = 1202,
  [SMALL_STATE(37)] = 1226,
  [SMALL_STATE(38)] = 1250,
  [SMALL_STATE(39)] = 1274,
  [SMALL_STATE(40)] = 1298,
  [SMALL_STATE(41)] = 1322,
  [SMALL_STATE(42)] = 1346,
  [SMALL_STATE(43)] = 1370,
  [SMALL_STATE(44)] = 1394,
  [SMALL_STATE(45)] = 1407,
  [SMALL_STATE(46)] = 1420,
  [SMALL_STATE(47)] = 1433,
  [SMALL_STATE(48)] = 1446,
  [SMALL_STATE(49)] = 1459,
  [SMALL_STATE(50)] = 1472,
  [SMALL_STATE(51)] = 1485,
  [SMALL_STATE(52)] = 1504,
  [SMALL_STATE(53)] = 1517,
  [SMALL_STATE(54)] = 1530,
  [SMALL_STATE(55)] = 1543,
  [SMALL_STATE(56)] = 1556,
  [SMALL_STATE(57)] = 1577,
  [SMALL_STATE(58)] = 1590,
  [SMALL_STATE(59)] = 1603,
  [SMALL_STATE(60)] = 1624,
  [SMALL_STATE(61)] = 1645,
  [SMALL_STATE(62)] = 1666,
  [SMALL_STATE(63)] = 1679,
  [SMALL_STATE(64)] = 1699,
  [SMALL_STATE(65)] = 1717,
  [SMALL_STATE(66)] = 1731,
  [SMALL_STATE(67)] = 1744,
  [SMALL_STATE(68)] = 1765,
  [SMALL_STATE(69)] = 1778,
  [SMALL_STATE(70)] = 1791,
  [SMALL_STATE(71)] = 1806,
  [SMALL_STATE(72)] = 1819,
  [SMALL_STATE(73)] = 1832,
  [SMALL_STATE(74)] = 1845,
  [SMALL_STATE(75)] = 1858,
  [SMALL_STATE(76)] = 1871,
  [SMALL_STATE(77)] = 1886,
  [SMALL_STATE(78)] = 1899,
  [SMALL_STATE(79)] = 1912,
  [SMALL_STATE(80)] = 1925,
  [SMALL_STATE(81)] = 1938,
  [SMALL_STATE(82)] = 1959,
  [SMALL_STATE(83)] = 1972,
  [SMALL_STATE(84)] = 1985,
  [SMALL_STATE(85)] = 1998,
  [SMALL_STATE(86)] = 2011,
  [SMALL_STATE(87)] = 2024,
  [SMALL_STATE(88)] = 2037,
  [SMALL_STATE(89)] = 2050,
  [SMALL_STATE(90)] = 2071,
  [SMALL_STATE(91)] = 2084,
  [SMALL_STATE(92)] = 2097,
  [SMALL_STATE(93)] = 2110,
  [SMALL_STATE(94)] = 2123,
  [SMALL_STATE(95)] = 2136,
  [SMALL_STATE(96)] = 2148,
  [SMALL_STATE(97)] = 2160,
  [SMALL_STATE(98)] = 2172,
  [SMALL_STATE(99)] = 2184,
  [SMALL_STATE(100)] = 2196,
  [SMALL_STATE(101)] = 2206,
  [SMALL_STATE(102)] = 2226,
  [SMALL_STATE(103)] = 2236,
  [SMALL_STATE(104)] = 2246,
  [SMALL_STATE(105)] = 2256,
  [SMALL_STATE(106)] = 2268,
  [SMALL_STATE(107)] = 2280,
  [SMALL_STATE(108)] = 2300,
  [SMALL_STATE(109)] = 2310,
  [SMALL_STATE(110)] = 2322,
  [SMALL_STATE(111)] = 2340,
  [SMALL_STATE(112)] = 2352,
  [SMALL_STATE(113)] = 2364,
  [SMALL_STATE(114)] = 2376,
  [SMALL_STATE(115)] = 2388,
  [SMALL_STATE(116)] = 2398,
  [SMALL_STATE(117)] = 2408,
  [SMALL_STATE(118)] = 2418,
  [SMALL_STATE(119)] = 2428,
  [SMALL_STATE(120)] = 2438,
  [SMALL_STATE(121)] = 2450,
  [SMALL_STATE(122)] = 2460,
  [SMALL_STATE(123)] = 2470,
  [SMALL_STATE(124)] = 2480,
  [SMALL_STATE(125)] = 2492,
  [SMALL_STATE(126)] = 2504,
  [SMALL_STATE(127)] = 2516,
  [SMALL_STATE(128)] = 2528,
  [SMALL_STATE(129)] = 2540,
  [SMALL_STATE(130)] = 2552,
  [SMALL_STATE(131)] = 2564,
  [SMALL_STATE(132)] = 2576,
  [SMALL_STATE(133)] = 2593,
  [SMALL_STATE(134)] = 2610,
  [SMALL_STATE(135)] = 2623,
  [SMALL_STATE(136)] = 2640,
  [SMALL_STATE(137)] = 2657,
  [SMALL_STATE(138)] = 2670,
  [SMALL_STATE(139)] = 2687,
  [SMALL_STATE(140)] = 2704,
  [SMALL_STATE(141)] = 2717,
  [SMALL_STATE(142)] = 2734,
  [SMALL_STATE(143)] = 2751,
  [SMALL_STATE(144)] = 2768,
  [SMALL_STATE(145)] = 2785,
  [SMALL_STATE(146)] = 2795,
  [SMALL_STATE(147)] = 2809,
  [SMALL_STATE(148)] = 2823,
  [SMALL_STATE(149)] = 2835,
  [SMALL_STATE(150)] = 2849,
  [SMALL_STATE(151)] = 2859,
  [SMALL_STATE(152)] = 2868,
  [SMALL_STATE(153)] = 2877,
  [SMALL_STATE(154)] = 2888,
  [SMALL_STATE(155)] = 2899,
  [SMALL_STATE(156)] = 2906,
  [SMALL_STATE(157)] = 2913,
  [SMALL_STATE(158)] = 2924,
  [SMALL_STATE(159)] = 2931,
  [SMALL_STATE(160)] = 2938,
  [SMALL_STATE(161)] = 2945,
  [SMALL_STATE(162)] = 2958,
  [SMALL_STATE(163)] = 2967,
  [SMALL_STATE(164)] = 2975,
  [SMALL_STATE(165)] = 2983,
  [SMALL_STATE(166)] = 2993,
  [SMALL_STATE(167)] = 3003,
  [SMALL_STATE(168)] = 3013,
  [SMALL_STATE(169)] = 3019,
  [SMALL_STATE(170)] = 3029,
  [SMALL_STATE(171)] = 3035,
  [SMALL_STATE(172)] = 3041,
  [SMALL_STATE(173)] = 3047,
  [SMALL_STATE(174)] = 3053,
  [SMALL_STATE(175)] = 3059,
  [SMALL_STATE(176)] = 3065,
  [SMALL_STATE(177)] = 3073,
  [SMALL_STATE(178)] = 3080,
  [SMALL_STATE(179)] = 3087,
  [SMALL_STATE(180)] = 3094,
  [SMALL_STATE(181)] = 3101,
  [SMALL_STATE(182)] = 3108,
  [SMALL_STATE(183)] = 3115,
  [SMALL_STATE(184)] = 3122,
  [SMALL_STATE(185)] = 3129,
  [SMALL_STATE(186)] = 3136,
  [SMALL_STATE(187)] = 3143,
  [SMALL_STATE(188)] = 3150,
  [SMALL_STATE(189)] = 3157,
  [SMALL_STATE(190)] = 3164,
  [SMALL_STATE(191)] = 3171,
  [SMALL_STATE(192)] = 3178,
  [SMALL_STATE(193)] = 3185,
  [SMALL_STATE(194)] = 3192,
  [SMALL_STATE(195)] = 3199,
  [SMALL_STATE(196)] = 3206,
  [SMALL_STATE(197)] = 3213,
  [SMALL_STATE(198)] = 3218,
  [SMALL_STATE(199)] = 3223,
  [SMALL_STATE(200)] = 3230,
  [SMALL_STATE(201)] = 3237,
  [SMALL_STATE(202)] = 3244,
  [SMALL_STATE(203)] = 3251,
  [SMALL_STATE(204)] = 3255,
  [SMALL_STATE(205)] = 3259,
  [SMALL_STATE(206)] = 3263,
  [SMALL_STATE(207)] = 3267,
  [SMALL_STATE(208)] = 3271,
  [SMALL_STATE(209)] = 3275,
  [SMALL_STATE(210)] = 3279,
  [SMALL_STATE(211)] = 3283,
  [SMALL_STATE(212)] = 3287,
  [SMALL_STATE(213)] = 3291,
  [SMALL_STATE(214)] = 3295,
  [SMALL_STATE(215)] = 3299,
  [SMALL_STATE(216)] = 3303,
  [SMALL_STATE(217)] = 3307,
  [SMALL_STATE(218)] = 3311,
  [SMALL_STATE(219)] = 3315,
  [SMALL_STATE(220)] = 3319,
  [SMALL_STATE(221)] = 3323,
  [SMALL_STATE(222)] = 3327,
  [SMALL_STATE(223)] = 3331,
  [SMALL_STATE(224)] = 3335,
  [SMALL_STATE(225)] = 3339,
  [SMALL_STATE(226)] = 3343,
  [SMALL_STATE(227)] = 3347,
  [SMALL_STATE(228)] = 3351,
  [SMALL_STATE(229)] = 3355,
  [SMALL_STATE(230)] = 3359,
  [SMALL_STATE(231)] = 3363,
  [SMALL_STATE(232)] = 3367,
  [SMALL_STATE(233)] = 3371,
  [SMALL_STATE(234)] = 3375,
  [SMALL_STATE(235)] = 3379,
  [SMALL_STATE(236)] = 3383,
  [SMALL_STATE(237)] = 3387,
  [SMALL_STATE(238)] = 3391,
  [SMALL_STATE(239)] = 3395,
  [SMALL_STATE(240)] = 3399,
  [SMALL_STATE(241)] = 3403,
  [SMALL_STATE(242)] = 3407,
  [SMALL_STATE(243)] = 3411,
  [SMALL_STATE(244)] = 3415,
  [SMALL_STATE(245)] = 3419,
  [SMALL_STATE(246)] = 3423,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_statement, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 3, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 11),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 5, 0, 11),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_statement, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_statement, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_themes_statement, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_themes_statement, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_themes_statement, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_themes_statement, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 11),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 5, 0, 11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 7),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 4, 0, 7),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 8),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 8),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 12),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 12),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 7),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 4, 0, 7),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 11),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 6, 0, 11),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 15),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 6, 0, 15),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 11),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 6, 0, 11),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 15),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 6, 0, 15),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 8),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 8),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 12),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 12),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 16),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 16),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 15),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 7, 0, 15),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 15),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 7, 0, 15),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 16),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 16),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 17),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 18),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 17),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 18),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_themes_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_themes_statement_repeat1, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_value, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 4, 0, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 5, 0, 5),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 19),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 19),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [863] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
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
