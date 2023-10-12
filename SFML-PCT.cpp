#include<iostream>
#include"Game.h"


using namespace sf;
using namespace std;

int main() {
	//Init game engine
	Game game;

	//Game loop
	while (game.getWindowIsOpen())
	{
		game.update();
		game.render();
	}



	return 0;
}
