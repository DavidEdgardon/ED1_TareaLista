//
// Created by ASUS on 10/28/2018.
//

#ifndef ED1LISTA_ARBOL_H
#define ED1LISTA_ARBOL_H

#include "Fruta.h"

class Arbol {
private:
    fruta *primero;
    fruta *ultimo;
public:
    Arbol();
    bool EsVacia();
    void Agregar(int);
    void Insertar(int, int);
    void Imprimir();
    int Tamano();
    bool Eliminar(int);
    int EliminarPos(int);
};


#endif //ED1LISTA_ARBOL_H
