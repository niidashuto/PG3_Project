#include "Enemy.h"

void Enemy::SetAlive(bool isAlive)
{ 
	isAlive_ = isAlive;
}

void Enemy::Print()
{
	if (isAlive_) { printf("ê∂ë∂\n"); }
	else { printf("è¡ñ≈\n"); }
}