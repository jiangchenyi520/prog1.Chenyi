//Autor: Chenyi Jiang 
//Fecha: 15/10/2021
//Descripción:  Diseña una función sumatorioPares() que reciba un número natural n y devuelva la suma de los números na- turales pares menores o iguales que n.

#include <iostream>
using namespace std;
//------------------------------
//  sumatorioPares()
//------------------------------
int sumatorioPares(int x){
    int tot=0; 
    for(int i=0; i<=x; i++){
        if(i%2==0){
            tot = tot+ i;
        }
    }
    return tot;
}
//----------------------------
//----------------------------
//----------------------------

int main (){
    int numero;
    numero = sumatorioPares(8);
 
    if(numero == 20){
            cout << "Funciona correctamente" << "\n";
    }else {
            cout << "Vaya, algo va mal" << "\n";
    }
}

//----------------------------
//----------------------------
