#include <iostream>

using namespace std;

// PARTE A
/**
 * @brief Clase Nodo
 * @param dato para guardar el valor del nodo
 * @param siguiente para guardar la dirección del siguiente nodo
 * @details Esta clase representa un nodo de una lista enlazada simple.
 */
class Nodo {
    public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

//PARTE B
/**
 * @brief Clase Lista
 * @details Esta clase representa una lista enlazada simple.
 */
class Lista {
    private:
    Nodo* cabeza;

    public:
    Lista() {
        cabeza = nullptr;
    }


int main() {

    return 0;
}