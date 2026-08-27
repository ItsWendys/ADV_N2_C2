#include <iostream> 
using namespace std;

string NombrePersonaje = "pepo";
int vida = 500;
int monedas = 0;
float velocidad = 4.5f;
bool estavivo = false;

int main(){
    cout << "" << endl;
    cout << "Ficha" << endl;
    cout << "Nombre del personaje: " << NombrePersonaje << endl;
    cout << "Vida: " << vida << endl;
    cout << "Monedas: " << monedas << endl;
    cout << "Velocidad: " << velocidad << endl;
    cout << "¿Está vivo? " << (estavivo ? "Sí" : "No") << endl;

    return 0;
}