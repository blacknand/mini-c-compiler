#include "lexer.h"

// Return next token from stadard input
static int Lexer::get_tok() {
    static int last_char = ' ';
    
    // Skip whitepsace
    while (isspace(last_char))
        last_char = getchar();

    // Recognise identifiers and specific keywords
    if (isalpha(last_char)) {                               // Identifier: [a-zA-Z][a-zA-Z0-9]*
        identifier_str = last_char;
        while (isalnum(last_char = getchar()))
            identifier_str += last_char;

        // TODO: Check identifier for function and data type decleration
    }
}