#include <iostream>
#include <stack>
#include <list>
#include <string>

using namespace std;

class Canal {
public:
    string nombre;
    string categoria;

    Canal(string nombre, string categoria) {
        this->nombre = nombre;
        this->categoria = categoria;
    }
};

int main() {
    stack<Canal> pilaCanales;      // Pila para el manejo de canales
    list<Canal> listaFavoritos;    // Lista de canales favoritos

    // Agregar canales a la pila de canales
    pilaCanales.push(Canal("AMAZON", "Películas"));
    pilaCanales.push(Canal("ESPN", "Deportes"));
    pilaCanales.push(Canal("CartoonN", "Infantiles"));

    // Mostrar los canales disponibles
    cout << "Canales disponibles:" << endl;
    while (!pilaCanales.empty()) {
        Canal canal = pilaCanales.top();
        cout << canal.nombre << " - " << canal.categoria << endl;
        pilaCanales.pop();
    }

    // Agregar el último canal de la pila a la lista de favoritos
    if (!pilaCanales.empty()) {
        Canal ultimoCanal = pilaCanales.top();
        pilaCanales.pop();
        listaFavoritos.push_back(ultimoCanal);
    }

    // Mostrar los canales favoritos
    cout << endl << "Canales favoritos:" << endl;
    for (auto canal : listaFavoritos) {
        cout << canal.nombre << " - " << canal.categoria << endl;
    }

    return 0;
}
