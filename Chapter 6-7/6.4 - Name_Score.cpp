//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//class Token {
//public:
//	char kind;
//	double value;
//};
//class Token_stream {
//public:
//	Token get();
//	void putback(Token t);
//private:
//	bool full{ false };
//	Token buffer;
//};
//void Token_stream::putback(Token t) {
//	buffer = t;
//	full = true;
//}
//Token Token_stream::get() {
//	if (full)
//	{
//		full = false;
//		return buffer;
//	}
//	char ch;
//	cin >> ch;
//	switch (ch)
//	{
//	case';':
//	case 'q':
//	case '(':case')':case'+':case '-': case'*':case'/':
//		return Token{ ch };
//	case'.':case '0': case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9': {
//		cin.putback(ch);
//		double val;
//		cin >> val;
//		return Token{ '8', val };
//	}
//	default:
//		cerr << "Wrong lexeme" << endl;
//		break;
//	}
//}
//Token_stream ts;
//
//int main() {
//	
//	Token t = ts.get();
//	
//	ts.putback(t);
//
//	
//	system("pause");
//	return 0;
//}
