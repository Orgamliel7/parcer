#ifndef PARSER_PARSER_H
#define PARSER_PARSER_H

#include <fstream>
#include "symbol.h"

using namespace std;

class Parser {
	ifstream& inputFile;
	vector<vector<shared_ptr<Symbol>>> rules {
            { make_shared<Variable>(Variable(E_)), make_shared<Variable>(Variable(T)) },
            { make_shared<Variable>(Variable(E_)), make_shared<Variable>(Variable(T)),
                    make_shared<Word>(Word(PLUS)) },
            { make_shared<Word>(Word(EPSILON)) },
            { make_shared<Variable>(Variable(T_)), make_shared<Variable>(Variable(F)) },
            { make_shared<Variable>(Variable(T_)), make_shared<Variable>(Variable(F)),
                    make_shared<Word>(Word(ASTERISK)) },
            { make_shared<Word>(Word(EPSILON))},
            { make_shared<Word>(Word(RPAREN)), make_shared<Variable>(Variable(E)),
                    make_shared<Word>(Word(LPAREN)) },
            { make_shared<Word>(Word(ID)) }
    };

	vector<vector<int>> table {
		{ 0, -1, -1, 0, -1, -1 },
		{ -1, 1, -1, -1, 2, 2 },
		{ 3, -1, -1, 3, -1, -1 },
		{ -1, 5, 4, -1, 5, 5 },
		{ 7, -1, -1, 6, -1, -1 }
	};

	vector<shared_ptr<Symbol>> stack;
	vector<shared_ptr<Symbol>> accepted;
	
public:
	explicit Parser(ifstream& file) : inputFile(file) {}
	void parse();
	terminal nextToken ();
	void printLM();
};

#endif //PARSER_PARSER_H