#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 226
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
  sym__assignment_operator = 11,
  sym__relation_operator = 12,
  sym__newline = 13,
  aux_sym_color_token1 = 14,
  aux_sym_color_token2 = 15,
  sym_comment = 16,
  aux_sym_identifiers_statement_token1 = 17,
  anon_sym_hierarchical = 18,
  anon_sym_flat = 19,
  aux_sym_docs_statement_token1 = 20,
  aux_sym_adrs_statement_token1 = 21,
  aux_sym_model_declaration_token1 = 22,
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
  [sym__assignment_operator] = "_assignment_operator",
  [sym__relation_operator] = "_relation_operator",
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
  [sym__assignment_operator] = sym__assignment_operator,
  [sym__relation_operator] = sym__relation_operator,
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
  [sym__assignment_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__relation_operator] = {
    .visible = false,
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
  [6] = 4,
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
  [67] = 51,
  [68] = 47,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 60,
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
  [104] = 63,
  [105] = 61,
  [106] = 55,
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
  [143] = 50,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 50,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 153,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 172,
  [189] = 172,
  [190] = 153,
  [191] = 191,
  [192] = 192,
  [193] = 193,
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
  [221] = 201,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 225,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(198);
      ADVANCE_MAP(
        '!', 34,
        '"', 195,
        '#', 194,
        '*', 233,
        '-', 16,
        '.', 232,
        '=', 235,
        'T', 43,
        'f', 28,
        'h', 26,
        't', 17,
        '{', 200,
        '}', 201,
        'A', 177,
        'a', 177,
        'B', 162,
        'b', 162,
        'C', 123,
        'c', 123,
        'D', 58,
        'd', 58,
        'E', 98,
        'e', 98,
        'I', 122,
        'i', 122,
        'L', 142,
        'l', 142,
        'M', 135,
        'm', 135,
        'P', 68,
        'p', 68,
        'R', 60,
        'r', 60,
        'S', 48,
        's', 48,
        'V', 87,
        'v', 87,
        'W', 126,
        'w', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(242);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 34,
        '#', 241,
        '/', 12,
        '}', 201,
        'C', 218,
        'c', 218,
        'M', 219,
        'm', 219,
        'V', 212,
        'v', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '{') ADVANCE(200);
      if (lookahead == '}') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '*') ADVANCE(231);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '}') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '=') ADVANCE(235);
      if (lookahead == '{') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(228);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '}') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(236);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(268);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(268);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        'C', 125,
        'c', 125,
        'O', 81,
        'o', 81,
        'T', 186,
        't', 186,
        'Y', 159,
        'y', 159,
      );
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 81:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 82:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 84:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
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
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 156:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      END_STATE();
    case 157:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 158:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 159:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 161:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 167:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 178:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 179:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 180:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 181:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 182:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 183:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 184:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 185:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 186:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 187:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 188:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 189:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 195:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(8);
      END_STATE();
    case 196:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(9);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      ADVANCE_MAP(
        '!', 34,
        '#', 241,
        '/', 12,
        '}', 201,
        'A', 177,
        'a', 177,
        'C', 132,
        'c', 132,
        'D', 58,
        'd', 58,
        'E', 98,
        'e', 98,
        'I', 122,
        'i', 122,
        'M', 135,
        'm', 135,
        'R', 59,
        'r', 59,
        'S', 49,
        's', 49,
        'V', 87,
        'v', 87,
        'W', 126,
        'w', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_workspace_declaration_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'g') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_class_value);
      if (lookahead == '.') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_path_value);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_path_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__assignment_operator);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__relation_operator);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifiers_statement_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_docs_statement_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_adrs_statement_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_model_declaration_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_software_system_declaration_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_container_declaration_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_component_declaration_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_person_declaration_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 's') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_tags);
      if (lookahead == '.') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_configuration_declaration_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_scope_declaration_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_views_declaration_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_system_context_view_declaration_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_include_statement_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_exclude_statement_token1);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_autolayout_statement_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token3);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_autolayout_value_token4);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_default_statement_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_description_statement_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_dynamic_view_declaration_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_styles_declaration_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_element_declaration_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 197},
  [8] = {.lex_state = 197},
  [9] = {.lex_state = 197},
  [10] = {.lex_state = 197},
  [11] = {.lex_state = 197},
  [12] = {.lex_state = 197},
  [13] = {.lex_state = 197},
  [14] = {.lex_state = 197},
  [15] = {.lex_state = 197},
  [16] = {.lex_state = 197},
  [17] = {.lex_state = 197},
  [18] = {.lex_state = 197},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 197},
  [21] = {.lex_state = 197},
  [22] = {.lex_state = 197},
  [23] = {.lex_state = 197},
  [24] = {.lex_state = 197},
  [25] = {.lex_state = 197},
  [26] = {.lex_state = 197},
  [27] = {.lex_state = 197},
  [28] = {.lex_state = 197},
  [29] = {.lex_state = 197},
  [30] = {.lex_state = 197},
  [31] = {.lex_state = 197},
  [32] = {.lex_state = 197},
  [33] = {.lex_state = 197},
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
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 197},
  [54] = {.lex_state = 197},
  [55] = {.lex_state = 197},
  [56] = {.lex_state = 197},
  [57] = {.lex_state = 197},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 197},
  [60] = {.lex_state = 197},
  [61] = {.lex_state = 197},
  [62] = {.lex_state = 197},
  [63] = {.lex_state = 197},
  [64] = {.lex_state = 197},
  [65] = {.lex_state = 197},
  [66] = {.lex_state = 197},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 197},
  [70] = {.lex_state = 197},
  [71] = {.lex_state = 197},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 197},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 197},
  [88] = {.lex_state = 197},
  [89] = {.lex_state = 197},
  [90] = {.lex_state = 197},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 197},
  [97] = {.lex_state = 197},
  [98] = {.lex_state = 197},
  [99] = {.lex_state = 197},
  [100] = {.lex_state = 197},
  [101] = {.lex_state = 197},
  [102] = {.lex_state = 197},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 197},
  [108] = {.lex_state = 197},
  [109] = {.lex_state = 197},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 197},
  [113] = {.lex_state = 197},
  [114] = {.lex_state = 197},
  [115] = {.lex_state = 197},
  [116] = {.lex_state = 197},
  [117] = {.lex_state = 197},
  [118] = {.lex_state = 197},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 197},
  [122] = {.lex_state = 197},
  [123] = {.lex_state = 197},
  [124] = {.lex_state = 197},
  [125] = {.lex_state = 197},
  [126] = {.lex_state = 197},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 197},
  [130] = {.lex_state = 197},
  [131] = {.lex_state = 197},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 197},
  [134] = {.lex_state = 197},
  [135] = {.lex_state = 197},
  [136] = {.lex_state = 197},
  [137] = {.lex_state = 197},
  [138] = {.lex_state = 197},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 197},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 197},
  [145] = {.lex_state = 197},
  [146] = {.lex_state = 197},
  [147] = {.lex_state = 197},
  [148] = {.lex_state = 197},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 197},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 197},
  [158] = {.lex_state = 197},
  [159] = {.lex_state = 197},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 197},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 197},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
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
    [sym__assignment_operator] = ACTIONS(1),
    [sym__relation_operator] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [aux_sym_color_token2] = ACTIONS(1),
    [aux_sym_identifiers_statement_token1] = ACTIONS(1),
    [anon_sym_hierarchical] = ACTIONS(1),
    [anon_sym_flat] = ACTIONS(1),
    [aux_sym_docs_statement_token1] = ACTIONS(1),
    [aux_sym_adrs_statement_token1] = ACTIONS(1),
    [aux_sym_model_declaration_token1] = ACTIONS(1),
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
    [sym_dsl] = STATE(208),
    [sym_workspace_declaration] = STATE(144),
    [aux_sym_dsl_repeat1] = STATE(144),
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
    ACTIONS(12), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(18), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(21), 1,
      anon_sym_tag,
    ACTIONS(24), 1,
      anon_sym_tags,
    STATE(161), 1,
      sym_identifier,
    STATE(175), 1,
      sym_dotted_identifier,
    STATE(215), 1,
      sym_relation_identifier,
    STATE(2), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [41] = 11,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym__simple_identifier,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(35), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(37), 1,
      anon_sym_tag,
    ACTIONS(39), 1,
      anon_sym_tags,
    STATE(161), 1,
      sym_identifier,
    STATE(175), 1,
      sym_dotted_identifier,
    STATE(215), 1,
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
    ACTIONS(29), 1,
      sym__simple_identifier,
    ACTIONS(33), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(35), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(37), 1,
      anon_sym_tag,
    ACTIONS(39), 1,
      anon_sym_tags,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_comment,
    STATE(161), 1,
      sym_identifier,
    STATE(175), 1,
      sym_dotted_identifier,
    STATE(215), 1,
      sym_relation_identifier,
    STATE(2), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [123] = 11,
    ACTIONS(29), 1,
      sym__simple_identifier,
    ACTIONS(33), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(35), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(37), 1,
      anon_sym_tag,
    ACTIONS(39), 1,
      anon_sym_tags,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_comment,
    STATE(161), 1,
      sym_identifier,
    STATE(175), 1,
      sym_dotted_identifier,
    STATE(215), 1,
      sym_relation_identifier,
    STATE(6), 8,
      sym_docs_statement,
      sym_adrs_statement,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [164] = 11,
    ACTIONS(29), 1,
      sym__simple_identifier,
    ACTIONS(33), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(35), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(37), 1,
      anon_sym_tag,
    ACTIONS(39), 1,
      anon_sym_tags,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym_identifier,
    STATE(175), 1,
      sym_dotted_identifier,
    STATE(215), 1,
      sym_relation_identifier,
    STATE(2), 8,
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
    STATE(56), 6,
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
    STATE(9), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(56), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [279] = 10,
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
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(56), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [316] = 10,
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
    STATE(11), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(56), 6,
      sym_identifiers_statement,
      sym_docs_statement,
      sym_adrs_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [353] = 10,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(76), 1,
      aux_sym_identifiers_statement_token1,
    ACTIONS(79), 1,
      aux_sym_docs_statement_token1,
    ACTIONS(82), 1,
      aux_sym_adrs_statement_token1,
    ACTIONS(85), 1,
      aux_sym_model_declaration_token1,
    ACTIONS(88), 1,
      aux_sym_configuration_declaration_token1,
    ACTIONS(91), 1,
      aux_sym_views_declaration_token1,
    STATE(11), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(56), 6,
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
    STATE(73), 5,
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
    STATE(18), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(23), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(20), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(73), 5,
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
    STATE(16), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [687] = 9,
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
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [720] = 9,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_include_statement_token1,
    ACTIONS(134), 1,
      aux_sym_exclude_statement_token1,
    ACTIONS(137), 1,
      aux_sym_autolayout_statement_token1,
    ACTIONS(140), 1,
      aux_sym_default_statement_token1,
    ACTIONS(143), 1,
      aux_sym_description_statement_token1,
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(28), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(30), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(73), 5,
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
    ACTIONS(167), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(170), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(173), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(176), 1,
      aux_sym_styles_declaration_token1,
    STATE(31), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(136), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1046] = 8,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(185), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(187), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(189), 1,
      aux_sym_styles_declaration_token1,
    STATE(31), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(136), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1075] = 8,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(185), 1,
      aux_sym_system_context_view_declaration_token1,
    ACTIONS(187), 1,
      aux_sym_dynamic_view_declaration_token1,
    ACTIONS(189), 1,
      aux_sym_styles_declaration_token1,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(136), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1104] = 6,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(95), 1,
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
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(92), 1,
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
    STATE(35), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(80), 1,
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
    STATE(34), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(83), 1,
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
    STATE(40), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(81), 1,
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
    STATE(41), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(82), 1,
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
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(93), 1,
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
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(94), 1,
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
  [1296] = 4,
    ACTIONS(239), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(242), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(237), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1315] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      sym_string,
    STATE(75), 1,
      sym__model_children,
    ACTIONS(248), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(244), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1336] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      sym_string,
    STATE(76), 1,
      sym__model_children,
    ACTIONS(254), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(250), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1357] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      sym_string,
    STATE(77), 1,
      sym__model_children,
    ACTIONS(260), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(256), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1378] = 5,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_string,
    STATE(74), 1,
      sym__model_children,
    ACTIONS(266), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(262), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1399] = 3,
    ACTIONS(270), 1,
      sym_class_value,
    ACTIONS(272), 3,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
    ACTIONS(268), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1415] = 4,
    ACTIONS(197), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(276), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(274), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1433] = 5,
    ACTIONS(278), 1,
      aux_sym_software_system_declaration_token1,
    ACTIONS(280), 1,
      aux_sym_container_declaration_token1,
    ACTIONS(282), 1,
      aux_sym_component_declaration_token1,
    ACTIONS(284), 1,
      aux_sym_person_declaration_token1,
    STATE(85), 5,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_component_declaration,
      sym_person_declaration,
  [1453] = 2,
    ACTIONS(288), 1,
      aux_sym_color_token1,
    ACTIONS(286), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      sym__assignment_operator,
      sym__relation_operator,
      aux_sym_color_token2,
  [1467] = 3,
    ACTIONS(292), 1,
      sym_class_value,
    ACTIONS(294), 3,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
    ACTIONS(290), 5,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1483] = 3,
    ACTIONS(298), 1,
      sym_string,
    ACTIONS(300), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(296), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1498] = 6,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(308), 1,
      aux_sym_relationship_declaration_token1,
    STATE(65), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(148), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1519] = 1,
    ACTIONS(310), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1530] = 1,
    ACTIONS(312), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1541] = 1,
    ACTIONS(314), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1552] = 6,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      sym_comment,
    ACTIONS(321), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(324), 1,
      aux_sym_relationship_declaration_token1,
    STATE(57), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(148), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1573] = 3,
    ACTIONS(329), 1,
      sym_string,
    ACTIONS(331), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(327), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1588] = 1,
    ACTIONS(333), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1599] = 1,
    ACTIONS(335), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1610] = 1,
    ACTIONS(337), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1621] = 1,
    ACTIONS(339), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1632] = 1,
    ACTIONS(341), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1643] = 1,
    ACTIONS(343), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1654] = 6,
    ACTIONS(304), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_element_declaration_token1,
    ACTIONS(308), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
    STATE(148), 2,
      sym_element_declaration,
      sym_relationship_declaration,
  [1675] = 1,
    ACTIONS(347), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1686] = 3,
    ACTIONS(349), 1,
      sym_class_value,
    ACTIONS(294), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(290), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1701] = 3,
    ACTIONS(351), 1,
      sym_class_value,
    ACTIONS(272), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(268), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1716] = 1,
    ACTIONS(353), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1727] = 1,
    ACTIONS(355), 8,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_identifiers_statement_token1,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
      aux_sym_model_declaration_token1,
      aux_sym_configuration_declaration_token1,
      aux_sym_views_declaration_token1,
  [1738] = 1,
    ACTIONS(357), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1748] = 2,
    ACTIONS(359), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(335), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1760] = 1,
    ACTIONS(361), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1770] = 2,
    ACTIONS(365), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(363), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1782] = 2,
    ACTIONS(369), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1794] = 2,
    ACTIONS(373), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(371), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1806] = 2,
    ACTIONS(377), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1818] = 6,
    ACTIONS(379), 1,
      sym__simple_identifier,
    ACTIONS(381), 1,
      sym_wildcard_identifier,
    ACTIONS(383), 1,
      sym__newline,
    ACTIONS(385), 1,
      sym_comment,
    STATE(140), 1,
      sym_identifier,
    STATE(86), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1838] = 1,
    ACTIONS(387), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1848] = 2,
    ACTIONS(391), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(389), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1860] = 2,
    ACTIONS(395), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(393), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1872] = 2,
    ACTIONS(399), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1884] = 2,
    ACTIONS(403), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(401), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1896] = 2,
    ACTIONS(407), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(405), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1908] = 2,
    ACTIONS(411), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(409), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [1920] = 6,
    ACTIONS(413), 1,
      sym__simple_identifier,
    ACTIONS(416), 1,
      sym_wildcard_identifier,
    ACTIONS(419), 1,
      sym__newline,
    ACTIONS(421), 1,
      sym_comment,
    STATE(140), 1,
      sym_identifier,
    STATE(86), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1940] = 1,
    ACTIONS(423), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1950] = 1,
    ACTIONS(425), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1960] = 1,
    ACTIONS(427), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1970] = 1,
    ACTIONS(429), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [1980] = 5,
    ACTIONS(433), 1,
      sym__simple_identifier,
    ACTIONS(435), 1,
      aux_sym_color_token1,
    ACTIONS(437), 1,
      aux_sym_color_token2,
    ACTIONS(431), 2,
      sym_number,
      sym_string,
    STATE(183), 2,
      sym_identifier,
      sym_color,
  [1998] = 2,
    ACTIONS(441), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(439), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2010] = 2,
    ACTIONS(445), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(443), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2022] = 2,
    ACTIONS(449), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(447), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2034] = 2,
    ACTIONS(453), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(451), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2046] = 1,
    ACTIONS(455), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2056] = 1,
    ACTIONS(457), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2066] = 1,
    ACTIONS(459), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2076] = 1,
    ACTIONS(461), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2086] = 1,
    ACTIONS(463), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2096] = 1,
    ACTIONS(465), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2106] = 1,
    ACTIONS(467), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2116] = 2,
    ACTIONS(471), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(469), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2128] = 2,
    ACTIONS(473), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(341), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2140] = 2,
    ACTIONS(475), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(337), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2152] = 2,
    ACTIONS(477), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
    ACTIONS(312), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_docs_statement_token1,
      aux_sym_adrs_statement_token1,
  [2164] = 1,
    ACTIONS(479), 7,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_include_statement_token1,
      aux_sym_exclude_statement_token1,
      aux_sym_autolayout_statement_token1,
      aux_sym_default_statement_token1,
      aux_sym_description_statement_token1,
  [2174] = 1,
    ACTIONS(481), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2183] = 1,
    ACTIONS(483), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2192] = 5,
    ACTIONS(485), 1,
      sym__simple_identifier,
    ACTIONS(488), 1,
      sym__newline,
    ACTIONS(490), 1,
      sym_comment,
    STATE(151), 1,
      sym_identifier,
    STATE(110), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2209] = 5,
    ACTIONS(492), 1,
      sym__simple_identifier,
    ACTIONS(494), 1,
      sym__newline,
    ACTIONS(496), 1,
      sym_comment,
    STATE(151), 1,
      sym_identifier,
    STATE(110), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2226] = 1,
    ACTIONS(498), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2235] = 1,
    ACTIONS(500), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2244] = 1,
    ACTIONS(502), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2253] = 1,
    ACTIONS(504), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2262] = 1,
    ACTIONS(506), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2271] = 1,
    ACTIONS(508), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2280] = 1,
    ACTIONS(510), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2289] = 5,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(516), 1,
      sym_comment,
    STATE(91), 1,
      sym_identifier,
    STATE(132), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2306] = 5,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(516), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_identifier,
    STATE(132), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2323] = 1,
    ACTIONS(520), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2332] = 1,
    ACTIONS(522), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2341] = 1,
    ACTIONS(524), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2350] = 5,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(528), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_scope_declaration_token1,
    STATE(162), 1,
      sym_scope_declaration,
    STATE(133), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2367] = 1,
    ACTIONS(532), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2376] = 1,
    ACTIONS(534), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2385] = 5,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      sym_comment,
    STATE(91), 1,
      sym_identifier,
    STATE(119), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2402] = 5,
    ACTIONS(514), 1,
      sym__simple_identifier,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      sym_comment,
    STATE(91), 1,
      sym_identifier,
    STATE(120), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2419] = 1,
    ACTIONS(544), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2428] = 1,
    ACTIONS(546), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2437] = 1,
    ACTIONS(548), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2446] = 5,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(552), 1,
      sym__simple_identifier,
    ACTIONS(555), 1,
      sym_comment,
    STATE(91), 1,
      sym_identifier,
    STATE(132), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [2463] = 5,
    ACTIONS(528), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_scope_declaration_token1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_scope_declaration,
    STATE(135), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2480] = 1,
    ACTIONS(560), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2489] = 5,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(564), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_scope_declaration_token1,
    STATE(162), 1,
      sym_scope_declaration,
    STATE(135), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [2506] = 1,
    ACTIONS(570), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2515] = 1,
    ACTIONS(572), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2524] = 1,
    ACTIONS(574), 6,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_container_declaration_token1,
      aux_sym_system_context_view_declaration_token1,
      aux_sym_dynamic_view_declaration_token1,
      aux_sym_styles_declaration_token1,
  [2533] = 4,
    ACTIONS(379), 1,
      sym__simple_identifier,
    ACTIONS(576), 1,
      sym_wildcard_identifier,
    STATE(140), 1,
      sym_identifier,
    STATE(78), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2547] = 3,
    ACTIONS(580), 1,
      anon_sym_DOT,
    ACTIONS(582), 1,
      sym__newline,
    ACTIONS(578), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2559] = 2,
    STATE(155), 1,
      sym_autolayout_value,
    ACTIONS(584), 4,
      aux_sym_autolayout_value_token1,
      aux_sym_autolayout_value_token2,
      aux_sym_autolayout_value_token3,
      aux_sym_autolayout_value_token4,
  [2569] = 4,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(591), 1,
      sym_comment,
    STATE(142), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2583] = 2,
    ACTIONS(286), 1,
      sym__newline,
    ACTIONS(288), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [2593] = 4,
    ACTIONS(3), 1,
      aux_sym_workspace_declaration_token1,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 1,
      sym_comment,
    STATE(142), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2607] = 1,
    ACTIONS(598), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2614] = 1,
    ACTIONS(600), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2621] = 1,
    ACTIONS(602), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2628] = 1,
    ACTIONS(604), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2635] = 4,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(175), 1,
      sym_dotted_identifier,
    STATE(186), 1,
      sym_identifier,
    STATE(212), 1,
      sym_relation_identifier,
  [2648] = 3,
    ACTIONS(606), 1,
      sym__simple_identifier,
    STATE(151), 1,
      sym_identifier,
    STATE(111), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2659] = 3,
    ACTIONS(610), 1,
      anon_sym_DOT,
    ACTIONS(612), 1,
      sym__newline,
    ACTIONS(608), 2,
      sym__simple_identifier,
      sym_comment,
  [2670] = 1,
    ACTIONS(614), 4,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_element_declaration_token1,
      aux_sym_relationship_declaration_token1,
  [2677] = 2,
    ACTIONS(618), 1,
      sym__newline,
    ACTIONS(616), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2686] = 2,
    ACTIONS(286), 1,
      sym__newline,
    ACTIONS(288), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [2695] = 3,
    ACTIONS(620), 1,
      sym_number,
    ACTIONS(622), 1,
      sym__newline,
    ACTIONS(624), 1,
      sym_comment,
  [2705] = 2,
    ACTIONS(628), 1,
      sym__newline,
    ACTIONS(626), 2,
      sym_number,
      sym_comment,
  [2713] = 1,
    ACTIONS(630), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2719] = 1,
    ACTIONS(632), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2725] = 1,
    ACTIONS(634), 3,
      ts_builtin_sym_end,
      aux_sym_workspace_declaration_token1,
      sym_comment,
  [2731] = 2,
    STATE(62), 1,
      sym_identifiers_value,
    ACTIONS(636), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [2739] = 3,
    ACTIONS(638), 1,
      anon_sym_DOT,
    ACTIONS(640), 1,
      sym__assignment_operator,
    ACTIONS(642), 1,
      sym__relation_operator,
  [2749] = 1,
    ACTIONS(644), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2755] = 2,
    ACTIONS(618), 1,
      sym__newline,
    ACTIONS(616), 2,
      sym__simple_identifier,
      sym_comment,
  [2763] = 1,
    ACTIONS(646), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2769] = 1,
    ACTIONS(648), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2775] = 3,
    ACTIONS(29), 1,
      sym__simple_identifier,
    ACTIONS(650), 1,
      sym_wildcard_identifier,
    STATE(171), 1,
      sym_identifier,
  [2785] = 3,
    ACTIONS(652), 1,
      sym_number,
    ACTIONS(654), 1,
      sym__newline,
    ACTIONS(656), 1,
      sym_comment,
  [2795] = 1,
    ACTIONS(658), 3,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_scope_declaration_token1,
  [2801] = 2,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      sym_string,
  [2808] = 2,
    ACTIONS(664), 1,
      sym__newline,
    ACTIONS(666), 1,
      sym_comment,
  [2815] = 2,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    ACTIONS(670), 1,
      sym_string,
  [2822] = 2,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(190), 1,
      sym_identifier,
  [2829] = 2,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__model_children,
  [2836] = 2,
    ACTIONS(674), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_software_system_declaration_repeat1,
  [2843] = 1,
    ACTIONS(642), 2,
      sym_string,
      sym__relation_operator,
  [2848] = 2,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(182), 1,
      sym_identifier,
  [2855] = 2,
    ACTIONS(514), 1,
      sym__simple_identifier,
    STATE(169), 1,
      sym_identifier,
  [2862] = 2,
    ACTIONS(676), 1,
      sym__newline,
    ACTIONS(678), 1,
      sym_comment,
  [2869] = 2,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(682), 1,
      sym_string,
  [2876] = 2,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      sym_string,
  [2883] = 2,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      sym_string,
  [2890] = 2,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      sym_string,
  [2897] = 2,
    ACTIONS(696), 1,
      sym__newline,
    ACTIONS(698), 1,
      sym_comment,
  [2904] = 2,
    ACTIONS(700), 1,
      sym__newline,
    ACTIONS(702), 1,
      sym_comment,
  [2911] = 2,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      sym_string,
  [2918] = 2,
    ACTIONS(638), 1,
      anon_sym_DOT,
    ACTIONS(642), 1,
      sym_string,
  [2925] = 2,
    ACTIONS(708), 1,
      sym__newline,
    ACTIONS(710), 1,
      sym_comment,
  [2932] = 2,
    ACTIONS(433), 1,
      sym__simple_identifier,
    STATE(153), 1,
      sym_identifier,
  [2939] = 2,
    ACTIONS(606), 1,
      sym__simple_identifier,
    STATE(163), 1,
      sym_identifier,
  [2946] = 1,
    ACTIONS(618), 2,
      sym_string,
      sym__relation_operator,
  [2951] = 1,
    ACTIONS(712), 1,
      sym__newline,
  [2955] = 1,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
  [2959] = 1,
    ACTIONS(716), 1,
      sym_string,
  [2963] = 1,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
  [2967] = 1,
    ACTIONS(720), 1,
      sym_string,
  [2971] = 1,
    ACTIONS(722), 1,
      anon_sym_LBRACE,
  [2975] = 1,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
  [2979] = 1,
    ACTIONS(726), 1,
      anon_sym_LBRACE,
  [2983] = 1,
    ACTIONS(728), 1,
      sym__assignment_operator,
  [2987] = 1,
    ACTIONS(730), 1,
      sym_string,
  [2991] = 1,
    ACTIONS(732), 1,
      sym_path_value,
  [2995] = 1,
    ACTIONS(734), 1,
      sym_string,
  [2999] = 1,
    ACTIONS(736), 1,
      sym__newline,
  [3003] = 1,
    ACTIONS(738), 1,
      sym__newline,
  [3007] = 1,
    ACTIONS(740), 1,
      sym_string,
  [3011] = 1,
    ACTIONS(742), 1,
      sym__newline,
  [3015] = 1,
    ACTIONS(744), 1,
      sym__newline,
  [3019] = 1,
    ACTIONS(746), 1,
      ts_builtin_sym_end,
  [3023] = 1,
    ACTIONS(748), 1,
      sym__newline,
  [3027] = 1,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
  [3031] = 1,
    ACTIONS(752), 1,
      sym_string,
  [3035] = 1,
    ACTIONS(754), 1,
      sym_string,
  [3039] = 1,
    ACTIONS(756), 1,
      sym__simple_identifier,
  [3043] = 1,
    ACTIONS(758), 1,
      sym__newline,
  [3047] = 1,
    ACTIONS(760), 1,
      sym__relation_operator,
  [3051] = 1,
    ACTIONS(762), 1,
      anon_sym_LBRACE,
  [3055] = 1,
    ACTIONS(764), 1,
      sym_string,
  [3059] = 1,
    ACTIONS(766), 1,
      sym_string,
  [3063] = 1,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
  [3067] = 1,
    ACTIONS(770), 1,
      sym__newline,
  [3071] = 1,
    ACTIONS(772), 1,
      sym_path_value,
  [3075] = 1,
    ACTIONS(774), 1,
      sym_path_value,
  [3079] = 1,
    ACTIONS(776), 1,
      sym_path_value,
  [3083] = 1,
    ACTIONS(778), 1,
      sym_string,
  [3087] = 1,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
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
  [SMALL_STATE(43)] = 1315,
  [SMALL_STATE(44)] = 1336,
  [SMALL_STATE(45)] = 1357,
  [SMALL_STATE(46)] = 1378,
  [SMALL_STATE(47)] = 1399,
  [SMALL_STATE(48)] = 1415,
  [SMALL_STATE(49)] = 1433,
  [SMALL_STATE(50)] = 1453,
  [SMALL_STATE(51)] = 1467,
  [SMALL_STATE(52)] = 1483,
  [SMALL_STATE(53)] = 1498,
  [SMALL_STATE(54)] = 1519,
  [SMALL_STATE(55)] = 1530,
  [SMALL_STATE(56)] = 1541,
  [SMALL_STATE(57)] = 1552,
  [SMALL_STATE(58)] = 1573,
  [SMALL_STATE(59)] = 1588,
  [SMALL_STATE(60)] = 1599,
  [SMALL_STATE(61)] = 1610,
  [SMALL_STATE(62)] = 1621,
  [SMALL_STATE(63)] = 1632,
  [SMALL_STATE(64)] = 1643,
  [SMALL_STATE(65)] = 1654,
  [SMALL_STATE(66)] = 1675,
  [SMALL_STATE(67)] = 1686,
  [SMALL_STATE(68)] = 1701,
  [SMALL_STATE(69)] = 1716,
  [SMALL_STATE(70)] = 1727,
  [SMALL_STATE(71)] = 1738,
  [SMALL_STATE(72)] = 1748,
  [SMALL_STATE(73)] = 1760,
  [SMALL_STATE(74)] = 1770,
  [SMALL_STATE(75)] = 1782,
  [SMALL_STATE(76)] = 1794,
  [SMALL_STATE(77)] = 1806,
  [SMALL_STATE(78)] = 1818,
  [SMALL_STATE(79)] = 1838,
  [SMALL_STATE(80)] = 1848,
  [SMALL_STATE(81)] = 1860,
  [SMALL_STATE(82)] = 1872,
  [SMALL_STATE(83)] = 1884,
  [SMALL_STATE(84)] = 1896,
  [SMALL_STATE(85)] = 1908,
  [SMALL_STATE(86)] = 1920,
  [SMALL_STATE(87)] = 1940,
  [SMALL_STATE(88)] = 1950,
  [SMALL_STATE(89)] = 1960,
  [SMALL_STATE(90)] = 1970,
  [SMALL_STATE(91)] = 1980,
  [SMALL_STATE(92)] = 1998,
  [SMALL_STATE(93)] = 2010,
  [SMALL_STATE(94)] = 2022,
  [SMALL_STATE(95)] = 2034,
  [SMALL_STATE(96)] = 2046,
  [SMALL_STATE(97)] = 2056,
  [SMALL_STATE(98)] = 2066,
  [SMALL_STATE(99)] = 2076,
  [SMALL_STATE(100)] = 2086,
  [SMALL_STATE(101)] = 2096,
  [SMALL_STATE(102)] = 2106,
  [SMALL_STATE(103)] = 2116,
  [SMALL_STATE(104)] = 2128,
  [SMALL_STATE(105)] = 2140,
  [SMALL_STATE(106)] = 2152,
  [SMALL_STATE(107)] = 2164,
  [SMALL_STATE(108)] = 2174,
  [SMALL_STATE(109)] = 2183,
  [SMALL_STATE(110)] = 2192,
  [SMALL_STATE(111)] = 2209,
  [SMALL_STATE(112)] = 2226,
  [SMALL_STATE(113)] = 2235,
  [SMALL_STATE(114)] = 2244,
  [SMALL_STATE(115)] = 2253,
  [SMALL_STATE(116)] = 2262,
  [SMALL_STATE(117)] = 2271,
  [SMALL_STATE(118)] = 2280,
  [SMALL_STATE(119)] = 2289,
  [SMALL_STATE(120)] = 2306,
  [SMALL_STATE(121)] = 2323,
  [SMALL_STATE(122)] = 2332,
  [SMALL_STATE(123)] = 2341,
  [SMALL_STATE(124)] = 2350,
  [SMALL_STATE(125)] = 2367,
  [SMALL_STATE(126)] = 2376,
  [SMALL_STATE(127)] = 2385,
  [SMALL_STATE(128)] = 2402,
  [SMALL_STATE(129)] = 2419,
  [SMALL_STATE(130)] = 2428,
  [SMALL_STATE(131)] = 2437,
  [SMALL_STATE(132)] = 2446,
  [SMALL_STATE(133)] = 2463,
  [SMALL_STATE(134)] = 2480,
  [SMALL_STATE(135)] = 2489,
  [SMALL_STATE(136)] = 2506,
  [SMALL_STATE(137)] = 2515,
  [SMALL_STATE(138)] = 2524,
  [SMALL_STATE(139)] = 2533,
  [SMALL_STATE(140)] = 2547,
  [SMALL_STATE(141)] = 2559,
  [SMALL_STATE(142)] = 2569,
  [SMALL_STATE(143)] = 2583,
  [SMALL_STATE(144)] = 2593,
  [SMALL_STATE(145)] = 2607,
  [SMALL_STATE(146)] = 2614,
  [SMALL_STATE(147)] = 2621,
  [SMALL_STATE(148)] = 2628,
  [SMALL_STATE(149)] = 2635,
  [SMALL_STATE(150)] = 2648,
  [SMALL_STATE(151)] = 2659,
  [SMALL_STATE(152)] = 2670,
  [SMALL_STATE(153)] = 2677,
  [SMALL_STATE(154)] = 2686,
  [SMALL_STATE(155)] = 2695,
  [SMALL_STATE(156)] = 2705,
  [SMALL_STATE(157)] = 2713,
  [SMALL_STATE(158)] = 2719,
  [SMALL_STATE(159)] = 2725,
  [SMALL_STATE(160)] = 2731,
  [SMALL_STATE(161)] = 2739,
  [SMALL_STATE(162)] = 2749,
  [SMALL_STATE(163)] = 2755,
  [SMALL_STATE(164)] = 2763,
  [SMALL_STATE(165)] = 2769,
  [SMALL_STATE(166)] = 2775,
  [SMALL_STATE(167)] = 2785,
  [SMALL_STATE(168)] = 2795,
  [SMALL_STATE(169)] = 2801,
  [SMALL_STATE(170)] = 2808,
  [SMALL_STATE(171)] = 2815,
  [SMALL_STATE(172)] = 2822,
  [SMALL_STATE(173)] = 2829,
  [SMALL_STATE(174)] = 2836,
  [SMALL_STATE(175)] = 2843,
  [SMALL_STATE(176)] = 2848,
  [SMALL_STATE(177)] = 2855,
  [SMALL_STATE(178)] = 2862,
  [SMALL_STATE(179)] = 2869,
  [SMALL_STATE(180)] = 2876,
  [SMALL_STATE(181)] = 2883,
  [SMALL_STATE(182)] = 2890,
  [SMALL_STATE(183)] = 2897,
  [SMALL_STATE(184)] = 2904,
  [SMALL_STATE(185)] = 2911,
  [SMALL_STATE(186)] = 2918,
  [SMALL_STATE(187)] = 2925,
  [SMALL_STATE(188)] = 2932,
  [SMALL_STATE(189)] = 2939,
  [SMALL_STATE(190)] = 2946,
  [SMALL_STATE(191)] = 2951,
  [SMALL_STATE(192)] = 2955,
  [SMALL_STATE(193)] = 2959,
  [SMALL_STATE(194)] = 2963,
  [SMALL_STATE(195)] = 2967,
  [SMALL_STATE(196)] = 2971,
  [SMALL_STATE(197)] = 2975,
  [SMALL_STATE(198)] = 2979,
  [SMALL_STATE(199)] = 2983,
  [SMALL_STATE(200)] = 2987,
  [SMALL_STATE(201)] = 2991,
  [SMALL_STATE(202)] = 2995,
  [SMALL_STATE(203)] = 2999,
  [SMALL_STATE(204)] = 3003,
  [SMALL_STATE(205)] = 3007,
  [SMALL_STATE(206)] = 3011,
  [SMALL_STATE(207)] = 3015,
  [SMALL_STATE(208)] = 3019,
  [SMALL_STATE(209)] = 3023,
  [SMALL_STATE(210)] = 3027,
  [SMALL_STATE(211)] = 3031,
  [SMALL_STATE(212)] = 3035,
  [SMALL_STATE(213)] = 3039,
  [SMALL_STATE(214)] = 3043,
  [SMALL_STATE(215)] = 3047,
  [SMALL_STATE(216)] = 3051,
  [SMALL_STATE(217)] = 3055,
  [SMALL_STATE(218)] = 3059,
  [SMALL_STATE(219)] = 3063,
  [SMALL_STATE(220)] = 3067,
  [SMALL_STATE(221)] = 3071,
  [SMALL_STATE(222)] = 3075,
  [SMALL_STATE(223)] = 3079,
  [SMALL_STATE(224)] = 3083,
  [SMALL_STATE(225)] = 3087,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 13),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 9),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 13),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 13),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, 0, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 2, 0, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 2, 0, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 2, 0, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 2, 0, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 5, 0, 10),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adrs_statement, 3, 0, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs_statement, 3, 0, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 18),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
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
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 4),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 13),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 5, 0, 13),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 13),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 17),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 18),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 17),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs_statement, 3, 0, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adrs_statement, 3, 0, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 7),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 7),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 11),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 15),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 11),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 15),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 12),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 16),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 7),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 7),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 11),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 8),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 12),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 15),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 15),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 16),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 8),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 11),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 5, 0, 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 4, 0, 5),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 19),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 19),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [746] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
