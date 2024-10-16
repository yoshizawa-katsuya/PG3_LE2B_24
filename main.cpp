#include <stdio.h>
#include "math.h"
#include <random>
#include <windows.h>
#include <functional>

void SetTimeout(std::function<void()> func, int delay) {

	Sleep(delay);

	func();

}

int main() {

	int num;
	int dice;

	std::function<void()> Dice = [&]() {

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
	};

	std::function<void()> Input = [&]() {

		printf("偶数なら0、奇数なら1を入力\n");

		scanf_s("%d", &num);

		std::random_device rnd;
		std::mt19937 mt(rnd());
		std::uniform_int_distribution<> distribution(1, 6);

		dice = distribution(mt);

		SetTimeout(Dice, 3000);
	};

	Input();

	return 0;
}