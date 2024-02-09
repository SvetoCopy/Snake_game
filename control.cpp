#include "control.h"

char* HumanControl::GetName() {
	char* name = (char*)calloc(100, sizeof(char));

	std::cin >> name;

	return name;
}

void HumanControl::StartInput(Game* game) {
	
	assert(game != nullptr);

	game->SetName(GetName());
}