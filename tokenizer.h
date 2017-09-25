#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <vector>
#include <string>
class Tokenizer {
    private:
        std::string source;
        std::vector<std::string> tokens;
    public:
        Tokenizer(std::string _source) : source(_source) {};
        void tokenize() {

        };
};
#endif
