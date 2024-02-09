#pragma once
#include "iostream"
#include "game.h"

class TextView {
public:
	void Draw(Game* game);
private:
	size_t	 height = 0;
	size_t   weight = 0;
};