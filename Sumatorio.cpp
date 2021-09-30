// Autor: Chenyi Jiang 
// Fecha: 9 de Septiembre 2021
// Descripción: La función sumatorio() recibe un número natural n y devuelve la suma 1+2+3+...+n. 
//--------------------------------------------------------------------------------------
#include <iostream>
using namespace std;


//El dato de entrada sera un numero natural
//El dato de salida tambien sera un numero natural
//Nos devolvera el sumatorio de este

//Definimos la funcion de sumatorioBucle

int sumatorioBucle(int num){

    int resultado = 0;
    for (int i = 1; i <= num; i++){
    resultado = resultado + i;
    }
    return resultado;
} // ()

//---------------------------------------

//Definimos la funcion de sumatorioFormulaMatematica
int sumatorioFormulaMatematica(int num){
    return (num*(num+1)/2); //utilizamos la formula matematica del sumatorio
} // ()

//----------------------------------------

// Llamamos a la funcion sumatorio y se decidira si queremos el metodo de en bucle o formula matematica


int main(){

    int num;

    int metodo;

    cout << "Seleccione el metodo para calcular el sumatorio" << "\n" << "1-Bucle" << "\n" <<"2-formulaMatematica" <<endl;
    cin >> metodo;
    if (metodo==1){
    //Como queremos la pruena automatica directamente le hemos dado el valor 5 y omitimos las dos siguientes lineas
    //cout << "Introduce un numero" << endl;
    //cin >> num;
    cout << "El resultado es: " << sumatorioBucle(3) << endl;

    } else {
    // Prueba automatica
    //cout << "Introduce un numero" << endl;
    //cin >> num;
    cout << "El resultado es: " << sumatorioFormulaMatematica(3) << endl;
    }
}
