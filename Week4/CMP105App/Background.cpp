#include "Background.h"

Background::Background() {
	backView.setSize(sf::Vector2f(1200, 675));
	backView.setCenter(sf::Vector2f(600, 337.5));
}

Background::~Background() {

}

void Background::handleInput(float dt) {

	if (input->isKeyDown(sf::Keyboard::Right) && backView.getCenter().x <= 10438) {
		backView.move(1.0f, 0);
	}
	if (input->isKeyDown(sf::Keyboard::Left) && backView.getCenter().x >= 600) {
		backView.move(-1.0f, 0);
	}	
}


