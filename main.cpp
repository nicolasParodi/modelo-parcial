#include "Blog.h"
#include <cstdlib>

using namespace std;

int main()
{
    Blog* miBlog = new Blog("informatica y servicios");

    Articulo* articulo1 = new Articulo("un nuevo microprocesador", "bla bla bla...");

    Comentario* comentario1 = new Comentario("que interesante", 8);

    Comentario* comentario2 = new Comentario("la mejor marca en el marcado", 6);

    miBlog->agregarArticulo(articulo1);

    articulo1->agregarPalabrasClave("HW");

    articulo1->agregarPalabrasClave("Innovacion");

    articulo1->agregarComentario(comentario1);

    articulo1->agregarComentario(comentario2);



    Articulo* articulo2 = new Articulo("Amenazas informaticas", "ohhh ohhh -_-");

    Comentario* comentario3 = new Comentario("cuanta razon", 10);

    miBlog->agregarArticulo(articulo2);

    articulo2->agregarPalabrasClave("PSI");

    articulo2->agregarComentario(comentario3);



    Articulo* articulo3 = new Articulo("Todo sobre memorias RAM", "ram ram ram!!!");

    Comentario* comentario4 = new Comentario("podria estar mas completo", 5);

    miBlog->agregarArticulo(articulo3);

    articulo3->agregarPalabrasClave("HW");

    articulo3->agregarComentario(comentario4);



    //Articulo* articulo4 = new Articulo("Tipos de SW", "SW libre vs SW propietario");

    //miBlog->agregarArticulo(articulo4);


    miBlog->imprimirArticulos(false);

    cin.get();

    system("cls");



    miBlog->imprimirArticulos(true);

    cin.get();

    system("cls");



    Lista<Articulo*>* miLista = miBlog->buscarArticulos("HW",6,8);

    cout << "Los que cumplen lo pedido son los articulos: ";

    miLista->iniciarCursor();

    while(miLista->avanzarCursor()){

       Articulo* unArticulo = miLista->obtenerCursor();

       cout << unArticulo->getTitulo() << " - ";

    }

    cout << endl << endl;

    return 0;
}
