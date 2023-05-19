#include <iostream>
#include <list>

using namespace std;

int main() {
    // Crear una lista
    list<int> miLista;

    // Agregar elementos a la lista
    miLista.push_back(10);
    miLista.push_back(20);
    miLista.push_back(30);

    // Mostrar los elementos de la lista
    for (auto it = miLista.begin(); it != miLista.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Eliminar un elemento de la lista
    miLista.remove(20);

    // Mostrar los elementos actualizados de la lista
    for (auto it = miLista.begin(); it != miLista.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}







