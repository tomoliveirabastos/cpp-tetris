#include "Game.h"
#include <raylib.h>

int main() {

	const int screenHeight = 450;
	const int screenWidth = 800;
	std::string title = "Tetris";
	const int fps = 60;

	Game game{
		screenWidth,
		screenHeight,
		fps,
		title
	};

	while (!game.GameShoulClose()) {
		game.Tick();
	}

	return 0;
}