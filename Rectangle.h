#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:

	void Size() override;

	void Draw() override;

};

