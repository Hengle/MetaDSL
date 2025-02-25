
// SlkConstants.h - generated by the SLK parser generator 

#ifndef _SlkCONSTANTS_H
#define _SlkCONSTANTS_H

enum _Slk_token_defines { 
  OP_TOKEN_0_ = 1 
, OP_TOKEN_1_ = 2 
, OP_TOKEN_2_ = 3 
, OP_TOKEN_COLON_ = 4 
, OP_TOKEN_QUESTION_ = 5 
, OP_TOKEN_3_ = 6 
, OP_TOKEN_4_ = 7 
, OP_TOKEN_5_ = 8 
, OP_TOKEN_6_ = 9 
, OP_TOKEN_7_ = 10 
, OP_TOKEN_8_ = 11 
, OP_TOKEN_9_ = 12 
, OP_TOKEN_10_ = 13 
, OP_TOKEN_11_ = 14 
, OP_TOKEN_12_ = 15 
, OP_TOKEN_13_ = 16 
, OP_TOKEN_14_ = 17 
, OP_TOKEN_15_ = 18 
, OP_TOKEN_NULLABLE_ = 19 
, LPAREN_ = 20 
, RPAREN_ = 21 
, LBRACK_ = 22 
, RBRACK_ = 23 
, LBRACE_ = 24 
, RBRACE_ = 25 
, SCRIPT_CONTENT_ = 26 
, BRACKET_COLON_BEGIN_ = 27 
, BRACKET_COLON_END_ = 28 
, PARENTHESIS_COLON_BEGIN_ = 29 
, PARENTHESIS_COLON_END_ = 30 
, ANGLE_BRACKET_COLON_BEGIN_ = 31 
, ANGLE_BRACKET_COLON_END_ = 32 
, BRACE_PERCENT_BEGIN_ = 33 
, BRACE_PERCENT_END_ = 34 
, BRACKET_PERCENT_BEGIN_ = 35 
, BRACKET_PERCENT_END_ = 36 
, PARENTHESIS_PERCENT_BEGIN_ = 37 
, PARENTHESIS_PERCENT_END_ = 38 
, ANGLE_BRACKET_PERCENT_BEGIN_ = 39 
, ANGLE_BRACKET_PERCENT_END_ = 40 
, COLON_COLON_ = 41 
, DOT_ = 42 
, POINTER_ = 43 
, PERIOD_STAR_ = 44 
, POINTER_STAR_ = 45 
, IDENTIFIER_ = 46 
, STRING_ = 47 
, NUMBER_ = 48 
, DOLLAR_STRING_ = 49 
, COMMA_ = 50 
, SEMI_ = 51 
, END_OF_SLK_INPUT_ = 52 
}; 

