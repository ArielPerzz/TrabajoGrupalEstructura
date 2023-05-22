#include <iostream>
#include <stack>
#include <cstdlib> // Para generar números aleatorios

using namespace std;

int lanzarDado() {
    return rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
}

int main() {
    stack<int> pilaDados;

    // Simulación del lanzamiento de dados y almacenamiento en la pila
    cout << "Lanzamiento de dados:" << endl;
    for (int i = 0; i < 4; i++) {
        int resultado = lanzarDado();
        pilaDados.push(resultado);
        cout << "Dado " << i + 1 << ": " << resultado << endl;
    }

    // Mostrar los resultados en orden inverso utilizando la pila
    cout << "Resultados en orden inverso:" << endl;
    while (!pilaDados.empty()) {
        cout << pilaDados.top() << endl;
        pilaDados.pop();
    }

    return 0;
}
