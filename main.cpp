#include <iostream>

using namespace std;

// �ڷ��� �޸� ���� ���� ũ�� ����Ѵ�.
// ���ڸ� �����ϰ� ����� �� �뵵�� �ٲ� 
// 0~255, 8 bit -> 7bit -127~0~126
// [1][][][] [][][][] ����
// [0][][][] [][][][] ���
// int cpu, �����Ϸ����� ũ�Ⱑ �ٸ�
// [][][][][][][][] -> ���� -> ����
// bit -> byte(8bit) -> byte ascii
// ���� ǥ��� �Ľ�Į ǥ���

int main()
{
	// char
	// int
	// float
	int Number1 = 5;
	int Number2 = 4;
	float A = (float)5.5f;
	int B = (int)A;
	// double�� ��� �ð��� float���� 2�� �� �ɸ�

	// +, -, *, /, %
	// ���� ������
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