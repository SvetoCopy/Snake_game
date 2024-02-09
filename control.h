#pragma once
#include "game.h"
#include "stdlib.h"
#include "iostream"
#include "assert.h"

//int MAX_HEADER_NAME_LEN = 100;

class HumanControl {
public:
	char* GetName();
	void  StartInput(Game* game);
};