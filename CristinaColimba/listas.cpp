#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> listaInvitados;

    // Agregar invitados a la lista
    listaInvitados.push_back("Cris");
    listaInvitados.push_back("Luis");
    listaInvitados.push_back("Fabiola");
    listaInvitados.push_back("Ana");
    listaInvitados.push_back("Luis");

    // Imprimir la lista de invitados
    std::cout << "Lista de invitados:" << std::endl;
    for (const auto& invitado : listaInvitados) {
        std::cout << invitado << std::endl;
    }

    // Obtener la cantidad de invitados
    int cantidadInvitados = listaInvitados.size();
    std::cout << "Cantidad de invitados: " << cantidadInvitados << std::endl;

    // Verificar si un invitado está en la lista
    std::string nombreBuscado = "Ana";
    bool estaEnLista = false;
    for (const auto& invitado : listaInvitados) {
        if (invitado == nombreBuscado) {
            estaEnLista = true;
            break;
        }
    }
    if (estaEnLista) {
        std::cout << nombreBuscado << " está en la lista de invitados." << std::endl;
    } else {
        std::cout << nombreBuscado << " no está en la lista de invitados." << std::endl;
    }

    // Eliminar un invitado de la lista
    std::string nombreEliminar = "Fabiola";
    listaInvitados.remove(nombreEliminar);
    std::cout << "Lista de invitados después de eliminar a " << nombreEliminar << ":" << std::endl;
    for (const auto& invitado : listaInvitados) {
        std::cout << invitado << std::endl;
    }

    return 0;
}
