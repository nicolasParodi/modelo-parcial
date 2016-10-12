#include "Articulo.h"
 Articulo::Articulo(std::string titulo, std::string texto){
     this->titulo=titulo;
     this->texto=texto;
     this->palabrasClave= new Lista<std::string>;
     this->comentarios = new Lista<Comentario*>;

 }

Articulo::~Articulo(){
    delete this->palabrasClave;
    this->comentarios->iniciarCursor();
    while(this->comentarios->avanzarCursor()){

        delete this->comentarios->obtenerCursor();
    }
    delete this->comentarios;

}

std::string Articulo::getTitulo(){
    return this->titulo;

}

std::string Articulo::getTexto(){
    return this->texto;

}

void Articulo::cambiarTexto(std::string nuevoTexto){
    this->texto=nuevoTexto;

}

void Articulo::agregarPalabrasClave(std::string palabraClave){
    this->palabrasClave->agregar(palabraClave);

}

bool Articulo::tienePalabraClave(std::string palabraClave){
    return this->palabrasClave->esta(palabraClave)!=0;

}

void Articulo::imprimirPalabrasClave(){
    this->palabrasClave->iniciarCursor();
    std::cout<<"Palabras Clave: "<<std::endl;
    while(this->palabrasClave->avanzarCursor()){
        std::cout <<"\t\t"<<this->palabrasClave->obtenerCursor()<<std::endl;

    }
}

void Articulo::agregarComentario(Comentario* unComentario){
    this->comentarios->agregar(unComentario);

}

void Articulo::borrarComentario(Comentario* unComentario){
    this->comentarios->remover(this->comentarios->esta(unComentario));

}

void Articulo::imprimirComentarios(){
    this->comentarios->iniciarCursor();
    while(this->comentarios->avanzarCursor()){
        std::cout <<"Comentario: "<<this->comentarios->obtenerCursor()->getDescripcion()<<std::endl;
        std::cout <<"Calificacion: "<<this->comentarios->obtenerCursor()->getCalificacion()<<std::endl;
    }


}

float Articulo::obtenerValoracion(){
    int aux=0;
    this->comentarios->iniciarCursor();
    while(this->comentarios->avanzarCursor()){
        aux += this->comentarios->obtenerCursor()->getCalificacion();

    }
    return aux/this->comentarios->contarElementos();

}
