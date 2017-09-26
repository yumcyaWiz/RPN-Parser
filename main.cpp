#include <iostream>
#include <fstream>
#include <string>
#include "tokenizer.h"
#include "parser.h"


int main() {
    std::ifstream ifs("src.rpn");
    std::string src_string;
    std::string buffer;
    while(std::getline(ifs, buffer)) {
        src_string += buffer;
    }

    Tokenizer tokenizer(src_string);
    tokenizer.tokenize();
    tokenizer.print();

    Parser parser(tokenizer);
    std::cout << parser.parse() << std::endl;
    return 0;
}
