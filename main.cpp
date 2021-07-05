#include "libs.h"
#include "Planet.h"
using namespace sf;
using namespace std;

void initPlanet(vector<Planet>& planets) {
	for (int i = 0; i < 3; i++) {
		Planet planet(960, 540, 45, 0 + i * 100, rand() % 3);
		planets.push_back(planet);
	}
}

int main() {
	vector<Planet>Planets;
	initPlanet(Planets);
	RenderWindow window(VideoMode(1920, 1080), "test");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}
		window.clear();
		for (int i = 0; i < Planets.size(); i++) {
			Planets[i].Draw(window);
		}
		window.display();
		Sleep(10);
	}
	return 0;
}