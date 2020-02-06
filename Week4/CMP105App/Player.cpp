#include "Player.h"

Player::Player() {
	
}

Player::~Player() {

}

void Player::handleInput(float dt) {
	if (input->isKeyDown(sf::Keyboard::D)) {
		velocity.x = 100.0f;
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::A)) {
		velocity.x = -100.0f;
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::W)) {
		velocity.y = -100.0f;
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::S)) {
		velocity.y = 100.0f;
		move(velocity * dt);
	}
	velocity.x = 0.0f;
	velocity.y = 0.0f;
}