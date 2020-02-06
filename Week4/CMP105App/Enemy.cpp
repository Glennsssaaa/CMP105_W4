#include "Enemy.h"

Enemy::Enemy() {

}

Enemy::~Enemy() {

}

int pos=0;

void Enemy::update(float dt) {
	
	area = window->getSize();

	if (getPosition().x <= 0) {
		pos = 1;
	}
	else if(getPosition().x >= area.x){
		pos = 2;
	}

	if (pos == 1) {
		velocity.x = 100.0f;
		move(velocity * dt);
	}
	else if (pos == 2) {
		velocity.x = 100.0f;
		move(-velocity * dt);
	}

	velocity.x = 0;
}

void Enemy::setWindow(sf::RenderWindow* win) {
	window = win;
}