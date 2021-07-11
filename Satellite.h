#pragma once
#include "tObject.h"
#include "Planet.h"
class Satellite : public Planet
{
private:
	CircleShape circleShape;
public:
	Satellite(int x, int y, int radius, int radiusOrbit, float speed);
	void Move(int x, int y);
	void Draw(RenderWindow& window);
};
