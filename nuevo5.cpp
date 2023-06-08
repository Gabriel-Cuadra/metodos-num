#include <iostream>
#include <string>

using namespace std;

struct Atleta {
    string deporte;
    string nombre;
    string pais;
    int nmedallas;
};

int main() {
    Atleta atletas[10];
    int i, max_medallas = 0, max_index = 0;

    // Ingreso de datos por teclado
    for (i = 0; i < 10; i++) {
        cout << "Ingrese el nombre del atleta " << i+1 << ": ";
        cin >> atletas[i].nombre;

        cout << "Ingrese el deporte del atleta " << i+1 << ": ";
        cin >> atletas[i].deporte;

        cout << "Ingrese el pa�s del atleta " << i+1 << ": ";
        cin >> atletas[i].pais;

        cout << "Ingrese el n�mero de medallas del atleta " << i+1 << ": ";
        cin >> atletas[i].nmedallas;

        if (atletas[i].nmedallas > max_medallas) {
            max_medallas = atletas[i].nmedallas;
            max_index = i;
        }
    }

    // Mostrar la informaci�n de todos los atletas
    cout << "\nInformaci�n de los atletas:\n";
    for (i = 0; i < 10; i++) {
        cout << "Atleta " << i+1 << ":\n";
        cout << "  Nombre: " << atletas[i].nombre << endl;
        cout << "  Deporte: " << atletas[i].deporte << endl;
        cout << "  Pa�s: " << atletas[i].pais << endl;
        cout << "  N�mero de medallas: " << atletas[i].nmedallas << endl << endl;
    }

    // Mostrar el atleta con mayor n�mero de medallas
    cout << "El atleta con mayor n�mero de medallas es:\n";
    cout << "  Nombre: " << atletas[max_index].nombre << endl;
    cout << "  Deporte: " << atletas[max_index].deporte << endl;
    cout << "  Pa�s: " << atletas[max_index].pais << endl;
    cout << "  N�mero de medallas: " << atletas[max_index].nmedallas << endl;

    return 0;
}
