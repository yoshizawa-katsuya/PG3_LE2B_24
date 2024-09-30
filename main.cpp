#include <stdio.h>
#include "math.h"


int main() {


	printf("%d\n", Min<int>(93, 128));
	printf("%f\n", Min<float>(78.5f, 12.1f));
	printf("%lf\n", Min<double>(34.8, 67.9));
	printf("%c\n", Min<char>('a', 't'));

	return 0;
}