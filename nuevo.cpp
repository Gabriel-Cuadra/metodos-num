#include <string>
#include <iostream>
using namespace std;

struct CD {
    string titulo;
    string artista;
    int num_canciones;
    int anio;
    float precio;
};

int main() {
    CD cd1;

    cout << "Ingresa el titulo del CD: ";
    getline(cin, cd1.titulo);

    cout << "Ingresa el artista: ";
    getline(cin, cd1.artista);

    cout << "Ingresa la cantidad de canciones: ";
    cin >> cd1.num_canciones;

    cout << "Ingresa el a�o de lanzamiento: ";
    cin >> cd1.anio;

    cout << "Ingresa el precio: ";
    cin >> cd1.precio;

    cout << "\n\nT�tulo: " << cd1.titulo << endl;
    cout << "Artista: " << cd1.artista << endl;
    cout << "N�mero de canciones: " << cd1.num_canciones << endl;
    cout << "A�o de lanzamiento: " << cd1.anio << endl;
    cout << "Precio: " << cd1.precio << endl;

    return 0;
}
