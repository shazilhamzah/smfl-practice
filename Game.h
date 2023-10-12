#pragma once

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

using namespace sf;

class Game
{
private:

	//Window
	RenderWindow* window;
	Event ev;
	VideoMode videoMode;
	

	void initiazlizeVariables();
	void initWindow();


public:
	//Constructors / Destructors
	Game();
	virtual ~Game();
	
	

	//Accessors
	const bool getWindowIsOpen() const;

	//Functions
	
	void pollEvents();
	void update();
	void render();
};

