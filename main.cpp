#include <iostream>
#include "Arbol.h"
using namespace std;

int main() {
   int opc=0;
    Arbol mango;
    while(opc!=5) {
        cout << " *** A R B O L  D E  M A N G O S *** " << endl;
        cout << "1. Agregar" << endl;
        cout << "2. Insertar" << endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Imprimir" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opc;

        switch (opc) {
            case 1: {
                int peso;
                cout << "Ingrese el peso del mango:" << endl;
                cin >> peso;
                mango.Agregar(peso);
                break;
            }
            case 2: {
                int pos, peso;
                cout << "Ingrese la posicion del mango:" << endl;
                cin >> pos;
                cout << "Ingrese el peso del mango:" << endl;
                cin >> peso;
                mango.Insertar(pos, peso);
                break;
            }
            case 3: {
                int pos;
                cout << "Ingrese la posicion del mango:" << endl;
                cin >> pos;
                mango.Eliminar(pos);
                break;
            }
            case 4: {
                cout << "*** I M P R I M I E N D O ***" << endl;
                mango.Imprimir();
                break;
            }
            default: {
                exit(1);
            }
        }
    }
    return 0;
}