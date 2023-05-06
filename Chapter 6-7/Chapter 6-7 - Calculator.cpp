///*
//Simple calculater.
//Developed by Roman Kurguz in 20.01.2021
//
//This program implements basic calculator expressions
//Input is from the cin-stream; output - to the stream cout.
//
//Functional:
//	'q'  - quit program
//	'='  - calculate expression
//Expression:
//	Term
//	Expr + Term
//	Expr - Term
//Term:
//	Primal_expression
//	Term * Primal_expression
//	Term / Primal_expression
//	Term % Primal_expression
//Primal_expression:
//	Number
//	(Expression)
//	- Primal_expression
//	+ Primal_expression
//Number:
//	Floating_point_literal
//*/
//#include <iostream>
//#include <vector>
//#include <string>
//#include <stdexcept>
//#include <math.h>
//using namespace std;
//class Variable {
//public:
//	string name;
//	double value;
//};
//vector<Variable> var_table;
//
//class Token {
//public:
//	char kind;
//	double value;
//};
//vector< Token> tok;
//const char magic_number = '8';
//const char quit = 'q';
//const char prompt = '>';
//
//int lexeme = -1;       // reading lexemes to calculate the result
//char renewal = 0;      // restart writing the expression
//double expression(); double term(); double primary(); void start(); double get_value(); void set_value();
//
//
//double get_value(string s) {
//	for (const Variable& v : var_table)
//	{
//		if (v.name == s)
//		{
//			return v.value;
//		}
//		else
//		{
//			cerr << "Error: undefine variable " << s << endl;
//		}
//	}
//}
//void set_value(string s, double d) {
//	for (Variable& v : var_table) {
//		if (v.name == s)
//		{
//			v.value = d;
//		}
//		else
//		{
//			cerr << "Error: undefine variable " << s << endl;
//		}
//
//	}
//}
//
//
//int factorial(int var) {
//	if (var < 0)
//	{
//		cerr << "Error: factorial of negetive number" << endl;
//		return 0;
//	}
//	if (var == 0)
//	{
//		return var + 1;
//	}
//	if (var == 1)
//	{
//		return var;
//	}
//	return var * factorial(var - 1);
//}
//
//double expression() {
//	double left = term();
//	lexeme++;
//	Token t = tok[lexeme];
//
//	while (true) {
//		switch (t.kind) {
//		case '+':
//			left += term();
//			lexeme++;
//			t = tok[lexeme];
//			break;
//		case '-':
//			left -= term();
//			lexeme++;
//			t = tok[lexeme];
//			break;
//		default:
//			lexeme--;
//			return left;
//		}
//	}
//}
//
//double term() {
//	double left = primary();
//	lexeme++;
//	Token t = tok[lexeme];
//	while (true)
//	{
//		switch (t.kind) {
//		case '*':
//			left *= primary();
//			lexeme++;
//			t = tok[lexeme];
//			break;
//		case '/':
//			double d;
//			d = primary();
//			if (d == 0) {
//				cerr << "Error: zero-dividing operation" << endl;
//			}
//			left /= d;
//			lexeme++;
//			t = tok[lexeme];
//			break;
//		case'%':
//			d = primary();
//			if (d == 0)
//			{
//				cerr << "Error: zero-dividing operation" << endl;
//			}
//			left = fmod(left, d);
//			lexeme++;
//			t = tok[lexeme];
//			break;
//		default:
//			lexeme--;
//			return left;
//		}
//	}
//}
//
//double primary() {
//	lexeme++;
//	Token t = tok[lexeme];
//	switch (t.kind) {
//	case '(':case '{':
//		double d;
//		d = expression();
//		lexeme++;
//		t = tok[lexeme];
//		if (!(t.kind == ')' || t.kind == '}')) {
//			cerr << "Error: nesessary ')'or '}'-operator" << endl;
//		}
//		return d;
//	case magic_number:
//		return t.value;
//	case '!':
//		double s;
//		s = expression();
//		if (s - int(s) == 0)
//		{
//			s = factorial(s);
//			return s;
//		}
//		else {
//			cerr << "Error: factorial of unint number" << endl;
//		}
//	case '-':
//		return -primary();
//	case '+':
//		return primary();
//	default:
//		cerr << "Error: nessesary a primary expression" << endl;
//	}
//}
//
//void no_points(vector<Token>& tok) {
//	vector <Token> no_points_vect;
//	double db_T = 0;
//	double dots = 1;
//	bool rational_num = true;
//
//	for (int i = 0; i < tok.size(); i++)
//	{
//		if (tok[i].kind == magic_number)
//		{
//			if (rational_num == true)
//			{
//				db_T = db_T * dots + tok[i].value;
//				dots = 10;
//			}
//			else
//			{
//				db_T += dots * tok[i].value;
//				dots *= 0.1;
//			}
//		}
//		else if (tok[i].kind != '.' && tok[i].kind != magic_number)
//		{
//			if (db_T != 0)
//			{
//				Token s;
//				s.value = db_T;
//				s.kind = magic_number;
//				no_points_vect.push_back(s);
//			}
//			else if (db_T == 0 && dots != 1)
//			{
//				Token s;
//				s.value = db_T;
//				s.kind = magic_number;
//				no_points_vect.push_back(s);
//			}
//			no_points_vect.push_back(tok[i]);
//			db_T = 0;
//			dots = 1;
//			rational_num = true;
//		}
//		else if (tok[i].kind == '.')
//		{
//			rational_num = false;
//			dots = 0.1;
//		}
//	}
//	tok = no_points_vect;
//	no_points_vect.clear();
//}
//Token get_token()//_________________________ reading lexemes
//{
//	Token t;
//	cin >> t.kind;
//	switch (t.kind) {
//	case quit:
//		exit(0);
//		break;
//	case '=':
//		renewal = '=';
//		tok.push_back(t);
//		no_points(tok);
//		cout << expression() << endl;
//		break;
//	case 'l':
//		/*declaration();*/
//		break;
//	default:
//		break;
//	}
//
//	switch (t.kind)
//	{
//	case '0': case '1':case '2':case '3': case '4': case '5': case '6': case '7': case '8': case '9':
//		t.value = t.kind - '0';
//		t.kind = magic_number;
//		break;
//	default:
//		break;
//	}
//	return t;
//}
//void start() {
//	try
//	{
//		while (true)
//		{
//			cout << endl << prompt << " ";
//			while (renewal != '=')
//			{
//				Token to = get_token();
//				tok.push_back(to);
//				if (renewal == '=')
//				{
//					tok.clear();
//				}
//			}
//			renewal = 0;
//			lexeme = -1;
//		}
//	}
//	catch (exception& e)
//	{
//		cerr << "Error: " << e.what() << endl;
//		renewal = 0;
//		lexeme = -1;
//		tok.clear();
//		start();
//	}
//}
//void main() {
//	cout << "Enter the expression. Input quit to exit programm." << endl
//		<< "Tap '=' and 'Enter' to calculate and start new input." << endl;
//	start();
//}