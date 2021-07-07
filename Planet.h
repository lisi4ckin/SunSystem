#pragma once
#include "tObject.h"
#include <SFML/Graphics.hpp>
using namespace sf;
class Planet : public tObject
{
protected:
	int radius;
	int radiusOrbit;
	float speed;
	float angle;
	int displayX;
	int displayY;
private:
	CircleShape circleShape;
public:
	Planet(int x, int y, int radius, int radiusOrbit, float speed);
	void Move();
	void Draw(RenderWindow& window);
};