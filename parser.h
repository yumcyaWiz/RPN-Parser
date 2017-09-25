#ifndef PARSER_H
#define PARSER_H
class Parser {
    private:
        Token token;
    public:
        Parser(const Token& _token) : token(_token) {};
        double parse() {
        };
};
