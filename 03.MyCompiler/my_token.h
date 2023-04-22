#ifndef __MY_TOKEN_H__
#define __MY_TOKEN_H__

namespace hello_compiler {
    enum class TokenType {
        INTEGER,     // 1,2
        CHAR,        // 'a', 'z'
        STRING,      // "hello, jungle!"
        IDENTIFIER,  // int, dog, i
        KEY
    };
}


#endif // __MY_TOKEN_H__