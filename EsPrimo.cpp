//Autor: Chenyi Jiang
//Fecha: 30/09/2021
//Descripción: La función esPrimo() tiene que verificar si el número introducido es primo o no
#include <iostream>
using namespace std;

//Recibe un número natural, devuelve si el número introducido es primo o no.

//Se define la función esPrimo(); 

bool esPrimo(int numero){
    //Se crea un bucle 
    int res = 0; 
    for(int i=0; i<numero; i++){
       if(numero%1 == 0){
           res = res + 1; 
       }
    }
}



// definimos la funcion
bool esPrimo (int num){
    int res = 0;
        for(int i=1; i<= num; i++){
        if(num % i==0){ //comprueba si alguno tiene resto cero
                res = res + 1;
        }
    }
    if(res == 2){ //comprueba si en el bucle anterior se han guardado mas de dos valores
        return false;
    }else{
        return true;
    }
}

//------------------------------------

//Llamamo a bool esPrimo con el maim
int main (){
   int a = esPrimo(3); //prueba automatica con el 3
    //cout<<"Ingrese numero"<<endl;
    //cin>>num;
    if(a == true){
        cout<<"No es Primo";
        }else{
        cout <<"Si es Primo";
        }
    return 0;
}
