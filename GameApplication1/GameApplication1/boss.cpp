#include "Character.h"
#include <iostream>
#include <string>
#include "Boss.h"
using namespace std;

FinalBoss::FinalBoss() {}

FinalBoss::FinalBoss(string nombre, int hp, int damage, int dañoHabilidad,
int vidaRecuperada ) : Character(nombre, hp, damage) {  dañoHabilidad;
 vidaRecuperada; }

int FinalBoss::getVidaRecuperada() {
	return vidaRecuperada;
}
void FinalBoss::setVidaRecuperada(int vidaRecuperada) {
	this->vidaRecuperada = vidaRecuperada;
}
int FinalBoss::getDañoHabilidad() {
	return dañoHabilidad;
}
void FinalBoss::setDañoHabilidad(int dañoHabilidad) {
	this->dañoHabilidad = dañoHabilidad;
}


void FinalBoss::attack(Character& c) {
	int vida = c.getHP() - getDañoHabilidad();
	if (getHP() < 75) {
		habilidadEspecial(c);
	}
	c.setHP(vida);
}
void FinalBoss:: habilidadEspecial(Character& c) {
	int vida = c.getHP() - getDañoHabilidad();
	c.setHP(vida);
	int vidaNueva = getHP() + getVidaRecuperada();
	setHP(vidaNueva);
}