enum _Slk_Nonterminal_defines { 
  NT_PROGRAM_ = 53 
, NT_STATEMENTS_ = 54 
, NT_STATEMENT_ = 55 
, NT_OPERATOR_STATEMENT_0_ = 56 
, NT_OPERATOR_STATEMENT_1_ = 57 
, NT_OPERATOR_STATEMENT_COLON_ = 58 
, NT_OPERATOR_STATEMENT_QUESTION_COLON_ = 59 
, NT_OPERATOR_STATEMENT_4_ = 60 
, NT_OPERATOR_STATEMENT_5_ = 61 
, NT_OPERATOR_STATEMENT_6_ = 62 
, NT_OPERATOR_STATEMENT_7_ = 63 
, NT_OPERATOR_STATEMENT_8_ = 64 
, NT_OPERATOR_STATEMENT_9_ = 65 
, NT_OPERATOR_STATEMENT_10_ = 66 
, NT_OPERATOR_STATEMENT_11_ = 67 
, NT_OPERATOR_STATEMENT_12_ = 68 
, NT_OPERATOR_STATEMENT_13_ = 69 
, NT_OPERATOR_STATEMENT_14_ = 70 
, NT_OPERATOR_STATEMENT_15_ = 71 
, NT_OPERATOR_STATEMENT_NULLABLE_ = 72 
, NT_OPERATOR_STATEMENT_DESC_0_ = 73 
, NT_OPERATOR_STATEMENT_DESC_1_ = 74 
, NT_OPERATOR_STATEMENT_DESC_2_ = 75 
, NT_OPERATOR_STATEMENT_DESC_COLON_ = 76 
, NT_OPERATOR_STATEMENT_DESC_QUESTION_COLON_ = 77 
, NT_OPERATOR_STATEMENT_DESC_3_ = 78 
, NT_OPERATOR_STATEMENT_DESC_4_ = 79 
, NT_OPERATOR_STATEMENT_DESC_5_ = 80 
, NT_OPERATOR_STATEMENT_DESC_6_ = 81 
, NT_OPERATOR_STATEMENT_DESC_7_ = 82 
, NT_OPERATOR_STATEMENT_DESC_8_ = 83 
, NT_OPERATOR_STATEMENT_DESC_9_ = 84 
, NT_OPERATOR_STATEMENT_DESC_10_ = 85 
, NT_OPERATOR_STATEMENT_DESC_11_ = 86 
, NT_OPERATOR_STATEMENT_DESC_12_ = 87 
, NT_OPERATOR_STATEMENT_DESC_13_ = 88 
, NT_OPERATOR_STATEMENT_DESC_14_ = 89 
, NT_OPERATOR_STATEMENT_DESC_15_ = 90 
, NT_OPERATOR_STATEMENT_DESC_NULLABLE_ = 91 
, NT_FUNCTION_STATEMENT_ = 92 
, NT_FUNCTION_STATEMENT_DESC_ = 93 
, NT_FUNCTION_CALLS_ = 94 
, NT_FUNCTION_EX_CALL_ = 95 
, NT_FUNCTION_EX_CALL_SPECIAL_ = 96 
, NT_FUNCTION_PARAMS_ = 97 
, NT_PARENTHESIS_PARAMS_ = 98 
, NT_MEMBER_ = 99 
, NT_STATIC_MEMBER_DESC_ = 100 
, NT_MEMBER_DESC_ = 101 
, NT_MEMBER_DESC2_ = 102 
, NT_MEMBER_DESC3_ = 103 
, NT_MEMBER_DESC4_ = 104 
, NT_MEMBER_PARAM_ = 105 
, NT_MEMBER_PARAM_DETAIL_ = 106 
, NT_FUNCTION_ID_ = 107 
, NT_SEP_ = 108 
, NT_SEP_STATEMENT_STAR_ = 109 
, NT_OP_TOKEN_0_OPERATOR_STATEMENT_0_OPT_ = 110 
, NT_OP_TOKEN_1_OPERATOR_STATEMENT_1_OPT_ = 111 
, NT_OP_TOKEN_2_OPERATOR_STATEMENT_COLON_STAR_ = 112 
, NT_OP_TOKEN_COLON_OPERATOR_STATEMENT_QUESTION_COLON_STAR_ = 113 
, NT_OP_TOKEN_QUESTION_OPERATOR_STATEMENT_QUESTION_COLON_OP_TOKEN_COLON_OPERATOR_STATEMENT_QUESTION_COLON_OPT_ = 114 
, NT_OP_TOKEN_3_OPERATOR_STATEMENT_4_STAR_ = 115 
, NT_OP_TOKEN_4_OPERATOR_STATEMENT_5_STAR_ = 116 
, NT_OP_TOKEN_5_OPERATOR_STATEMENT_6_STAR_ = 117 
, NT_OP_TOKEN_6_OPERATOR_STATEMENT_7_STAR_ = 118 
, NT_OP_TOKEN_7_OPERATOR_STATEMENT_8_STAR_ = 119 
, NT_OP_TOKEN_8_OPERATOR_STATEMENT_9_STAR_ = 120 
, NT_OP_TOKEN_9_OPERATOR_STATEMENT_10_STAR_ = 121 
, NT_OP_TOKEN_10_OPERATOR_STATEMENT_11_STAR_ = 122 
, NT_OP_TOKEN_11_OPERATOR_STATEMENT_12_STAR_ = 123 
, NT_OP_TOKEN_12_OPERATOR_STATEMENT_13_STAR_ = 124 
, NT_OP_TOKEN_13_OPERATOR_STATEMENT_14_STAR_ = 125 
, NT_OP_TOKEN_14_OPERATOR_STATEMENT_15_STAR_ = 126 
, NT_OP_TOKEN_15_OPERATOR_STATEMENT_NULLABLE_STAR_ = 127 
, NT_OP_TOKEN_NULLABLE_FUNCTION_STATEMENT_STAR_ = 128 
, NT_FUNCTION_EX_CALL_STAR_ = 129 
, NT_FUNCTION_EX_CALL_2_STAR_ = 130 
, NT_FUNCTION_PARAMS_OPT_ = 131 
, NT_FUNCTION_PARAMS_2_OPT_ = 132 
, NT_FUNCTION_PARAMS_3_OPT_ = 133 
, NT_FUNCTION_PARAMS_4_OPT_ = 134 
, NT_FUNCTION_PARAMS_5_OPT_ = 135 
, NT_FUNCTION_PARAMS_6_OPT_ = 136 
, NT_FUNCTION_PARAMS_7_OPT_ = 137 
, NT_FUNCTION_PARAMS_8_OPT_ = 138 
, NT_FUNCTION_PARAMS_9_OPT_ = 139 
, NT_FUNCTION_PARAMS_10_OPT_ = 140 
, NT_FUNCTION_PARAMS_11_OPT_ = 141 
, NT_FUNCTION_PARAMS_12_OPT_ = 142 
, NT_FUNCTION_PARAMS_13_OPT_ = 143 
, NT_FUNCTION_PARAMS_14_OPT_ = 144 
, NT_FUNCTION_PARAMS_15_OPT_ = 145 
, NT_FUNCTION_PARAMS_16_OPT_ = 146 
, NT_FUNCTION_PARAMS_17_OPT_ = 147 
}; 

typedef unsigned short   slk_size_t;

#define NOT_A_SYMBOL       0
#define NONTERMINAL_SYMBOL 1
#define TERMINAL_SYMBOL    2
#define ACTION_SYMBOL      3

int SlkGetSymbolType ( slk_size_t symbol );
slk_size_t *SlkGetProductionArray ( slk_size_t   production_number );
slk_size_t *SlkGetState ( slk_size_t  state_number );
int SlkIsNonterminal ( slk_size_t symbol );
int SlkIsTerminal ( slk_size_t symbol );
int SlkIsAction ( slk_size_t symbol );


#endif
