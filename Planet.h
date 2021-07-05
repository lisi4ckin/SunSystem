#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Planet
{
private:
	int x;
	int y;
	int displayX;
	int displayY;
	int radius;
	int radiusOrbit;
	float speed;
	float angle;
	CircleShape circleShape;
public:
	Planet(int x, int y, int radius, int radiusOrbit, float speed);
	void Move();
	void Draw(RenderWindow& window);
};