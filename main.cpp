#include <stdio.h>
#include <memory>
#include "Rectangle.h"
#include "Circle.h"
#include <vector>

int main() {

	std::vector<std::unique_ptr<IShape>> shapes;
	shapes.resize(2);

	for (uint32_t i = 0; i < 2; i++) {
		if (i < 1) {
			shapes[i] = std::make_unique<Circle>();
		}
		else {
			shapes[i] = std::make_unique<Rectangle>();
		}
	}
	
	for (uint32_t i = 0; i < 2; i++) {
		shapes[i]->Size();
		shapes[i]->Draw();
	}

	return 0;
}