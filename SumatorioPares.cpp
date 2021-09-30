#include <iostream>
using namespace std;

// datos de entrada un numero natural
// datos de salida un numero natural
//nos devolvera el sumatorio
//Para la prueba automatica se ha elegido el valor 3

//--------------------------

int sumatorioPares(int num){
    int res = 0;
    int i = 2;
    for (int i = 2; i <= num; i=i+2) 
    {
        res = res + i;
    }
    return res;
}// ()

//De entrada recibe un entero
//La salida es un entero
//sumatoeio de los numeros pares hasta el numero introducido

//--------------------------

int sumatorioParesFormulaMatematica(int num)
{
    return (num/2)*(num/2+1);
} // ()

//--------------------------

//Llamamos a sumatorioPares

int main()
{
    int num;
    int metodo;
    cout << "Selecciona el metodo para calcular el sumatorio" <<"\n" <<"1-Bucle" << "\n" <<"2-FormulaMatematica" << endl;
    cin >> metodo;
    if (metodo==1) {
    //Creamos comentarios porque queremos prueba automatica
    //cout <<"Introduce un numero" << endl;
    //cin >> num;
    cout << "El resultado es: " << sumatorioPares(3) << endl;
    }else{
    //cout << "Introduce un numero" <<endl;
    //cin >> num;
    cout <<"El resultado es: " << sumatorioParesFormulaMatematica(3) << endl;
    }
} // ()
