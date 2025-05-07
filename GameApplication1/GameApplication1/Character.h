#pragma once

#include <iostream>
using namespace std;


class Character
{
	// Atributos
	private:
		string name;
		int hp;
		int damage;
	public:
		//CONSTRUCTORES
		Character();
		Character(string , int , int);

		//GETTERs y SETTERs
		string getName();
		void setName(string);

		int getHP();
		void setHP(int);

		int getDamage();
		void setDamage(int);

		//SIMILAR A TOSTRING

		string getStatus();

		//Metodos propios
		void attack(Character& c);
};

