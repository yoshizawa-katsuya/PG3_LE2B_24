#include <stdio.h>
#include "MyClass.h"
#include <memory>

int main() {

	std::unique_ptr<MyClass<int, int>> class1 = std::make_unique<MyClass<int, int>>(9, 5);
	std::unique_ptr<MyClass<float, float>> class2 = std::make_unique<MyClass<float, float>>(1.7f, 1.1f);
	std::unique_ptr<MyClass<double, double>> class3 = std::make_unique<MyClass<double, double>>(12.9, 3.6);
	std::unique_ptr<MyClass<int, float>> class4 = std::make_unique<MyClass<int, float>>(2, 5.7f);
	std::unique_ptr<MyClass<double, int>> class5 = std::make_unique<MyClass<double, int>>(3.6, 8);
	std::unique_ptr<MyClass<float, double>> class6 = std::make_unique<MyClass<float, double>>(7.8f, 7.81);

	printf("%d\n", class1->Min());
	printf("%f\n", class2->Min());
	printf("%lf\n", class3->Min());
	printf("%d\n", class4->Min());
	printf("%lf\n", class5->Min());
	printf("%f\n", class6->Min());

	return 0;
}