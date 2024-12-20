#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_workspace = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_DQUOTE = 4,
  sym__string_content = 5,
  sym__simple_identifier = 6,
  anon_sym_DOT = 7,
  anon_sym_EQ = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_model = 10,
  anon_sym_softwareSystem = 11,
  anon_sym_container = 12,
  anon_sym_person = 13,
  anon_sym_tags = 14,
  anon_sym_configuration = 15,
  anon_sym_scope = 16,
  sym_dsl = 17,
  sym_workspace_declaration = 18,
  sym_string = 19,
  sym_dotted_identifier = 20,
  sym_identifier = 21,
  sym_relation_identifier = 22,
  sym__assignment_operator = 23,
  sym__relation_operator = 24,
  sym_workspace_item_statement = 25,
  sym_model_declaration = 26,
  sym__model_children = 27,
  sym__model_item_statement = 28,
  sym_variable_declaration = 29,
  sym_relation_statement = 30,
  sym__item_declaration = 31,
  sym_software_system_declaration = 32,
  sym_container_declaration = 33,
  sym_person_declaration = 34,
  sym_tags_declaration = 35,
  sym_configuration_declaration = 36,
  sym_configuration_item_statement = 37,
  sym_scope_declaration = 38,
  aux_sym_dsl_repeat1 = 39,
  aux_sym_workspace_declaration_repeat1 = 40,
  aux_sym__model_children_repeat1 = 41,
  aux_sym_tags_declaration_repeat1 = 42,
  aux_sym_configuration_declaration_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_workspace] = "workspace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_content] = "_string_content",
  [sym__simple_identifier] = "_simple_identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_model] = "model",
  [anon_sym_softwareSystem] = "softwareSystem",
  [anon_sym_container] = "container",
  [anon_sym_person] = "person",
  [anon_sym_tags] = "tags",
  [anon_sym_configuration] = "configuration",
  [anon_sym_scope] = "scope",
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
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_declaration_repeat1] = "workspace_declaration_repeat1",
  [aux_sym__model_children_repeat1] = "_model_children_repeat1",
  [aux_sym_tags_declaration_repeat1] = "tags_declaration_repeat1",
  [aux_sym_configuration_declaration_repeat1] = "configuration_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_content] = sym__string_content,
  [sym__simple_identifier] = sym__simple_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_softwareSystem] = anon_sym_softwareSystem,
  [anon_sym_container] = anon_sym_container,
  [anon_sym_person] = anon_sym_person,
  [anon_sym_tags] = anon_sym_tags,
  [anon_sym_configuration] = anon_sym_configuration,
  [anon_sym_scope] = anon_sym_scope,
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
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_declaration_repeat1] = aux_sym_workspace_declaration_repeat1,
  [aux_sym__model_children_repeat1] = aux_sym__model_children_repeat1,
  [aux_sym_tags_declaration_repeat1] = aux_sym_tags_declaration_repeat1,
  [aux_sym_configuration_declaration_repeat1] = aux_sym_configuration_declaration_repeat1,
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
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_softwareSystem] = {
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
};

