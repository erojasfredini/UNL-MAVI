#include "Game.h"

using namespace std;
using namespace sf;

Game::Game(int ancho, int alto, string titulo)
{
	wnd = new RenderWindow(VideoMode(ancho, alto), titulo);
	wnd->setVisible(true);
	fps = 60;
	wnd->setFramerateLimit(fps);
	frameTime = 1.0f / fps;
}

void Game::Loop()
{
	while(wnd->isOpen())
	{
		wnd->clear(clearColor);
		DoEvents();
		UpdateGame();
		DrawGame();
		wnd->display();
	}
}

void Game::UpdateGame()
{
	// TODO
}

void Game::DrawGame()
{
	// TODO
}

void Game::DoEvents()
{
	Event evt;
	while(wnd->pollEvent(evt))
	{
		switch(evt.type)
		{
			case Event::Closed:
				wnd->close();
				break;
		}
	}
}

Game::~Game(void)
{ }