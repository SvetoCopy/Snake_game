#include <iostream>
#include "control.h"
#include "view.h"

int main()
{
    Game         game;
    HumanControl ctrl;
    TextView     view;

    ctrl.StartInput(&game);
    view.Draw(&game);
}