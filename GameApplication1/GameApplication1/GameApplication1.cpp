
#include "Character.h"
#include "Boss.h"
#include <iostream>
#include <vector>
#include <Windows.h>
 
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;

Character enemy("Sauron", 90, 30);
Character enemy2("Rey hielo", 100, 20);
FinalBoss enemy3("a", 120, 20,20,10);
vector<Character> enemigos;

Character hero("", 100, 40);
 void  crearPersonaje() {
	cout << "Introduce el nombre de tu personaje: ";
	string nombre;
	cin >> nombre;
	 hero.setName(nombre);
 }
void static fight() {
	for (Character enemigo : enemigos) {
		bool game = true;
		while (game) {
			cout << enemigo.getName() << endl;
			cout << "Vida: " << enemigo.getHP() << endl;
			cout << endl;
			cout << hero.getName() << endl;
			cout << "Vida: " << hero.getHP() << endl;
			cout << "--------------------------------" << endl;
			cout << "[1. ATACK]		[2.DEFENDER]" << endl;
			int eleccion;
			cin >> eleccion;
			if (eleccion == 1) {
				hero.attack(enemigo);
			}
			else if (eleccion == 2) {
				hero.setHP(hero.getHP() + enemigo.getDamage() + 5);
			}
			enemigo.attack(hero);
			if (enemigo.getHP() <= 0 || hero.getHP() <= 0) {
				game = false;
				if (enemigo.getHP() <= 0) {
					cout << "ganaste mi rey" << endl;
				}
				else {
					cout << "moriste";
				}
			}
		}
	}

}
void titulo() {
	cout << "============================================================================================================================" << endl;
	cout << "███    ██  ██████   ██████ ██   ██ ███████     ██████  ███████     ███████ ███████ ████████  █████   ██████  █████  ███████" << endl;
	cout << "████   ██ ██    ██ ██      ██   ██ ██          ██   ██ ██          ██      ██         ██    ██   ██ ██      ██   ██ ██      " << endl;
	cout << "██ ██  ██ ██    ██ ██      ███████ █████       ██   ██ █████       █████   ███████    ██    ███████ ██      ███████ ███████ " << endl;
	cout << "██  ██ ██ ██    ██ ██      ██   ██ ██          ██   ██ ██          ██           ██    ██    ██   ██ ██      ██   ██      ██ " << endl;
	cout << "██   ████  ██████   ██████ ██   ██ ███████     ██████  ███████     ███████ ███████    ██    ██   ██  ██████ ██   ██ ███████ " << endl;
	cout << "============================================================================================================================" << endl;
	cout << endl;
	cout << endl;
}
int main()
{
	PlaySound(TEXT("Stronger.wav"), NULL, SND_FILENAME | SND_ASYNC);
	titulo();
	enemigos.push_back(enemy);
	enemigos.push_back(enemy2);
	enemigos.push_back(enemy3);
	crearPersonaje();	
	fight();
}

