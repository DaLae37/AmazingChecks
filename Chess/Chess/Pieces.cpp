#include "Pieces.h"

Pieces::Pieces(int x, int y, bool isWhite)
{
	global = new gameTool();
	this->isWhite = isWhite;
	isSelected = false;
}

Pieces::~Pieces()
{
}