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

/**
 * @brief Agregar un nodo al final de la lista
 * @param valor 
 * @return 
 */
    void agregarAlFinal(int valor){
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