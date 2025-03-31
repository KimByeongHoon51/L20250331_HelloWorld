#include <iostream>

using namespace std;

// 자료형 메모리 공간 일정 크기 사용한다.
// 숫자를 저장하고 사용할 때 용도가 바뀜 
// 0~255, 8 bit -> 7bit -127~0~126
// [1][][][] [][][][] 음수
// [0][][][] [][][][] 양수
// int cpu, 컴파일러마다 크기가 다름
// [][][][][][][][] -> 숫자 -> 문자
// bit -> byte(8bit) -> byte ascii
// 변수 표기는 파스칼 표기법

int main()
{
	// char
	// int
	// float
	int Number1 = 5;
	int Number2 = 4;
	float A = (float)5.5f;
	int B = (int)A;
	// double은 계산 시간이 float보다 2배 더 걸림

	// +, -, *, /, %
	// 이항 연산자
	int number3 = Number1 + Number2;
	cout << number3 << endl;

	int number4 = Number1 - Number2;
	cout << number4 << endl;

	int number5 = Number1 * Number2;
	cout << number5 << endl;

	int number6 = Number1 / Number2;
	cout << number6 << endl;

	int number7 = Number1 / Number2;
	cout << number7 << endl;

	return 0;
}