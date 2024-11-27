#include <string>
#include <cctype>

class Lexer {
public:
    /**
     * Negative numbers are assigned to known things
     * Positive numbers are assigned to individual characters
     */

    enum TokenType{
        tok_eof = -1,                               // End of file
        tok_keyword = -2,                           
        tok_identifier = -3,                       
        tok_number = -4,                            // Number literals
        tok_operator = -5,
        tok_punctuation = -6
    };
private:
    std::sting identifier_str;                      // Filled in if token identified
    static double num_val;                          // Filled in if tok_numer
public:
    static int get_tok();
}