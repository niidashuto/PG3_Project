#pragma once
#include <stdio.h>
#include <array>

class Enemy
{
private:
	static bool isAlive_;

public:
	void SetAlive(bool isAlive);
	void Print();
	
};