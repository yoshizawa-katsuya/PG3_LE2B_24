#pragma once

class Enemy
{
public:

	void Update();

	//接近
	void AccessUpdate();

	//射撃
	void ShootingUpdate();

	//離脱
	void EliminationUpdate();

private:

	enum class Phase {
		Access,
		Shooting,
		Elimination
	};

	Phase phase_ = Phase::Access;

	//メンバ関数ポインタのテーブル
	static void (Enemy::*FuncTable[])();

};

