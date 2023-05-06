// extern int x -- использование глобальной переменной х в другой файле проекта


#include "Namespaces.cpp"
void main() {
	X::var = 7;
	X::print();
	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();
}