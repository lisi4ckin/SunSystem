#include "libs.h"
#include "Planet.h"
#include "Satellite.h"
using namespace sf;

Satellite::Satellite(int x, int y, int radius, int radiusOrbit, float speed) : Planet(x, y, radius, radiusOrbit, speed) {
	this->radius = radius;
	this->x = Planet::displayX;
	this->y = Planet::displayY;
	this->speed = speed * M_PI / 180;
	this->radiusOrbit = radiusOrbit;
	this->circleShape.setFillColor(Color::White);
	this->circleShape.setRadius(radius);
	this->circleShape.setOrigin(radius, radius);
}

void Satellite::Move(int x, int y) {
	this->displayX = ceil(x + radiusOrbit * cos(angle));
	this->displayY = ceil(y - radiusOrbit * sin(angle));
	this->angle += speed;
}

void Satellite::Draw(RenderWindow& window) {
	this->circleShape.setPosition(this->displayX, this->displayY);
	window.draw(this->circleShape);
}