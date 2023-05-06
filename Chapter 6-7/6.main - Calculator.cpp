#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Token {
public:
	char kind;
	double value;
};
class Token_stream {
public:


private:


};
vector< Token> tok;
int lexeme = -1;
double expression(); double term(); double primary();

int factorial(int var) {
	if (var == 0)
	{
		return var+1;
	}
	if (var == 1)
	{
		return var;
	}
	return var * factorial(var - 1);
}

double expression() {
	double left = term();
	lexeme++;
	Token t = tok[lexeme];

	while (true) {
		switch (t.kind) {
		case '+':
			left += term();
			lexeme++;
			t = tok[lexeme];
			break;
		case '-':
			left -= term();
			lexeme++;
			t = tok[lexeme];
			break;
		default:
			lexeme--;
			return left;
		}
	}
}

double term() {
	double left = primary();
	lexeme++;
	Token t = tok[lexeme];
	while (true)
	{
		switch (t.kind) {
		case '*':
			left *= primary();
			lexeme++;
			t = tok[lexeme];
			break;
		case '/':
			double d;
		    d = primary();
			if (d == 0) {
				cerr << "Error: zero-dividing operation" << endl;
				exit(0);
			}
			left /= d;
			lexeme++;
			t = tok[lexeme];
			break;
		default:
			lexeme--;
			return left;
		}
	}
}

double primary() {
	lexeme++;
	Token t = tok[lexeme];
	switch (t.kind) {
	case '(':case '{':
		double d;
		d = expression();
		lexeme++;
		t = tok[lexeme];
		if (!(t.kind == ')' || t.kind == '}')) {
			cerr << "Error: nesessary ')'or '}'-operator" << endl;
			exit(0);
		}
		return d;
	case '8':
		return t.value;
	case '!':
		double s;
		s = expression();
		if (s - int(s) == 0)
		{
			s = factorial(s);
			return s;
		}
		else {
			cerr << "Error: factorial of unint number" << endl;
			exit(0);
		}
	default: 
		cerr << "Error: nessesary a primary expression" << endl;
		exit(0);
	}
}

void no_points(vector<Token>& tok) {
	vector <Token> no_points_vect;
	Token s;
	double db_T = 0;
	double dots = 1;
	//double var_after_dot = 0.1;
	bool var_before_dot = true;
	for (int i = 0; i < tok.size(); i++)
	{
		if (tok[i].value == 0 && tok[i + 1].kind != '.')
		{
			no_points_vect.push_back(tok[i]);
		}
		else if (tok[i].kind == '8')
		{
			if (var_before_dot == true)
			{
				db_T *= dots;
				db_T += tok[i].value;
				dots *= 10;
			}
			else
			{
				tok[i].value *= dots;
				db_T += tok[i].value;
				dots *= 0.1;
			}
		}
		else if (tok[i].kind != '.' && tok[i].kind != '8')
		{
			if (db_T != 0)
			{
				s.kind = '8';
				s.value = db_T;
				no_points_vect.push_back(s);
			}
			no_points_vect.push_back(tok[i]);
			db_T = 0;
			dots = 1;
			var_before_dot = true;
		}
		else
		{
			var_before_dot = false;
			dots = 0.1;
		}
	}
	tok = no_points_vect;
	no_points_vect.clear();
}

Token get_token()										// reading lexemes
{
	Token t;
	cin >> t.kind;
	if (!((t.kind == '+') || (t.kind == '-') || (t.kind == '/') ||
		(t.kind == '*') || (t.kind == '.') || (t.kind == '(') || 
		(t.kind == ')') || (t.kind == '{') || (t.kind == '}') || 
		(t.kind == '!'))) { // || (t.kind != '%')
		// setting t.king and t.value according manual	
		switch (t.kind)
		{
		case '0':
			t.value = 0;
			t.kind = '8';
			break;
		case '1':
			t.value = 1;
			t.kind = '8';
			break;
		case '2':
			t.value = 2;
			t.kind = '8';
			break;
		case '3':
			t.value = 3;
			t.kind = '8';
			break;
		case '4':
			t.value = 4;
			t.kind = '8';
			break;
		case '5':
			t.value = 5;
			t.kind = '8';
			break;
		case '6':
			t.value = 6;
			t.kind = '8';
			break;
		case '7':
			t.value = 7;
			t.kind = '8';
			break;
		case '8':
			t.value = 8;
			t.kind = '8';
			break;
		case '9':
			t.value = 9;
			t.kind = '8';
			break;
		default:
			break;
		}
	}
	return t;
}

int main() {
	while (cin)
	{
		Token to = get_token();
		tok.push_back(to);
	}

	no_points(tok);

	cout << " = "<< expression() << endl;
	return 0;
}