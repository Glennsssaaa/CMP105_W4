#pragma once
#include "SFML/Graphics.hpp"
#include "Framework/Input.h"
#include "Framework/GameObject.h"

class Background : public GameObject
{
public:
	Background();
	~Background();

	
	sf::View backView;

	void handleInput(float dt);

};

