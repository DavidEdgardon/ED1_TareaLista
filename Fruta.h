//
// Created by ASUS on 10/28/2018.
//

#ifndef ED1LISTA_FRUTA_H
#define ED1LISTA_FRUTA_H
struct fruta {
    int peso;
    fruta *sig;
    fruta *ant;

    fruta() {
    peso = 0; sig = 0; ant = 0;
    }
};

#endif //ED1LISTA_FRUTA_H
