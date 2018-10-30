//
// Created by ASUS on 10/28/2018.
//

#include <iostream>
#include "Arbol.h"

Arbol::Arbol():
        primero(0), ultimo(0)
{
}

bool Arbol::EsVacia() {
    return primero==0;
}

void Arbol::Agregar(int p) {
    fruta *nuevo = new fruta;
    nuevo->peso = p;
    if(EsVacia()) {
        primero = nuevo;
        ultimo = nuevo;
    } else{
        ultimo->sig=nuevo;
        nuevo->ant=ultimo;
        ultimo=nuevo;
        }
}

void Arbol::Imprimir() {
    fruta *tmp=primero;

    while(tmp!=0){
    std::cout<<"Peso: "<< tmp->peso <<std::endl;
    tmp=tmp->sig;
    }
}

int Arbol::Tamano() {
    fruta *tmp = primero;
    int cont =0;
    while(tmp!=0){
        cont++;
        tmp = tmp->sig;
    }
}

void Arbol::Insertar(int pos, int pes) {
    fruta *tmp = primero;
    fruta *ant=0;
    fruta *nuevo = new fruta;
    nuevo->peso = pes;
    int cont = 0;
    if (pos < Tamano()) {
        std::cout << "Posicion Incorrecta!..." << std::endl;
    }
    while (tmp != 0) {
        cont++;
        if (cont == pos) {
            if(tmp == primero){
                tmp->sig = primero;
                primero->ant=tmp;
                primero=tmp;

            }else if(tmp == ultimo){
                ultimo->sig=nuevo;
                nuevo->ant=ultimo;
                ultimo=nuevo;

            }else{
                ant->sig = nuevo;
                nuevo->ant=ant;
                nuevo->sig=tmp;
                tmp->ant=nuevo;
            }
        }
        ant = tmp;
        tmp=tmp->sig;
    }
}

bool Arbol::Eliminar(int valor) {
    fruta *actual = primero;
    while(actual!=0){
        if(actual->peso==valor){
            if(actual==primero) {
                primero = actual->sig;
                primero->ant = 0;
                delete actual;
            }else if(actual==ultimo){
                ultimo -> sig = 0;
                ultimo = actual->ant;
                delete actual;
            }else{
                actual->ant->sig = actual->sig;
                actual->sig->ant = actual->ant;
                delete actual;
            }
            return true;
        }
        actual=actual->sig;
    }
}

