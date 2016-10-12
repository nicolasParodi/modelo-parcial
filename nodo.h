#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <cstddef>

template<class T> class Nodo{

private:

    T dato;

    Nodo<T>*siguiente;


public:

    Nodo(T dato){

        this->dato = dato;
        this->siguiente=NULL;
    }

    T obtenerDato(){

        return this->dato;
    }

    void CambiarDato(T nuevoDato){

        this->dato = nuevoDato;
    }

    Nodo<T>* obtenerSiguiente(){

        return this->siguiente;
    }

    void cambiarSiguiente(Nodo<T>* nuevoSiguiente){
    this->siguiente = nuevoSiguiente;
    }


};


#endif // NODO_H_INCLUDED
