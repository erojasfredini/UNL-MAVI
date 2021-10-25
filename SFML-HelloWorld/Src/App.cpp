#include "Game.h"
#include <tchar.h>

using namespace sf;

int _tmain(int argc, _TCHAR* argv[])
{
	Game *Juego;
	Juego = new Game(800, 600, "SFML Hello World");
	Juego->Loop();

	return 0;
}