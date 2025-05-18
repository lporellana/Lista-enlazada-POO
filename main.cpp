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

int main() {

    return 0;
}