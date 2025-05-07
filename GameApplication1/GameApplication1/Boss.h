#pragma once
#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

class FinalBoss : public Character {

private:
	int da�oHabilidad;
	int vidaRecuperada;


public:
	FinalBoss();
	FinalBoss(string, int, int, int, int);



	int getDa�oHabilidad();
	void setDa�oHabilidad(int);

	int getVidaRecuperada();
	void setVidaRecuperada(int);
	void habilidadEspecial(Character&);
	void attack(Character&);
}; 
