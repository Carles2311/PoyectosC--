#include "Character.h"
#include <iostream>
#include <string>
#include "Boss.h"
using namespace std;

FinalBoss::FinalBoss() {}

FinalBoss::FinalBoss(string nombre, int hp, int damage, int da�oHabilidad,
int vidaRecuperada ) : Character(nombre, hp, damage) {  da�oHabilidad;
 vidaRecuperada; }

int FinalBoss::getVidaRecuperada() {
	return vidaRecuperada;
}
void FinalBoss::setVidaRecuperada(int vidaRecuperada) {
	this->vidaRecuperada = vidaRecuperada;
}
int FinalBoss::getDa�oHabilidad() {
	return da�oHabilidad;
}
void FinalBoss::setDa�oHabilidad(int da�oHabilidad) {
	this->da�oHabilidad = da�oHabilidad;
}


void FinalBoss::attack(Character& c) {
	int vida = c.getHP() - getDa�oHabilidad();
	if (getHP() < 75) {
		habilidadEspecial(c);
	}
	c.setHP(vida);
}
void FinalBoss:: habilidadEspecial(Character& c) {
	int vida = c.getHP() - getDa�oHabilidad();
	c.setHP(vida);
	int vidaNueva = getHP() + getVidaRecuperada();
	setHP(vidaNueva);
}