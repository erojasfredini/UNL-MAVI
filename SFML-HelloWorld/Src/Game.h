#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Game
{
private:
	// Propiedades de la ventana
	int alto;
	int ancho;
	sf::RenderWindow* wnd;
	sf::Color clearColor;

	// Tiempo de frame
	float frameTime;
	int fps;

public:

	// Constructores, destructores e inicializadores
	Game(int ancho, int alto, std::string titulo);
	~Game(void);

	// Main game loop
	void Loop();
	void DrawGame();
	void UpdateGame();
	void DoEvents();
};

