#include <iostream>

using namespace std;

int main() {
	//������(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.

	enum spectrum { red=0, orange=2, yellow=4, green,
	blue, violet, indigo, ultraviolet}; // ����ɶ� ����� ����ȴ�. //������������ ������ = ������ + 1;
	/*
	1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
	2. red, orange, yellow.. 0�������� 7���� ���� ���� ����
	��Ÿ���� ��ȣ ����� ����ϴ�. 
	*/

	//spectrum a = orange + yellow;
	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3; 
	cout << b << endl;

	return 0;
}