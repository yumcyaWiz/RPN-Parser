#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <sstream>
#include <vector>
#include <string>


std::vector<std::string> split(const std::string &str, char sp) {
    std::vector<std::string> ret;
    std::string acum;
    for(int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if(ch == sp) {
            ret.push_back(acum);
            acum = "";
        }
        else {
            acum += ch;
        }
    }
    ret.push_back(acum);
    return ret;
}


class Tokenizer {
    private:
        std::string source;
        std::vector<std::string> tokens;
    public:
        Tokenizer(std::string _source) : source(_source) {};
        void tokenize() {
            tokens = split(source, ' ');
        };
        std::string getToken(int i) {
            return tokens[i];
        };
        int getSize() {
            return tokens.size();
        };
        void print() {
            for(int i = 0; i < tokens.size(); i++) {
                std::cout << tokens[i] << " ";
            }
            std::cout << std::endl;
        };
};
#endif
