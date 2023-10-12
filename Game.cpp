#include "Game.h"

void Game::initiazlizeVariables()
{
	this->window = nullptr;
}

void Game::initWindow()
{
	this->videoMode.getDesktopMode;
	this->window = new RenderWindow(this->videoMode, "Game 1", Style::Titlebar | Style::Close | Style::Resize);
}

Game::Game()
{

}

const bool Game::getWindowIsOpen() const
{
	return this->window->isOpen();
}



void Game::pollEvents()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case Event::Closed: 
			this->window->close();
			break;
		case Event::KeyPressed:
			if (this->ev.key.code==Keyboard::Escape)
			{
				this->window->close();
			}
			break;
		}
	}
}

void Game::update()
{
	this->pollEvents();
}

void Game::render()
{
	this->window->clear(Color(0,0,255,255));
	this->window->display();
}

Game::~Game() 
{
	delete this->window;
}
