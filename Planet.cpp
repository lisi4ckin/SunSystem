#include "libs.h"
#include "Planet.h"
using namespace sf;

Planet::Planet(int x, int y, int radius, int radiusOrbit, float speed) {
	this->radius = radius;
	this->radiusOrbit = radiusOrbit;
	this->speed = speed * M_PI / 180;
	this->angle = 0.f;
	this->x = x - radius;
	this->y = y - radius;
	this->circleShape.setFillColor(Color::Yellow);
	this->circleShape.setRadius(radius);
}

void Planet::Move() {
	this->displayX = ceil(x + radiusOrbit * cos(angle));
	this->displayY = ceil(y - radiusOrbit * sin(angle));
	this->angle += speed;
}

void Planet::Draw(RenderWindow& window) {
	Move();
	this->circleShape.setPosition(this->displayX, this->displayY);
	window.draw(this->circleShape);
}