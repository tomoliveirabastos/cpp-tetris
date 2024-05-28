#pragma once
#include <string>

class Game {

public:
	Game(int width, int height, int fps, std::string title);
	Game(const Game& other) = delete;
	Game operator = (const Game& other) = delete;
	~Game() noexcept;
	void Tick();
	void Draw();
	void Update();
	bool GameShoulClose() const;
};