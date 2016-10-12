#ifndef BLOG_H_INCLUDED
#define BLOG_H_INCLUDED
#include "Articulo.h"

class Blog {

private:
    std::string nombre;
    Lista<Articulo*>* articulos;
public:
    Blog(std::string nombre);
    ~Blog(); std::string getNombre();
    void setNombre(std::string nuevoNombre);
    void agregarArticulo(Articulo* unArticulo);
    void quitarArticulo(Articulo* unArticulo);
    void imprimirArticulos(bool comentarios);
    Lista<Articulo*>* buscarArticulos(std::string palabraClave, int calificadaDesde, int calificadaHasta);
};

#endif // BLOG_H_INCLUDED
