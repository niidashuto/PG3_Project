#pragma once
#include "IShape.h"

//�h���N���X
class Circle : public IShape
{
public:
	void Size()override;
	void Draw()override;
};
