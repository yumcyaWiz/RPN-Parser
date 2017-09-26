#ifndef PARSER_H
#define PARSER_H
#include "stack.h"
class Parser {
    private:
        Tokenizer tokenizer;
        Stack<double> stack = Stack<double>(100);
    public:
        Parser(const Tokenizer& _tokenizer) : tokenizer(_tokenizer) {};
        double parse() {
            for(int i = 0; i < tokenizer.getSize(); i++) {
                std::string token = tokenizer.getToken(i);
                if(token == "+") {
                    double x = stack.pop();
                    double y = stack.pop();
                    stack.push(x + y);
                }
                else if(token == "-") {
                    double x = stack.pop();
                    double y = stack.pop();
                    stack.push(x - y);
                }
                else if(token == "*") {
                    double x = stack.pop();
                    double y = stack.pop();
                    stack.push(x * y);
                }
                else if(token == "/") {
                    double x = stack.pop();
                    double y = stack.pop();
                    stack.push(x / y);
                }
                else {
                    stack.push(std::stod(token));
                }
            }
            return stack.pop();
        };
};
#endif
