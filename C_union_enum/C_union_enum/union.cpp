#include <iostream>

int main() {
	//����ü(union)
	//���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.
	//�ѹ��� �Ѱ����� �����͸� ������ �����ϴ�.
	//������ ������ ���� �սǵȴ�.

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