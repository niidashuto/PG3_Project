#pragma once
#include "IShape.h"

//�h���N���X
class Rectangle : public IShape
{
public:
	void Size()override;
	void Draw()override;
};

