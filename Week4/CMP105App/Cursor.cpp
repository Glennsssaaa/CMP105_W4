#include "Cursor.h"

Cursor::Cursor() {

}

Cursor::~Cursor() {

}

void Cursor::handleInput(float dt, int mouseX, int mouseY) {	
	setPosition(mouseX, mouseY);
}