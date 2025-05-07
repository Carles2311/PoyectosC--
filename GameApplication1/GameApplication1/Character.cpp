#include "Character.h"
#include <iostream>
#include <string>
using namespace std;
Character::Character()
{
	name = "";
	hp = 0;
	damage = 0;
}
Character::Character(string name, int hp, int damage)
{
	this->name = name;
	this->hp = hp;
	this->damage = damage;
}
string Character::getName() {
	return name;
}
void Character::setName(string name) {
	this->name = name;
}
int Character::getHP() {
	return hp;
}
void Character::setHP(int hp) {
	this->hp = hp;
}
int Character::getDamage() {
	return damage;
}
void Character::setDamage(int damage) {
	this->damage = damage;
}
string Character::getStatus() {
	return string(name + " " + to_string(hp) + " " + to_string(damage));
}
void Character::attack(Character& c) {
	int vida = c.getHP() - getDamage();
	c.setHP(vida);
}