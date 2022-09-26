#include <iostream>
using namespace std;

int main(){
    long int value1 = 200000;
    long int value2 = 0;

    // a
    long int *longPtr;

    // b
    longPtr = &value1;

    // c
    cout << *longPtr << endl;
    
    // d
    value2 = *longPtr;

    // e
    cout << value2 << endl;

    // f 
    cout << &value1 << endl;

    // g 
    cout << longPtr << endl;

    /**
     * Observação:
     * Sim o valor impresso é o mesmo de value1.
     * Isso ocorreu pois longPtr recebeu  endereço
     * de memoria de value1 e durante toda a execução
     * do programa não foi alterado.
    */
   
    return 0;
}