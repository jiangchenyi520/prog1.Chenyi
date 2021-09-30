// Autor: Chenyi Jiang 
// Fecha: 9 de Septiembre 2021
// Descripción: Escribe un programa PorTres.cpp en el que se llame a la función PorTres() desde main(). 
//--------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
//Se define la función de PorTres
double PorTres(double x){ 
    return (x*3);
}

//-------------------------------

//Empezamos a ejecutar el programa

//-------------------------------

int main(){
    double res; //Se declara una variable llamada res
    //Nos piden una prueba automática por lo que se incluiran los siguientes comentarios
    //cout << "Dígame un número";
    //cin >> num; 
    //res= porTres(3) 
    cout << "El resultado es: " << PorTres(3) << "\n";  //Devuelve el resultado, llamándo a la función. 
}
//-------------------------------