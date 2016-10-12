#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED
#include "lista.h"
#include "Comentario.h"
#include <iostream>
class Articulo {

private:
    std::string titulo;
    std::string texto;
    Lista<std::string>* palabrasClave;
    Lista<Comentario*>* comentarios;
public:
    Articulo(std::string titulo, std::string texto);
    ~Articulo();
    std::string getTitulo();
    std::string getTexto();
    void cambiarTexto(std::string nuevoTexto);
    void agregarPalabrasClave(std::string palabraClave);
    bool tienePalabraClave(std::string palabraClave);
    void imprimirPalabrasClave();
    void agregarComentario(Comentario* unComentario);
    void borrarComentario(Comentario* unComentario);
    void imprimirComentarios();
    float obtenerValoracion();
};


#endif // ARTICULO_H_INCLUDED
