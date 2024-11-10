#include "Circle.h"
#include <numbers>

void Circle::Size()
{
	
	float pi = std::numbers::pi;

	float radius = 10.0f;

	area_ = 10.0f * 10.0f * pi;

}

void Circle::Draw()
{
	printf("円の面積は%fである\n", area_);
}
