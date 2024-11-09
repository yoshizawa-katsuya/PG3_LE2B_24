#include <stdio.h>
#include <memory>
#include <vector>
#include "Dog.h"
#include "Cat.h"

int main() {

	std::vector<std::unique_ptr<Animal>> animals;
	animals.resize(2);

	for (uint32_t i = 0; i < 2; i++) {
		if (i < 1) {
			animals[i] = std::make_unique<Dog>();
		}
		else {
			animals[i] = std::make_unique<Cat>();
		}
	}

	for (uint32_t i = 0; i < 2; i++) {
		animals[i]->Sing();
	}

	return 0;
}