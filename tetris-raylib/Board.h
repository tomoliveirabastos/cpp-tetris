#pragma once
#include <raylib.h>
#include <vector>
class Board {
private:
	class Cell {
	public:
		Cell();
		void SetColor(Color c);
		void Remove();
	private:
		bool bExists;
		Color c;
	};
public:
	Board(int x, int y, int width, int height, int cellsize);
private:
	std::vector<Cell> cells;
	const int width;
	const int height;
	const int cellsize;
	int x;
	int y;
};