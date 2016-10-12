#ifndef COMENTARIO_H_INCLUDED
#define COMENTARIO_H_INCLUDED
#include <string>

class Comentario {

private:
    std::string descripcion;
    int calificacion;

public:
    Comentario(std::string descripcion,int calificacion = 1);

    std::string getDescripcion();

    int getCalificacion();

    void editarComentario(std::string nuevaDescripcion);

    void editarCalificacion(int nuevaCalificacion);





};



#endif // COMENTARIO_H_INCLUDED
