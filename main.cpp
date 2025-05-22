#include <iostream>

using namespace std;

/// @brief Clase Nodo

class Nodo {

    public:

    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

/// @brief Clase Lista enlazada

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