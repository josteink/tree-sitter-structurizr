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
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 21

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
  sym_dynamic_view_property_statement = 94,
  sym_styles_declaration = 95,
  sym_theme_statement = 96,
  sym_themes_statement = 97,
  sym_theme_value = 98,
  sym_style_item_statement = 99,
  sym_element_declaration = 100,
  sym_relationship_declaration = 101,
  sym_element_property = 102,
  aux_sym_dsl_repeat1 = 103,
  aux_sym_workspace_declaration_repeat1 = 104,
  aux_sym__model_children_repeat1 = 105,
  aux_sym_software_system_declaration_repeat1 = 106,
  aux_sym_configuration_declaration_repeat1 = 107,
  aux_sym_views_declaration_repeat1 = 108,
  aux_sym_system_context_view_declaration_repeat1 = 109,
  aux_sym_include_statement_repeat1 = 110,
  aux_sym_exclude_statement_repeat1 = 111,
  aux_sym_dynamic_view_declaration_repeat1 = 112,
  aux_sym_styles_declaration_repeat1 = 113,
  aux_sym_themes_statement_repeat1 = 114,
  aux_sym_element_declaration_repeat1 = 115,
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
  [sym_dynamic_view_property_statement] = "dynamic_view_property_statement",
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
  [aux_sym_dynamic_view_declaration_repeat1] = "dynamic_view_declaration_repeat1",
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
  [sym_dynamic_view_property_statement] = sym_dynamic_view_property_statement,
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
  [aux_sym_dynamic_view_declaration_repeat1] = aux_sym_dynamic_view_declaration_repeat1,
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
  [sym_dynamic_view_property_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [aux_sym_dynamic_view_declaration_repeat1] = {
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
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 4},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 5},
  [16] = {.index = 33, .length = 3},
  [17] = {.index = 36, .length = 3},
  [18] = {.index = 39, .length = 2},
  [19] = {.index = 41, .length = 3},
  [20] = {.index = 44, .length = 2},
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
    {field_source, 0},
    {field_target, 2},
  [10] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
  [13] =
    {field_context, 1},
  [14] =
    {field_scope, 1},
  [15] =
    {field_description, 2},
    {field_name, 1},
  [17] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
    {field_technology, 4},
  [21] =
    {field_context, 1},
    {field_key, 2},
  [23] =
    {field_key, 2},
    {field_scope, 1},
  [25] =
    {field_description, 2},
    {field_name, 1},
    {field_tags, 3},
  [28] =
    {field_relation, 3},
    {field_source, 0},
    {field_tags, 5},
    {field_target, 2},
    {field_technology, 4},
  [33] =
    {field_context, 1},
    {field_description, 3},
    {field_key, 2},
  [36] =
    {field_description, 3},
    {field_key, 2},
    {field_scope, 1},
  [39] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [41] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
    {field_value, 1},
  [44] =
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
  [70] = 51,
  [71] = 71,
  [72] = 23,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 54,
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
  [91] = 67,
  [92] = 68,
  [93] = 73,
  [94] = 53,
  [95] = 56,
  [96] = 57,
  [97] = 58,
  [98] = 98,
  [99] = 61,
  [100] = 62,
  [101] = 66,
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
  [140] = 35,
  [141] = 29,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 85,
  [147] = 147,
  [148] = 148,
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
  [165] = 23,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 23,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 54,
  [179] = 179,
  [180] = 23,
  [181] = 181,
  [182] = 182,
  [183] = 177,
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
  [195] = 54,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 50,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 200,
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
  [217] = 200,
  [218] = 218,
  [219] = 219,
  [220] = 200,
  [221] = 221,
  [222] = 205,
  [223] = 207,
  [224] = 208,
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
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 245,
  [267] = 259,
  [268] = 263,
  [269] = 269,
  [270] = 269,
  [271] = 227,
  [272] = 252,
  [273] = 232,
  [274] = 274,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(240);
      ADVANCE_MAP(
        '!', 64,
        '"', 47,
        '#', 235,
        '*', 301,
        '-', 32,
        '.', 300,
        '=', 317,
        'D', 89,
        'T', 74,
        'd', 34,
        'f', 52,
        'h', 50,
        't', 39,
        'u', 57,
        '{', 242,
        '}', 243,
        'A', 217,
        'a', 217,
        'B', 202,
        'b', 202,
        'C', 160,
        'c', 160,
        'E', 138,
        'e', 138,
        'G', 187,
        'g', 187,
        'I', 159,
        'i', 159,
        'L', 181,
        'l', 181,
        'M', 173,
        'm', 173,
        'N', 65,
        'n', 65,
        'P', 100,
        'p', 100,
        'R', 91,
        'r', 91,
        'S', 78,
        's', 78,
        'V', 122,
        'v', 122,
        'W', 164,
        'w', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(308);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 63,
        '"', 236,
        '#', 307,
        '-', 32,
        '.', 300,
        '/', 23,
        '=', 317,
        't', 256,
        'u', 259,
        '{', 242,
        '}', 243,
        'G', 285,
        'g', 285,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '#') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 236,
        '#', 307,
        '.', 300,
        '/', 23,
        '}', 243,
        'A', 292,
        'a', 292,
        'D', 269,
        'd', 269,
        'E', 297,
        'e', 297,
        'I', 278,
        'i', 278,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '*' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(238);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '}') ADVANCE(243);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(307);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(302);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(219);
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 38:
      if (lookahead == 'U') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        'C', 163,
        'c', 163,
        'O', 115,
        'o', 115,
        'T', 227,
        't', 227,
        'Y', 198,
        'y', 198,
      );
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 114:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(120);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 115:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 119:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
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
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 140:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 161:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 175:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 176:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 177:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 178:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 179:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 180:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 185:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 196:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 197:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      END_STATE();
    case 198:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      END_STATE();
    case 199:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 201:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 221:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 222:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 223:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 224:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(193);
      END_STATE();
    case 225:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 226:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 227:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 228:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 229:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 230:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 239:
      if (eof) ADVANCE(240);
      ADVANCE_MAP(
        '!', 64,
        '"', 236,
        '#', 307,
        '/', 23,
        '{', 242,
        '}', 243,
        'A', 217,
        'a', 217,
        'C', 170,
        'c', 170,
        'D', 89,
        'd', 89,
        'E', 138,
        'e', 138,
        'I', 159,
        'i', 159,
        'M', 173,
        'm', 173,
        'N', 65,
        'n', 65,
        'R', 90,
        'r', 90,
        'S', 79,
        's', 79,
        'T', 118,
        't', 118,
        'V', 122,
        'v', 122,
        'W', 164,
        'w', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_path_value);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_url_value);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(261);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_name_statement_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_docs_statement_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_adrs_statement_token1);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_component_declaration_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_group_declaration_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_theme_statement_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_themes_statement_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(254);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 239},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 239},
  [9] = {.lex_state = 239},
  [10] = {.lex_state = 239},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 239},
  [18] = {.lex_state = 239},
  [19] = {.lex_state = 239},
  [20] = {.lex_state = 239},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 239},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 239},
  [25] = {.lex_state = 239},
  [26] = {.lex_state = 239},
  [27] = {.lex_state = 239},
  [28] = {.lex_state = 239},
  [29] = {.lex_state = 239},
  [30] = {.lex_state = 239},
  [31] = {.lex_state = 239},
  [32] = {.lex_state = 239},
  [33] = {.lex_state = 239},
  [34] = {.lex_state = 239},
  [35] = {.lex_state = 239},
  [36] = {.lex_state = 239},
  [37] = {.lex_state = 239},
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
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 239},
  [56] = {.lex_state = 239},
  [57] = {.lex_state = 239},
  [58] = {.lex_state = 239},
  [59] = {.lex_state = 239},
  [60] = {.lex_state = 239},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 239},
  [64] = {.lex_state = 239},
  [65] = {.lex_state = 239},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 239},
  [68] = {.lex_state = 239},
  [69] = {.lex_state = 239},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 239},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 239},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 17},
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
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 17},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 239},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 239},
  [108] = {.lex_state = 239},
  [109] = {.lex_state = 239},
  [110] = {.lex_state = 239},
  [111] = {.lex_state = 239},
  [112] = {.lex_state = 239},
  [113] = {.lex_state = 239},
  [114] = {.lex_state = 239},
  [115] = {.lex_state = 239},
  [116] = {.lex_state = 239},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 239},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 239},
  [122] = {.lex_state = 239},
  [123] = {.lex_state = 239},
  [124] = {.lex_state = 239},
  [125] = {.lex_state = 239},
  [126] = {.lex_state = 239},
  [127] = {.lex_state = 239},
  [128] = {.lex_state = 239},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 239},
  [135] = {.lex_state = 239},
  [136] = {.lex_state = 239},
  [137] = {.lex_state = 17},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 17},
  [141] = {.lex_state = 17},
  [142] = {.lex_state = 239},
  [143] = {.lex_state = 239},
  [144] = {.lex_state = 17},
  [145] = {.lex_state = 239},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 239},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 239},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 22},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 239},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 22},
  [163] = {.lex_state = 239},
  [164] = {.lex_state = 26},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 239},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 239},
  [171] = {.lex_state = 239},
  [172] = {.lex_state = 239},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 239},
  [175] = {.lex_state = 239},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 239},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 26},
  [186] = {.lex_state = 239},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 22},
  [190] = {.lex_state = 239},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 239},
  [193] = {.lex_state = 239},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 22},
  [198] = {.lex_state = 239},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 239},
  [202] = {.lex_state = 239},
  [203] = {.lex_state = 239},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 239},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 16},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 239},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 239},
  [219] = {.lex_state = 239},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 239},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 239},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 239},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 239},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 239},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 239},
  [242] = {.lex_state = 22},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 239},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 239},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 239},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 21},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 239},
  [262] = {.lex_state = 239},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 239},
  [272] = {.lex_state = 21},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 239},
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
    [sym_dsl] = STATE(237),
    [sym_workspace_declaration] = STATE(166),
    [aux_sym_dsl_repeat1] = STATE(166),
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
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(270), 1,
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
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(270), 1,
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
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(270), 1,
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
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(270), 1,
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
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(270), 1,
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
  [245] = 14,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym__simple_identifier,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_description_statement_token1,
    ACTIONS(72), 1,
      aux_sym_include_statement_token1,
    ACTIONS(75), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(78), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(81), 1,
      aux_sym_default_statement_token1,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(269), 1,
      sym_relation_identifier,
    STATE(7), 2,
      sym_dynamic_view_property_statement,
      aux_sym_dynamic_view_declaration_repeat1,
    STATE(144), 2,
      sym_relation_statement,
      sym_view_property_statement,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [294] = 12,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(90), 1,
      aux_sym_name_statement_token1,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(94), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(96), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(98), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(102), 1,
      aux_sym_views_declaration_token1,
    STATE(17), 2,
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
  [339] = 12,
    ACTIONS(86), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(90), 1,
      aux_sym_name_statement_token1,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(94), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(96), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(98), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(102), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
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
  [384] = 12,
    ACTIONS(86), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(90), 1,
      aux_sym_name_statement_token1,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(94), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(96), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(98), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(102), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
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
  [429] = 14,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_description_statement_token1,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(269), 1,
      sym_relation_identifier,
    STATE(12), 2,
      sym_dynamic_view_property_statement,
      aux_sym_dynamic_view_declaration_repeat1,
    STATE(144), 2,
      sym_relation_statement,
      sym_view_property_statement,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [478] = 14,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_description_statement_token1,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(269), 1,
      sym_relation_identifier,
    STATE(7), 2,
      sym_dynamic_view_property_statement,
      aux_sym_dynamic_view_declaration_repeat1,
    STATE(144), 2,
      sym_relation_statement,
      sym_view_property_statement,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [527] = 14,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_description_statement_token1,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(269), 1,
      sym_relation_identifier,
    STATE(14), 2,
      sym_dynamic_view_property_statement,
      aux_sym_dynamic_view_declaration_repeat1,
    STATE(144), 2,
      sym_relation_statement,
      sym_view_property_statement,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [576] = 14,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_description_statement_token1,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(269), 1,
      sym_relation_identifier,
    STATE(7), 2,
      sym_dynamic_view_property_statement,
      aux_sym_dynamic_view_declaration_repeat1,
    STATE(144), 2,
      sym_relation_statement,
      sym_view_property_statement,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [625] = 14,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_description_statement_token1,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(269), 1,
      sym_relation_identifier,
    STATE(16), 2,
      sym_dynamic_view_property_statement,
      aux_sym_dynamic_view_declaration_repeat1,
    STATE(144), 2,
      sym_relation_statement,
      sym_view_property_statement,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [674] = 14,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_description_statement_token1,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(269), 1,
      sym_relation_identifier,
    STATE(7), 2,
      sym_dynamic_view_property_statement,
      aux_sym_dynamic_view_declaration_repeat1,
    STATE(144), 2,
      sym_relation_statement,
      sym_view_property_statement,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [723] = 12,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(138), 1,
      aux_sym_name_statement_token1,
    ACTIONS(141), 1,
      aux_sym_description_statement_token1,
    ACTIONS(144), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(147), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(150), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(153), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(156), 1,
      aux_sym_views_declaration_token1,
    STATE(17), 2,
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
  [768] = 12,
    ACTIONS(86), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(90), 1,
      aux_sym_name_statement_token1,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(94), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(96), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(98), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(100), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(102), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(159), 1,
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
  [813] = 10,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(167), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(169), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(171), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(173), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(175), 1,
      aux_sym_themes_statement_token1,
    STATE(21), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(119), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [850] = 10,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(167), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(169), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(171), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(173), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(175), 1,
      aux_sym_themes_statement_token1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(119), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [887] = 10,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(187), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(190), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(193), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(196), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(199), 1,
      aux_sym_themes_statement_token1,
    STATE(21), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(119), 6,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
      sym_theme_statement,
      sym_themes_statement,
  [924] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [957] = 2,
    ACTIONS(206), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(204), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string,
      anon_sym_DOT,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_group_declaration_token1,
  [976] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1009] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1042] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1075] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1108] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1141] = 1,
    ACTIONS(218), 14,
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
  [1158] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1191] = 9,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_description_statement_token1,
    ACTIONS(230), 1,
      aux_sym_include_statement_token1,
    ACTIONS(233), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(236), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(239), 1,
      aux_sym_default_statement_token1,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1224] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1257] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(37), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1290] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1323] = 1,
    ACTIONS(248), 14,
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
  [1340] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1373] = 9,
    ACTIONS(92), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_include_statement_token1,
    ACTIONS(114), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(116), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(118), 1,
      aux_sym_default_statement_token1,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(129), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1406] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      sym_string,
    STATE(50), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(89), 1,
      sym__model_children,
    ACTIONS(260), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(256), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1432] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      sym_string,
    STATE(50), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(90), 1,
      sym__model_children,
    ACTIONS(264), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(262), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1458] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(84), 1,
      sym__model_children,
    ACTIONS(270), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(266), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1484] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(81), 1,
      sym__model_children,
    ACTIONS(276), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(272), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1510] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(82), 1,
      sym__model_children,
    ACTIONS(282), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(278), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1536] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      sym_string,
    STATE(50), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(87), 1,
      sym__model_children,
    ACTIONS(286), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(284), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1562] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      sym_string,
    STATE(50), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(88), 1,
      sym__model_children,
    ACTIONS(290), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(288), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1588] = 6,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      sym_string,
    STATE(38), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(83), 1,
      sym__model_children,
    ACTIONS(296), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(292), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1614] = 5,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      sym_string,
    STATE(98), 1,
      sym__model_children,
    ACTIONS(302), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(298), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1637] = 5,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      sym_string,
    STATE(76), 1,
      sym__model_children,
    ACTIONS(308), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(304), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1660] = 5,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      sym_string,
    STATE(75), 1,
      sym__model_children,
    ACTIONS(314), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(310), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1683] = 5,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      sym_string,
    STATE(103), 1,
      sym__model_children,
    ACTIONS(320), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(316), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1706] = 4,
    ACTIONS(324), 1,
      sym_string,
    STATE(50), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(327), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(322), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1727] = 3,
    ACTIONS(333), 1,
      anon_sym_DOT,
    ACTIONS(331), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(329), 7,
      anon_sym_RBRACE,
      sym_string,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      anon_sym_DASH_GT,
      aux_sym_group_declaration_token1,
  [1746] = 4,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym__model_children,
    ACTIONS(337), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(335), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1766] = 2,
    ACTIONS(331), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(329), 7,
      anon_sym_RBRACE,
      sym_string,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      anon_sym_DASH_GT,
      aux_sym_group_declaration_token1,
  [1782] = 2,
    ACTIONS(341), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(339), 7,
      anon_sym_RBRACE,
      sym_string,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      anon_sym_DASH_GT,
      aux_sym_group_declaration_token1,
  [1798] = 1,
    ACTIONS(343), 10,
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
  [1811] = 1,
    ACTIONS(345), 10,
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
  [1824] = 1,
    ACTIONS(347), 10,
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
  [1837] = 1,
    ACTIONS(349), 10,
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
  [1850] = 1,
    ACTIONS(351), 10,
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
  [1863] = 1,
    ACTIONS(353), 10,
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
  [1876] = 3,
    ACTIONS(357), 1,
      sym_string,
    ACTIONS(359), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(355), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1893] = 3,
    ACTIONS(363), 1,
      sym_string,
    ACTIONS(365), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(361), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1910] = 1,
    ACTIONS(367), 10,
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
  [1923] = 1,
    ACTIONS(369), 10,
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
  [1936] = 1,
    ACTIONS(371), 10,
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
  [1949] = 3,
    ACTIONS(375), 1,
      sym_string,
    ACTIONS(377), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(373), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [1966] = 1,
    ACTIONS(379), 10,
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
  [1979] = 1,
    ACTIONS(381), 10,
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
  [1992] = 1,
    ACTIONS(383), 10,
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
  [2005] = 3,
    ACTIONS(331), 1,
      sym__simple_identifier,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(329), 8,
      anon_sym_RBRACE,
      sym_string,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2022] = 1,
    ACTIONS(387), 10,
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
  [2035] = 2,
    ACTIONS(206), 1,
      sym__simple_identifier,
    ACTIONS(204), 9,
      anon_sym_RBRACE,
      sym_string,
      anon_sym_DOT,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2050] = 1,
    ACTIONS(389), 10,
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
  [2063] = 2,
    ACTIONS(393), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(391), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2077] = 2,
    ACTIONS(397), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(395), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2091] = 2,
    ACTIONS(401), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(399), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2105] = 5,
    ACTIONS(403), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(405), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(407), 1,
      aux_sym_component_declaration_token1,
    ACTIONS(409), 1,
      aux_sym_person_declaration_token1,
    STATE(74), 5,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_component_declaration,
      sym_person_declaration,
  [2125] = 2,
    ACTIONS(413), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(411), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2139] = 2,
    ACTIONS(417), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(415), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2153] = 2,
    ACTIONS(341), 1,
      sym__simple_identifier,
    ACTIONS(339), 8,
      anon_sym_RBRACE,
      sym_string,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2167] = 2,
    ACTIONS(421), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(419), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2181] = 2,
    ACTIONS(425), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(423), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2195] = 2,
    ACTIONS(429), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(427), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2209] = 2,
    ACTIONS(433), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(431), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2223] = 2,
    ACTIONS(437), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(435), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2237] = 2,
    ACTIONS(441), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(439), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2251] = 2,
    ACTIONS(445), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(443), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2265] = 2,
    ACTIONS(449), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(447), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2279] = 2,
    ACTIONS(453), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(451), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2293] = 2,
    ACTIONS(457), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(455), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2307] = 2,
    ACTIONS(459), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(379), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2321] = 2,
    ACTIONS(461), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(381), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2335] = 2,
    ACTIONS(463), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(389), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2349] = 2,
    ACTIONS(331), 1,
      sym__simple_identifier,
    ACTIONS(329), 8,
      anon_sym_RBRACE,
      sym_string,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2363] = 2,
    ACTIONS(465), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(345), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2377] = 2,
    ACTIONS(467), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(347), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2391] = 2,
    ACTIONS(469), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(349), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2405] = 2,
    ACTIONS(473), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(471), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2419] = 3,
    ACTIONS(359), 1,
      sym__simple_identifier,
    ACTIONS(475), 1,
      sym_string,
    ACTIONS(355), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2435] = 3,
    ACTIONS(365), 1,
      sym__simple_identifier,
    ACTIONS(477), 1,
      sym_string,
    ACTIONS(361), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2451] = 3,
    ACTIONS(377), 1,
      sym__simple_identifier,
    ACTIONS(479), 1,
      sym_string,
    ACTIONS(373), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2467] = 2,
    ACTIONS(483), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(481), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2481] = 2,
    ACTIONS(487), 4,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
      anon_sym_url,
    ACTIONS(485), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_group_declaration_token1,
  [2495] = 2,
    ACTIONS(491), 1,
      sym__simple_identifier,
    ACTIONS(489), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2508] = 6,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(501), 1,
      aux_sym_relationship_declaration_token1,
    STATE(105), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(175), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [2529] = 2,
    ACTIONS(506), 1,
      sym__simple_identifier,
    ACTIONS(504), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2542] = 2,
    ACTIONS(510), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(508), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2555] = 2,
    ACTIONS(514), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(512), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2568] = 2,
    ACTIONS(518), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(516), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2581] = 2,
    ACTIONS(522), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(520), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2594] = 2,
    ACTIONS(526), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(524), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2607] = 2,
    ACTIONS(530), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(528), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2620] = 2,
    ACTIONS(534), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(532), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2633] = 6,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(542), 1,
      aux_sym_relationship_declaration_token1,
    STATE(105), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(175), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [2654] = 2,
    ACTIONS(546), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(544), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2667] = 2,
    ACTIONS(550), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(548), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2680] = 2,
    ACTIONS(554), 1,
      sym__simple_identifier,
    ACTIONS(552), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2693] = 2,
    ACTIONS(558), 1,
      sym__simple_identifier,
    ACTIONS(556), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2706] = 2,
    ACTIONS(562), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(560), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2719] = 2,
    ACTIONS(566), 1,
      sym__simple_identifier,
    ACTIONS(564), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2732] = 2,
    ACTIONS(570), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(568), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2745] = 2,
    ACTIONS(574), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(572), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2758] = 2,
    ACTIONS(578), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(576), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2771] = 2,
    ACTIONS(582), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(580), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2784] = 2,
    ACTIONS(586), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(584), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2797] = 2,
    ACTIONS(590), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(588), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2810] = 6,
    ACTIONS(538), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(542), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
    STATE(114), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(175), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [2831] = 2,
    ACTIONS(596), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(594), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2844] = 2,
    ACTIONS(600), 1,
      sym__simple_identifier,
    ACTIONS(598), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2857] = 2,
    ACTIONS(604), 1,
      sym__simple_identifier,
    ACTIONS(602), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2870] = 2,
    ACTIONS(608), 1,
      sym__simple_identifier,
    ACTIONS(606), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2883] = 2,
    ACTIONS(612), 1,
      sym__simple_identifier,
    ACTIONS(610), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2896] = 2,
    ACTIONS(616), 1,
      sym__simple_identifier,
    ACTIONS(614), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2909] = 2,
    ACTIONS(620), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(618), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2922] = 2,
    ACTIONS(624), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(622), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2935] = 2,
    ACTIONS(628), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(626), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [2948] = 2,
    ACTIONS(632), 1,
      sym__simple_identifier,
    ACTIONS(630), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2961] = 2,
    ACTIONS(636), 1,
      sym__simple_identifier,
    ACTIONS(634), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2974] = 2,
    ACTIONS(640), 1,
      sym__simple_identifier,
    ACTIONS(638), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2987] = 2,
    ACTIONS(642), 1,
      sym__simple_identifier,
    ACTIONS(248), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [3000] = 2,
    ACTIONS(644), 1,
      sym__simple_identifier,
    ACTIONS(218), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [3013] = 2,
    ACTIONS(648), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(646), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [3026] = 2,
    ACTIONS(652), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(650), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [3039] = 2,
    ACTIONS(656), 1,
      sym__simple_identifier,
    ACTIONS(654), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [3052] = 2,
    ACTIONS(660), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(658), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [3065] = 2,
    ACTIONS(437), 1,
      sym__simple_identifier,
    ACTIONS(435), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [3078] = 2,
    ACTIONS(664), 1,
      aux_sym_theme_statement_token1,
    ACTIONS(662), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
      aux_sym_themes_statement_token1,
  [3091] = 6,
    ACTIONS(666), 1,
      sym__simple_identifier,
    ACTIONS(668), 1,
      sym_wildcard_identifier,
    ACTIONS(670), 1,
      sym__newline,
    ACTIONS(672), 1,
      sym_comment,
    STATE(167), 1,
      sym_identifier,
    STATE(150), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [3111] = 5,
    ACTIONS(676), 1,
      sym__simple_identifier,
    ACTIONS(678), 1,
      aux_sym_color_token1,
    ACTIONS(680), 1,
      aux_sym_color_token2,
    ACTIONS(674), 2,
      sym_number,
      sym_string,
    STATE(210), 2,
      sym_identifier,
      sym_color,
  [3129] = 6,
    ACTIONS(682), 1,
      sym__simple_identifier,
    ACTIONS(685), 1,
      sym_wildcard_identifier,
    ACTIONS(688), 1,
      sym__newline,
    ACTIONS(690), 1,
      sym_comment,
    STATE(167), 1,
      sym_identifier,
    STATE(150), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [3149] = 5,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      sym_comment,
    ACTIONS(697), 1,
      aux_sym_scope_declaration_token1,
    STATE(186), 1,
      sym_scope_declaration,
    STATE(151), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [3166] = 5,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(702), 1,
      sym__simple_identifier,
    ACTIONS(704), 1,
      sym_comment,
    STATE(149), 1,
      sym_identifier,
    STATE(156), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [3183] = 5,
    ACTIONS(702), 1,
      sym__simple_identifier,
    ACTIONS(704), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_identifier,
    STATE(156), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [3200] = 5,
    ACTIONS(708), 1,
      sym__simple_identifier,
    ACTIONS(710), 1,
      sym__newline,
    ACTIONS(712), 1,
      sym_comment,
    STATE(179), 1,
      sym_identifier,
    STATE(155), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [3217] = 5,
    ACTIONS(714), 1,
      sym__simple_identifier,
    ACTIONS(717), 1,
      sym__newline,
    ACTIONS(719), 1,
      sym_comment,
    STATE(179), 1,
      sym_identifier,
    STATE(155), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [3234] = 5,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      sym__simple_identifier,
    ACTIONS(726), 1,
      sym_comment,
    STATE(149), 1,
      sym_identifier,
    STATE(156), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [3251] = 3,
    ACTIONS(731), 1,
      sym__newline,
    STATE(161), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(729), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [3264] = 3,
    ACTIONS(733), 1,
      sym__newline,
    STATE(157), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(729), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [3277] = 5,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(737), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_scope_declaration_token1,
    STATE(186), 1,
      sym_scope_declaration,
    STATE(163), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [3294] = 5,
    ACTIONS(702), 1,
      sym__simple_identifier,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(743), 1,
      sym_comment,
    STATE(149), 1,
      sym_identifier,
    STATE(152), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [3311] = 3,
    ACTIONS(748), 1,
      sym__newline,
    STATE(161), 2,
      sym_theme_value,
      aux_sym_themes_statement_repeat1,
    ACTIONS(745), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [3324] = 5,
    ACTIONS(702), 1,
      sym__simple_identifier,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    ACTIONS(752), 1,
      sym_comment,
    STATE(149), 1,
      sym_identifier,
    STATE(153), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [3341] = 5,
    ACTIONS(737), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_scope_declaration,
    STATE(151), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [3358] = 4,
    ACTIONS(666), 1,
      sym__simple_identifier,
    ACTIONS(756), 1,
      sym_wildcard_identifier,
    STATE(167), 1,
      sym_identifier,
    STATE(148), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [3372] = 2,
    ACTIONS(206), 1,
      aux_sym_color_token1,
    ACTIONS(204), 4,
      sym_number,
      sym_string,
      sym__simple_identifier,
      aux_sym_color_token2,
  [3382] = 4,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(758), 1,
      ts_builtin_sym_end,
    ACTIONS(760), 1,
      sym_comment,
    STATE(170), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [3396] = 3,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(766), 1,
      sym__newline,
    ACTIONS(762), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [3408] = 2,
    STATE(194), 1,
      sym_autolayout_value,
    ACTIONS(768), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [3418] = 2,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(206), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [3428] = 4,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
    ACTIONS(772), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(775), 1,
      sym_comment,
    STATE(170), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [3442] = 1,
    ACTIONS(778), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3449] = 1,
    ACTIONS(780), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3456] = 3,
    ACTIONS(782), 1,
      sym_string,
    STATE(249), 1,
      sym_theme_value,
    ACTIONS(729), 2,
      sym_path_value,
      anon_sym_default,
  [3467] = 1,
    ACTIONS(784), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3474] = 1,
    ACTIONS(786), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3481] = 3,
    ACTIONS(788), 1,
      sym__simple_identifier,
    STATE(179), 1,
      sym_identifier,
    STATE(154), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [3492] = 4,
    ACTIONS(790), 1,
      sym__simple_identifier,
    STATE(70), 1,
      sym_identifier,
    STATE(94), 1,
      sym_dotted_identifier,
    STATE(99), 1,
      sym_relation_identifier,
  [3505] = 2,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(341), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [3514] = 3,
    ACTIONS(794), 1,
      anon_sym_DOT,
    ACTIONS(796), 1,
      sym__newline,
    ACTIONS(792), 2,
      sym__simple_identifier,
      sym_comment,
  [3525] = 2,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(206), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [3534] = 1,
    ACTIONS(798), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [3541] = 2,
    ACTIONS(802), 1,
      sym__newline,
    ACTIONS(800), 3,
      sym_string,
      sym_path_value,
      anon_sym_default,
  [3550] = 4,
    ACTIONS(804), 1,
      sym__simple_identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(53), 1,
      sym_dotted_identifier,
    STATE(61), 1,
      sym_relation_identifier,
  [3563] = 2,
    ACTIONS(808), 1,
      sym__newline,
    ACTIONS(806), 2,
      sym_number,
      sym_comment,
  [3571] = 3,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(810), 1,
      sym_wildcard_identifier,
    STATE(203), 1,
      sym_identifier,
  [3581] = 1,
    ACTIONS(812), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [3587] = 3,
    ACTIONS(814), 1,
      sym_number,
    ACTIONS(816), 1,
      sym__newline,
    ACTIONS(818), 1,
      sym_comment,
  [3597] = 2,
    STATE(243), 1,
      sym_identifiers_value,
    ACTIONS(820), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [3605] = 1,
    ACTIONS(822), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [3611] = 1,
    ACTIONS(824), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3617] = 3,
    ACTIONS(329), 1,
      anon_sym_DASH_GT,
    ACTIONS(333), 1,
      anon_sym_DOT,
    ACTIONS(826), 1,
      anon_sym_EQ,
  [3627] = 1,
    ACTIONS(828), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3633] = 1,
    ACTIONS(830), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [3639] = 3,
    ACTIONS(832), 1,
      sym_number,
    ACTIONS(834), 1,
      sym__newline,
    ACTIONS(836), 1,
      sym_comment,
  [3649] = 2,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(341), 2,
      sym__simple_identifier,
      sym_comment,
  [3657] = 3,
    ACTIONS(838), 1,
      sym_string,
    ACTIONS(840), 1,
      sym__newline,
    STATE(199), 1,
      aux_sym_software_system_declaration_repeat1,
  [3667] = 1,
    ACTIONS(842), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [3673] = 1,
    ACTIONS(844), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [3679] = 3,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(846), 1,
      sym_string,
    STATE(199), 1,
      aux_sym_software_system_declaration_repeat1,
  [3689] = 2,
    ACTIONS(788), 1,
      sym__simple_identifier,
    STATE(195), 1,
      sym_identifier,
  [3696] = 2,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    ACTIONS(851), 1,
      sym_string,
  [3703] = 2,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
    ACTIONS(855), 1,
      sym_string,
  [3710] = 2,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(859), 1,
      sym_string,
  [3717] = 2,
    ACTIONS(804), 1,
      sym__simple_identifier,
    STATE(54), 1,
      sym_identifier,
  [3724] = 2,
    ACTIONS(861), 1,
      sym__newline,
    ACTIONS(863), 1,
      sym_comment,
  [3731] = 2,
    ACTIONS(865), 1,
      sym__newline,
    ACTIONS(867), 1,
      sym_comment,
  [3738] = 2,
    ACTIONS(869), 1,
      sym_class_value,
    ACTIONS(871), 1,
      sym__newline,
  [3745] = 2,
    ACTIONS(873), 1,
      sym_class_value,
    ACTIONS(875), 1,
      sym__newline,
  [3752] = 2,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
    ACTIONS(879), 1,
      sym_string,
  [3759] = 2,
    ACTIONS(881), 1,
      sym__newline,
    ACTIONS(883), 1,
      sym_comment,
  [3766] = 2,
    ACTIONS(885), 1,
      sym__newline,
    ACTIONS(887), 1,
      sym_comment,
  [3773] = 2,
    ACTIONS(804), 1,
      sym__simple_identifier,
    STATE(219), 1,
      sym_identifier,
  [3780] = 2,
    ACTIONS(804), 1,
      sym__simple_identifier,
    STATE(218), 1,
      sym_identifier,
  [3787] = 2,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym__model_children,
  [3794] = 2,
    ACTIONS(891), 1,
      sym__newline,
    ACTIONS(893), 1,
      sym_comment,
  [3801] = 2,
    ACTIONS(895), 1,
      sym_string,
    STATE(196), 1,
      aux_sym_software_system_declaration_repeat1,
  [3808] = 2,
    ACTIONS(676), 1,
      sym__simple_identifier,
    STATE(178), 1,
      sym_identifier,
  [3815] = 2,
    ACTIONS(897), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      sym_string,
  [3822] = 2,
    ACTIONS(901), 1,
      anon_sym_LBRACE,
    ACTIONS(903), 1,
      sym_string,
  [3829] = 2,
    ACTIONS(790), 1,
      sym__simple_identifier,
    STATE(80), 1,
      sym_identifier,
  [3836] = 2,
    ACTIONS(905), 1,
      anon_sym_LBRACE,
    ACTIONS(907), 1,
      sym_string,
  [3843] = 2,
    ACTIONS(909), 1,
      sym__newline,
    ACTIONS(911), 1,
      sym_comment,
  [3850] = 2,
    ACTIONS(913), 1,
      sym_class_value,
    ACTIONS(915), 1,
      sym__newline,
  [3857] = 2,
    ACTIONS(917), 1,
      sym_class_value,
    ACTIONS(919), 1,
      sym__newline,
  [3864] = 1,
    ACTIONS(921), 1,
      sym_string,
  [3868] = 1,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
  [3872] = 1,
    ACTIONS(925), 1,
      sym_string,
  [3876] = 1,
    ACTIONS(927), 1,
      sym__newline,
  [3880] = 1,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
  [3884] = 1,
    ACTIONS(931), 1,
      sym__newline,
  [3888] = 1,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
  [3892] = 1,
    ACTIONS(935), 1,
      sym_path_value,
  [3896] = 1,
    ACTIONS(937), 1,
      sym__newline,
  [3900] = 1,
    ACTIONS(939), 1,
      sym__newline,
  [3904] = 1,
    ACTIONS(941), 1,
      sym_string,
  [3908] = 1,
    ACTIONS(943), 1,
      anon_sym_EQ,
  [3912] = 1,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
  [3916] = 1,
    ACTIONS(947), 1,
      sym_string,
  [3920] = 1,
    ACTIONS(949), 1,
      anon_sym_LBRACE,
  [3924] = 1,
    ACTIONS(951), 1,
      sym__newline,
  [3928] = 1,
    ACTIONS(953), 1,
      sym_string,
  [3932] = 1,
    ACTIONS(955), 1,
      sym_url_value,
  [3936] = 1,
    ACTIONS(957), 1,
      sym__newline,
  [3940] = 1,
    ACTIONS(959), 1,
      sym_string,
  [3944] = 1,
    ACTIONS(961), 1,
      sym__newline,
  [3948] = 1,
    ACTIONS(963), 1,
      sym_string,
  [3952] = 1,
    ACTIONS(965), 1,
      anon_sym_LBRACE,
  [3956] = 1,
    ACTIONS(967), 1,
      sym_string,
  [3960] = 1,
    ACTIONS(969), 1,
      sym__newline,
  [3964] = 1,
    ACTIONS(971), 1,
      sym__newline,
  [3968] = 1,
    ACTIONS(973), 1,
      anon_sym_LBRACE,
  [3972] = 1,
    ACTIONS(975), 1,
      sym_path_value,
  [3976] = 1,
    ACTIONS(977), 1,
      sym__newline,
  [3980] = 1,
    ACTIONS(979), 1,
      anon_sym_LBRACE,
  [3984] = 1,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
  [3988] = 1,
    ACTIONS(983), 1,
      anon_sym_LBRACE,
  [3992] = 1,
    ACTIONS(985), 1,
      sym__newline,
  [3996] = 1,
    ACTIONS(987), 1,
      sym__newline,
  [4000] = 1,
    ACTIONS(989), 1,
      sym__newline,
  [4004] = 1,
    ACTIONS(991), 1,
      sym__newline,
  [4008] = 1,
    ACTIONS(993), 1,
      sym_string,
  [4012] = 1,
    ACTIONS(995), 1,
      sym_string,
  [4016] = 1,
    ACTIONS(997), 1,
      sym__newline,
  [4020] = 1,
    ACTIONS(999), 1,
      sym__newline,
  [4024] = 1,
    ACTIONS(1001), 1,
      sym__simple_identifier,
  [4028] = 1,
    ACTIONS(1003), 1,
      sym__newline,
  [4032] = 1,
    ACTIONS(1005), 1,
      sym__newline,
  [4036] = 1,
    ACTIONS(1007), 1,
      sym__newline,
  [4040] = 1,
    ACTIONS(1009), 1,
      anon_sym_DASH_GT,
  [4044] = 1,
    ACTIONS(1011), 1,
      anon_sym_DASH_GT,
  [4048] = 1,
    ACTIONS(1013), 1,
      sym_string,
  [4052] = 1,
    ACTIONS(1015), 1,
      sym_path_value,
  [4056] = 1,
    ACTIONS(1017), 1,
      sym_path_value,
  [4060] = 1,
    ACTIONS(1019), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 527,
  [SMALL_STATE(14)] = 576,
  [SMALL_STATE(15)] = 625,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 723,
  [SMALL_STATE(18)] = 768,
  [SMALL_STATE(19)] = 813,
  [SMALL_STATE(20)] = 850,
  [SMALL_STATE(21)] = 887,
  [SMALL_STATE(22)] = 924,
  [SMALL_STATE(23)] = 957,
  [SMALL_STATE(24)] = 976,
  [SMALL_STATE(25)] = 1009,
  [SMALL_STATE(26)] = 1042,
  [SMALL_STATE(27)] = 1075,
  [SMALL_STATE(28)] = 1108,
  [SMALL_STATE(29)] = 1141,
  [SMALL_STATE(30)] = 1158,
  [SMALL_STATE(31)] = 1191,
  [SMALL_STATE(32)] = 1224,
  [SMALL_STATE(33)] = 1257,
  [SMALL_STATE(34)] = 1290,
  [SMALL_STATE(35)] = 1323,
  [SMALL_STATE(36)] = 1340,
  [SMALL_STATE(37)] = 1373,
  [SMALL_STATE(38)] = 1406,
  [SMALL_STATE(39)] = 1432,
  [SMALL_STATE(40)] = 1458,
  [SMALL_STATE(41)] = 1484,
  [SMALL_STATE(42)] = 1510,
  [SMALL_STATE(43)] = 1536,
  [SMALL_STATE(44)] = 1562,
  [SMALL_STATE(45)] = 1588,
  [SMALL_STATE(46)] = 1614,
  [SMALL_STATE(47)] = 1637,
  [SMALL_STATE(48)] = 1660,
  [SMALL_STATE(49)] = 1683,
  [SMALL_STATE(50)] = 1706,
  [SMALL_STATE(51)] = 1727,
  [SMALL_STATE(52)] = 1746,
  [SMALL_STATE(53)] = 1766,
  [SMALL_STATE(54)] = 1782,
  [SMALL_STATE(55)] = 1798,
  [SMALL_STATE(56)] = 1811,
  [SMALL_STATE(57)] = 1824,
  [SMALL_STATE(58)] = 1837,
  [SMALL_STATE(59)] = 1850,
  [SMALL_STATE(60)] = 1863,
  [SMALL_STATE(61)] = 1876,
  [SMALL_STATE(62)] = 1893,
  [SMALL_STATE(63)] = 1910,
  [SMALL_STATE(64)] = 1923,
  [SMALL_STATE(65)] = 1936,
  [SMALL_STATE(66)] = 1949,
  [SMALL_STATE(67)] = 1966,
  [SMALL_STATE(68)] = 1979,
  [SMALL_STATE(69)] = 1992,
  [SMALL_STATE(70)] = 2005,
  [SMALL_STATE(71)] = 2022,
  [SMALL_STATE(72)] = 2035,
  [SMALL_STATE(73)] = 2050,
  [SMALL_STATE(74)] = 2063,
  [SMALL_STATE(75)] = 2077,
  [SMALL_STATE(76)] = 2091,
  [SMALL_STATE(77)] = 2105,
  [SMALL_STATE(78)] = 2125,
  [SMALL_STATE(79)] = 2139,
  [SMALL_STATE(80)] = 2153,
  [SMALL_STATE(81)] = 2167,
  [SMALL_STATE(82)] = 2181,
  [SMALL_STATE(83)] = 2195,
  [SMALL_STATE(84)] = 2209,
  [SMALL_STATE(85)] = 2223,
  [SMALL_STATE(86)] = 2237,
  [SMALL_STATE(87)] = 2251,
  [SMALL_STATE(88)] = 2265,
  [SMALL_STATE(89)] = 2279,
  [SMALL_STATE(90)] = 2293,
  [SMALL_STATE(91)] = 2307,
  [SMALL_STATE(92)] = 2321,
  [SMALL_STATE(93)] = 2335,
  [SMALL_STATE(94)] = 2349,
  [SMALL_STATE(95)] = 2363,
  [SMALL_STATE(96)] = 2377,
  [SMALL_STATE(97)] = 2391,
  [SMALL_STATE(98)] = 2405,
  [SMALL_STATE(99)] = 2419,
  [SMALL_STATE(100)] = 2435,
  [SMALL_STATE(101)] = 2451,
  [SMALL_STATE(102)] = 2467,
  [SMALL_STATE(103)] = 2481,
  [SMALL_STATE(104)] = 2495,
  [SMALL_STATE(105)] = 2508,
  [SMALL_STATE(106)] = 2529,
  [SMALL_STATE(107)] = 2542,
  [SMALL_STATE(108)] = 2555,
  [SMALL_STATE(109)] = 2568,
  [SMALL_STATE(110)] = 2581,
  [SMALL_STATE(111)] = 2594,
  [SMALL_STATE(112)] = 2607,
  [SMALL_STATE(113)] = 2620,
  [SMALL_STATE(114)] = 2633,
  [SMALL_STATE(115)] = 2654,
  [SMALL_STATE(116)] = 2667,
  [SMALL_STATE(117)] = 2680,
  [SMALL_STATE(118)] = 2693,
  [SMALL_STATE(119)] = 2706,
  [SMALL_STATE(120)] = 2719,
  [SMALL_STATE(121)] = 2732,
  [SMALL_STATE(122)] = 2745,
  [SMALL_STATE(123)] = 2758,
  [SMALL_STATE(124)] = 2771,
  [SMALL_STATE(125)] = 2784,
  [SMALL_STATE(126)] = 2797,
  [SMALL_STATE(127)] = 2810,
  [SMALL_STATE(128)] = 2831,
  [SMALL_STATE(129)] = 2844,
  [SMALL_STATE(130)] = 2857,
  [SMALL_STATE(131)] = 2870,
  [SMALL_STATE(132)] = 2883,
  [SMALL_STATE(133)] = 2896,
  [SMALL_STATE(134)] = 2909,
  [SMALL_STATE(135)] = 2922,
  [SMALL_STATE(136)] = 2935,
  [SMALL_STATE(137)] = 2948,
  [SMALL_STATE(138)] = 2961,
  [SMALL_STATE(139)] = 2974,
  [SMALL_STATE(140)] = 2987,
  [SMALL_STATE(141)] = 3000,
  [SMALL_STATE(142)] = 3013,
  [SMALL_STATE(143)] = 3026,
  [SMALL_STATE(144)] = 3039,
  [SMALL_STATE(145)] = 3052,
  [SMALL_STATE(146)] = 3065,
  [SMALL_STATE(147)] = 3078,
  [SMALL_STATE(148)] = 3091,
  [SMALL_STATE(149)] = 3111,
  [SMALL_STATE(150)] = 3129,
  [SMALL_STATE(151)] = 3149,
  [SMALL_STATE(152)] = 3166,
  [SMALL_STATE(153)] = 3183,
  [SMALL_STATE(154)] = 3200,
  [SMALL_STATE(155)] = 3217,
  [SMALL_STATE(156)] = 3234,
  [SMALL_STATE(157)] = 3251,
  [SMALL_STATE(158)] = 3264,
  [SMALL_STATE(159)] = 3277,
  [SMALL_STATE(160)] = 3294,
  [SMALL_STATE(161)] = 3311,
  [SMALL_STATE(162)] = 3324,
  [SMALL_STATE(163)] = 3341,
  [SMALL_STATE(164)] = 3358,
  [SMALL_STATE(165)] = 3372,
  [SMALL_STATE(166)] = 3382,
  [SMALL_STATE(167)] = 3396,
  [SMALL_STATE(168)] = 3408,
  [SMALL_STATE(169)] = 3418,
  [SMALL_STATE(170)] = 3428,
  [SMALL_STATE(171)] = 3442,
  [SMALL_STATE(172)] = 3449,
  [SMALL_STATE(173)] = 3456,
  [SMALL_STATE(174)] = 3467,
  [SMALL_STATE(175)] = 3474,
  [SMALL_STATE(176)] = 3481,
  [SMALL_STATE(177)] = 3492,
  [SMALL_STATE(178)] = 3505,
  [SMALL_STATE(179)] = 3514,
  [SMALL_STATE(180)] = 3525,
  [SMALL_STATE(181)] = 3534,
  [SMALL_STATE(182)] = 3541,
  [SMALL_STATE(183)] = 3550,
  [SMALL_STATE(184)] = 3563,
  [SMALL_STATE(185)] = 3571,
  [SMALL_STATE(186)] = 3581,
  [SMALL_STATE(187)] = 3587,
  [SMALL_STATE(188)] = 3597,
  [SMALL_STATE(189)] = 3605,
  [SMALL_STATE(190)] = 3611,
  [SMALL_STATE(191)] = 3617,
  [SMALL_STATE(192)] = 3627,
  [SMALL_STATE(193)] = 3633,
  [SMALL_STATE(194)] = 3639,
  [SMALL_STATE(195)] = 3649,
  [SMALL_STATE(196)] = 3657,
  [SMALL_STATE(197)] = 3667,
  [SMALL_STATE(198)] = 3673,
  [SMALL_STATE(199)] = 3679,
  [SMALL_STATE(200)] = 3689,
  [SMALL_STATE(201)] = 3696,
  [SMALL_STATE(202)] = 3703,
  [SMALL_STATE(203)] = 3710,
  [SMALL_STATE(204)] = 3717,
  [SMALL_STATE(205)] = 3724,
  [SMALL_STATE(206)] = 3731,
  [SMALL_STATE(207)] = 3738,
  [SMALL_STATE(208)] = 3745,
  [SMALL_STATE(209)] = 3752,
  [SMALL_STATE(210)] = 3759,
  [SMALL_STATE(211)] = 3766,
  [SMALL_STATE(212)] = 3773,
  [SMALL_STATE(213)] = 3780,
  [SMALL_STATE(214)] = 3787,
  [SMALL_STATE(215)] = 3794,
  [SMALL_STATE(216)] = 3801,
  [SMALL_STATE(217)] = 3808,
  [SMALL_STATE(218)] = 3815,
  [SMALL_STATE(219)] = 3822,
  [SMALL_STATE(220)] = 3829,
  [SMALL_STATE(221)] = 3836,
  [SMALL_STATE(222)] = 3843,
  [SMALL_STATE(223)] = 3850,
  [SMALL_STATE(224)] = 3857,
  [SMALL_STATE(225)] = 3864,
  [SMALL_STATE(226)] = 3868,
  [SMALL_STATE(227)] = 3872,
  [SMALL_STATE(228)] = 3876,
  [SMALL_STATE(229)] = 3880,
  [SMALL_STATE(230)] = 3884,
  [SMALL_STATE(231)] = 3888,
  [SMALL_STATE(232)] = 3892,
  [SMALL_STATE(233)] = 3896,
  [SMALL_STATE(234)] = 3900,
  [SMALL_STATE(235)] = 3904,
  [SMALL_STATE(236)] = 3908,
  [SMALL_STATE(237)] = 3912,
  [SMALL_STATE(238)] = 3916,
  [SMALL_STATE(239)] = 3920,
  [SMALL_STATE(240)] = 3924,
  [SMALL_STATE(241)] = 3928,
  [SMALL_STATE(242)] = 3932,
  [SMALL_STATE(243)] = 3936,
  [SMALL_STATE(244)] = 3940,
  [SMALL_STATE(245)] = 3944,
  [SMALL_STATE(246)] = 3948,
  [SMALL_STATE(247)] = 3952,
  [SMALL_STATE(248)] = 3956,
  [SMALL_STATE(249)] = 3960,
  [SMALL_STATE(250)] = 3964,
  [SMALL_STATE(251)] = 3968,
  [SMALL_STATE(252)] = 3972,
  [SMALL_STATE(253)] = 3976,
  [SMALL_STATE(254)] = 3980,
  [SMALL_STATE(255)] = 3984,
  [SMALL_STATE(256)] = 3988,
  [SMALL_STATE(257)] = 3992,
  [SMALL_STATE(258)] = 3996,
  [SMALL_STATE(259)] = 4000,
  [SMALL_STATE(260)] = 4004,
  [SMALL_STATE(261)] = 4008,
  [SMALL_STATE(262)] = 4012,
  [SMALL_STATE(263)] = 4016,
  [SMALL_STATE(264)] = 4020,
  [SMALL_STATE(265)] = 4024,
  [SMALL_STATE(266)] = 4028,
  [SMALL_STATE(267)] = 4032,
  [SMALL_STATE(268)] = 4036,
  [SMALL_STATE(269)] = 4040,
  [SMALL_STATE(270)] = 4044,
  [SMALL_STATE(271)] = 4048,
  [SMALL_STATE(272)] = 4052,
  [SMALL_STATE(273)] = 4056,
  [SMALL_STATE(274)] = 4060,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 14),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 14),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 10),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 10),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 10),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 10),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 10),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 10),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 14),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 14),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 14),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 14),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 10),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 10),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, 0, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, 0, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_declaration, 2, 0, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_declaration, 2, 0, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 3, 0, 6),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 3, 0, 6),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 7),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 3, 0, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_statement, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 5, 0, 11),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 5, 0, 11),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 4, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_declaration, 3, 0, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_declaration, 3, 0, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 10),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 10),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 10),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 10),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 10),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 10),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 10),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 10),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 6, 0, 15),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 6, 0, 15),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 14),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 14),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 14),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 14),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 14),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 5, 0, 14),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 14),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 14),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_declaration, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_declaration, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_statement, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 8),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 5, 0, 8),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 12),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 5, 0, 12),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 8),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 5, 0, 8),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 12),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 5, 0, 12),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 9),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 9),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 13),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 13),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_statement, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_statement, 3, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_themes_statement, 3, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_themes_statement, 3, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_statement, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 12),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 6, 0, 12),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 16),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 6, 0, 16),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_themes_statement, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_themes_statement, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 16),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 6, 0, 16),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 13),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 13),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 17),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 17),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 8),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 4, 0, 8),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 18),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_statement, 4, 0, 18),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 16),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_view_declaration, 7, 0, 16),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 16),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 7, 0, 16),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 17),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 17),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 19),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_statement, 5, 0, 19),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 18),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_statement, 5, 0, 18),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 19),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_statement, 6, 0, 19),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_statement, 3, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_statement, 4, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 8),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 4, 0, 8),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 9),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 9),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_property_statement, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_view_property_statement, 1, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 12),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_context_view_declaration, 6, 0, 12),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_themes_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_themes_statement_repeat1, 2, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 5, 0, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 4, 0, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 3),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme_value, 1, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme_value, 1, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 20),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 20),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [945] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
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
