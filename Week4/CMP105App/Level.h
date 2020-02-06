#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Cursor.h"
#include "Background.h"
#include <SFML/Graphics/View.hpp>

class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();


private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	sf::View view;

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	GameObject testSprite;
	sf::Texture texture;
	sf::Texture playerTexture;
	sf::Texture enemyTexture;
	sf::Texture enemy2Texture;
	sf::Texture cursorTexture;
	sf::Texture backgroundTexture;

	Player player;

	Enemy enemy;
	Enemy enemy2;

	Cursor cursor;

	Background background;
};