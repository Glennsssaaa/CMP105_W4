#include "Enemy.h"

Enemy::Enemy() {

}

Enemy::~Enemy() {

}

int posx = 1;
int posy = 1;

void Enemy::update(float dt) {
	
	area = window->getSize();

	if (getPosition().x <= 0) {
		posx = 1;
	}
	else if(getPosition().x >= area.x - 100){
		posx = 2;
	}

	if (posx == 1) {
		velocity.x = 100.0f;
		move(velocity * dt);
	}
	else if (posx == 2) {
		velocity.x = 100.0f;
		move(-velocity * dt);
	}

	velocity.x = 0.0f;

	if (getPosition().y <= 0) {
		posy = 1;
	}
	else if (getPosition().y >= area.y - 100) {
		posy = 2;
	}

	if (posy == 1) {
		velocity.y = 100.0f;
		move(velocity * dt);
	}
	else if (posy == 2) {
		velocity.y = 100.0f;
		move(-velocity * dt);
	}

	velocity.y = 0;
}

void Enemy::setWindow(sf::RenderWindow* win) {
	window = win;
}