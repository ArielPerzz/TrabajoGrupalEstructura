#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;

    // Agregar elementos a la pila
    pila.push(10);
    pila.push(20);
    pila.push(30);

    // Obtener el tamaño de la pila
    cout << "Tamaño de la pila: " << pila.size() << endl;

    // Acceder al elemento en la parte superior de la pila
    cout << "Elemento en la parte superior: " << pila.top() << endl;

    // Eliminar el elemento en la parte superior de la pila
    pila.pop();

    // Verificar si la pila está vacía
    if (pila.empty()) {
        cout << "La pila está vacía" << endl;
    } else {
        cout << "La pila no está vacía" << endl;
    }
    return 0;
}
