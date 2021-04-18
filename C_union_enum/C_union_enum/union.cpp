#include <iostream>

int main() {
	//공용체(union)
	//서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
	//한번에 한가지의 데이터만 보관이 가능하다.
	//이전에 데이터 값이 손실된다.

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};
	
	MyUnion test;
	test.intVal = 3;
	std::cout << "intVal" << test.intVal << std::endl;
	test.longVal = 33;
	std::cout << "intVal" << test.intVal << std::endl;
	std::cout << "longVal" << test.longVal << std::endl;
	test.floatVal = 3.3;
	std::cout << "intVal" << test.intVal << std::endl;
	std::cout << "longVal" << test.longVal << std::endl;
	std::cout << "floatVal" << test.floatVal << std::endl;

}