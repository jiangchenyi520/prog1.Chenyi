//EsPositivo.cpp 
//Autor: Chenyi Jiang 
//Fecha: 30-09-2021
//Descripción: Decir si un número es positivo o negativo 
//----------------------------
//----------------------------
#include <iostream>
using namespace std; 

bool esPositivo(int x){ //Se define la función booleana
    if(x>=0){ //Condición
        return true; 
    }
    else{  //Entonces 
        return false;
    }
}
//----------------------------
//----------------------------
int main(){

    if(esPositivo(-3)== true){ 
        cout <<"El número introducido es positivo\n";  // llama a la función. 
    } else{
    cout << "El número introducido es negativo \n";  //llama a la función. 
}}

