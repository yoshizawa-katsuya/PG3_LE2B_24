#include "Enemy.h"
#include <stdio.h>

//フェーズの関数テーブル
void (Enemy::*Enemy::FuncTable[])() = {
	&Enemy::AccessUpdate,
	&Enemy::ShootingUpdate,
	&Enemy::EliminationUpdate
};

void Enemy::Update()
{

	//メンバ関数ポインタに入っている関数を呼び出す
	(this->*FuncTable[static_cast<size_t>(phase_)])();

}

void Enemy::AccessUpdate()
{

	printf("接近\n");

	phase_ = Phase::Shooting;

}

void Enemy::ShootingUpdate()
{

	printf("射撃\n");

	phase_ = Phase::Elimination;

}

void Enemy::EliminationUpdate()
{

	printf("離脱\n");

}
