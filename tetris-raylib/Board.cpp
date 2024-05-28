#include "Board.h"
#include <assert.h>

Board::Cell::Cell() : bExists(false), c(WHITE) {
	bExists(false);
	c(WHITE);
}

void Board::Cell::SetColor(Color c_in) {
	c = c_in;
}

void Board::Cell::Remove() {
	bExists = false;
}

Board::Board(int x_in, int y_in, int width_in, int height_in, int cellsize_in)
	: x(x_in), y(y_in), width(width_in), height(height_in), cellsize(cellsize_in)
{
	cells.resize(width * height);

}
