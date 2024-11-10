#include "Rectangle.h"

void Rectangle::Size()
{

	float width = 10.0f;
	float height = 20.0f;

	area_ = width * height;

}

void Rectangle::Draw()
{
	printf("矩形の面積は%fである\n", area_);
}
