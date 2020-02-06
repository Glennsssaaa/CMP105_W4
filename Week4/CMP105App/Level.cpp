#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	playerTexture.loadFromFile("gfx/Link.png");

	player.setTexture(&playerTexture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(300, 300);
	player.setInput(input);

	enemyTexture.loadFromFile("gfx/Goomba.png");

	enemy.setTexture(&enemyTexture);
	enemy.setSize(sf::Vector2f(100, 100));
	enemy.setPosition(600, 300);
	enemy.setWindow(window);

	enemy2Texture.loadFromFile("gfx/Beach_Ball.png");
	enemy2.setTexture(&enemy2Texture);
	enemy2.setSize(sf::Vector2f(100, 100));
	enemy2.setPosition(800, 150);
	enemy2.setWindow(window);

	cursorTexture.loadFromFile("gfx/icon.png");
	cursor.setTexture(&cursorTexture);
	window->setMouseCursorVisible(false);
	cursor.setSize(sf::Vector2f(50,50));
	
	backgroundTexture.loadFromFile("gfx/Level1_1.png");

	background.setTexture(&backgroundTexture);
	background.setSize(sf::Vector2f(11038, 675));
	background.setInput(input);
}

Level::~Level()
{

}

int mouseX;
int mouseY;
// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	player.handleInput(dt);

	mouseX = input->getMouseX();
	mouseY = input->getMouseY();
	cursor.handleInput(dt,mouseX,mouseY);

	background.handleInput(dt);
	view = background.backView;
	window->setView(view);
}

// Update game objects
void Level::update(float dt)
{
	enemy.update(dt);
	enemy2.update(dt);	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);

	window->draw(testSprite);

	window->draw(player);

	window->draw(enemy);

	window->draw(enemy2);

	window->draw(cursor);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}