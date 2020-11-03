#include <iostream>
#include "ArregloDinamico.h"
using namespace std;
int main(){
    ArregloDinamico<float>arreglo;
    for (size_t i=0;i<10; i++){
        arreglo.insertar_final(i);
    }
    arreglo.insertar(100, 2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(4);
    for (size_t i=0;i<arreglo.size(); i++){
        cout <<arreglo[i]<< " ";
    }
   
    cout <<endl;

    return 0;
}