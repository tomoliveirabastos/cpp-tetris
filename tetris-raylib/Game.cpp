#include "Game.h"
#include <raylib.h>
#include <assert.h>

Game::Game(int width, int height, int fps, std::string title) {
	SetTargetFPS(fps);
	assert(!IsWindowReady());
	InitWindow(width, height, title.c_str());
}

Game::~Game() noexcept
{
	assert(GetWindowHandle());
	CloseWindow();
}

void Game::Tick() {
	BeginDrawing();
	Update();
	Draw();
	EndDrawing();
}

void Game::Draw() {
	ClearBackground(RAYWHITE);
}

void Game::Update() {

}
bool Game::GameShoulClose() const {
	return WindowShouldClose();
}
