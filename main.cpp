#include <stdio.h>
#include <memory>
#include "Enemy.h"

int main() {

	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	for (int i = 0; i < 3; i++) {
		enemy->Update();
	}

	return 0;
}