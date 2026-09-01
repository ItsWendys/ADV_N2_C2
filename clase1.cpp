#include <iostream> 
using namespace std;

string NombrePersonaje = "pepo";
int vida = 500;
int monedas = 0;
float velocidad = 4.5f;
bool estavivo = false;

string personajevivo(int vida){
    string respuesta = "";
    if(vida <= 0){
        respuesta = "NO";
    }else{
        respuesta = "Si";
    }
     
    return respuesta;

}   

int main(){
    cout << "" << endl;
    cout << "Ficha" << endl;
    cout << "Nombre del personaje: " << NombrePersonaje << endl;
    cout << "Vida: " << vida << endl;
    cout << "Monedas: " << monedas << endl;
    cout << "Velocidad: " << velocidad << endl;
    cout << "¿Está vivo? " << personajevivo(vida) << endl;
    cout << "Tiene llave?: " << tienellave << end1;
    


    cout << "Atacamos a pepo y le quitamos 100 de puntos de vida! pipipipi" << endl;

    vida = vida - 100;

    cout << "" << endl;
    cout << "Ficha" << endl;
    cout << "Nombre del personaje: " << NombrePersonaje << endl;
    cout << "Vida: " << vida << endl;
    cout << "Monedas: " << monedas << endl;
    cout << "Velocidad: " << velocidad << endl;
    cout << "¿Está vivo? " << (estavivo ? "Sí" : "No") << endl;

    cout << "Ahora pepo asalta a un enemigo y le roba 10 monedas!" << endl;
    monedas = monedas + 10;
    cout << "Monedas: " << monedas << endl;

cout << "" << endl;
    cout << "Ficha" << endl;
    cout << "Nombre del personaje: " << NombrePersonaje << endl;
    cout << "Vida: " << vida << endl;
    cout << "Monedas: " << monedas << endl;
    cout << "Velocidad: " << velocidad << endl;
    cout << "¿Está vivo? " << (estavivo ? "Sí" : "No") << endl;


    return 0;
}