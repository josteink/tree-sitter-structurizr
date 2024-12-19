#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  sym_dsl = 14,
  sym_workspace_declaration = 15,
  sym_string = 16,
  sym__dotted_identifier = 17,
  sym_identifier = 18,
  sym_relation_identifier = 19,
  sym__assignment_operator = 20,
  sym__relation_operator = 21,
  sym_workspace_item_statement = 22,
  sym_model_declaration = 23,
  sym__model_item_statement = 24,
  sym_variable_declaration = 25,
  sym_relation_statement = 26,
  sym__item_declaration = 27,
  sym_software_system_declaration = 28,
  sym_container_declaration = 29,
  sym_person_declaration = 30,
  aux_sym_dsl_repeat1 = 31,
  aux_sym_workspace_declaration_repeat1 = 32,
  aux_sym_model_declaration_repeat1 = 33,
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
  [sym_dsl] = "dsl",
  [sym_workspace_declaration] = "workspace_declaration",
  [sym_string] = "string",
  [sym__dotted_identifier] = "_dotted_identifier",
  [sym_identifier] = "identifier",
  [sym_relation_identifier] = "relation_identifier",
  [sym__assignment_operator] = "_assignment_operator",
  [sym__relation_operator] = "_relation_operator",
  [sym_workspace_item_statement] = "workspace_item_statement",
  [sym_model_declaration] = "model_declaration",
  [sym__model_item_statement] = "_model_item_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_relation_statement] = "relation_statement",
  [sym__item_declaration] = "_item_declaration",
  [sym_software_system_declaration] = "software_system_declaration",
  [sym_container_declaration] = "container_declaration",
  [sym_person_declaration] = "person_declaration",
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_declaration_repeat1] = "workspace_declaration_repeat1",
  [aux_sym_model_declaration_repeat1] = "model_declaration_repeat1",
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
  [sym_dsl] = sym_dsl,
  [sym_workspace_declaration] = sym_workspace_declaration,
  [sym_string] = sym_string,
  [sym__dotted_identifier] = sym__dotted_identifier,
  [sym_identifier] = sym_identifier,
  [sym_relation_identifier] = sym_relation_identifier,
  [sym__assignment_operator] = sym__assignment_operator,
  [sym__relation_operator] = sym__relation_operator,
  [sym_workspace_item_statement] = sym_workspace_item_statement,
  [sym_model_declaration] = sym_model_declaration,
  [sym__model_item_statement] = sym__model_item_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_relation_statement] = sym_relation_statement,
  [sym__item_declaration] = sym__item_declaration,
  [sym_software_system_declaration] = sym_software_system_declaration,
  [sym_container_declaration] = sym_container_declaration,
  [sym_person_declaration] = sym_person_declaration,
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_declaration_repeat1] = aux_sym_workspace_declaration_repeat1,
  [aux_sym_model_declaration_repeat1] = aux_sym_model_declaration_repeat1,
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
  [sym__dotted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_identifier] = {
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
  [sym_workspace_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_model_declaration] = {
    .visible = true,
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
  [aux_sym_dsl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workspace_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_description = 1,
  field_name = 2,
  field_relation = 3,
  field_source = 4,
  field_target = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description] = "description",
  [field_name] = "name",
  [field_relation] = "relation",
  [field_source] = "source",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_description, 1},
  [3] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '"', 48,
        '-', 2,
        '.', 90,
        '=', 91,
        'c', 71,
        'm', 72,
        'p', 57,
        's', 73,
        'w', 75,
        '{', 46,
        '}', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 39:
      if (lookahead == 'w') ADVANCE(6);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 41:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '}') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'S') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'f') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'k') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'w') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'y') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_model);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_softwareSystem);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_softwareSystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_container);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_person);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_person);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 42},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__simple_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_softwareSystem] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_person] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(41),
    [sym_workspace_declaration] = STATE(13),
    [aux_sym_dsl_repeat1] = STATE(13),
    [anon_sym_workspace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      sym__simple_identifier,
    STATE(19), 1,
      sym_relation_identifier,
    STATE(21), 1,
      sym__dotted_identifier,
    STATE(22), 1,
      sym_identifier,
    STATE(4), 4,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      aux_sym_model_declaration_repeat1,
  [22] = 6,
    ACTIONS(7), 1,
      sym__simple_identifier,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_relation_identifier,
    STATE(21), 1,
      sym__dotted_identifier,
    STATE(22), 1,
      sym_identifier,
    STATE(2), 4,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      aux_sym_model_declaration_repeat1,
  [44] = 6,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym__simple_identifier,
    STATE(19), 1,
      sym_relation_identifier,
    STATE(21), 1,
      sym__dotted_identifier,
    STATE(22), 1,
      sym_identifier,
    STATE(4), 4,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      aux_sym_model_declaration_repeat1,
  [66] = 6,
    ACTIONS(7), 1,
      sym__simple_identifier,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_relation_identifier,
    STATE(21), 1,
      sym__dotted_identifier,
    STATE(22), 1,
      sym_identifier,
    STATE(6), 4,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      aux_sym_model_declaration_repeat1,
  [88] = 6,
    ACTIONS(7), 1,
      sym__simple_identifier,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_relation_identifier,
    STATE(21), 1,
      sym__dotted_identifier,
    STATE(22), 1,
      sym_identifier,
    STATE(4), 4,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      aux_sym_model_declaration_repeat1,
  [110] = 4,
    ACTIONS(20), 1,
      anon_sym_softwareSystem,
    ACTIONS(22), 1,
      anon_sym_container,
    ACTIONS(24), 1,
      anon_sym_person,
    STATE(30), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [126] = 4,
    ACTIONS(20), 1,
      anon_sym_softwareSystem,
    ACTIONS(22), 1,
      anon_sym_container,
    ACTIONS(24), 1,
      anon_sym_person,
    STATE(47), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [142] = 4,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_model,
    STATE(27), 1,
      sym_model_declaration,
    STATE(11), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
  [156] = 4,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_model,
    STATE(27), 1,
      sym_model_declaration,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
  [170] = 4,
    ACTIONS(28), 1,
      anon_sym_model,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_model_declaration,
    STATE(10), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
  [184] = 1,
    ACTIONS(37), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__simple_identifier,
  [191] = 3,
    ACTIONS(3), 1,
      anon_sym_workspace,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [202] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_workspace,
    STATE(14), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [213] = 3,
    ACTIONS(46), 1,
      anon_sym_DOT,
    ACTIONS(48), 1,
      anon_sym_EQ,
    ACTIONS(50), 1,
      anon_sym_DASH_GT,
  [223] = 3,
    ACTIONS(52), 1,
      sym__simple_identifier,
    STATE(21), 1,
      sym__dotted_identifier,
    STATE(32), 1,
      sym_relation_identifier,
  [233] = 2,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [241] = 2,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [249] = 2,
    ACTIONS(62), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      sym__relation_operator,
  [256] = 2,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
  [263] = 1,
    ACTIONS(50), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [268] = 2,
    ACTIONS(66), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym__assignment_operator,
  [275] = 1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_workspace,
  [280] = 2,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_string,
  [287] = 2,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string,
  [294] = 1,
    ACTIONS(70), 2,
      anon_sym_DQUOTE,
      anon_sym_DASH_GT,
  [299] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      anon_sym_model,
  [304] = 1,
    ACTIONS(74), 2,
      anon_sym_RBRACE,
      anon_sym_model,
  [309] = 2,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
  [316] = 1,
    ACTIONS(76), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [321] = 2,
    ACTIONS(46), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
  [328] = 2,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
  [335] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_workspace,
  [340] = 1,
    ACTIONS(80), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [345] = 1,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [350] = 1,
    ACTIONS(84), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [355] = 1,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [360] = 2,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_string,
  [367] = 1,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      anon_sym_model,
  [372] = 1,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      sym__simple_identifier,
  [377] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [381] = 1,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
  [385] = 1,
    ACTIONS(96), 1,
      sym__simple_identifier,
  [389] = 1,
    ACTIONS(98), 1,
      sym__string_content,
  [393] = 1,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
  [397] = 1,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
  [401] = 1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 170,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 202,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 223,
  [SMALL_STATE(17)] = 233,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 294,
  [SMALL_STATE(27)] = 299,
  [SMALL_STATE(28)] = 304,
  [SMALL_STATE(29)] = 309,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 321,
  [SMALL_STATE(32)] = 328,
  [SMALL_STATE(33)] = 335,
  [SMALL_STATE(34)] = 340,
  [SMALL_STATE(35)] = 345,
  [SMALL_STATE(36)] = 350,
  [SMALL_STATE(37)] = 355,
  [SMALL_STATE(38)] = 360,
  [SMALL_STATE(39)] = 367,
  [SMALL_STATE(40)] = 372,
  [SMALL_STATE(41)] = 377,
  [SMALL_STATE(42)] = 381,
  [SMALL_STATE(43)] = 385,
  [SMALL_STATE(44)] = 389,
  [SMALL_STATE(45)] = 393,
  [SMALL_STATE(46)] = 397,
  [SMALL_STATE(47)] = 401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_declaration_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dotted_identifier, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 2),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
