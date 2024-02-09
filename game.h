#pragma once

class Game {
public:
	void  SetName(char* name);
	char* GetName();
private:
	char* name = {};
};
