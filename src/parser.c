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
#define STATE_COUNT 237
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  aux_sym_element_declaration_token1 = 45,
  aux_sym_relationship_declaration_token1 = 46,
  sym_dsl = 47,
  sym_workspace_declaration = 48,
  sym_dotted_identifier = 49,
  sym_identifier = 50,
  sym_relation_identifier = 51,
  sym_color = 52,
  sym_workspace_item_statement = 53,
  sym_identifiers_statement = 54,
  sym_identifiers_value = 55,
  sym_name_statement = 56,
  sym_description_statement = 57,
  sym_docs_statement = 58,
  sym_adrs_statement = 59,
  sym_model_declaration = 60,
  sym__model_children = 61,
  sym__model_item_statement = 62,
  sym_variable_declaration = 63,
  sym_relation_statement = 64,
  sym__item_declaration = 65,
  sym_software_system_declaration = 66,
  sym_container_declaration = 67,
  sym_component_declaration = 68,
  sym_person_declaration = 69,
  sym_tag_declaration = 70,
  sym_tags_declaration = 71,
  sym_configuration_declaration = 72,
  sym_configuration_item_statement = 73,
  sym_scope_declaration = 74,
  sym_views_declaration = 75,
  sym_views_item_statement = 76,
  sym_system_context_view_declaration = 77,
  sym_view_property_statement = 78,
  sym_include_statement = 79,
  sym_exclude_statement = 80,
  sym_autolayout_statement = 81,
  sym_autolayout_value = 82,
  sym_default_statement = 83,
  sym_container_view_declaration = 84,
  sym_dynamic_view_declaration = 85,
  sym_styles_declaration = 86,
  sym_style_item_statement = 87,
  sym_element_declaration = 88,
  sym_relationship_declaration = 89,
  sym_element_property = 90,
  aux_sym_dsl_repeat1 = 91,
  aux_sym_workspace_declaration_repeat1 = 92,
  aux_sym__model_children_repeat1 = 93,
  aux_sym_software_system_declaration_repeat1 = 94,
  aux_sym_configuration_declaration_repeat1 = 95,
  aux_sym_views_declaration_repeat1 = 96,
  aux_sym_system_context_view_declaration_repeat1 = 97,
  aux_sym_include_statement_repeat1 = 98,
  aux_sym_exclude_statement_repeat1 = 99,
  aux_sym_styles_declaration_repeat1 = 100,
  aux_sym_element_declaration_repeat1 = 101,
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
  [aux_sym_default_statement_token1] = aux_sym_default_statement_token1,
  [aux_sym_dynamic_view_declaration_token1] = aux_sym_dynamic_view_declaration_token1,
  [aux_sym_styles_declaration_token1] = aux_sym_styles_declaration_token1,
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
  [9] = 9,
  [10] = 9,
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
  [101] = 44,
  [102] = 45,
  [103] = 55,
  [104] = 62,
  [105] = 57,
  [106] = 46,
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
  [139] = 63,
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
  [150] = 63,
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
  [167] = 151,
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
  [182] = 151,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 190,
  [192] = 190,
  [193] = 189,
  [194] = 173,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
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
  [225] = 195,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 219,
  [232] = 232,
  [233] = 233,
  [234] = 223,
  [235] = 227,
  [236] = 236,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '!', 32,
        '"', 192,
        '#', 191,
        '*', 339,
        '-', 16,
        '.', 338,
        '=', 356,
        'T', 231,
        'f', 217,
        'h', 215,
        't', 205,
        '{', 198,
        '}', 199,
        'A', 327,
        'a', 327,
        'B', 318,
        'b', 318,
        'C', 290,
        'c', 290,
        'D', 242,
        'd', 242,
        'E', 271,
        'e', 271,
        'I', 284,
        'i', 284,
        'L', 305,
        'l', 305,
        'M', 291,
        'm', 291,
        'N', 222,
        'n', 222,
        'P', 247,
        'p', 247,
        'R', 243,
        'r', 243,
        'S', 234,
        's', 234,
        'V', 261,
        'v', 261,
        'W', 294,
        'w', 294,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '*') ADVANCE(339);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(345);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '}') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '{') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(204);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '}') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(339);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(344);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(357);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(373);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        'C', 123,
        'c', 123,
        'O', 79,
        'o', 79,
        'T', 183,
        't', 183,
        'Y', 156,
        'y', 156,
      );
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 80:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 81:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 82:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(155);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 136:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 157:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 158:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 167:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 174:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 175:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 176:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 178:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 179:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 180:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 181:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(37);
      END_STATE();
    case 182:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 183:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 184:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 185:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 186:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 192:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 193:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 194:
      if (eof) ADVANCE(195);
      ADVANCE_MAP(
        '!', 32,
        '#', 344,
        '/', 12,
        'f', 26,
        'h', 24,
        '}', 199,
        'A', 174,
        'a', 174,
        'B', 160,
        'b', 160,
        'C', 122,
        'c', 122,
        'D', 57,
        'd', 57,
        'E', 96,
        'e', 96,
        'I', 120,
        'i', 120,
        'L', 140,
        'l', 140,
        'M', 124,
        'm', 124,
        'N', 33,
        'n', 33,
        'P', 75,
        'p', 75,
        'R', 58,
        'r', 58,
        'S', 47,
        's', 47,
        'T', 42,
        't', 42,
        'V', 87,
        'v', 87,
        'W', 125,
        'w', 125,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_path_value);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'h') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__simple_identifier);
      ADVANCE_MAP(
        'C', 292,
        'c', 292,
        'O', 257,
        'o', 257,
        'T', 334,
        't', 334,
        'Y', 315,
        'y', 315,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(302);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_flat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_name_statement_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_docs_statement_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_adrs_statement_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_component_declaration_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 194},
  [2] = {.lex_state = 194},
  [3] = {.lex_state = 194},
  [4] = {.lex_state = 194},
  [5] = {.lex_state = 194},
  [6] = {.lex_state = 194},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 194},
  [13] = {.lex_state = 194},
  [14] = {.lex_state = 194},
  [15] = {.lex_state = 194},
  [16] = {.lex_state = 194},
  [17] = {.lex_state = 194},
  [18] = {.lex_state = 194},
  [19] = {.lex_state = 194},
  [20] = {.lex_state = 194},
  [21] = {.lex_state = 194},
  [22] = {.lex_state = 194},
  [23] = {.lex_state = 194},
  [24] = {.lex_state = 194},
  [25] = {.lex_state = 194},
  [26] = {.lex_state = 194},
  [27] = {.lex_state = 194},
  [28] = {.lex_state = 194},
  [29] = {.lex_state = 194},
  [30] = {.lex_state = 194},
  [31] = {.lex_state = 194},
  [32] = {.lex_state = 194},
  [33] = {.lex_state = 194},
  [34] = {.lex_state = 194},
  [35] = {.lex_state = 194},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 194},
  [45] = {.lex_state = 194},
  [46] = {.lex_state = 194},
  [47] = {.lex_state = 194},
  [48] = {.lex_state = 194},
  [49] = {.lex_state = 194},
  [50] = {.lex_state = 194},
  [51] = {.lex_state = 194},
  [52] = {.lex_state = 194},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 194},
  [55] = {.lex_state = 194},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 194},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 194},
  [62] = {.lex_state = 194},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 194},
  [66] = {.lex_state = 194},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 194},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 194},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 194},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 194},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 194},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 194},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 194},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 194},
  [95] = {.lex_state = 194},
  [96] = {.lex_state = 194},
  [97] = {.lex_state = 194},
  [98] = {.lex_state = 194},
  [99] = {.lex_state = 194},
  [100] = {.lex_state = 194},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 194},
  [108] = {.lex_state = 194},
  [109] = {.lex_state = 194},
  [110] = {.lex_state = 194},
  [111] = {.lex_state = 194},
  [112] = {.lex_state = 194},
  [113] = {.lex_state = 194},
  [114] = {.lex_state = 194},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 194},
  [118] = {.lex_state = 194},
  [119] = {.lex_state = 194},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 194},
  [123] = {.lex_state = 194},
  [124] = {.lex_state = 194},
  [125] = {.lex_state = 194},
  [126] = {.lex_state = 194},
  [127] = {.lex_state = 194},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 194},
  [130] = {.lex_state = 194},
  [131] = {.lex_state = 194},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 194},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 194},
  [136] = {.lex_state = 194},
  [137] = {.lex_state = 194},
  [138] = {.lex_state = 194},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 194},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 194},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 194},
  [145] = {.lex_state = 194},
  [146] = {.lex_state = 194},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 194},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 194},
  [153] = {.lex_state = 194},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 194},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 194},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 194},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 194},
  [162] = {.lex_state = 194},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 194},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_workspace_declaration_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__simple_identifier] = ACTIONS(1),
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
    [aux_sym_element_declaration_token1] = ACTIONS(1),
    [aux_sym_relationship_declaration_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(218),
    [sym_workspace_declaration] = STATE(144),
    [aux_sym_dsl_repeat1] = STATE(144),
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
    STATE(50), 8,
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
    STATE(2), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(50), 8,
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
    STATE(50), 8,
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
    STATE(6), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(50), 8,
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
    STATE(4), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(50), 8,
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
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(228), 1,
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
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      sym__simple_identifier,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(85), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(88), 1,
      anon_sym_tag,
    ACTIONS(91), 1,
      anon_sym_tags,
    STATE(166), 1,
      sym_identifier,
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(228), 1,
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
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      sym_comment,
    STATE(166), 1,
      sym_identifier,
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(228), 1,
      sym_relation_identifier,
    STATE(7), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [348] = 11,
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
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      sym_comment,
    STATE(166), 1,
      sym_identifier,
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(228), 1,
      sym_relation_identifier,
    STATE(11), 8,
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
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_identifier,
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(228), 1,
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
  [430] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [463] = 1,
    ACTIONS(116), 14,
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
  [480] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [513] = 1,
    ACTIONS(120), 14,
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
  [530] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [563] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [596] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [629] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [662] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [695] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [728] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [761] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [794] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(30), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [827] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [860] = 9,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_description_statement_token1,
    ACTIONS(150), 1,
      aux_sym_include_statement_token1,
    ACTIONS(153), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(156), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(159), 1,
      aux_sym_default_statement_token1,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [893] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [926] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [959] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [992] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1025] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1058] = 9,
    ACTIONS(15), 1,
      aux_sym_description_statement_token1,
    ACTIONS(106), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_include_statement_token1,
    ACTIONS(110), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(112), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(114), 1,
      aux_sym_default_statement_token1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_description_statement,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
  [1091] = 8,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(180), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(182), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(184), 1,
      aux_sym_styles_declaration_token1,
    STATE(34), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(131), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1120] = 8,
    ACTIONS(176), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(180), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(182), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(184), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(131), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1149] = 8,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(196), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(199), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(202), 1,
      aux_sym_styles_declaration_token1,
    STATE(35), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(131), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1178] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(79), 1,
      sym__model_children,
    ACTIONS(211), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(207), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1202] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(81), 1,
      sym__model_children,
    ACTIONS(217), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(213), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1226] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(80), 1,
      sym__model_children,
    ACTIONS(223), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(219), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1250] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(82), 1,
      sym__model_children,
    ACTIONS(229), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(225), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1274] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      sym_string,
    STATE(53), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(90), 1,
      sym__model_children,
    ACTIONS(235), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(231), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1298] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      sym_string,
    STATE(53), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(91), 1,
      sym__model_children,
    ACTIONS(239), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(237), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1322] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      sym_string,
    STATE(53), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(92), 1,
      sym__model_children,
    ACTIONS(243), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(241), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1346] = 6,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      sym_string,
    STATE(53), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(93), 1,
      sym__model_children,
    ACTIONS(247), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(245), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1370] = 1,
    ACTIONS(249), 10,
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
  [1383] = 1,
    ACTIONS(251), 10,
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
  [1396] = 1,
    ACTIONS(253), 10,
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
  [1409] = 1,
    ACTIONS(255), 10,
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
  [1422] = 1,
    ACTIONS(257), 10,
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
  [1435] = 1,
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
  [1448] = 1,
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
  [1461] = 1,
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
  [1474] = 1,
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
  [1487] = 4,
    ACTIONS(269), 1,
      sym_string,
    STATE(53), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(272), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(267), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1506] = 1,
    ACTIONS(274), 10,
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
  [1519] = 1,
    ACTIONS(276), 10,
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
  [1532] = 5,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      sym_string,
    STATE(77), 1,
      sym__model_children,
    ACTIONS(282), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(278), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1553] = 1,
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
  [1566] = 5,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      sym_string,
    STATE(74), 1,
      sym__model_children,
    ACTIONS(290), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(286), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1587] = 5,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      sym_string,
    STATE(75), 1,
      sym__model_children,
    ACTIONS(296), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(292), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1608] = 5,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      sym_string,
    STATE(76), 1,
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
  [1629] = 1,
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
  [1642] = 1,
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
  [1655] = 2,
    ACTIONS(310), 1,
      aux_sym_color_token1,
    ACTIONS(308), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      aux_sym_color_token2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [1669] = 4,
    ACTIONS(233), 1,
      sym_string,
    STATE(53), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(314), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(312), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1687] = 5,
    ACTIONS(316), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(318), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(320), 1,
      aux_sym_component_declaration_token1,
    ACTIONS(322), 1,
      aux_sym_person_declaration_token1,
    STATE(72), 5,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_component_declaration,
      sym_person_declaration,
  [1707] = 6,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(332), 1,
      aux_sym_relationship_declaration_token1,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(146), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1728] = 3,
    ACTIONS(337), 1,
      sym_string,
    ACTIONS(339), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(335), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1743] = 6,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(347), 1,
      aux_sym_relationship_declaration_token1,
    STATE(70), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(146), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1764] = 3,
    ACTIONS(351), 1,
      sym_string,
    ACTIONS(353), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(349), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1779] = 6,
    ACTIONS(343), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(347), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(66), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(146), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1800] = 6,
    ACTIONS(357), 1,
      sym__simple_identifier,
    ACTIONS(359), 1,
      sym_wildcard_identifier,
    ACTIONS(361), 1,
      sym__newline,
    ACTIONS(363), 1,
      sym_comment,
    STATE(143), 1,
      sym_identifier,
    STATE(85), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1820] = 2,
    ACTIONS(367), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(365), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1832] = 1,
    ACTIONS(369), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [1842] = 2,
    ACTIONS(373), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(371), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1854] = 2,
    ACTIONS(377), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1866] = 2,
    ACTIONS(381), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1878] = 2,
    ACTIONS(385), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1890] = 1,
    ACTIONS(387), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [1900] = 2,
    ACTIONS(391), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(389), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1912] = 2,
    ACTIONS(395), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(393), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1924] = 2,
    ACTIONS(399), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1936] = 2,
    ACTIONS(403), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(401), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1948] = 2,
    ACTIONS(407), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(405), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1960] = 1,
    ACTIONS(409), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [1970] = 6,
    ACTIONS(411), 1,
      sym__simple_identifier,
    ACTIONS(414), 1,
      sym_wildcard_identifier,
    ACTIONS(417), 1,
      sym__newline,
    ACTIONS(419), 1,
      sym_comment,
    STATE(143), 1,
      sym_identifier,
    STATE(85), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1990] = 1,
    ACTIONS(421), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2000] = 2,
    ACTIONS(425), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(423), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2012] = 1,
    ACTIONS(427), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2022] = 5,
    ACTIONS(431), 1,
      sym__simple_identifier,
    ACTIONS(433), 1,
      aux_sym_color_token1,
    ACTIONS(435), 1,
      aux_sym_color_token2,
    ACTIONS(429), 2,
      sym_number,
      sym_string,
    STATE(183), 2,
      sym_identifier,
      sym_color,
  [2040] = 2,
    ACTIONS(439), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(437), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2052] = 2,
    ACTIONS(443), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(441), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2064] = 2,
    ACTIONS(447), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(445), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2076] = 2,
    ACTIONS(451), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(449), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2088] = 1,
    ACTIONS(453), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2098] = 1,
    ACTIONS(455), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2108] = 1,
    ACTIONS(457), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2118] = 1,
    ACTIONS(459), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2128] = 1,
    ACTIONS(461), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2138] = 1,
    ACTIONS(463), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2148] = 1,
    ACTIONS(465), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2158] = 2,
    ACTIONS(467), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(249), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2170] = 2,
    ACTIONS(469), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(251), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2182] = 2,
    ACTIONS(471), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(276), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2194] = 2,
    ACTIONS(473), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(306), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2206] = 2,
    ACTIONS(475), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(284), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2218] = 2,
    ACTIONS(477), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(253), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2230] = 1,
    ACTIONS(479), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_description_statement_token1,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
  [2240] = 1,
    ACTIONS(481), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2249] = 1,
    ACTIONS(483), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2258] = 1,
    ACTIONS(485), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2267] = 5,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    ACTIONS(489), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym_scope_declaration_token1,
    STATE(162), 1,
      sym_scope_declaration,
    STATE(111), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2284] = 1,
    ACTIONS(495), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2293] = 1,
    ACTIONS(497), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2302] = 1,
    ACTIONS(499), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2311] = 5,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 1,
      sym__simple_identifier,
    ACTIONS(505), 1,
      sym_comment,
    STATE(89), 1,
      sym_identifier,
    STATE(128), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2328] = 5,
    ACTIONS(503), 1,
      sym__simple_identifier,
    ACTIONS(505), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_identifier,
    STATE(128), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2345] = 1,
    ACTIONS(509), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2354] = 1,
    ACTIONS(511), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2363] = 1,
    ACTIONS(513), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2372] = 5,
    ACTIONS(503), 1,
      sym__simple_identifier,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      sym_comment,
    STATE(89), 1,
      sym_identifier,
    STATE(115), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2389] = 5,
    ACTIONS(503), 1,
      sym__simple_identifier,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(521), 1,
      sym_comment,
    STATE(89), 1,
      sym_identifier,
    STATE(116), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2406] = 1,
    ACTIONS(523), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2415] = 1,
    ACTIONS(525), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2424] = 5,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_scope_declaration_token1,
    STATE(162), 1,
      sym_scope_declaration,
    STATE(111), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2441] = 1,
    ACTIONS(533), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2450] = 1,
    ACTIONS(535), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2459] = 1,
    ACTIONS(537), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2468] = 5,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(541), 1,
      sym__simple_identifier,
    ACTIONS(544), 1,
      sym_comment,
    STATE(89), 1,
      sym_identifier,
    STATE(128), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2485] = 1,
    ACTIONS(547), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2494] = 1,
    ACTIONS(549), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2503] = 1,
    ACTIONS(551), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2512] = 5,
    ACTIONS(553), 1,
      sym__simple_identifier,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(557), 1,
      sym_comment,
    STATE(154), 1,
      sym_identifier,
    STATE(134), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2529] = 1,
    ACTIONS(559), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2538] = 5,
    ACTIONS(561), 1,
      sym__simple_identifier,
    ACTIONS(564), 1,
      sym__newline,
    ACTIONS(566), 1,
      sym_comment,
    STATE(154), 1,
      sym_identifier,
    STATE(134), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2555] = 5,
    ACTIONS(529), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_scope_declaration,
    STATE(124), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2572] = 1,
    ACTIONS(570), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2581] = 1,
    ACTIONS(572), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2590] = 1,
    ACTIONS(574), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2599] = 2,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(310), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [2609] = 2,
    STATE(160), 1,
      sym_autolayout_value,
    ACTIONS(576), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [2619] = 4,
    ACTIONS(357), 1,
      sym__simple_identifier,
    ACTIONS(578), 1,
      sym_wildcard_identifier,
    STATE(143), 1,
      sym_identifier,
    STATE(71), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2633] = 4,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(585), 1,
      sym_comment,
    STATE(142), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2647] = 3,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      sym__newline,
    ACTIONS(588), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2659] = 4,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 1,
      sym_comment,
    STATE(142), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2673] = 1,
    ACTIONS(598), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2680] = 1,
    ACTIONS(600), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2687] = 4,
    ACTIONS(503), 1,
      sym__simple_identifier,
    STATE(169), 1,
      sym_identifier,
    STATE(176), 1,
      sym_dotted_identifier,
    STATE(197), 1,
      sym_relation_identifier,
  [2700] = 3,
    ACTIONS(602), 1,
      sym__simple_identifier,
    STATE(154), 1,
      sym_identifier,
    STATE(132), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2711] = 1,
    ACTIONS(604), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2718] = 2,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(310), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [2727] = 2,
    ACTIONS(608), 1,
      sym__newline,
    ACTIONS(606), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2736] = 1,
    ACTIONS(610), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2743] = 1,
    ACTIONS(612), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2750] = 3,
    ACTIONS(616), 1,
      anon_sym_DOT,
    ACTIONS(618), 1,
      sym__newline,
    ACTIONS(614), 2,
      sym__simple_identifier,
      sym_comment,
  [2761] = 1,
    ACTIONS(620), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2767] = 3,
    ACTIONS(622), 1,
      sym_number,
    ACTIONS(624), 1,
      sym__newline,
    ACTIONS(626), 1,
      sym_comment,
  [2777] = 1,
    ACTIONS(628), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2783] = 3,
    ACTIONS(62), 1,
      sym__simple_identifier,
    ACTIONS(630), 1,
      sym_wildcard_identifier,
    STATE(180), 1,
      sym_identifier,
  [2793] = 1,
    ACTIONS(632), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2799] = 3,
    ACTIONS(634), 1,
      sym_number,
    ACTIONS(636), 1,
      sym__newline,
    ACTIONS(638), 1,
      sym_comment,
  [2809] = 2,
    STATE(222), 1,
      sym_identifiers_value,
    ACTIONS(640), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [2817] = 1,
    ACTIONS(642), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2823] = 1,
    ACTIONS(644), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2829] = 2,
    ACTIONS(648), 1,
      sym__newline,
    ACTIONS(646), 2,
      sym_number,
      sym_comment,
  [2837] = 1,
    ACTIONS(650), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2843] = 3,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_EQ,
    ACTIONS(656), 1,
      anon_sym_DASH_GT,
  [2853] = 2,
    ACTIONS(608), 1,
      sym__newline,
    ACTIONS(606), 2,
      sym__simple_identifier,
      sym_comment,
  [2861] = 1,
    ACTIONS(658), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2867] = 2,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(656), 1,
      sym_string,
  [2874] = 2,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__model_children,
  [2881] = 2,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      sym_string,
  [2888] = 2,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      sym_string,
  [2895] = 2,
    ACTIONS(670), 1,
      sym_class_value,
    ACTIONS(672), 1,
      sym__newline,
  [2902] = 2,
    ACTIONS(674), 1,
      sym__newline,
    ACTIONS(676), 1,
      sym_comment,
  [2909] = 2,
    ACTIONS(678), 1,
      sym_string,
    STATE(64), 1,
      aux_sym_software_system_declaration_repeat1,
  [2916] = 1,
    ACTIONS(656), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2921] = 2,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(682), 1,
      sym_string,
  [2928] = 2,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      sym_string,
  [2935] = 2,
    ACTIONS(688), 1,
      sym__newline,
    ACTIONS(690), 1,
      sym_comment,
  [2942] = 2,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      sym_string,
  [2949] = 2,
    ACTIONS(503), 1,
      sym__simple_identifier,
    STATE(187), 1,
      sym_identifier,
  [2956] = 1,
    ACTIONS(608), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2961] = 2,
    ACTIONS(696), 1,
      sym__newline,
    ACTIONS(698), 1,
      sym_comment,
  [2968] = 2,
    ACTIONS(700), 1,
      sym__newline,
    ACTIONS(702), 1,
      sym_comment,
  [2975] = 2,
    ACTIONS(704), 1,
      sym__newline,
    ACTIONS(706), 1,
      sym_comment,
  [2982] = 2,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(710), 1,
      sym_string,
  [2989] = 2,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    ACTIONS(714), 1,
      sym_string,
  [2996] = 2,
    ACTIONS(503), 1,
      sym__simple_identifier,
    STATE(178), 1,
      sym_identifier,
  [3003] = 2,
    ACTIONS(716), 1,
      sym_class_value,
    ACTIONS(718), 1,
      sym__newline,
  [3010] = 2,
    ACTIONS(431), 1,
      sym__simple_identifier,
    STATE(151), 1,
      sym_identifier,
  [3017] = 2,
    ACTIONS(503), 1,
      sym__simple_identifier,
    STATE(182), 1,
      sym_identifier,
  [3024] = 2,
    ACTIONS(602), 1,
      sym__simple_identifier,
    STATE(167), 1,
      sym_identifier,
  [3031] = 2,
    ACTIONS(720), 1,
      sym_class_value,
    ACTIONS(722), 1,
      sym__newline,
  [3038] = 2,
    ACTIONS(724), 1,
      sym_class_value,
    ACTIONS(726), 1,
      sym__newline,
  [3045] = 1,
    ACTIONS(728), 1,
      sym__newline,
  [3049] = 1,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
  [3053] = 1,
    ACTIONS(732), 1,
      sym_string,
  [3057] = 1,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
  [3061] = 1,
    ACTIONS(736), 1,
      sym__newline,
  [3065] = 1,
    ACTIONS(738), 1,
      sym_string,
  [3069] = 1,
    ACTIONS(740), 1,
      anon_sym_LBRACE,
  [3073] = 1,
    ACTIONS(742), 1,
      anon_sym_EQ,
  [3077] = 1,
    ACTIONS(744), 1,
      sym__newline,
  [3081] = 1,
    ACTIONS(746), 1,
      sym__newline,
  [3085] = 1,
    ACTIONS(748), 1,
      anon_sym_LBRACE,
  [3089] = 1,
    ACTIONS(750), 1,
      sym_string,
  [3093] = 1,
    ACTIONS(752), 1,
      sym__simple_identifier,
  [3097] = 1,
    ACTIONS(754), 1,
      sym_string,
  [3101] = 1,
    ACTIONS(756), 1,
      sym_string,
  [3105] = 1,
    ACTIONS(758), 1,
      sym__newline,
  [3109] = 1,
    ACTIONS(760), 1,
      sym_string,
  [3113] = 1,
    ACTIONS(762), 1,
      sym_string,
  [3117] = 1,
    ACTIONS(764), 1,
      sym__newline,
  [3121] = 1,
    ACTIONS(766), 1,
      sym_string,
  [3125] = 1,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
  [3129] = 1,
    ACTIONS(770), 1,
      sym__newline,
  [3133] = 1,
    ACTIONS(772), 1,
      sym_string,
  [3137] = 1,
    ACTIONS(774), 1,
      ts_builtin_sym_end,
  [3141] = 1,
    ACTIONS(776), 1,
      sym__newline,
  [3145] = 1,
    ACTIONS(778), 1,
      sym_string,
  [3149] = 1,
    ACTIONS(780), 1,
      sym__newline,
  [3153] = 1,
    ACTIONS(782), 1,
      sym__newline,
  [3157] = 1,
    ACTIONS(784), 1,
      sym_path_value,
  [3161] = 1,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
  [3165] = 1,
    ACTIONS(788), 1,
      sym__newline,
  [3169] = 1,
    ACTIONS(790), 1,
      sym__newline,
  [3173] = 1,
    ACTIONS(792), 1,
      sym_path_value,
  [3177] = 1,
    ACTIONS(794), 1,
      anon_sym_DASH_GT,
  [3181] = 1,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
  [3185] = 1,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
  [3189] = 1,
    ACTIONS(800), 1,
      sym__newline,
  [3193] = 1,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
  [3197] = 1,
    ACTIONS(804), 1,
      sym__newline,
  [3201] = 1,
    ACTIONS(806), 1,
      sym_path_value,
  [3205] = 1,
    ACTIONS(808), 1,
      sym_path_value,
  [3209] = 1,
    ACTIONS(810), 1,
      sym_string,
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
  [SMALL_STATE(13)] = 463,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 513,
  [SMALL_STATE(16)] = 530,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 596,
  [SMALL_STATE(19)] = 629,
  [SMALL_STATE(20)] = 662,
  [SMALL_STATE(21)] = 695,
  [SMALL_STATE(22)] = 728,
  [SMALL_STATE(23)] = 761,
  [SMALL_STATE(24)] = 794,
  [SMALL_STATE(25)] = 827,
  [SMALL_STATE(26)] = 860,
  [SMALL_STATE(27)] = 893,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 959,
  [SMALL_STATE(30)] = 992,
  [SMALL_STATE(31)] = 1025,
  [SMALL_STATE(32)] = 1058,
  [SMALL_STATE(33)] = 1091,
  [SMALL_STATE(34)] = 1120,
  [SMALL_STATE(35)] = 1149,
  [SMALL_STATE(36)] = 1178,
  [SMALL_STATE(37)] = 1202,
  [SMALL_STATE(38)] = 1226,
  [SMALL_STATE(39)] = 1250,
  [SMALL_STATE(40)] = 1274,
  [SMALL_STATE(41)] = 1298,
  [SMALL_STATE(42)] = 1322,
  [SMALL_STATE(43)] = 1346,
  [SMALL_STATE(44)] = 1370,
  [SMALL_STATE(45)] = 1383,
  [SMALL_STATE(46)] = 1396,
  [SMALL_STATE(47)] = 1409,
  [SMALL_STATE(48)] = 1422,
  [SMALL_STATE(49)] = 1435,
  [SMALL_STATE(50)] = 1448,
  [SMALL_STATE(51)] = 1461,
  [SMALL_STATE(52)] = 1474,
  [SMALL_STATE(53)] = 1487,
  [SMALL_STATE(54)] = 1506,
  [SMALL_STATE(55)] = 1519,
  [SMALL_STATE(56)] = 1532,
  [SMALL_STATE(57)] = 1553,
  [SMALL_STATE(58)] = 1566,
  [SMALL_STATE(59)] = 1587,
  [SMALL_STATE(60)] = 1608,
  [SMALL_STATE(61)] = 1629,
  [SMALL_STATE(62)] = 1642,
  [SMALL_STATE(63)] = 1655,
  [SMALL_STATE(64)] = 1669,
  [SMALL_STATE(65)] = 1687,
  [SMALL_STATE(66)] = 1707,
  [SMALL_STATE(67)] = 1728,
  [SMALL_STATE(68)] = 1743,
  [SMALL_STATE(69)] = 1764,
  [SMALL_STATE(70)] = 1779,
  [SMALL_STATE(71)] = 1800,
  [SMALL_STATE(72)] = 1820,
  [SMALL_STATE(73)] = 1832,
  [SMALL_STATE(74)] = 1842,
  [SMALL_STATE(75)] = 1854,
  [SMALL_STATE(76)] = 1866,
  [SMALL_STATE(77)] = 1878,
  [SMALL_STATE(78)] = 1890,
  [SMALL_STATE(79)] = 1900,
  [SMALL_STATE(80)] = 1912,
  [SMALL_STATE(81)] = 1924,
  [SMALL_STATE(82)] = 1936,
  [SMALL_STATE(83)] = 1948,
  [SMALL_STATE(84)] = 1960,
  [SMALL_STATE(85)] = 1970,
  [SMALL_STATE(86)] = 1990,
  [SMALL_STATE(87)] = 2000,
  [SMALL_STATE(88)] = 2012,
  [SMALL_STATE(89)] = 2022,
  [SMALL_STATE(90)] = 2040,
  [SMALL_STATE(91)] = 2052,
  [SMALL_STATE(92)] = 2064,
  [SMALL_STATE(93)] = 2076,
  [SMALL_STATE(94)] = 2088,
  [SMALL_STATE(95)] = 2098,
  [SMALL_STATE(96)] = 2108,
  [SMALL_STATE(97)] = 2118,
  [SMALL_STATE(98)] = 2128,
  [SMALL_STATE(99)] = 2138,
  [SMALL_STATE(100)] = 2148,
  [SMALL_STATE(101)] = 2158,
  [SMALL_STATE(102)] = 2170,
  [SMALL_STATE(103)] = 2182,
  [SMALL_STATE(104)] = 2194,
  [SMALL_STATE(105)] = 2206,
  [SMALL_STATE(106)] = 2218,
  [SMALL_STATE(107)] = 2230,
  [SMALL_STATE(108)] = 2240,
  [SMALL_STATE(109)] = 2249,
  [SMALL_STATE(110)] = 2258,
  [SMALL_STATE(111)] = 2267,
  [SMALL_STATE(112)] = 2284,
  [SMALL_STATE(113)] = 2293,
  [SMALL_STATE(114)] = 2302,
  [SMALL_STATE(115)] = 2311,
  [SMALL_STATE(116)] = 2328,
  [SMALL_STATE(117)] = 2345,
  [SMALL_STATE(118)] = 2354,
  [SMALL_STATE(119)] = 2363,
  [SMALL_STATE(120)] = 2372,
  [SMALL_STATE(121)] = 2389,
  [SMALL_STATE(122)] = 2406,
  [SMALL_STATE(123)] = 2415,
  [SMALL_STATE(124)] = 2424,
  [SMALL_STATE(125)] = 2441,
  [SMALL_STATE(126)] = 2450,
  [SMALL_STATE(127)] = 2459,
  [SMALL_STATE(128)] = 2468,
  [SMALL_STATE(129)] = 2485,
  [SMALL_STATE(130)] = 2494,
  [SMALL_STATE(131)] = 2503,
  [SMALL_STATE(132)] = 2512,
  [SMALL_STATE(133)] = 2529,
  [SMALL_STATE(134)] = 2538,
  [SMALL_STATE(135)] = 2555,
  [SMALL_STATE(136)] = 2572,
  [SMALL_STATE(137)] = 2581,
  [SMALL_STATE(138)] = 2590,
  [SMALL_STATE(139)] = 2599,
  [SMALL_STATE(140)] = 2609,
  [SMALL_STATE(141)] = 2619,
  [SMALL_STATE(142)] = 2633,
  [SMALL_STATE(143)] = 2647,
  [SMALL_STATE(144)] = 2659,
  [SMALL_STATE(145)] = 2673,
  [SMALL_STATE(146)] = 2680,
  [SMALL_STATE(147)] = 2687,
  [SMALL_STATE(148)] = 2700,
  [SMALL_STATE(149)] = 2711,
  [SMALL_STATE(150)] = 2718,
  [SMALL_STATE(151)] = 2727,
  [SMALL_STATE(152)] = 2736,
  [SMALL_STATE(153)] = 2743,
  [SMALL_STATE(154)] = 2750,
  [SMALL_STATE(155)] = 2761,
  [SMALL_STATE(156)] = 2767,
  [SMALL_STATE(157)] = 2777,
  [SMALL_STATE(158)] = 2783,
  [SMALL_STATE(159)] = 2793,
  [SMALL_STATE(160)] = 2799,
  [SMALL_STATE(161)] = 2809,
  [SMALL_STATE(162)] = 2817,
  [SMALL_STATE(163)] = 2823,
  [SMALL_STATE(164)] = 2829,
  [SMALL_STATE(165)] = 2837,
  [SMALL_STATE(166)] = 2843,
  [SMALL_STATE(167)] = 2853,
  [SMALL_STATE(168)] = 2861,
  [SMALL_STATE(169)] = 2867,
  [SMALL_STATE(170)] = 2874,
  [SMALL_STATE(171)] = 2881,
  [SMALL_STATE(172)] = 2888,
  [SMALL_STATE(173)] = 2895,
  [SMALL_STATE(174)] = 2902,
  [SMALL_STATE(175)] = 2909,
  [SMALL_STATE(176)] = 2916,
  [SMALL_STATE(177)] = 2921,
  [SMALL_STATE(178)] = 2928,
  [SMALL_STATE(179)] = 2935,
  [SMALL_STATE(180)] = 2942,
  [SMALL_STATE(181)] = 2949,
  [SMALL_STATE(182)] = 2956,
  [SMALL_STATE(183)] = 2961,
  [SMALL_STATE(184)] = 2968,
  [SMALL_STATE(185)] = 2975,
  [SMALL_STATE(186)] = 2982,
  [SMALL_STATE(187)] = 2989,
  [SMALL_STATE(188)] = 2996,
  [SMALL_STATE(189)] = 3003,
  [SMALL_STATE(190)] = 3010,
  [SMALL_STATE(191)] = 3017,
  [SMALL_STATE(192)] = 3024,
  [SMALL_STATE(193)] = 3031,
  [SMALL_STATE(194)] = 3038,
  [SMALL_STATE(195)] = 3045,
  [SMALL_STATE(196)] = 3049,
  [SMALL_STATE(197)] = 3053,
  [SMALL_STATE(198)] = 3057,
  [SMALL_STATE(199)] = 3061,
  [SMALL_STATE(200)] = 3065,
  [SMALL_STATE(201)] = 3069,
  [SMALL_STATE(202)] = 3073,
  [SMALL_STATE(203)] = 3077,
  [SMALL_STATE(204)] = 3081,
  [SMALL_STATE(205)] = 3085,
  [SMALL_STATE(206)] = 3089,
  [SMALL_STATE(207)] = 3093,
  [SMALL_STATE(208)] = 3097,
  [SMALL_STATE(209)] = 3101,
  [SMALL_STATE(210)] = 3105,
  [SMALL_STATE(211)] = 3109,
  [SMALL_STATE(212)] = 3113,
  [SMALL_STATE(213)] = 3117,
  [SMALL_STATE(214)] = 3121,
  [SMALL_STATE(215)] = 3125,
  [SMALL_STATE(216)] = 3129,
  [SMALL_STATE(217)] = 3133,
  [SMALL_STATE(218)] = 3137,
  [SMALL_STATE(219)] = 3141,
  [SMALL_STATE(220)] = 3145,
  [SMALL_STATE(221)] = 3149,
  [SMALL_STATE(222)] = 3153,
  [SMALL_STATE(223)] = 3157,
  [SMALL_STATE(224)] = 3161,
  [SMALL_STATE(225)] = 3165,
  [SMALL_STATE(226)] = 3169,
  [SMALL_STATE(227)] = 3173,
  [SMALL_STATE(228)] = 3177,
  [SMALL_STATE(229)] = 3181,
  [SMALL_STATE(230)] = 3185,
  [SMALL_STATE(231)] = 3189,
  [SMALL_STATE(232)] = 3193,
  [SMALL_STATE(233)] = 3197,
  [SMALL_STATE(234)] = 3201,
  [SMALL_STATE(235)] = 3205,
  [SMALL_STATE(236)] = 3209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_statement, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 3, 0, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 17),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 18),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 17),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 18),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 15),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 15),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 11),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 12),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 16),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 11),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 8),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 12),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 7),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 15),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 15),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 16),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 7),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 8),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 11),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 11),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 4, 0, 5),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 5),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 5, 0, 5),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 19),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 19),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [774] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
