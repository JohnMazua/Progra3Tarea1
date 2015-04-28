#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{

     return a+b; // retorna la suma de a mas b
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;  // retorna la resta de a menos b
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; // retorna la multiplicacion de a por b
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    if(b>0) return a/b; // revisa si b es mayor a cero, si no retorna la division de a entre b
    else return 0; // retorna 0
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    int mayor; // inicializa la variable mayor
    if(a>b) mayor=a;  // define cual es mayor y asigna el valor
    else mayor=b;
      return mayor; // retorna el valor de variable mayor
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    int menor; // inicializa la variable menor
    if(a>b) menor=b;  // define cual es menor
    else menor=a;
      return menor; // retorna el valor menor
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    int mayor; // inicializa la variable mayor
    if(a>b & a>c) mayor=a; // escoge cual es el mayor
    else if(b>c) mayor=b;
    else mayor=c;
      return mayor; // retorna el mayor
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor; // asigna valor a la posicion en el arreglo
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion]; // retorna el valor de la posicion en el arreglo
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int max=0; // variable max inicializada en 0
    for(int i=0; i<tamano; i++)
    {
    if(arreglo[i]>max) max=arreglo[i]; // reemplaza el valor de 0 por el valor mayor
    }
    return max; // retorna el valor mayor
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int min=9999999; // inicial la variable min con 9,999,999
    for(int i=0; i<tamano; i++)
    {
    if(arreglo[i]<min) min=arreglo[i]; // asigna el valor menor
    }
    return min; // retorna el valor menor
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int prom; // variable prom
    for(int i=0; i<tamano; i++)
    {
    prom = prom + arreglo[i]; // suma todos los valores del arreglo
    }
    prom = prom / tamano; // divide entre la cantidad de valores
    return prom; // retorna el promedio
}

int main ()
{
    //Funcion evaluadora
    evaluar(); // funcion de evaluar para verificar si los ejercicios funcionan.. dado por el Ing. :P
    return 0;
}
