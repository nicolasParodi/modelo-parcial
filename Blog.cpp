#include "Blog.h"
Blog::Blog(std::string nombre){
    this->nombre = nombre;
    this->articulos = new Lista<Articulo*>;
}

Blog::~Blog(){
    this->articulos->iniciarCursor();
    while(this->articulos->avanzarCursor()){

        delete this->articulos->obtenerCursor();
    }
    delete this->articulos;

}

std::string Blog::getNombre(){
    return this->nombre;
}
void Blog::setNombre(std::string nuevoNombre){
    this->nombre = nuevoNombre;
}
void Blog::agregarArticulo(Articulo* unArticulo){
    this->articulos->agregar(unArticulo);
}
void Blog::quitarArticulo(Articulo* unArticulo){
    this->articulos->remover(this->articulos->esta(unArticulo));
}
void Blog::imprimirArticulos(bool comentarios){
    this->articulos->iniciarCursor();

    while (this->articulos->avanzarCursor()) {

        Articulo* unArticulo = this->articulos->obtenerCursor();

        std::cout << "Articulo: " << unArticulo->getTitulo() << std::endl << "Texto: " << unArticulo->getTexto() << std::endl << "Palabras clave: ";
        unArticulo->imprimirPalabrasClave();
        std::cout << std::endl << "Calificacion general: " << unArticulo->obtenerValoracion() << std::endl << std::endl;

        if(comentarios){

            std::cout << "\t\tComentarios" << std::endl << std::endl;

            unArticulo->imprimirComentarios();
        }
    }
}
Lista<Articulo*>* Blog::buscarArticulos(std::string palabraClave, int calificadaDesde, int calificadaHasta){
    Lista<Articulo*>* nuevaLista = new Lista<Articulo*>;
    this->articulos->iniciarCursor();

    while(this->articulos->avanzarCursor()){
        if(this->articulos->obtenerCursor()->tienePalabraClave(palabraClave)){
            if(this->articulos->obtenerCursor()->obtenerValoracion() >= calificadaDesde &&
               this->articulos->obtenerCursor()->obtenerValoracion() <= calificadaHasta){

                    nuevaLista->agregar(this->articulos->obtenerCursor());
               }
        }
    }
    return nuevaLista;
}

