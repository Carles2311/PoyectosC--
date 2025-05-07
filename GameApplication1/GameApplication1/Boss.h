#pragma once
#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

class FinalBoss : public Character {

private:
	int dañoHabilidad;
	int vidaRecuperada;


public:
	FinalBoss();
	FinalBoss(string, int, int, int, int);



	int getDañoHabilidad();
	void setDañoHabilidad(int);

	int getVidaRecuperada();
	void setVidaRecuperada(int);
	void habilidadEspecial(Character&);
	void attack(Character&);
}; 
