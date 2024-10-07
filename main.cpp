#include <stdio.h>
#include "math.h"
#include <random>
#include <windows.h>

typedef void (*PFunc)(int, int);

void Dice(int num, int dice) {

	

	if (num == 0) {
		if (dice % 2 == 0) {
			printf("サイコロ %d 正解\n", dice);
		}
		else {
			printf("サイコロ %d 不正解\n", dice);
		}
	}
	else if (num == 1) {
		if (dice % 2 == 0) {
			printf("サイコロ %d 不正解\n", dice);
		}
		else {
			printf("サイコロ %d 正解\n", dice);
		}
	}

	return;
}

void Input(PFunc p) {

	printf("偶数なら0、奇数なら1を入力\n");

	int num;

	scanf_s("%d", &num);

	std::random_device rnd;
	std::mt19937 mt(rnd());
	std::uniform_int_distribution<> distribution(1, 6);

	int dice = distribution(mt);

	Sleep(3000);

	p(num, dice);

}

int main() {

	PFunc p;
	p = Dice;

	Input(p);

	return 0;
}