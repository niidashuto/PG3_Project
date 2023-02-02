#pragma once

class Enemy
{
public:
	Enemy();
	~Enemy();

	//行動
	void Approach();
	void Shoot();
	void GetAway();

	//更新
	void Update();

	//描画
	void Draw();

private:
	static void (Enemy::* pFuncTable[])();

	//行動フェーズ
	int phase_;

};
