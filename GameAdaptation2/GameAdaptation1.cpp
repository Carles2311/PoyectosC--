// GameAdaptation1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
void titulo() {
    cout << "______		            ______	" << endl;
    cout << "|    |		            |    |" << endl;
    cout << "|    |		            |    |" << endl;
    cout << "|    |		            |    |" << endl;
    cout << "|    |		_________   |    |" << endl;
    cout << "|    |______	|  ___  |   |    |______" << endl;
    cout << "|	    |	|  |_|  |   |	        |" << endl;
    cout << "|___________|	|_______|   |___________|" << endl;
    cout << "" << endl;
    cout << "" << endl;
}
void habilidades(int damage) {
    cout << "==========================================================" << endl;
    cout << "Quieres ver las habilidades de tu personaje?" << endl;
    cout << "[1] Corte estelar: Maestro Yi lanza un corte de katana diagonal que inflinge" << damage << "de daño adaptable al enemigo." << endl;
    cout << "[2] Meditación: Maestro Yi canaliza su energía para reponer su salud, no puede lanzar ningún ataque al enemigo pero recupera 30 de vida." << endl;
    cout << "[3] Grito de guerra: Maestro Yi lanza un grito de guerra que augmenta el daño de Corte estelar 10 puntos.(Esto se reinicia cada vez que Maestro Yi utiliza Corte estelar.)" << endl;
    cout << "[4] Renacer: Maestro Yi lanza un ataque de doble filo que resta 20 puntos de su vida pero inflinge un daño de 35 puntos." << endl;
    cout << "==========================================================" << endl;
}
int grito(int damage ) {
    return damage + 20;
}
void enemieAtack(int ataqueEnemigo, int vida) {
    cout << "=================================" << endl;
    cout << "Blitzcranck ha elegido gancho, esto resta" << ataqueEnemigo << "putos a tu salud." << endl;
    vida = vida - ataqueEnemigo;
}
void juego(int damage) {
    int vida = 100;
    int vidaEnemigo = 100;
    bool game = true;
    int accion = 0;
    int ataqueEnemigo = 25;
    while (game) {
        for (int i = 0; i < 20; i++)
        {
            cout << "" << endl;
        }
        cout << "Vida: " << vida << "       Enemigo: " << vidaEnemigo << endl;
        cout << "=================================" << endl;
        cout << "[1] Corte estelar" << endl;
        cout << "[2] Meditación" << endl;
        cout << "[3] Grito de guerra" << endl;
        cout << "[4] Renacer" << endl;
        cout << "=================================" << endl;
        cin >> accion;
        switch (accion)
        {
        case 1:
            cout << "Has elegido Corte estelar, la vida del enemigo ha caido " << damage << " puntos." << endl;
            vidaEnemigo = vidaEnemigo - damage;
            damage = 20;
            break;
        case 2:
            cout << "Has elegido Meditación." << endl;
            vida = vida + 30;
            break;
        case 3:
            cout << "Has eslegido Grito de guerra, este turno no atacas." << endl;
            damage = grito(damage);
            break;
        case 4:
            cout << "Has elegido Renacer." << endl;
            vidaEnemigo = vidaEnemigo - 30;
            vida = vida - 20;
            break;
        }

        if (vidaEnemigo <= 0) {
            game = false;
            cout << "=================================" << endl;
            cout << "HAS GANADO" << endl;
        }
        else {
            enemieAtack( ataqueEnemigo, vida);
        }
        if (vida <= 0) {
            game = false;
            cout << "================================= " << endl;
            cout << "Has muerto" << endl;
        }

    }
}
int main()
{
    int damage = 20;
    titulo();
    habilidades( damage);
    juego( damage );
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
