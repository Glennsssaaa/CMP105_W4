#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"
#include "SFML\Graphics.hpp"

class Cursor : public GameObject
{
public:
	Cursor();
	~Cursor();

	void handleInput(float dt, int mouseX, int mouseY);
private:
	sf::Vector2f mousePos;
};

