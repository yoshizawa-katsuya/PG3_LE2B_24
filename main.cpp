#include <stdio.h>
#include "math.h"

int Recursive(int n) {
	if (n <= 1) {
		return 100;
	}

	return (Recursive(n - 1) * 2 - 50);
}

int main() {

	int hour = 9;
	
	int normal = 1072 * hour;

	int recorsive = Recursive(hour);

	printf("一般的な賃金体系 %d\n", normal);

	printf("再帰的な賃金体系 %d\n", recorsive);

	if (normal > recorsive) {
		printf("一般的な賃金体系の方が儲かる");
	}
	else if (recorsive > normal) {
		printf("再帰的な賃金体系の方が儲かる");
	}

	return 0;
}