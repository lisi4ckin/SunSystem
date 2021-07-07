#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class tObject
{
protected:
	int x;
	int y;
public:
	virtual void Move() = 0;
	virtual void Draw(RenderWindow& window) = 0;
};

