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

//PARTE C: Agegar nodos al final
/**
 * @brief Agregar un nodo al final de la lista
 * @param valor para guardar el valor del nodo 
 */
    void agregarAlFinal(int valor){
    Nodo* nuevoNodo = new Nodo(valor);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
        }
    }

/**
 * @brief eliminar el primer nodo de la lista
 * @param
 * @return
 */
    void eliminarPrimerNodo(){
    }

/** 
 * @brief mostrar los nodos de la lista
 * @param
 * @return
 */
    void mostrarNodos(){
    }

int main() {

    return 0;
}