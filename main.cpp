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
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    int mayor;
    if(a>b) mayor=a;
    else mayor=b;
      return mayor;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    int menor;
    if(a>b) menor=b;
    else menor=a;
      return menor;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    int mayor;
    if(a>b & a>c) mayor=a;
    else if(b>c) mayor=b;
    else mayor=c;
      return mayor;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int max=0;
    for(int i=0; i<tamano; i++)
    {
    if(arreglo[i]>max) max=arreglo[i];
    }
    return max;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int min=100;
    for(int i=0; i<tamano; i++)
    {
    if(arreglo[i]<min) min=arreglo[i];
    }
    return min;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int prom;
    for(int i=0; i<tamano; i++)
    {
    prom = prom + arreglo[i];
    }
    prom = prom / tamano;
    return prom;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
