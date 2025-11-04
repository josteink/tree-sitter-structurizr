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
#define STATE_COUNT 235
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  aux_sym_docs_statement_token1 = 18,
  aux_sym_adrs_statement_token1 = 19,
  aux_sym_model_declaration_token1 = 20,
  anon_sym_EQ = 21,
  anon_sym_DASH_GT = 22,
  aux_sym_software_system_declaration_token1 = 23,
  aux_sym_container_declaration_token1 = 24,
  aux_sym_component_declaration_token1 = 25,
  aux_sym_person_declaration_token1 = 26,
  anon_sym_tag = 27,
  anon_sym_tags = 28,
  aux_sym_configuration_declaration_token1 = 29,
  aux_sym_scope_declaration_token1 = 30,
  aux_sym_views_declaration_token1 = 31,
  aux_sym_system_context_view_declaration_token1 = 32,
  aux_sym_include_statement_token1 = 33,
  aux_sym_exclude_statement_token1 = 34,
  aux_sym_autolayout_statement_token1 = 35,
  aux_sym_autolayout_value_token1 = 36,
  aux_sym_autolayout_value_token2 = 37,
  aux_sym_autolayout_value_token3 = 38,
  aux_sym_autolayout_value_token4 = 39,
  aux_sym_default_statement_token1 = 40,
  aux_sym_description_statement_token1 = 41,
  aux_sym_dynamic_view_declaration_token1 = 42,
  aux_sym_styles_declaration_token1 = 43,
  aux_sym_element_declaration_token1 = 44,
  aux_sym_relationship_declaration_token1 = 45,
  sym_dsl = 46,
  sym_workspace_declaration = 47,
  sym_dotted_identifier = 48,
  sym_identifier = 49,
  sym_relation_identifier = 50,
  sym_color = 51,
  sym_workspace_item_statement = 52,
  sym_identifiers_statement = 53,
  sym_identifiers_value = 54,
  sym_docs_statement = 55,
  sym_adrs_statement = 56,
  sym_model_declaration = 57,
  sym__model_children = 58,
  sym__model_item_statement = 59,
  sym_variable_declaration = 60,
  sym_relation_statement = 61,
  sym__item_declaration = 62,
  sym_software_system_declaration = 63,
  sym_container_declaration = 64,
  sym_component_declaration = 65,
  sym_person_declaration = 66,
  sym_tag_declaration = 67,
  sym_tags_declaration = 68,
  sym_configuration_declaration = 69,
  sym_configuration_item_statement = 70,
  sym_scope_declaration = 71,
  sym_views_declaration = 72,
  sym_views_item_statement = 73,
  sym_system_context_view_declaration = 74,
  sym_view_property_statement = 75,
  sym_include_statement = 76,
  sym_exclude_statement = 77,
  sym_autolayout_statement = 78,
  sym_autolayout_value = 79,
  sym_default_statement = 80,
  sym_description_statement = 81,
  sym_container_view_declaration = 82,
  sym_dynamic_view_declaration = 83,
  sym_styles_declaration = 84,
  sym_style_item_statement = 85,
  sym_element_declaration = 86,
  sym_relationship_declaration = 87,
  sym_element_property = 88,
  aux_sym_dsl_repeat1 = 89,
  aux_sym_workspace_declaration_repeat1 = 90,
  aux_sym__model_children_repeat1 = 91,
  aux_sym_software_system_declaration_repeat1 = 92,
  aux_sym_configuration_declaration_repeat1 = 93,
  aux_sym_views_declaration_repeat1 = 94,
  aux_sym_system_context_view_declaration_repeat1 = 95,
  aux_sym_include_statement_repeat1 = 96,
  aux_sym_exclude_statement_repeat1 = 97,
  aux_sym_styles_declaration_repeat1 = 98,
  aux_sym_element_declaration_repeat1 = 99,
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
  [aux_sym_description_statement_token1] = "description",
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
  [sym_description_statement] = "description_statement",
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
  [aux_sym_description_statement_token1] = aux_sym_description_statement_token1,
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
  [sym_description_statement] = sym_description_statement,
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
  [aux_sym_description_statement_token1] = {
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
  [5] = 3,
  [6] = 2,
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
  [100] = 59,
  [101] = 64,
  [102] = 65,
  [103] = 51,
  [104] = 52,
  [105] = 56,
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
  [141] = 49,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 49,
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
  [166] = 152,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 152,
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
  [181] = 169,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 180,
  [192] = 180,
  [193] = 168,
  [194] = 194,
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
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 226,
  [231] = 231,
  [232] = 212,
  [233] = 218,
  [234] = 229,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(192);
      ADVANCE_MAP(
        '!', 32,
        '"', 189,
        '#', 188,
        '*', 334,
        '-', 16,
        '.', 333,
        '=', 349,
        'T', 227,
        'f', 214,
        'h', 212,
        't', 202,
        '{', 195,
        '}', 196,
        'A', 322,
        'a', 322,
        'B', 313,
        'b', 313,
        'C', 285,
        'c', 285,
        'D', 238,
        'd', 238,
        'E', 267,
        'e', 267,
        'I', 279,
        'i', 279,
        'L', 300,
        'l', 300,
        'M', 286,
        'm', 286,
        'P', 244,
        'p', 244,
        'R', 239,
        'r', 239,
        'S', 230,
        's', 230,
        'V', 257,
        'v', 257,
        'W', 289,
        'w', 289,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(340);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '{') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(201);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '}') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(339);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(350);
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
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(366);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        'C', 120,
        'c', 120,
        'O', 77,
        'o', 77,
        'T', 180,
        't', 180,
        'Y', 153,
        'y', 153,
      );
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 79:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 80:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 101:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 167:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 171:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 172:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 173:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 174:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 175:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 176:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 177:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 178:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 179:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 180:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 181:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 182:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 183:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 189:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 190:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 191:
      if (eof) ADVANCE(192);
      ADVANCE_MAP(
        '!', 32,
        '#', 339,
        '/', 12,
        'f', 26,
        'h', 24,
        '}', 196,
        'A', 171,
        'a', 171,
        'B', 157,
        'b', 157,
        'C', 119,
        'c', 119,
        'D', 56,
        'd', 56,
        'E', 94,
        'e', 94,
        'I', 117,
        'i', 117,
        'L', 137,
        'l', 137,
        'M', 121,
        'm', 121,
        'P', 73,
        'p', 73,
        'R', 57,
        'r', 57,
        'S', 46,
        's', 46,
        'T', 41,
        't', 41,
        'V', 85,
        'v', 85,
        'W', 122,
        'w', 122,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_path_value);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'h') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__simple_identifier);
      ADVANCE_MAP(
        'C', 287,
        'c', 287,
        'O', 253,
        'o', 253,
        'T', 329,
        't', 329,
        'Y', 310,
        'y', 310,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(219);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(256);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(296);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_flat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_docs_statement_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_adrs_statement_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_component_declaration_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 191},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 191},
  [8] = {.lex_state = 191},
  [9] = {.lex_state = 191},
  [10] = {.lex_state = 191},
  [11] = {.lex_state = 191},
  [12] = {.lex_state = 191},
  [13] = {.lex_state = 191},
  [14] = {.lex_state = 191},
  [15] = {.lex_state = 191},
  [16] = {.lex_state = 191},
  [17] = {.lex_state = 191},
  [18] = {.lex_state = 191},
  [19] = {.lex_state = 191},
  [20] = {.lex_state = 191},
  [21] = {.lex_state = 191},
  [22] = {.lex_state = 191},
  [23] = {.lex_state = 191},
  [24] = {.lex_state = 191},
  [25] = {.lex_state = 191},
  [26] = {.lex_state = 191},
  [27] = {.lex_state = 191},
  [28] = {.lex_state = 191},
  [29] = {.lex_state = 191},
  [30] = {.lex_state = 191},
  [31] = {.lex_state = 191},
  [32] = {.lex_state = 191},
  [33] = {.lex_state = 191},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 191},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 191},
  [51] = {.lex_state = 191},
  [52] = {.lex_state = 191},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 191},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 191},
  [57] = {.lex_state = 191},
  [58] = {.lex_state = 191},
  [59] = {.lex_state = 191},
  [60] = {.lex_state = 191},
  [61] = {.lex_state = 191},
  [62] = {.lex_state = 191},
  [63] = {.lex_state = 191},
  [64] = {.lex_state = 191},
  [65] = {.lex_state = 191},
  [66] = {.lex_state = 191},
  [67] = {.lex_state = 191},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 191},
  [75] = {.lex_state = 191},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 191},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 191},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 191},
  [86] = {.lex_state = 191},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 191},
  [93] = {.lex_state = 191},
  [94] = {.lex_state = 191},
  [95] = {.lex_state = 191},
  [96] = {.lex_state = 191},
  [97] = {.lex_state = 191},
  [98] = {.lex_state = 191},
  [99] = {.lex_state = 191},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 191},
  [107] = {.lex_state = 191},
  [108] = {.lex_state = 191},
  [109] = {.lex_state = 191},
  [110] = {.lex_state = 191},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 191},
  [114] = {.lex_state = 191},
  [115] = {.lex_state = 191},
  [116] = {.lex_state = 191},
  [117] = {.lex_state = 191},
  [118] = {.lex_state = 191},
  [119] = {.lex_state = 191},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 191},
  [123] = {.lex_state = 191},
  [124] = {.lex_state = 191},
  [125] = {.lex_state = 191},
  [126] = {.lex_state = 191},
  [127] = {.lex_state = 191},
  [128] = {.lex_state = 191},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 191},
  [131] = {.lex_state = 191},
  [132] = {.lex_state = 191},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 191},
  [136] = {.lex_state = 191},
  [137] = {.lex_state = 191},
  [138] = {.lex_state = 191},
  [139] = {.lex_state = 191},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 191},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 191},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 191},
  [147] = {.lex_state = 191},
  [148] = {.lex_state = 191},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 191},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 191},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 191},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 191},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 191},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 191},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 191},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 1},
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
    [aux_sym_description_statement_token1] = ACTIONS(1),
    [aux_sym_dynamic_view_declaration_token1] = ACTIONS(1),
    [aux_sym_styles_declaration_token1] = ACTIONS(1),
    [aux_sym_element_declaration_token1] = ACTIONS(1),
    [aux_sym_relationship_declaration_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(198),
    [sym_workspace_declaration] = STATE(139),
    [aux_sym_dsl_repeat1] = STATE(139),
    [aux_sym_workspace_declaration_token1] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      anon_sym_tag,
    ACTIONS(19), 1,
      anon_sym_tags,
    STATE(161), 1,
      sym_identifier,
    STATE(185), 1,
      sym_dotted_identifier,
    STATE(210), 1,
      sym_relation_identifier,
    STATE(3), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [41] = 11,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(13), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(15), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(17), 1,
      anon_sym_tag,
    ACTIONS(19), 1,
      anon_sym_tags,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_comment,
    STATE(161), 1,
      sym_identifier,
    STATE(185), 1,
      sym_dotted_identifier,
    STATE(210), 1,
      sym_relation_identifier,
    STATE(4), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [82] = 11,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      sym__simple_identifier,
    ACTIONS(30), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(36), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(39), 1,
      anon_sym_tag,
    ACTIONS(42), 1,
      anon_sym_tags,
    STATE(161), 1,
      sym_identifier,
    STATE(185), 1,
      sym_dotted_identifier,
    STATE(210), 1,
      sym_relation_identifier,
    STATE(4), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [123] = 11,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(13), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(15), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(17), 1,
      anon_sym_tag,
    ACTIONS(19), 1,
      anon_sym_tags,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_identifier,
    STATE(185), 1,
      sym_dotted_identifier,
    STATE(210), 1,
      sym_relation_identifier,
    STATE(4), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [164] = 11,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(13), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(15), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(17), 1,
      anon_sym_tag,
    ACTIONS(19), 1,
      anon_sym_tags,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_comment,
    STATE(161), 1,
      sym_identifier,
    STATE(185), 1,
      sym_dotted_identifier,
    STATE(210), 1,
      sym_relation_identifier,
    STATE(5), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [205] = 10,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(57), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(59), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(61), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(63), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(65), 1,
      aux_sym_views_declaration_token1,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(62), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [242] = 10,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(57), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(59), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(61), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(63), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(65), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(62), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [279] = 10,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(57), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(59), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(61), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(63), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(65), 1,
      aux_sym_views_declaration_token1,
    STATE(8), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(62), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [316] = 10,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(77), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(80), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(83), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(86), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(89), 1,
      aux_sym_views_declaration_token1,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(62), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [353] = 10,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(57), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(59), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(61), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(63), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(65), 1,
      aux_sym_views_declaration_token1,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(62), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [390] = 9,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    STATE(29), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [423] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [456] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [489] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [522] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [555] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [588] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [621] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [654] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [687] = 9,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_include_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(135), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(138), 1,
      aux_sym_default_statement_token1,
    ACTIONS(141), 1,
      aux_sym_description_statement_token1,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [720] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [753] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [786] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [819] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [852] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [885] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [918] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [951] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [984] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_include_statement_token1,
    ACTIONS(100), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(102), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(104), 1,
      aux_sym_default_statement_token1,
    ACTIONS(106), 1,
      aux_sym_description_statement_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(75), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [1017] = 8,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(168), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(170), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(172), 1,
      aux_sym_styles_declaration_token1,
    STATE(33), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(107), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1046] = 8,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(168), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(170), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(172), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(107), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1075] = 8,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(184), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(187), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(190), 1,
      aux_sym_styles_declaration_token1,
    STATE(33), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(107), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1104] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(91), 1,
      sym__model_children,
    ACTIONS(199), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1128] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(90), 1,
      sym__model_children,
    ACTIONS(203), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1152] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(76), 1,
      sym__model_children,
    ACTIONS(209), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(205), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1176] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(77), 1,
      sym__model_children,
    ACTIONS(215), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(211), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1200] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_string,
    STATE(35), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(78), 1,
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
  [1224] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      sym_string,
    STATE(34), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(79), 1,
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
  [1248] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(88), 1,
      sym__model_children,
    ACTIONS(231), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(229), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1272] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(89), 1,
      sym__model_children,
    ACTIONS(235), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(233), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1296] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      sym_string,
    STATE(70), 1,
      sym__model_children,
    ACTIONS(241), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(237), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1317] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      sym_string,
    STATE(71), 1,
      sym__model_children,
    ACTIONS(247), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(243), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1338] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      sym_string,
    STATE(72), 1,
      sym__model_children,
    ACTIONS(253), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(249), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1359] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      sym_string,
    STATE(73), 1,
      sym__model_children,
    ACTIONS(259), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(255), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1380] = 4,
    ACTIONS(263), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(266), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(261), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1399] = 4,
    ACTIONS(197), 1,
      sym_string,
    STATE(46), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(270), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(268), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1417] = 5,
    ACTIONS(272), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(274), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(276), 1,
      aux_sym_component_declaration_token1,
    ACTIONS(278), 1,
      aux_sym_person_declaration_token1,
    STATE(69), 5,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_component_declaration,
      sym_person_declaration,
  [1437] = 2,
    ACTIONS(282), 1,
      aux_sym_color_token1,
    ACTIONS(280), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      aux_sym_color_token2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [1451] = 6,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(292), 1,
      aux_sym_relationship_declaration_token1,
    STATE(50), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(147), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1472] = 1,
    ACTIONS(295), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1483] = 1,
    ACTIONS(297), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1494] = 3,
    ACTIONS(301), 1,
      sym_string,
    ACTIONS(303), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(299), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1509] = 1,
    ACTIONS(305), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1520] = 3,
    ACTIONS(309), 1,
      sym_string,
    ACTIONS(311), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(307), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1535] = 1,
    ACTIONS(313), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1546] = 6,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(321), 1,
      aux_sym_relationship_declaration_token1,
    STATE(67), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(147), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1567] = 1,
    ACTIONS(323), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1578] = 1,
    ACTIONS(325), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1589] = 1,
    ACTIONS(327), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1600] = 1,
    ACTIONS(329), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1611] = 1,
    ACTIONS(331), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1622] = 1,
    ACTIONS(333), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1633] = 1,
    ACTIONS(335), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1644] = 1,
    ACTIONS(337), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1655] = 1,
    ACTIONS(339), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1666] = 6,
    ACTIONS(317), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(321), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(147), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1687] = 6,
    ACTIONS(343), 1,
      sym__simple_identifier,
    ACTIONS(345), 1,
      sym_wildcard_identifier,
    ACTIONS(347), 1,
      sym__newline,
    ACTIONS(349), 1,
      sym_comment,
    STATE(140), 1,
      sym_identifier,
    STATE(82), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1707] = 2,
    ACTIONS(353), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(351), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1719] = 2,
    ACTIONS(357), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1731] = 2,
    ACTIONS(361), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(359), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1743] = 2,
    ACTIONS(365), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(363), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1755] = 2,
    ACTIONS(369), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1767] = 1,
    ACTIONS(371), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1777] = 1,
    ACTIONS(373), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1787] = 2,
    ACTIONS(377), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1799] = 2,
    ACTIONS(381), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1811] = 2,
    ACTIONS(385), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1823] = 2,
    ACTIONS(389), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(387), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1835] = 2,
    ACTIONS(393), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(391), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1847] = 1,
    ACTIONS(395), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1857] = 6,
    ACTIONS(397), 1,
      sym__simple_identifier,
    ACTIONS(400), 1,
      sym_wildcard_identifier,
    ACTIONS(403), 1,
      sym__newline,
    ACTIONS(405), 1,
      sym_comment,
    STATE(140), 1,
      sym_identifier,
    STATE(82), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1877] = 1,
    ACTIONS(407), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1887] = 2,
    ACTIONS(411), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(409), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1899] = 1,
    ACTIONS(413), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1909] = 1,
    ACTIONS(415), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1919] = 5,
    ACTIONS(419), 1,
      sym__simple_identifier,
    ACTIONS(421), 1,
      aux_sym_color_token1,
    ACTIONS(423), 1,
      aux_sym_color_token2,
    ACTIONS(417), 2,
      sym_number,
      sym_string,
    STATE(182), 2,
      sym_identifier,
      sym_color,
  [1937] = 2,
    ACTIONS(427), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(425), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1949] = 2,
    ACTIONS(431), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(429), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1961] = 2,
    ACTIONS(435), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(433), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1973] = 2,
    ACTIONS(439), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(437), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1985] = 1,
    ACTIONS(441), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1995] = 1,
    ACTIONS(443), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2005] = 1,
    ACTIONS(445), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2015] = 1,
    ACTIONS(447), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2025] = 1,
    ACTIONS(449), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2035] = 1,
    ACTIONS(451), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2045] = 1,
    ACTIONS(453), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2055] = 1,
    ACTIONS(455), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2065] = 2,
    ACTIONS(457), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(325), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2077] = 2,
    ACTIONS(459), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(335), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2089] = 2,
    ACTIONS(461), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(337), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2101] = 2,
    ACTIONS(463), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(295), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2113] = 2,
    ACTIONS(465), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(297), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2125] = 2,
    ACTIONS(467), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(313), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2137] = 1,
    ACTIONS(469), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2147] = 1,
    ACTIONS(471), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2156] = 1,
    ACTIONS(473), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2165] = 1,
    ACTIONS(475), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2174] = 5,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_scope_declaration_token1,
    STATE(158), 1,
      sym_scope_declaration,
    STATE(110), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2191] = 5,
    ACTIONS(485), 1,
      sym__simple_identifier,
    ACTIONS(488), 1,
      sym__newline,
    ACTIONS(490), 1,
      sym_comment,
    STATE(145), 1,
      sym_identifier,
    STATE(111), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2208] = 5,
    ACTIONS(492), 1,
      sym__simple_identifier,
    ACTIONS(494), 1,
      sym__newline,
    ACTIONS(496), 1,
      sym_comment,
    STATE(145), 1,
      sym_identifier,
    STATE(111), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2225] = 1,
    ACTIONS(498), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2234] = 1,
    ACTIONS(500), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2243] = 1,
    ACTIONS(502), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2252] = 1,
    ACTIONS(504), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2261] = 1,
    ACTIONS(506), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2270] = 1,
    ACTIONS(508), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2279] = 1,
    ACTIONS(510), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2288] = 5,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(516), 1,
      sym_comment,
    STATE(87), 1,
      sym_identifier,
    STATE(129), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2305] = 5,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(516), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_identifier,
    STATE(129), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2322] = 1,
    ACTIONS(520), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2331] = 5,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_scope_declaration_token1,
    STATE(158), 1,
      sym_scope_declaration,
    STATE(110), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2348] = 1,
    ACTIONS(528), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2357] = 1,
    ACTIONS(530), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2366] = 1,
    ACTIONS(532), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2375] = 1,
    ACTIONS(534), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2384] = 1,
    ACTIONS(536), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2393] = 5,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      sym__simple_identifier,
    ACTIONS(543), 1,
      sym_comment,
    STATE(87), 1,
      sym_identifier,
    STATE(129), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2410] = 1,
    ACTIONS(546), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2419] = 1,
    ACTIONS(548), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2428] = 1,
    ACTIONS(550), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2437] = 5,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(554), 1,
      sym_comment,
    STATE(87), 1,
      sym_identifier,
    STATE(120), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2454] = 5,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(558), 1,
      sym_comment,
    STATE(87), 1,
      sym_identifier,
    STATE(121), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2471] = 5,
    ACTIONS(524), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_scope_declaration,
    STATE(123), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2488] = 1,
    ACTIONS(562), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2497] = 1,
    ACTIONS(564), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2506] = 2,
    STATE(164), 1,
      sym_autolayout_value,
    ACTIONS(566), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [2516] = 4,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      sym_comment,
    STATE(142), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2530] = 3,
    ACTIONS(574), 1,
      anon_sym_DOT,
    ACTIONS(576), 1,
      sym__newline,
    ACTIONS(572), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2542] = 2,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(282), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [2552] = 4,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(580), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(583), 1,
      sym_comment,
    STATE(142), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2566] = 4,
    ACTIONS(343), 1,
      sym__simple_identifier,
    ACTIONS(586), 1,
      sym_wildcard_identifier,
    STATE(140), 1,
      sym_identifier,
    STATE(68), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2580] = 1,
    ACTIONS(588), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2587] = 3,
    ACTIONS(592), 1,
      anon_sym_DOT,
    ACTIONS(594), 1,
      sym__newline,
    ACTIONS(590), 2,
      sym__simple_identifier,
      sym_comment,
  [2598] = 1,
    ACTIONS(596), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2605] = 1,
    ACTIONS(598), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2612] = 1,
    ACTIONS(600), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2619] = 3,
    ACTIONS(602), 1,
      sym__simple_identifier,
    STATE(145), 1,
      sym_identifier,
    STATE(112), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2630] = 1,
    ACTIONS(604), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2637] = 2,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(282), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [2646] = 2,
    ACTIONS(608), 1,
      sym__newline,
    ACTIONS(606), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2655] = 4,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(185), 1,
      sym_dotted_identifier,
    STATE(227), 1,
      sym_relation_identifier,
  [2668] = 1,
    ACTIONS(610), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2674] = 3,
    ACTIONS(612), 1,
      sym_number,
    ACTIONS(614), 1,
      sym__newline,
    ACTIONS(616), 1,
      sym_comment,
  [2684] = 1,
    ACTIONS(618), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2690] = 2,
    ACTIONS(622), 1,
      sym__newline,
    ACTIONS(620), 2,
      sym_number,
      sym_comment,
  [2698] = 1,
    ACTIONS(624), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2704] = 3,
    ACTIONS(9), 1,
      sym__simple_identifier,
    ACTIONS(626), 1,
      sym_wildcard_identifier,
    STATE(189), 1,
      sym_identifier,
  [2714] = 2,
    STATE(195), 1,
      sym_identifiers_value,
    ACTIONS(628), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [2722] = 3,
    ACTIONS(630), 1,
      anon_sym_DOT,
    ACTIONS(632), 1,
      anon_sym_EQ,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
  [2732] = 1,
    ACTIONS(636), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2738] = 1,
    ACTIONS(638), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2744] = 3,
    ACTIONS(640), 1,
      sym_number,
    ACTIONS(642), 1,
      sym__newline,
    ACTIONS(644), 1,
      sym_comment,
  [2754] = 1,
    ACTIONS(646), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2760] = 2,
    ACTIONS(608), 1,
      sym__newline,
    ACTIONS(606), 2,
      sym__simple_identifier,
      sym_comment,
  [2768] = 1,
    ACTIONS(648), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2774] = 2,
    ACTIONS(650), 1,
      sym_class_value,
    ACTIONS(652), 1,
      sym__newline,
  [2781] = 2,
    ACTIONS(654), 1,
      sym_class_value,
    ACTIONS(656), 1,
      sym__newline,
  [2788] = 1,
    ACTIONS(608), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2793] = 2,
    ACTIONS(630), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      sym_string,
  [2800] = 2,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(187), 1,
      sym_identifier,
  [2807] = 2,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      sym_string,
  [2814] = 2,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(188), 1,
      sym_identifier,
  [2821] = 2,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      sym_string,
  [2828] = 2,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      sym_string,
  [2835] = 2,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      sym_string,
  [2842] = 2,
    ACTIONS(674), 1,
      sym__newline,
    ACTIONS(676), 1,
      sym_comment,
  [2849] = 2,
    ACTIONS(678), 1,
      sym__newline,
    ACTIONS(680), 1,
      sym_comment,
  [2856] = 2,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(170), 1,
      sym_identifier,
  [2863] = 2,
    ACTIONS(682), 1,
      sym_class_value,
    ACTIONS(684), 1,
      sym__newline,
  [2870] = 2,
    ACTIONS(686), 1,
      sym__newline,
    ACTIONS(688), 1,
      sym_comment,
  [2877] = 2,
    ACTIONS(690), 1,
      sym__newline,
    ACTIONS(692), 1,
      sym_comment,
  [2884] = 2,
    ACTIONS(694), 1,
      sym_string,
    STATE(47), 1,
      aux_sym_software_system_declaration_repeat1,
  [2891] = 1,
    ACTIONS(634), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2896] = 2,
    ACTIONS(696), 1,
      sym__newline,
    ACTIONS(698), 1,
      sym_comment,
  [2903] = 2,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      sym_string,
  [2910] = 2,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      sym_string,
  [2917] = 2,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(710), 1,
      sym_string,
  [2924] = 2,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym__model_children,
  [2931] = 2,
    ACTIONS(419), 1,
      sym__simple_identifier,
    STATE(152), 1,
      sym_identifier,
  [2938] = 2,
    ACTIONS(602), 1,
      sym__simple_identifier,
    STATE(166), 1,
      sym_identifier,
  [2945] = 2,
    ACTIONS(714), 1,
      sym_class_value,
    ACTIONS(716), 1,
      sym__newline,
  [2952] = 1,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
  [2956] = 1,
    ACTIONS(720), 1,
      sym__newline,
  [2960] = 1,
    ACTIONS(722), 1,
      sym__newline,
  [2964] = 1,
    ACTIONS(724), 1,
      sym_string,
  [2968] = 1,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
  [2972] = 1,
    ACTIONS(728), 1,
      sym_string,
  [2976] = 1,
    ACTIONS(730), 1,
      sym__newline,
  [2980] = 1,
    ACTIONS(732), 1,
      anon_sym_EQ,
  [2984] = 1,
    ACTIONS(734), 1,
      sym_string,
  [2988] = 1,
    ACTIONS(736), 1,
      sym_string,
  [2992] = 1,
    ACTIONS(738), 1,
      sym_string,
  [2996] = 1,
    ACTIONS(740), 1,
      anon_sym_LBRACE,
  [3000] = 1,
    ACTIONS(742), 1,
      sym_string,
  [3004] = 1,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
  [3008] = 1,
    ACTIONS(746), 1,
      sym__newline,
  [3012] = 1,
    ACTIONS(748), 1,
      sym_string,
  [3016] = 1,
    ACTIONS(750), 1,
      anon_sym_DASH_GT,
  [3020] = 1,
    ACTIONS(752), 1,
      sym__newline,
  [3024] = 1,
    ACTIONS(754), 1,
      sym_path_value,
  [3028] = 1,
    ACTIONS(756), 1,
      anon_sym_LBRACE,
  [3032] = 1,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
  [3036] = 1,
    ACTIONS(760), 1,
      sym__newline,
  [3040] = 1,
    ACTIONS(762), 1,
      sym__newline,
  [3044] = 1,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
  [3048] = 1,
    ACTIONS(766), 1,
      sym_path_value,
  [3052] = 1,
    ACTIONS(768), 1,
      sym_string,
  [3056] = 1,
    ACTIONS(770), 1,
      sym_string,
  [3060] = 1,
    ACTIONS(772), 1,
      sym__simple_identifier,
  [3064] = 1,
    ACTIONS(774), 1,
      sym__newline,
  [3068] = 1,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
  [3072] = 1,
    ACTIONS(778), 1,
      sym__newline,
  [3076] = 1,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
  [3080] = 1,
    ACTIONS(782), 1,
      sym__newline,
  [3084] = 1,
    ACTIONS(784), 1,
      sym_string,
  [3088] = 1,
    ACTIONS(786), 1,
      sym__newline,
  [3092] = 1,
    ACTIONS(788), 1,
      sym__newline,
  [3096] = 1,
    ACTIONS(790), 1,
      sym__newline,
  [3100] = 1,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
  [3104] = 1,
    ACTIONS(794), 1,
      sym_path_value,
  [3108] = 1,
    ACTIONS(796), 1,
      sym_path_value,
  [3112] = 1,
    ACTIONS(798), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 489,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 555,
  [SMALL_STATE(18)] = 588,
  [SMALL_STATE(19)] = 621,
  [SMALL_STATE(20)] = 654,
  [SMALL_STATE(21)] = 687,
  [SMALL_STATE(22)] = 720,
  [SMALL_STATE(23)] = 753,
  [SMALL_STATE(24)] = 786,
  [SMALL_STATE(25)] = 819,
  [SMALL_STATE(26)] = 852,
  [SMALL_STATE(27)] = 885,
  [SMALL_STATE(28)] = 918,
  [SMALL_STATE(29)] = 951,
  [SMALL_STATE(30)] = 984,
  [SMALL_STATE(31)] = 1017,
  [SMALL_STATE(32)] = 1046,
  [SMALL_STATE(33)] = 1075,
  [SMALL_STATE(34)] = 1104,
  [SMALL_STATE(35)] = 1128,
  [SMALL_STATE(36)] = 1152,
  [SMALL_STATE(37)] = 1176,
  [SMALL_STATE(38)] = 1200,
  [SMALL_STATE(39)] = 1224,
  [SMALL_STATE(40)] = 1248,
  [SMALL_STATE(41)] = 1272,
  [SMALL_STATE(42)] = 1296,
  [SMALL_STATE(43)] = 1317,
  [SMALL_STATE(44)] = 1338,
  [SMALL_STATE(45)] = 1359,
  [SMALL_STATE(46)] = 1380,
  [SMALL_STATE(47)] = 1399,
  [SMALL_STATE(48)] = 1417,
  [SMALL_STATE(49)] = 1437,
  [SMALL_STATE(50)] = 1451,
  [SMALL_STATE(51)] = 1472,
  [SMALL_STATE(52)] = 1483,
  [SMALL_STATE(53)] = 1494,
  [SMALL_STATE(54)] = 1509,
  [SMALL_STATE(55)] = 1520,
  [SMALL_STATE(56)] = 1535,
  [SMALL_STATE(57)] = 1546,
  [SMALL_STATE(58)] = 1567,
  [SMALL_STATE(59)] = 1578,
  [SMALL_STATE(60)] = 1589,
  [SMALL_STATE(61)] = 1600,
  [SMALL_STATE(62)] = 1611,
  [SMALL_STATE(63)] = 1622,
  [SMALL_STATE(64)] = 1633,
  [SMALL_STATE(65)] = 1644,
  [SMALL_STATE(66)] = 1655,
  [SMALL_STATE(67)] = 1666,
  [SMALL_STATE(68)] = 1687,
  [SMALL_STATE(69)] = 1707,
  [SMALL_STATE(70)] = 1719,
  [SMALL_STATE(71)] = 1731,
  [SMALL_STATE(72)] = 1743,
  [SMALL_STATE(73)] = 1755,
  [SMALL_STATE(74)] = 1767,
  [SMALL_STATE(75)] = 1777,
  [SMALL_STATE(76)] = 1787,
  [SMALL_STATE(77)] = 1799,
  [SMALL_STATE(78)] = 1811,
  [SMALL_STATE(79)] = 1823,
  [SMALL_STATE(80)] = 1835,
  [SMALL_STATE(81)] = 1847,
  [SMALL_STATE(82)] = 1857,
  [SMALL_STATE(83)] = 1877,
  [SMALL_STATE(84)] = 1887,
  [SMALL_STATE(85)] = 1899,
  [SMALL_STATE(86)] = 1909,
  [SMALL_STATE(87)] = 1919,
  [SMALL_STATE(88)] = 1937,
  [SMALL_STATE(89)] = 1949,
  [SMALL_STATE(90)] = 1961,
  [SMALL_STATE(91)] = 1973,
  [SMALL_STATE(92)] = 1985,
  [SMALL_STATE(93)] = 1995,
  [SMALL_STATE(94)] = 2005,
  [SMALL_STATE(95)] = 2015,
  [SMALL_STATE(96)] = 2025,
  [SMALL_STATE(97)] = 2035,
  [SMALL_STATE(98)] = 2045,
  [SMALL_STATE(99)] = 2055,
  [SMALL_STATE(100)] = 2065,
  [SMALL_STATE(101)] = 2077,
  [SMALL_STATE(102)] = 2089,
  [SMALL_STATE(103)] = 2101,
  [SMALL_STATE(104)] = 2113,
  [SMALL_STATE(105)] = 2125,
  [SMALL_STATE(106)] = 2137,
  [SMALL_STATE(107)] = 2147,
  [SMALL_STATE(108)] = 2156,
  [SMALL_STATE(109)] = 2165,
  [SMALL_STATE(110)] = 2174,
  [SMALL_STATE(111)] = 2191,
  [SMALL_STATE(112)] = 2208,
  [SMALL_STATE(113)] = 2225,
  [SMALL_STATE(114)] = 2234,
  [SMALL_STATE(115)] = 2243,
  [SMALL_STATE(116)] = 2252,
  [SMALL_STATE(117)] = 2261,
  [SMALL_STATE(118)] = 2270,
  [SMALL_STATE(119)] = 2279,
  [SMALL_STATE(120)] = 2288,
  [SMALL_STATE(121)] = 2305,
  [SMALL_STATE(122)] = 2322,
  [SMALL_STATE(123)] = 2331,
  [SMALL_STATE(124)] = 2348,
  [SMALL_STATE(125)] = 2357,
  [SMALL_STATE(126)] = 2366,
  [SMALL_STATE(127)] = 2375,
  [SMALL_STATE(128)] = 2384,
  [SMALL_STATE(129)] = 2393,
  [SMALL_STATE(130)] = 2410,
  [SMALL_STATE(131)] = 2419,
  [SMALL_STATE(132)] = 2428,
  [SMALL_STATE(133)] = 2437,
  [SMALL_STATE(134)] = 2454,
  [SMALL_STATE(135)] = 2471,
  [SMALL_STATE(136)] = 2488,
  [SMALL_STATE(137)] = 2497,
  [SMALL_STATE(138)] = 2506,
  [SMALL_STATE(139)] = 2516,
  [SMALL_STATE(140)] = 2530,
  [SMALL_STATE(141)] = 2542,
  [SMALL_STATE(142)] = 2552,
  [SMALL_STATE(143)] = 2566,
  [SMALL_STATE(144)] = 2580,
  [SMALL_STATE(145)] = 2587,
  [SMALL_STATE(146)] = 2598,
  [SMALL_STATE(147)] = 2605,
  [SMALL_STATE(148)] = 2612,
  [SMALL_STATE(149)] = 2619,
  [SMALL_STATE(150)] = 2630,
  [SMALL_STATE(151)] = 2637,
  [SMALL_STATE(152)] = 2646,
  [SMALL_STATE(153)] = 2655,
  [SMALL_STATE(154)] = 2668,
  [SMALL_STATE(155)] = 2674,
  [SMALL_STATE(156)] = 2684,
  [SMALL_STATE(157)] = 2690,
  [SMALL_STATE(158)] = 2698,
  [SMALL_STATE(159)] = 2704,
  [SMALL_STATE(160)] = 2714,
  [SMALL_STATE(161)] = 2722,
  [SMALL_STATE(162)] = 2732,
  [SMALL_STATE(163)] = 2738,
  [SMALL_STATE(164)] = 2744,
  [SMALL_STATE(165)] = 2754,
  [SMALL_STATE(166)] = 2760,
  [SMALL_STATE(167)] = 2768,
  [SMALL_STATE(168)] = 2774,
  [SMALL_STATE(169)] = 2781,
  [SMALL_STATE(170)] = 2788,
  [SMALL_STATE(171)] = 2793,
  [SMALL_STATE(172)] = 2800,
  [SMALL_STATE(173)] = 2807,
  [SMALL_STATE(174)] = 2814,
  [SMALL_STATE(175)] = 2821,
  [SMALL_STATE(176)] = 2828,
  [SMALL_STATE(177)] = 2835,
  [SMALL_STATE(178)] = 2842,
  [SMALL_STATE(179)] = 2849,
  [SMALL_STATE(180)] = 2856,
  [SMALL_STATE(181)] = 2863,
  [SMALL_STATE(182)] = 2870,
  [SMALL_STATE(183)] = 2877,
  [SMALL_STATE(184)] = 2884,
  [SMALL_STATE(185)] = 2891,
  [SMALL_STATE(186)] = 2896,
  [SMALL_STATE(187)] = 2903,
  [SMALL_STATE(188)] = 2910,
  [SMALL_STATE(189)] = 2917,
  [SMALL_STATE(190)] = 2924,
  [SMALL_STATE(191)] = 2931,
  [SMALL_STATE(192)] = 2938,
  [SMALL_STATE(193)] = 2945,
  [SMALL_STATE(194)] = 2952,
  [SMALL_STATE(195)] = 2956,
  [SMALL_STATE(196)] = 2960,
  [SMALL_STATE(197)] = 2964,
  [SMALL_STATE(198)] = 2968,
  [SMALL_STATE(199)] = 2972,
  [SMALL_STATE(200)] = 2976,
  [SMALL_STATE(201)] = 2980,
  [SMALL_STATE(202)] = 2984,
  [SMALL_STATE(203)] = 2988,
  [SMALL_STATE(204)] = 2992,
  [SMALL_STATE(205)] = 2996,
  [SMALL_STATE(206)] = 3000,
  [SMALL_STATE(207)] = 3004,
  [SMALL_STATE(208)] = 3008,
  [SMALL_STATE(209)] = 3012,
  [SMALL_STATE(210)] = 3016,
  [SMALL_STATE(211)] = 3020,
  [SMALL_STATE(212)] = 3024,
  [SMALL_STATE(213)] = 3028,
  [SMALL_STATE(214)] = 3032,
  [SMALL_STATE(215)] = 3036,
  [SMALL_STATE(216)] = 3040,
  [SMALL_STATE(217)] = 3044,
  [SMALL_STATE(218)] = 3048,
  [SMALL_STATE(219)] = 3052,
  [SMALL_STATE(220)] = 3056,
  [SMALL_STATE(221)] = 3060,
  [SMALL_STATE(222)] = 3064,
  [SMALL_STATE(223)] = 3068,
  [SMALL_STATE(224)] = 3072,
  [SMALL_STATE(225)] = 3076,
  [SMALL_STATE(226)] = 3080,
  [SMALL_STATE(227)] = 3084,
  [SMALL_STATE(228)] = 3088,
  [SMALL_STATE(229)] = 3092,
  [SMALL_STATE(230)] = 3096,
  [SMALL_STATE(231)] = 3100,
  [SMALL_STATE(232)] = 3104,
  [SMALL_STATE(233)] = 3108,
  [SMALL_STATE(234)] = 3112,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 3, 0, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 9),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 9),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 9),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 6, 0, 14),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 17),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 18),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 17),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 18),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 3, 0, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 3, 0, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 4, 0, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 4, 0, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 11),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 15),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 11),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 15),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 7),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 12),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 16),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 11),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 11),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 15),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 15),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 16),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 8),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 12),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 7),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 8),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 5),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 5, 0, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 4, 0, 5),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 19),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 19),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [726] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