enum ts_field_identifiers {
  field_child = 1,
  field_description = 2,
  field_name = 3,
  field_parent = 4,
  field_relation = 5,
  field_source = 6,
  field_target = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child] = "child",
  [field_description] = "description",
  [field_name] = "name",
  [field_parent] = "parent",
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
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
  [34] = 26,
  [35] = 25,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '"', 62,
        '-', 2,
        '.', 69,
        '=', 70,
        'c', 33,
        'm', 34,
        'p', 12,
        's', 9,
        't', 4,
        'w', 37,
        '{', 60,
        '}', 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 56:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 57:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_softwareSystem);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_person);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_configuration);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 56},
  [58] = {.lex_state = 57},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_softwareSystem] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_person] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_configuration] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(56),
    [sym_workspace_declaration] = STATE(19),
    [aux_sym_dsl_repeat1] = STATE(19),
    [anon_sym_workspace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      sym__simple_identifier,
    ACTIONS(9), 1,
      anon_sym_tags,
    STATE(22), 1,
      sym_identifier,
    STATE(41), 1,
      sym_dotted_identifier,
    STATE(42), 1,
      sym_relation_identifier,
    STATE(4), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [26] = 7,
    ACTIONS(7), 1,
      sym__simple_identifier,
    ACTIONS(9), 1,
      anon_sym_tags,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(41), 1,
      sym_dotted_identifier,
    STATE(42), 1,
      sym_relation_identifier,
    STATE(4), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [52] = 7,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym__simple_identifier,
    ACTIONS(18), 1,
      anon_sym_tags,
    STATE(22), 1,
      sym_identifier,
    STATE(41), 1,
      sym_dotted_identifier,
    STATE(42), 1,
      sym_relation_identifier,
    STATE(4), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [78] = 7,
    ACTIONS(7), 1,
      sym__simple_identifier,
    ACTIONS(9), 1,
      anon_sym_tags,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(41), 1,
      sym_dotted_identifier,
    STATE(42), 1,
      sym_relation_identifier,
    STATE(2), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [104] = 7,
    ACTIONS(7), 1,
      sym__simple_identifier,
    ACTIONS(9), 1,
      anon_sym_tags,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_identifier,
    STATE(41), 1,
      sym_dotted_identifier,
    STATE(42), 1,
      sym_relation_identifier,
    STATE(3), 5,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [130] = 5,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_model,
    ACTIONS(29), 1,
      anon_sym_configuration,
    STATE(8), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(29), 2,
      sym_model_declaration,
      sym_configuration_declaration,
  [148] = 5,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_model,
    ACTIONS(36), 1,
      anon_sym_configuration,
    STATE(8), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(29), 2,
      sym_model_declaration,
      sym_configuration_declaration,
  [166] = 5,
    ACTIONS(27), 1,
      anon_sym_model,
    ACTIONS(29), 1,
      anon_sym_configuration,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(29), 2,
      sym_model_declaration,
      sym_configuration_declaration,
  [184] = 4,
    ACTIONS(41), 1,
      anon_sym_softwareSystem,
    ACTIONS(43), 1,
      anon_sym_container,
    ACTIONS(45), 1,
      anon_sym_person,
    STATE(27), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [200] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(12), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [215] = 4,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 2,
      sym__simple_identifier,
      anon_sym_tags,
    STATE(12), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [230] = 4,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_scope,
    STATE(38), 1,
      sym_scope_declaration,
    STATE(14), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [244] = 4,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_scope,
    STATE(38), 1,
      sym_scope_declaration,
    STATE(14), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [258] = 2,
    ACTIONS(71), 2,
      sym__simple_identifier,
      anon_sym_tags,
    ACTIONS(69), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [268] = 4,
    ACTIONS(62), 1,
      anon_sym_scope,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_scope_declaration,
    STATE(13), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [282] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym__model_children,
    ACTIONS(79), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [296] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym__model_children,
    ACTIONS(83), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [310] = 3,
    ACTIONS(3), 1,
      anon_sym_workspace,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [321] = 3,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_workspace,
    STATE(20), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [332] = 1,
    ACTIONS(92), 4,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [339] = 4,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(98), 1,
      anon_sym_DASH_GT,
    STATE(10), 1,
      sym__assignment_operator,
  [352] = 4,
    ACTIONS(100), 1,
      sym__simple_identifier,
    STATE(41), 1,
      sym_dotted_identifier,
    STATE(47), 1,
      sym_identifier,
    STATE(48), 1,
      sym_relation_identifier,
  [365] = 1,
    ACTIONS(102), 3,
      anon_sym_RBRACE,
      anon_sym_model,
      anon_sym_configuration,
  [371] = 1,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      anon_sym_model,
      anon_sym_configuration,
  [377] = 1,
    ACTIONS(106), 3,
      anon_sym_RBRACE,
      anon_sym_model,
      anon_sym_configuration,
  [383] = 2,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [391] = 1,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      anon_sym_model,
      anon_sym_configuration,
  [397] = 1,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      anon_sym_model,
      anon_sym_configuration,
  [403] = 2,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [411] = 2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(11), 2,
      sym_string,
      aux_sym_tags_declaration_repeat1,
  [419] = 2,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [427] = 2,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [435] = 2,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [443] = 2,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [451] = 1,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      anon_sym_model,
      anon_sym_configuration,
  [457] = 2,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 2,
      sym__simple_identifier,
      anon_sym_tags,
  [465] = 1,
    ACTIONS(138), 2,
      anon_sym_RBRACE,
      anon_sym_scope,
  [470] = 1,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      anon_sym_scope,
  [475] = 2,
    ACTIONS(142), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym__assignment_operator,
  [482] = 1,
    ACTIONS(98), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [487] = 2,
    ACTIONS(144), 1,
      anon_sym_DASH_GT,
    STATE(23), 1,
      sym__relation_operator,
  [494] = 1,
    ACTIONS(146), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [499] = 2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string,
  [506] = 2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
  [513] = 2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [520] = 2,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
  [527] = 2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_string,
  [534] = 2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string,
  [541] = 2,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_string,
  [548] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_workspace,
  [553] = 2,
    ACTIONS(100), 1,
      sym__simple_identifier,
    STATE(43), 1,
      sym_identifier,
  [560] = 2,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym__model_children,
  [567] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_workspace,
  [572] = 1,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
  [576] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [580] = 1,
    ACTIONS(158), 1,
      sym__simple_identifier,
  [584] = 1,
    ACTIONS(160), 1,
      sym__string_content,
  [588] = 1,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
  [592] = 1,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 244,
  [SMALL_STATE(15)] = 258,
  [SMALL_STATE(16)] = 268,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 377,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 391,
  [SMALL_STATE(29)] = 397,
  [SMALL_STATE(30)] = 403,
  [SMALL_STATE(31)] = 411,
  [SMALL_STATE(32)] = 419,
  [SMALL_STATE(33)] = 427,
  [SMALL_STATE(34)] = 435,
  [SMALL_STATE(35)] = 443,
  [SMALL_STATE(36)] = 451,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 465,
  [SMALL_STATE(39)] = 470,
  [SMALL_STATE(40)] = 475,
  [SMALL_STATE(41)] = 482,
  [SMALL_STATE(42)] = 487,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 499,
  [SMALL_STATE(45)] = 506,
  [SMALL_STATE(46)] = 513,
  [SMALL_STATE(47)] = 520,
  [SMALL_STATE(48)] = 527,
  [SMALL_STATE(49)] = 534,
  [SMALL_STATE(50)] = 541,
  [SMALL_STATE(51)] = 548,
  [SMALL_STATE(52)] = 553,
  [SMALL_STATE(53)] = 560,
  [SMALL_STATE(54)] = 567,
  [SMALL_STATE(55)] = 572,
  [SMALL_STATE(56)] = 576,
  [SMALL_STATE(57)] = 580,
  [SMALL_STATE(58)] = 584,
  [SMALL_STATE(59)] = 588,
  [SMALL_STATE(60)] = 592,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
