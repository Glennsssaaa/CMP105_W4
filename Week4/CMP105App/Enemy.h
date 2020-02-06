#pragma once

#include "Framework/GameObject.h"
#include "Framework/Input.h"
#include "SFML\Graphics.hpp"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();
	
	void setWindow(sf::RenderWindow* win);

	void update(float dt);

private:
	sf::RenderWindow* window;
	sf::Vector2u area;
};

