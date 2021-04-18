#include <iostream>

using namespace std;

int main() {
	//열거제(enum)
	//기호 상수를 만드는 것에 대한 또다른 방법.

	enum spectrum { red=0, orange=2, yellow=4, green,
	blue, violet, indigo, ultraviolet}; // 저장될때 상수로 저장된다. //선언하지않은 데이터 = 전에값 + 1;
	/*
	1. spectrum을 새로운 데이터형 이름으로 만듭니다.
	2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각
	나타내는 기호 상수로 만듭니다. 
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