#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_hello_statement = 1,
  sym_meh_statement = 2,
  anon_sym_here = 3,
  anon_sym_there = 4,
  anon_sym_DQUOTE = 5,
  sym_string_content = 6,
  anon_sym_workspace = 7,
  sym_dsl = 8,
  sym_statement = 9,
  sym_positional_statement = 10,
  sym_greeting_statement = 11,
  sym_string = 12,
  sym_workspace_declaration = 13,
  aux_sym_dsl_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_hello_statement] = "hello_statement",
  [sym_meh_statement] = "meh_statement",
  [anon_sym_here] = "here",
  [anon_sym_there] = "there",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [anon_sym_workspace] = "workspace",
  [sym_dsl] = "dsl",
  [sym_statement] = "statement",
  [sym_positional_statement] = "positional_statement",
  [sym_greeting_statement] = "greeting_statement",
  [sym_string] = "string",
  [sym_workspace_declaration] = "workspace_declaration",
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_hello_statement] = sym_hello_statement,
  [sym_meh_statement] = sym_meh_statement,
  [anon_sym_here] = anon_sym_here,
  [anon_sym_there] = anon_sym_there,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [anon_sym_workspace] = anon_sym_workspace,
  [sym_dsl] = sym_dsl,
  [sym_statement] = sym_statement,
  [sym_positional_statement] = sym_positional_statement,
  [sym_greeting_statement] = sym_greeting_statement,
  [sym_string] = sym_string,
  [sym_workspace_declaration] = sym_workspace_declaration,
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_hello_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_meh_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_here] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_there] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [sym_dsl] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_positional_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_greeting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dsl_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(1);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 20:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_hello_statement);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_meh_statement);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_here);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_there);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hello_statement] = ACTIONS(1),
    [sym_meh_statement] = ACTIONS(1),
    [anon_sym_here] = ACTIONS(1),
    [anon_sym_there] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(12),
    [sym_statement] = STATE(2),
    [sym_greeting_statement] = STATE(6),
    [sym_workspace_declaration] = STATE(6),
    [aux_sym_dsl_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_hello_statement] = ACTIONS(5),
    [sym_meh_statement] = ACTIONS(7),
    [anon_sym_workspace] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_greeting_statement] = STATE(6),
    [sym_workspace_declaration] = STATE(6),
    [aux_sym_dsl_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_hello_statement] = ACTIONS(5),
    [sym_meh_statement] = ACTIONS(7),
    [anon_sym_workspace] = ACTIONS(9),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_greeting_statement] = STATE(6),
    [sym_workspace_declaration] = STATE(6),
    [aux_sym_dsl_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_hello_statement] = ACTIONS(15),
    [sym_meh_statement] = ACTIONS(18),
    [anon_sym_workspace] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(8), 1,
      sym_positional_statement,
    ACTIONS(26), 2,
      anon_sym_here,
      anon_sym_there,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      sym_hello_statement,
      sym_meh_statement,
      anon_sym_workspace,
  [14] = 1,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      sym_hello_statement,
      sym_meh_statement,
      anon_sym_DQUOTE,
      anon_sym_workspace,
  [22] = 1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      sym_hello_statement,
      sym_meh_statement,
      anon_sym_workspace,
  [29] = 1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      sym_hello_statement,
      sym_meh_statement,
      anon_sym_workspace,
  [36] = 1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      sym_hello_statement,
      sym_meh_statement,
      anon_sym_workspace,
  [43] = 1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      sym_hello_statement,
      sym_meh_statement,
      anon_sym_workspace,
  [50] = 2,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_string,
  [57] = 2,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string,
  [64] = 1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
  [68] = 1,
    ACTIONS(40), 1,
      sym_string_content,
  [72] = 1,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 29,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 50,
  [SMALL_STATE(11)] = 57,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 72,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positional_statement, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greeting_statement, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
