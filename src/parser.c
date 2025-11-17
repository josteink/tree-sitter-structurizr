#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 256
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  sym_url_value = 8,
  sym__simple_identifier = 9,
  anon_sym_DOT = 10,
  sym_wildcard_identifier = 11,
  sym__newline = 12,
  aux_sym_color_token1 = 13,
  aux_sym_color_token2 = 14,
  sym_comment = 15,
  aux_sym_identifiers_statement_token1 = 16,
  anon_sym_hierarchical = 17,
  anon_sym_flat = 18,
  aux_sym_name_statement_token1 = 19,
  aux_sym_description_statement_token1 = 20,
  aux_sym_docs_statement_token1 = 21,
  aux_sym_adrs_statement_token1 = 22,
  aux_sym_model_declaration_token1 = 23,
  anon_sym_EQ = 24,
  anon_sym_DASH_GT = 25,
  aux_sym_software_system_declaration_token1 = 26,
  aux_sym_container_declaration_token1 = 27,
  aux_sym_component_declaration_token1 = 28,
  aux_sym_group_declaration_token1 = 29,
  aux_sym_person_declaration_token1 = 30,
  anon_sym_tag = 31,
  anon_sym_tags = 32,
  anon_sym_url = 33,
  aux_sym_configuration_declaration_token1 = 34,
  aux_sym_scope_declaration_token1 = 35,
  aux_sym_views_declaration_token1 = 36,
  aux_sym_system_context_view_declaration_token1 = 37,
  aux_sym_include_statement_token1 = 38,
  aux_sym_exclude_statement_token1 = 39,
  aux_sym_autolayout_statement_token1 = 40,
  aux_sym_autolayout_value_token1 = 41,
  aux_sym_autolayout_value_token2 = 42,
  aux_sym_autolayout_value_token3 = 43,
  aux_sym_autolayout_value_token4 = 44,
  aux_sym_default_statement_token1 = 45,
  aux_sym_dynamic_view_declaration_token1 = 46,
  aux_sym_styles_declaration_token1 = 47,
  aux_sym_theme_statement_token1 = 48,
  aux_sym_themes_statement_token1 = 49,
  anon_sym_default = 50,
  aux_sym_element_declaration_token1 = 51,
  aux_sym_relationship_declaration_token1 = 52,
  sym_dsl = 53,
  sym_workspace_declaration = 54,
  sym_dotted_identifier = 55,
  sym_identifier = 56,
  sym_relation_identifier = 57,
  sym_color = 58,
  sym_workspace_item_statement = 59,
  sym_identifiers_statement = 60,
  sym_identifiers_value = 61,
  sym_name_statement = 62,
  sym_description_statement = 63,
  sym_docs_statement = 64,
  sym_adrs_statement = 65,
  sym_model_declaration = 66,
  sym__model_children = 67,
  sym__model_item_statement = 68,
  sym_variable_declaration = 69,
  sym_relation_statement = 70,
  sym__item_declaration = 71,
  sym_software_system_declaration = 72,
  sym_container_declaration = 73,
  sym_component_declaration = 74,
  sym_group_declaration = 75,
  sym_person_declaration = 76,
  sym_tag_declaration = 77,
  sym_tags_declaration = 78,
  sym_url_declaration = 79,
  sym_configuration_declaration = 80,
  sym_configuration_item_statement = 81,
  sym_scope_declaration = 82,
  sym_views_declaration = 83,
  sym_views_item_statement = 84,
  sym_system_context_view_declaration = 85,
  sym_view_property_statement = 86,
  sym_include_statement = 87,
  sym_exclude_statement = 88,
  sym_autolayout_statement = 89,
  sym_autolayout_value = 90,
  sym_default_statement = 91,
  sym_container_view_declaration = 92,
  sym_dynamic_view_declaration = 93,
  sym_styles_declaration = 94,
  sym_theme_statement = 95,
  sym_themes_statement = 96,
  sym_theme_value = 97,
  sym_style_item_statement = 98,
  sym_element_declaration = 99,
  sym_relationship_declaration = 100,
  sym_element_property = 101,
  aux_sym_dsl_repeat1 = 102,
  aux_sym_workspace_declaration_repeat1 = 103,
  aux_sym__model_children_repeat1 = 104,
  aux_sym_software_system_declaration_repeat1 = 105,
  aux_sym_configuration_declaration_repeat1 = 106,
  aux_sym_views_declaration_repeat1 = 107,
  aux_sym_system_context_view_declaration_repeat1 = 108,
  aux_sym_include_statement_repeat1 = 109,
  aux_sym_exclude_statement_repeat1 = 110,
  aux_sym_styles_declaration_repeat1 = 111,
  aux_sym_themes_statement_repeat1 = 112,
  aux_sym_element_declaration_repeat1 = 113,
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
  [sym_url_value] = "url_value",
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
  [aux_sym_group_declaration_token1] = "group",
  [aux_sym_person_declaration_token1] = "person",
  [anon_sym_tag] = "tag",
  [anon_sym_tags] = "tags",
  [anon_sym_url] = "url",
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
  [sym_group_declaration] = "group_declaration",
  [sym_person_declaration] = "person_declaration",
  [sym_tag_declaration] = "tag_declaration",
  [sym_tags_declaration] = "tags_declaration",
  [sym_url_declaration] = "url_declaration",
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
  [sym_url_value] = sym_url_value,
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
  [aux_sym_group_declaration_token1] = aux_sym_group_declaration_token1,
  [aux_sym_person_declaration_token1] = aux_sym_person_declaration_token1,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_tags] = anon_sym_tags,
  [anon_sym_url] = anon_sym_url,
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
  [sym_group_declaration] = sym_group_declaration,
  [sym_person_declaration] = sym_person_declaration,
  [sym_tag_declaration] = sym_tag_declaration,
  [sym_tags_declaration] = sym_tags_declaration,
  [sym_url_declaration] = sym_url_declaration,
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
  [sym_url_value] = {
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
  [aux_sym_group_declaration_token1] = {
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
  [anon_sym_url] = {
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
  [sym_group_declaration] = {
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
  [sym_url_declaration] = {
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
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
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
    {field_name, 1},
  [4] =
    {field_child, 2},
    {field_parent, 0},
  [6] =
    {field_name, 0},
    {field_value, 2},
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
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
  [85] = 56,
  [86] = 57,
  [87] = 58,
  [88] = 61,
  [89] = 62,
  [90] = 63,
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
  [147] = 147,
  [148] = 148,
  [149] = 71,
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
  [165] = 71,
  [166] = 47,
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
  [181] = 162,
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
  [193] = 162,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 182,
  [203] = 203,
  [204] = 188,
  [205] = 194,
  [206] = 182,
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
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 215,
  [251] = 220,
  [252] = 252,
  [253] = 209,
  [254] = 219,
  [255] = 255,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '!', 63,
        '"', 46,
        '#', 234,
        '*', 265,
        '-', 31,
        '.', 264,
        '=', 281,
        'D', 88,
        'T', 73,
        'd', 33,
        'f', 51,
        'h', 49,
        't', 38,
        'u', 56,
        '{', 241,
        '}', 242,
        'A', 216,
        'a', 216,
        'B', 201,
        'b', 201,
        'C', 159,
        'c', 159,
        'E', 137,
        'e', 137,
        'G', 186,
        'g', 186,
        'I', 158,
        'i', 158,
        'L', 180,
        'l', 180,
        'M', 172,
        'm', 172,
        'N', 64,
        'n', 64,
        'P', 99,
        'p', 99,
        'R', 90,
        'r', 90,
        'S', 77,
        's', 77,
        'V', 121,
        'v', 121,
        'W', 163,
        'w', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(272);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 62,
        '"', 235,
        '#', 271,
        '/', 22,
        't', 255,
        'u', 258,
        '{', 241,
        '}', 242,
        'G', 261,
        'g', 261,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '{') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '}') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(271);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(282);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(305);
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(303);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(303);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        'C', 162,
        'c', 162,
        'O', 114,
        'o', 114,
        'T', 226,
        't', 226,
        'Y', 197,
        'y', 197,
      );
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 112:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 114:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(207);
      END_STATE();
    case 115:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 117:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(198);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 139:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 161:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 164:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 174:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 175:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 176:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 178:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 179:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(279);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 196:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      END_STATE();
    case 197:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 198:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 199:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 216:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 221:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 222:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 223:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      END_STATE();
    case 224:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 225:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 226:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 227:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 228:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 229:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(17);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '!', 63,
        '"', 235,
        '#', 271,
        '-', 31,
        '.', 264,
        '/', 22,
        '{', 241,
        '}', 242,
        'A', 216,
        'a', 216,
        'C', 169,
        'c', 169,
        'D', 88,
        'd', 88,
        'E', 137,
        'e', 137,
        'I', 158,
        'i', 158,
        'M', 172,
        'm', 172,
        'N', 64,
        'n', 64,
        'R', 89,
        'r', 89,
        'S', 78,
        's', 78,
        'T', 117,
        't', 117,
        'V', 121,
        'v', 121,
        'W', 163,
        'w', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_path_value);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_url_value);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_name_statement_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_docs_statement_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_adrs_statement_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_component_declaration_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_group_declaration_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_theme_statement_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_themes_statement_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(253);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 238},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 238},
  [8] = {.lex_state = 238},
  [9] = {.lex_state = 238},
  [10] = {.lex_state = 238},
  [11] = {.lex_state = 238},
  [12] = {.lex_state = 238},
  [13] = {.lex_state = 238},
  [14] = {.lex_state = 238},
  [15] = {.lex_state = 238},
  [16] = {.lex_state = 238},
  [17] = {.lex_state = 238},
  [18] = {.lex_state = 238},
  [19] = {.lex_state = 238},
  [20] = {.lex_state = 238},
  [21] = {.lex_state = 238},
  [22] = {.lex_state = 238},
  [23] = {.lex_state = 238},
  [24] = {.lex_state = 238},
  [25] = {.lex_state = 238},
  [26] = {.lex_state = 238},
  [27] = {.lex_state = 238},
  [28] = {.lex_state = 238},
  [29] = {.lex_state = 238},
  [30] = {.lex_state = 238},
  [31] = {.lex_state = 238},
  [32] = {.lex_state = 238},
  [33] = {.lex_state = 238},
  [34] = {.lex_state = 238},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 238},
  [51] = {.lex_state = 238},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 238},
  [54] = {.lex_state = 238},
  [55] = {.lex_state = 238},
  [56] = {.lex_state = 238},
  [57] = {.lex_state = 238},
  [58] = {.lex_state = 238},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 238},
  [61] = {.lex_state = 238},
  [62] = {.lex_state = 238},
  [63] = {.lex_state = 238},
  [64] = {.lex_state = 238},
  [65] = {.lex_state = 238},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 238},
  [93] = {.lex_state = 238},
  [94] = {.lex_state = 238},
  [95] = {.lex_state = 238},
  [96] = {.lex_state = 238},
  [97] = {.lex_state = 238},
  [98] = {.lex_state = 238},
  [99] = {.lex_state = 238},
  [100] = {.lex_state = 238},
  [101] = {.lex_state = 238},
  [102] = {.lex_state = 238},
  [103] = {.lex_state = 238},
  [104] = {.lex_state = 238},
  [105] = {.lex_state = 238},
  [106] = {.lex_state = 238},
  [107] = {.lex_state = 238},
  [108] = {.lex_state = 238},
  [109] = {.lex_state = 238},
  [110] = {.lex_state = 238},
  [111] = {.lex_state = 238},
  [112] = {.lex_state = 238},
  [113] = {.lex_state = 238},
  [114] = {.lex_state = 238},
  [115] = {.lex_state = 238},
  [116] = {.lex_state = 238},
  [117] = {.lex_state = 238},
  [118] = {.lex_state = 238},
  [119] = {.lex_state = 238},
  [120] = {.lex_state = 238},
  [121] = {.lex_state = 238},
  [122] = {.lex_state = 238},
  [123] = {.lex_state = 238},
  [124] = {.lex_state = 238},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 238},
  [127] = {.lex_state = 238},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 238},
  [130] = {.lex_state = 238},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 238},
  [133] = {.lex_state = 238},
  [134] = {.lex_state = 238},
  [135] = {.lex_state = 21},
  [136] = {.lex_state = 21},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 238},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 238},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 238},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 238},
  [152] = {.lex_state = 25},
  [153] = {.lex_state = 238},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 238},
  [156] = {.lex_state = 238},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 238},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 18},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 238},
  [164] = {.lex_state = 238},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 238},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 238},
  [171] = {.lex_state = 238},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 21},
  [176] = {.lex_state = 238},
  [177] = {.lex_state = 25},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 21},
  [180] = {.lex_state = 238},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 238},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 238},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 238},
  [193] = {.lex_state = 238},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 238},
  [196] = {.lex_state = 238},
  [197] = {.lex_state = 238},
  [198] = {.lex_state = 238},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 238},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 238},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 238},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 238},
  [211] = {.lex_state = 238},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 238},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 238},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 238},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 238},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 238},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 238},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 238},
  [244] = {.lex_state = 238},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 238},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 238},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_workspace_declaration_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_url_value] = ACTIONS(1),
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
    [aux_sym_group_declaration_token1] = ACTIONS(1),
    [aux_sym_person_declaration_token1] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
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
    [sym_dsl] = STATE(229),
    [sym_workspace_declaration] = STATE(151),
    [aux_sym_dsl_repeat1] = STATE(151),
    [aux_sym_workspace_declaration_token1] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(15), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(17), 1,
      aux_sym_group_declaration_token1,
    ACTIONS(19), 1,
      anon_sym_tag,
    ACTIONS(21), 1,
      anon_sym_tags,
    ACTIONS(23), 1,
      anon_sym_url,
    STATE(169), 1,
      sym_identifier,
    STATE(189), 1,
      sym_dotted_identifier,
    STATE(241), 1,
      sym_relation_identifier,
    STATE(5), 10,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_group_declaration,
      sym_tag_declaration,
      sym_tags_declaration,
      sym_url_declaration,
      aux_sym__model_children_repeat1,
  [49] = 13,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(13), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(15), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(17), 1,
      aux_sym_group_declaration_token1,
    ACTIONS(19), 1,
      anon_sym_tag,
    ACTIONS(21), 1,
      anon_sym_tags,
    ACTIONS(23), 1,
      anon_sym_url,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      sym_comment,
    STATE(169), 1,
      sym_identifier,
    STATE(189), 1,
      sym_dotted_identifier,
    STATE(241), 1,
      sym_relation_identifier,
    STATE(4), 10,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_group_declaration,
      sym_tag_declaration,
      sym_tags_declaration,
      sym_url_declaration,
      aux_sym__model_children_repeat1,
  [98] = 13,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(15), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(17), 1,
      aux_sym_group_declaration_token1,
    ACTIONS(19), 1,
      anon_sym_tag,
    ACTIONS(21), 1,
      anon_sym_tags,
    ACTIONS(23), 1,
      anon_sym_url,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_identifier,
    STATE(189), 1,
      sym_dotted_identifier,
    STATE(241), 1,
      sym_relation_identifier,
    STATE(5), 10,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_group_declaration,
      sym_tag_declaration,
      sym_tags_declaration,
      sym_url_declaration,
      aux_sym__model_children_repeat1,
  [147] = 13,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym__simple_identifier,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(42), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(45), 1,
      aux_sym_group_declaration_token1,
    ACTIONS(48), 1,
      anon_sym_tag,
    ACTIONS(51), 1,
      anon_sym_tags,
    ACTIONS(54), 1,
      anon_sym_url,
    STATE(169), 1,
      sym_identifier,
    STATE(189), 1,
      sym_dotted_identifier,
    STATE(241), 1,
      sym_relation_identifier,
    STATE(5), 10,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_group_declaration,
      sym_tag_declaration,
      sym_tags_declaration,
      sym_url_declaration,
      aux_sym__model_children_repeat1,
  [196] = 13,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(13), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(15), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(17), 1,
      aux_sym_group_declaration_token1,
    ACTIONS(19), 1,
      anon_sym_tag,
    ACTIONS(21), 1,
      anon_sym_tags,
    ACTIONS(23), 1,
      anon_sym_url,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_comment,
    STATE(169), 1,
      sym_identifier,
    STATE(189), 1,
      sym_dotted_identifier,
    STATE(241), 1,
      sym_relation_identifier,
    STATE(2), 10,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_group_declaration,
      sym_tag_declaration,
      sym_tags_declaration,
      sym_url_declaration,
      aux_sym__model_children_repeat1,
  [245] = 12,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(67), 1,
      aux_sym_name_statement_token1,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(71), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(73), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(75), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(77), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(79), 1,
      aux_sym_views_declaration_token1,
    STATE(8), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(65), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [290] = 12,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(67), 1,
      aux_sym_name_statement_token1,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(71), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(73), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(75), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(77), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(79), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(65), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [335] = 12,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(91), 1,
      aux_sym_name_statement_token1,
    ACTIONS(94), 1,
      aux_sym_description_statement_token1,
    ACTIONS(97), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(100), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(103), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(106), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(109), 1,
      aux_sym_views_declaration_token1,
    STATE(9), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(65), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [380] = 12,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(67), 1,
      aux_sym_name_statement_token1,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(71), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(73), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(75), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(77), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(79), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(65), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [425] = 12,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(67), 1,
      aux_sym_name_statement_token1,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(71), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(73), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(75), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(77), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(79), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(65), 8,
      sym_identifiers_statement,
      sym_name_statement,
      sym_description_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [470] = 10,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(120), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(122), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(124), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(126), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(128), 1,
      aux_sym_themes_statement_token1,
    STATE(13), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(95), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [507] = 10,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(120), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(122), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(124), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(126), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(128), 1,
      aux_sym_themes_statement_token1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(95), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [544] = 10,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(140), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(143), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(146), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(149), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(152), 1,
      aux_sym_themes_statement_token1,
    STATE(14), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(95), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [581] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    STATE(19), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [614] = 1,
    ACTIONS(167), 14,
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
  [631] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [664] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [697] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [730] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [763] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [796] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [829] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [862] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [895] = 9,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_description_statement_token1,
    ACTIONS(193), 1,
      aux_sym_include_statement_token1,
    ACTIONS(196), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(199), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(202), 1,
      aux_sym_default_statement_token1,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [928] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [961] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [994] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1027] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1060] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1093] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1126] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1159] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1192] = 9,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_include_statement_token1,
    ACTIONS(161), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(163), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(165), 1,
      aux_sym_default_statement_token1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(120), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1225] = 1,
    ACTIONS(223), 14,
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
  [1242] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      sym_string,
    STATE(38), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(66), 1,
      sym__model_children,
    ACTIONS(231), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(227), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1268] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      sym_string,
    STATE(47), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(84), 1,
      sym__model_children,
    ACTIONS(237), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(233), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1294] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      sym_string,
    STATE(47), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(82), 1,
      sym__model_children,
    ACTIONS(241), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(239), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1320] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      sym_string,
    STATE(47), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(81), 1,
      sym__model_children,
    ACTIONS(245), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(243), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1346] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      sym_string,
    STATE(37), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(79), 1,
      sym__model_children,
    ACTIONS(251), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(247), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1372] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      sym_string,
    STATE(47), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(83), 1,
      sym__model_children,
    ACTIONS(255), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(253), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1398] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(77), 1,
      sym__model_children,
    ACTIONS(261), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(257), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1424] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(78), 1,
      sym__model_children,
    ACTIONS(267), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(263), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1450] = 5,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      sym_string,
    STATE(70), 1,
      sym__model_children,
    ACTIONS(273), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(269), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1473] = 5,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_string,
    STATE(68), 1,
      sym__model_children,
    ACTIONS(279), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(275), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1496] = 5,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      sym_string,
    STATE(69), 1,
      sym__model_children,
    ACTIONS(285), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(281), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1519] = 4,
    ACTIONS(289), 1,
      sym_string,
    STATE(47), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(292), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(287), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1540] = 5,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      sym_string,
    STATE(72), 1,
      sym__model_children,
    ACTIONS(298), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(294), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1563] = 4,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym__model_children,
    ACTIONS(302), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(300), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1583] = 1,
    ACTIONS(304), 10,
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
  [1596] = 1,
    ACTIONS(306), 10,
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
  [1609] = 3,
    ACTIONS(310), 1,
      sym_string,
    ACTIONS(312), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(308), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1626] = 1,
    ACTIONS(314), 10,
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
  [1639] = 1,
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
  [1652] = 1,
    ACTIONS(318), 10,
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
  [1665] = 1,
    ACTIONS(320), 10,
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
  [1678] = 1,
    ACTIONS(322), 10,
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
  [1691] = 1,
    ACTIONS(324), 10,
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
  [1704] = 3,
    ACTIONS(328), 1,
      sym_string,
    ACTIONS(330), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(326), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1721] = 1,
    ACTIONS(332), 10,
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
  [1734] = 1,
    ACTIONS(334), 10,
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
  [1747] = 1,
    ACTIONS(336), 10,
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
  [1760] = 1,
    ACTIONS(338), 10,
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
  [1773] = 1,
    ACTIONS(340), 10,
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
  [1786] = 1,
    ACTIONS(342), 10,
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
  [1799] = 2,
    ACTIONS(346), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(344), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1813] = 2,
    ACTIONS(350), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(348), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1827] = 2,
    ACTIONS(354), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(352), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1841] = 2,
    ACTIONS(358), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(356), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1855] = 2,
    ACTIONS(362), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(360), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1869] = 2,
    ACTIONS(366), 1,
      aux_sym_color_token1,
    ACTIONS(364), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      aux_sym_color_token2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [1883] = 2,
    ACTIONS(370), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(368), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1897] = 2,
    ACTIONS(374), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(372), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1911] = 2,
    ACTIONS(378), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(376), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1925] = 5,
    ACTIONS(380), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(382), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(384), 1,
      aux_sym_component_declaration_token1,
    ACTIONS(386), 1,
      aux_sym_person_declaration_token1,
    STATE(74), 5,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_component_declaration,
      sym_person_declaration,
  [1945] = 2,
    ACTIONS(390), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(388), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1959] = 2,
    ACTIONS(394), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(392), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1973] = 2,
    ACTIONS(398), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(396), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1987] = 2,
    ACTIONS(402), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(400), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2001] = 2,
    ACTIONS(406), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(404), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2015] = 2,
    ACTIONS(410), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(408), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2029] = 2,
    ACTIONS(414), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(412), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2043] = 2,
    ACTIONS(418), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(416), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2057] = 2,
    ACTIONS(422), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(420), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2071] = 2,
    ACTIONS(424), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(320), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2085] = 2,
    ACTIONS(426), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(322), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2099] = 2,
    ACTIONS(428), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(324), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2113] = 2,
    ACTIONS(430), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(334), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2127] = 2,
    ACTIONS(432), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(336), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2141] = 2,
    ACTIONS(434), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(338), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2155] = 2,
    ACTIONS(438), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(436), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2169] = 6,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    ACTIONS(442), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(446), 1,
      aux_sym_relationship_declaration_token1,
    STATE(94), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(158), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [2190] = 2,
    ACTIONS(450), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(448), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2203] = 6,
    ACTIONS(442), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(446), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(106), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(158), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [2224] = 2,
    ACTIONS(456), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(454), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2237] = 2,
    ACTIONS(460), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(458), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2250] = 2,
    ACTIONS(464), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(462), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2263] = 2,
    ACTIONS(468), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(466), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2276] = 2,
    ACTIONS(472), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(470), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2289] = 2,
    ACTIONS(476), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(474), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2302] = 2,
    ACTIONS(480), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(478), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2315] = 2,
    ACTIONS(484), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(482), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2328] = 2,
    ACTIONS(488), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(486), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2341] = 2,
    ACTIONS(492), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(490), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2354] = 2,
    ACTIONS(496), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(494), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2367] = 6,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(500), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(506), 1,
      aux_sym_relationship_declaration_token1,
    STATE(106), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(158), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [2388] = 2,
    ACTIONS(511), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(509), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2401] = 2,
    ACTIONS(515), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(513), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2414] = 2,
    ACTIONS(519), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(517), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2427] = 2,
    ACTIONS(523), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(521), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2440] = 2,
    ACTIONS(527), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(525), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2453] = 2,
    ACTIONS(531), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(529), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2466] = 2,
    ACTIONS(535), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(533), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2479] = 2,
    ACTIONS(539), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(537), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2492] = 2,
    ACTIONS(543), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(541), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2505] = 2,
    ACTIONS(547), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(545), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2518] = 2,
    ACTIONS(551), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(549), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2531] = 2,
    ACTIONS(555), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(553), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2544] = 1,
    ACTIONS(557), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2554] = 1,
    ACTIONS(559), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2564] = 1,
    ACTIONS(561), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2574] = 1,
    ACTIONS(563), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2584] = 1,
    ACTIONS(565), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2594] = 1,
    ACTIONS(567), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2604] = 5,
    ACTIONS(571), 1,
      sym__simple_identifier,
    ACTIONS(573), 1,
      aux_sym_color_token1,
    ACTIONS(575), 1,
      aux_sym_color_token2,
    ACTIONS(569), 2,
      sym_number,
      sym_string,
    STATE(190), 2,
      sym_identifier,
      sym_color,
  [2622] = 1,
    ACTIONS(577), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2632] = 1,
    ACTIONS(579), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2642] = 6,
    ACTIONS(581), 1,
      sym__simple_identifier,
    ACTIONS(583), 1,
      sym_wildcard_identifier,
    ACTIONS(585), 1,
      sym__newline,
    ACTIONS(587), 1,
      sym_comment,
    STATE(150), 1,
      sym_identifier,
    STATE(131), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2662] = 1,
    ACTIONS(589), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2672] = 1,
    ACTIONS(591), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2682] = 6,
    ACTIONS(593), 1,
      sym__simple_identifier,
    ACTIONS(596), 1,
      sym_wildcard_identifier,
    ACTIONS(599), 1,
      sym__newline,
    ACTIONS(601), 1,
      sym_comment,
    STATE(150), 1,
      sym_identifier,
    STATE(131), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2702] = 1,
    ACTIONS(603), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2712] = 1,
    ACTIONS(605), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2722] = 1,
    ACTIONS(607), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2732] = 5,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    ACTIONS(611), 1,
      sym__simple_identifier,
    ACTIONS(614), 1,
      sym_comment,
    STATE(125), 1,
      sym_identifier,
    STATE(135), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2749] = 5,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 1,
      sym__simple_identifier,
    ACTIONS(621), 1,
      sym_comment,
    STATE(125), 1,
      sym_identifier,
    STATE(142), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2766] = 5,
    ACTIONS(623), 1,
      sym__simple_identifier,
    ACTIONS(625), 1,
      sym__newline,
    ACTIONS(627), 1,
      sym_comment,
    STATE(160), 1,
      sym_identifier,
    STATE(144), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2783] = 3,
    ACTIONS(632), 1,
      sym__newline,
    STATE(138), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(629), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [2796] = 5,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    ACTIONS(636), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym_scope_declaration_token1,
    STATE(171), 1,
      sym_scope_declaration,
    STATE(146), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2813] = 3,
    ACTIONS(642), 1,
      sym__newline,
    STATE(147), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(640), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [2826] = 5,
    ACTIONS(619), 1,
      sym__simple_identifier,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    ACTIONS(646), 1,
      sym_comment,
    STATE(125), 1,
      sym_identifier,
    STATE(135), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2843] = 5,
    ACTIONS(619), 1,
      sym__simple_identifier,
    ACTIONS(646), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_identifier,
    STATE(135), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2860] = 5,
    ACTIONS(636), 1,
      sym_comment,
    ACTIONS(638), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_scope_declaration,
    STATE(139), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2877] = 5,
    ACTIONS(652), 1,
      sym__simple_identifier,
    ACTIONS(655), 1,
      sym__newline,
    ACTIONS(657), 1,
      sym_comment,
    STATE(160), 1,
      sym_identifier,
    STATE(144), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2894] = 5,
    ACTIONS(619), 1,
      sym__simple_identifier,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(661), 1,
      sym_comment,
    STATE(125), 1,
      sym_identifier,
    STATE(141), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2911] = 5,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      sym_comment,
    ACTIONS(668), 1,
      aux_sym_scope_declaration_token1,
    STATE(171), 1,
      sym_scope_declaration,
    STATE(146), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2928] = 3,
    ACTIONS(671), 1,
      sym__newline,
    STATE(138), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(640), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [2941] = 2,
    STATE(168), 1,
      sym_autolayout_value,
    ACTIONS(673), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [2951] = 2,
    ACTIONS(364), 1,
      sym__newline,
    ACTIONS(366), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [2961] = 3,
    ACTIONS(677), 1,
      anon_sym_DOT,
    ACTIONS(679), 1,
      sym__newline,
    ACTIONS(675), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2973] = 4,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
    ACTIONS(683), 1,
      sym_comment,
    STATE(153), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2987] = 4,
    ACTIONS(581), 1,
      sym__simple_identifier,
    ACTIONS(685), 1,
      sym_wildcard_identifier,
    STATE(150), 1,
      sym_identifier,
    STATE(128), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [3001] = 4,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
    ACTIONS(689), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(692), 1,
      sym_comment,
    STATE(153), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [3015] = 4,
    ACTIONS(619), 1,
      sym__simple_identifier,
    STATE(189), 1,
      sym_dotted_identifier,
    STATE(196), 1,
      sym_identifier,
    STATE(210), 1,
      sym_relation_identifier,
  [3028] = 1,
    ACTIONS(695), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3035] = 1,
    ACTIONS(697), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3042] = 2,
    ACTIONS(701), 1,
      sym__newline,
    ACTIONS(699), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [3051] = 1,
    ACTIONS(703), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3058] = 3,
    ACTIONS(705), 1,
      sym__simple_identifier,
    STATE(160), 1,
      sym_identifier,
    STATE(137), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [3069] = 3,
    ACTIONS(709), 1,
      anon_sym_DOT,
    ACTIONS(711), 1,
      sym__newline,
    ACTIONS(707), 2,
      sym__simple_identifier,
      sym_comment,
  [3080] = 3,
    ACTIONS(713), 1,
      sym_string,
    STATE(242), 1,
      sym_theme_value,
    ACTIONS(640), 2,
      sym_path_value,
      anon_sym_default,
  [3091] = 2,
    ACTIONS(717), 1,
      sym__newline,
    ACTIONS(715), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [3100] = 1,
    ACTIONS(719), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3107] = 1,
    ACTIONS(721), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3114] = 2,
    ACTIONS(364), 1,
      sym__newline,
    ACTIONS(366), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [3123] = 3,
    ACTIONS(287), 1,
      sym__newline,
    ACTIONS(723), 1,
      sym_string,
    STATE(166), 1,
      aux_sym_software_system_declaration_repeat1,
  [3133] = 1,
    ACTIONS(726), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3139] = 3,
    ACTIONS(728), 1,
      sym_number,
    ACTIONS(730), 1,
      sym__newline,
    ACTIONS(732), 1,
      sym_comment,
  [3149] = 3,
    ACTIONS(734), 1,
      anon_sym_DOT,
    ACTIONS(736), 1,
      anon_sym_EQ,
    ACTIONS(738), 1,
      anon_sym_DASH_GT,
  [3159] = 1,
    ACTIONS(740), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [3165] = 1,
    ACTIONS(742), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [3171] = 2,
    ACTIONS(746), 1,
      sym__newline,
    ACTIONS(744), 2,
      sym_number,
      sym_comment,
  [3179] = 3,
    ACTIONS(748), 1,
      sym_number,
    ACTIONS(750), 1,
      sym__newline,
    ACTIONS(752), 1,
      sym_comment,
  [3189] = 2,
    STATE(248), 1,
      sym_identifiers_value,
    ACTIONS(754), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [3197] = 1,
    ACTIONS(756), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [3203] = 1,
    ACTIONS(758), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3209] = 3,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(760), 1,
      sym_wildcard_identifier,
    STATE(192), 1,
      sym_identifier,
  [3219] = 3,
    ACTIONS(762), 1,
      sym_string,
    ACTIONS(764), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym_software_system_declaration_repeat1,
  [3229] = 1,
    ACTIONS(766), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [3235] = 1,
    ACTIONS(768), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3241] = 2,
    ACTIONS(717), 1,
      sym__newline,
    ACTIONS(715), 2,
      sym__simple_identifier,
      sym_comment,
  [3249] = 2,
    ACTIONS(571), 1,
      sym__simple_identifier,
    STATE(162), 1,
      sym_identifier,
  [3256] = 2,
    ACTIONS(770), 1,
      anon_sym_LBRACE,
    ACTIONS(772), 1,
      sym_string,
  [3263] = 2,
    ACTIONS(774), 1,
      sym__newline,
    ACTIONS(776), 1,
      sym_comment,
  [3270] = 2,
    ACTIONS(778), 1,
      sym__newline,
    ACTIONS(780), 1,
      sym_comment,
  [3277] = 2,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym__model_children,
  [3284] = 2,
    ACTIONS(784), 1,
      sym__newline,
    ACTIONS(786), 1,
      sym_comment,
  [3291] = 2,
    ACTIONS(788), 1,
      sym_class_value,
    ACTIONS(790), 1,
      sym__newline,
  [3298] = 1,
    ACTIONS(738), 2,
      sym_string,
      anon_sym_DASH_GT,
  [3303] = 2,
    ACTIONS(792), 1,
      sym__newline,
    ACTIONS(794), 1,
      sym_comment,
  [3310] = 2,
    ACTIONS(796), 1,
      sym__newline,
    ACTIONS(798), 1,
      sym_comment,
  [3317] = 2,
    ACTIONS(800), 1,
      anon_sym_LBRACE,
    ACTIONS(802), 1,
      sym_string,
  [3324] = 1,
    ACTIONS(717), 2,
      sym_string,
      anon_sym_DASH_GT,
  [3329] = 2,
    ACTIONS(804), 1,
      sym_class_value,
    ACTIONS(806), 1,
      sym__newline,
  [3336] = 2,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      sym_string,
  [3343] = 2,
    ACTIONS(734), 1,
      anon_sym_DOT,
    ACTIONS(738), 1,
      sym_string,
  [3350] = 2,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym_string,
  [3357] = 2,
    ACTIONS(816), 1,
      anon_sym_LBRACE,
    ACTIONS(818), 1,
      sym_string,
  [3364] = 2,
    ACTIONS(619), 1,
      sym__simple_identifier,
    STATE(183), 1,
      sym_identifier,
  [3371] = 2,
    ACTIONS(619), 1,
      sym__simple_identifier,
    STATE(207), 1,
      sym_identifier,
  [3378] = 2,
    ACTIONS(820), 1,
      sym_string,
    STATE(178), 1,
      aux_sym_software_system_declaration_repeat1,
  [3385] = 2,
    ACTIONS(705), 1,
      sym__simple_identifier,
    STATE(181), 1,
      sym_identifier,
  [3392] = 2,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      sym_string,
  [3399] = 2,
    ACTIONS(826), 1,
      sym_class_value,
    ACTIONS(828), 1,
      sym__newline,
  [3406] = 2,
    ACTIONS(830), 1,
      sym_class_value,
    ACTIONS(832), 1,
      sym__newline,
  [3413] = 2,
    ACTIONS(619), 1,
      sym__simple_identifier,
    STATE(193), 1,
      sym_identifier,
  [3420] = 2,
    ACTIONS(834), 1,
      anon_sym_LBRACE,
    ACTIONS(836), 1,
      sym_string,
  [3427] = 1,
    ACTIONS(838), 1,
      sym__newline,
  [3431] = 1,
    ACTIONS(840), 1,
      sym_path_value,
  [3435] = 1,
    ACTIONS(842), 1,
      sym_string,
  [3439] = 1,
    ACTIONS(844), 1,
      sym_string,
  [3443] = 1,
    ACTIONS(846), 1,
      sym__newline,
  [3447] = 1,
    ACTIONS(848), 1,
      anon_sym_EQ,
  [3451] = 1,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
  [3455] = 1,
    ACTIONS(852), 1,
      sym__newline,
  [3459] = 1,
    ACTIONS(854), 1,
      sym__newline,
  [3463] = 1,
    ACTIONS(856), 1,
      sym__newline,
  [3467] = 1,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
  [3471] = 1,
    ACTIONS(860), 1,
      sym_path_value,
  [3475] = 1,
    ACTIONS(862), 1,
      sym__newline,
  [3479] = 1,
    ACTIONS(864), 1,
      sym__newline,
  [3483] = 1,
    ACTIONS(866), 1,
      sym_url_value,
  [3487] = 1,
    ACTIONS(868), 1,
      sym__newline,
  [3491] = 1,
    ACTIONS(870), 1,
      sym_string,
  [3495] = 1,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
  [3499] = 1,
    ACTIONS(874), 1,
      sym__newline,
  [3503] = 1,
    ACTIONS(876), 1,
      sym_string,
  [3507] = 1,
    ACTIONS(878), 1,
      anon_sym_LBRACE,
  [3511] = 1,
    ACTIONS(880), 1,
      ts_builtin_sym_end,
  [3515] = 1,
    ACTIONS(882), 1,
      sym_string,
  [3519] = 1,
    ACTIONS(884), 1,
      sym__newline,
  [3523] = 1,
    ACTIONS(886), 1,
      sym_string,
  [3527] = 1,
    ACTIONS(888), 1,
      sym__newline,
  [3531] = 1,
    ACTIONS(890), 1,
      anon_sym_LBRACE,
  [3535] = 1,
    ACTIONS(892), 1,
      anon_sym_LBRACE,
  [3539] = 1,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
  [3543] = 1,
    ACTIONS(896), 1,
      sym_string,
  [3547] = 1,
    ACTIONS(898), 1,
      anon_sym_LBRACE,
  [3551] = 1,
    ACTIONS(900), 1,
      sym_string,
  [3555] = 1,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
  [3559] = 1,
    ACTIONS(904), 1,
      anon_sym_DASH_GT,
  [3563] = 1,
    ACTIONS(906), 1,
      sym__newline,
  [3567] = 1,
    ACTIONS(908), 1,
      sym_string,
  [3571] = 1,
    ACTIONS(910), 1,
      sym_string,
  [3575] = 1,
    ACTIONS(912), 1,
      sym__simple_identifier,
  [3579] = 1,
    ACTIONS(914), 1,
      sym__newline,
  [3583] = 1,
    ACTIONS(916), 1,
      sym_string,
  [3587] = 1,
    ACTIONS(918), 1,
      sym__newline,
  [3591] = 1,
    ACTIONS(920), 1,
      sym__newline,
  [3595] = 1,
    ACTIONS(922), 1,
      sym__newline,
  [3599] = 1,
    ACTIONS(924), 1,
      sym__newline,
  [3603] = 1,
    ACTIONS(926), 1,
      sym_string,
  [3607] = 1,
    ACTIONS(928), 1,
      sym_path_value,
  [3611] = 1,
    ACTIONS(930), 1,
      sym_path_value,
  [3615] = 1,
    ACTIONS(932), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 380,
  [SMALL_STATE(11)] = 425,
  [SMALL_STATE(12)] = 470,
  [SMALL_STATE(13)] = 507,
  [SMALL_STATE(14)] = 544,
  [SMALL_STATE(15)] = 581,
  [SMALL_STATE(16)] = 614,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 664,
  [SMALL_STATE(19)] = 697,
  [SMALL_STATE(20)] = 730,
  [SMALL_STATE(21)] = 763,
  [SMALL_STATE(22)] = 796,
  [SMALL_STATE(23)] = 829,
  [SMALL_STATE(24)] = 862,
  [SMALL_STATE(25)] = 895,
  [SMALL_STATE(26)] = 928,
  [SMALL_STATE(27)] = 961,
  [SMALL_STATE(28)] = 994,
  [SMALL_STATE(29)] = 1027,
  [SMALL_STATE(30)] = 1060,
  [SMALL_STATE(31)] = 1093,
  [SMALL_STATE(32)] = 1126,
  [SMALL_STATE(33)] = 1159,
  [SMALL_STATE(34)] = 1192,
  [SMALL_STATE(35)] = 1225,
  [SMALL_STATE(36)] = 1242,
  [SMALL_STATE(37)] = 1268,
  [SMALL_STATE(38)] = 1294,
  [SMALL_STATE(39)] = 1320,
  [SMALL_STATE(40)] = 1346,
  [SMALL_STATE(41)] = 1372,
  [SMALL_STATE(42)] = 1398,
  [SMALL_STATE(43)] = 1424,
  [SMALL_STATE(44)] = 1450,
  [SMALL_STATE(45)] = 1473,
  [SMALL_STATE(46)] = 1496,
  [SMALL_STATE(47)] = 1519,
  [SMALL_STATE(48)] = 1540,
  [SMALL_STATE(49)] = 1563,
  [SMALL_STATE(50)] = 1583,
  [SMALL_STATE(51)] = 1596,
  [SMALL_STATE(52)] = 1609,
  [SMALL_STATE(53)] = 1626,
  [SMALL_STATE(54)] = 1639,
  [SMALL_STATE(55)] = 1652,
  [SMALL_STATE(56)] = 1665,
  [SMALL_STATE(57)] = 1678,
  [SMALL_STATE(58)] = 1691,
  [SMALL_STATE(59)] = 1704,
  [SMALL_STATE(60)] = 1721,
  [SMALL_STATE(61)] = 1734,
  [SMALL_STATE(62)] = 1747,
  [SMALL_STATE(63)] = 1760,
  [SMALL_STATE(64)] = 1773,
  [SMALL_STATE(65)] = 1786,
  [SMALL_STATE(66)] = 1799,
  [SMALL_STATE(67)] = 1813,
  [SMALL_STATE(68)] = 1827,
  [SMALL_STATE(69)] = 1841,
  [SMALL_STATE(70)] = 1855,
  [SMALL_STATE(71)] = 1869,
  [SMALL_STATE(72)] = 1883,
  [SMALL_STATE(73)] = 1897,
  [SMALL_STATE(74)] = 1911,
  [SMALL_STATE(75)] = 1925,
  [SMALL_STATE(76)] = 1945,
  [SMALL_STATE(77)] = 1959,
  [SMALL_STATE(78)] = 1973,
  [SMALL_STATE(79)] = 1987,
  [SMALL_STATE(80)] = 2001,
  [SMALL_STATE(81)] = 2015,
  [SMALL_STATE(82)] = 2029,
  [SMALL_STATE(83)] = 2043,
  [SMALL_STATE(84)] = 2057,
  [SMALL_STATE(85)] = 2071,
  [SMALL_STATE(86)] = 2085,
  [SMALL_STATE(87)] = 2099,
  [SMALL_STATE(88)] = 2113,
  [SMALL_STATE(89)] = 2127,
  [SMALL_STATE(90)] = 2141,
  [SMALL_STATE(91)] = 2155,
  [SMALL_STATE(92)] = 2169,
  [SMALL_STATE(93)] = 2190,
  [SMALL_STATE(94)] = 2203,
  [SMALL_STATE(95)] = 2224,
  [SMALL_STATE(96)] = 2237,
  [SMALL_STATE(97)] = 2250,
  [SMALL_STATE(98)] = 2263,
  [SMALL_STATE(99)] = 2276,
  [SMALL_STATE(100)] = 2289,
  [SMALL_STATE(101)] = 2302,
  [SMALL_STATE(102)] = 2315,
  [SMALL_STATE(103)] = 2328,
  [SMALL_STATE(104)] = 2341,
  [SMALL_STATE(105)] = 2354,
  [SMALL_STATE(106)] = 2367,
  [SMALL_STATE(107)] = 2388,
  [SMALL_STATE(108)] = 2401,
  [SMALL_STATE(109)] = 2414,
  [SMALL_STATE(110)] = 2427,
  [SMALL_STATE(111)] = 2440,
  [SMALL_STATE(112)] = 2453,
  [SMALL_STATE(113)] = 2466,
  [SMALL_STATE(114)] = 2479,
  [SMALL_STATE(115)] = 2492,
  [SMALL_STATE(116)] = 2505,
  [SMALL_STATE(117)] = 2518,
  [SMALL_STATE(118)] = 2531,
  [SMALL_STATE(119)] = 2544,
  [SMALL_STATE(120)] = 2554,
  [SMALL_STATE(121)] = 2564,
  [SMALL_STATE(122)] = 2574,
  [SMALL_STATE(123)] = 2584,
  [SMALL_STATE(124)] = 2594,
  [SMALL_STATE(125)] = 2604,
  [SMALL_STATE(126)] = 2622,
  [SMALL_STATE(127)] = 2632,
  [SMALL_STATE(128)] = 2642,
  [SMALL_STATE(129)] = 2662,
  [SMALL_STATE(130)] = 2672,
  [SMALL_STATE(131)] = 2682,
  [SMALL_STATE(132)] = 2702,
  [SMALL_STATE(133)] = 2712,
  [SMALL_STATE(134)] = 2722,
  [SMALL_STATE(135)] = 2732,
  [SMALL_STATE(136)] = 2749,
  [SMALL_STATE(137)] = 2766,
  [SMALL_STATE(138)] = 2783,
  [SMALL_STATE(139)] = 2796,
  [SMALL_STATE(140)] = 2813,
  [SMALL_STATE(141)] = 2826,
  [SMALL_STATE(142)] = 2843,
  [SMALL_STATE(143)] = 2860,
  [SMALL_STATE(144)] = 2877,
  [SMALL_STATE(145)] = 2894,
  [SMALL_STATE(146)] = 2911,
  [SMALL_STATE(147)] = 2928,
  [SMALL_STATE(148)] = 2941,
  [SMALL_STATE(149)] = 2951,
  [SMALL_STATE(150)] = 2961,
  [SMALL_STATE(151)] = 2973,
  [SMALL_STATE(152)] = 2987,
  [SMALL_STATE(153)] = 3001,
  [SMALL_STATE(154)] = 3015,
  [SMALL_STATE(155)] = 3028,
  [SMALL_STATE(156)] = 3035,
  [SMALL_STATE(157)] = 3042,
  [SMALL_STATE(158)] = 3051,
  [SMALL_STATE(159)] = 3058,
  [SMALL_STATE(160)] = 3069,
  [SMALL_STATE(161)] = 3080,
  [SMALL_STATE(162)] = 3091,
  [SMALL_STATE(163)] = 3100,
  [SMALL_STATE(164)] = 3107,
  [SMALL_STATE(165)] = 3114,
  [SMALL_STATE(166)] = 3123,
  [SMALL_STATE(167)] = 3133,
  [SMALL_STATE(168)] = 3139,
  [SMALL_STATE(169)] = 3149,
  [SMALL_STATE(170)] = 3159,
  [SMALL_STATE(171)] = 3165,
  [SMALL_STATE(172)] = 3171,
  [SMALL_STATE(173)] = 3179,
  [SMALL_STATE(174)] = 3189,
  [SMALL_STATE(175)] = 3197,
  [SMALL_STATE(176)] = 3203,
  [SMALL_STATE(177)] = 3209,
  [SMALL_STATE(178)] = 3219,
  [SMALL_STATE(179)] = 3229,
  [SMALL_STATE(180)] = 3235,
  [SMALL_STATE(181)] = 3241,
  [SMALL_STATE(182)] = 3249,
  [SMALL_STATE(183)] = 3256,
  [SMALL_STATE(184)] = 3263,
  [SMALL_STATE(185)] = 3270,
  [SMALL_STATE(186)] = 3277,
  [SMALL_STATE(187)] = 3284,
  [SMALL_STATE(188)] = 3291,
  [SMALL_STATE(189)] = 3298,
  [SMALL_STATE(190)] = 3303,
  [SMALL_STATE(191)] = 3310,
  [SMALL_STATE(192)] = 3317,
  [SMALL_STATE(193)] = 3324,
  [SMALL_STATE(194)] = 3329,
  [SMALL_STATE(195)] = 3336,
  [SMALL_STATE(196)] = 3343,
  [SMALL_STATE(197)] = 3350,
  [SMALL_STATE(198)] = 3357,
  [SMALL_STATE(199)] = 3364,
  [SMALL_STATE(200)] = 3371,
  [SMALL_STATE(201)] = 3378,
  [SMALL_STATE(202)] = 3385,
  [SMALL_STATE(203)] = 3392,
  [SMALL_STATE(204)] = 3399,
  [SMALL_STATE(205)] = 3406,
  [SMALL_STATE(206)] = 3413,
  [SMALL_STATE(207)] = 3420,
  [SMALL_STATE(208)] = 3427,
  [SMALL_STATE(209)] = 3431,
  [SMALL_STATE(210)] = 3435,
  [SMALL_STATE(211)] = 3439,
  [SMALL_STATE(212)] = 3443,
  [SMALL_STATE(213)] = 3447,
  [SMALL_STATE(214)] = 3451,
  [SMALL_STATE(215)] = 3455,
  [SMALL_STATE(216)] = 3459,
  [SMALL_STATE(217)] = 3463,
  [SMALL_STATE(218)] = 3467,
  [SMALL_STATE(219)] = 3471,
  [SMALL_STATE(220)] = 3475,
  [SMALL_STATE(221)] = 3479,
  [SMALL_STATE(222)] = 3483,
  [SMALL_STATE(223)] = 3487,
  [SMALL_STATE(224)] = 3491,
  [SMALL_STATE(225)] = 3495,
  [SMALL_STATE(226)] = 3499,
  [SMALL_STATE(227)] = 3503,
  [SMALL_STATE(228)] = 3507,
  [SMALL_STATE(229)] = 3511,
  [SMALL_STATE(230)] = 3515,
  [SMALL_STATE(231)] = 3519,
  [SMALL_STATE(232)] = 3523,
  [SMALL_STATE(233)] = 3527,
  [SMALL_STATE(234)] = 3531,
  [SMALL_STATE(235)] = 3535,
  [SMALL_STATE(236)] = 3539,
  [SMALL_STATE(237)] = 3543,
  [SMALL_STATE(238)] = 3547,
  [SMALL_STATE(239)] = 3551,
  [SMALL_STATE(240)] = 3555,
  [SMALL_STATE(241)] = 3559,
  [SMALL_STATE(242)] = 3563,
  [SMALL_STATE(243)] = 3567,
  [SMALL_STATE(244)] = 3571,
  [SMALL_STATE(245)] = 3575,
  [SMALL_STATE(246)] = 3579,
  [SMALL_STATE(247)] = 3583,
  [SMALL_STATE(248)] = 3587,
  [SMALL_STATE(249)] = 3591,
  [SMALL_STATE(250)] = 3595,
  [SMALL_STATE(251)] = 3599,
  [SMALL_STATE(252)] = 3603,
  [SMALL_STATE(253)] = 3607,
  [SMALL_STATE(254)] = 3611,
  [SMALL_STATE(255)] = 3615,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, 0, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, 0, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_declaration, 2, 0, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_declaration, 2, 0, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 3, 0, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_statement, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 4, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 4, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_declaration, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_declaration, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_declaration, 3, 0, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_declaration, 3, 0, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_themes_statement, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_themes_statement, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_statement, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_statement, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_themes_statement, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_themes_statement, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 11),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 6, 0, 11),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 15),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 6, 0, 15),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 11),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 6, 0, 11),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 15),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 6, 0, 15),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 12),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 12),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 16),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 16),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 11),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 5, 0, 11),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 7),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 4, 0, 7),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 15),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 7, 0, 15),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 15),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 7, 0, 15),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 16),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 16),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 7),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 4, 0, 7),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 8),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 8),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 11),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 5, 0, 11),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 8),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 8),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 12),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 12),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 18),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 18),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 17),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 17),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_themes_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_themes_statement_repeat1, 2, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 4, 0, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_value, 1, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 5, 0, 3),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 19),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 19),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [880] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
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
