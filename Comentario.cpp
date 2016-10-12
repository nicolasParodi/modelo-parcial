#include "Comentario.h"


Comentario::Comentario(std::string descripcion,int calificacion){
    this->descripcion = descripcion;
    if(calificacion >= 1 && calificacion<= 10 ){
        this->calificacion=calificacion;
    }

}

std::string Comentario::getDescripcion(){
        return this->descripcion;
}

int Comentario::getCalificacion(){
         return this->calificacion;

}

void Comentario::editarComentario(std::string nuevaDescripcion){
        this->descripcion = nuevaDescripcion;

}

void Comentario::editarCalificacion(int nuevaCalificacion){

        this->calificacion = nuevaCalificacion;
}
