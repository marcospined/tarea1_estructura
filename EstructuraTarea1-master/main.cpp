// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{

    return mi_pila.top(); // use el top para devolver  el primer valor de mi pila //
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size(); // use size para  devolver el numero de cantidad de elementos //
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    while (!mi_pila.empty()) //para  verificar si la lista esta  vacia //
    {
      if ( mi_pila.top ()==str)//estamos comparando el primer elemento de la pila con el elmento que queremos comparar//
       return true;

        mi_pila.pop(); // me quita el elemento que voy verificando//
     }
       return false;
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor=0; // creo  una variabla donde me baya guardando el elemento mayor

    while(!mi_pila.empty()) // verifico si la  lista esta  vacia //
    {
        if ( mi_pila.top()>mayor) // comparo  mi elemento para  saber   cual es mayor //
    {
        mayor= mi_pila.top();  // entonces  si  es  mayor se  guarda en la  variable mayor

    }
      mi_pila.pop(); // elimino un elemento de la pila
    }


    return mayor;
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor; // creamos la veriable para  que me guarde el elemento menor

   while(!mi_pila.empty()) // revisamos si la lista esta vacia
   {
       if (mi_pila.top()< menor) // comparamos  los elmentos para saber cual es menor

   {

    menor = mi_pila.top(); //  si es menor se  gaurda en la variable //
   }

        mi_pila.pop(); //  elimina unn elemento de la pila
    }

    return menor;
}

//devuelve el promedio de todos los elementos de "mi_pila"
float getPromedio(stack<float> mi_pila)
{
    int suma=0;   //  creamos la variabale para  guardar las sumas
    double promedio=0;// creamos la  varable para  que guarde el promedio
    int tam=mi_pila.size();// devuelve la cantidad de elementos que hay
    while(!mi_pila.empty()) // vemos  si la pila esta  vacia
    {
        suma+=mi_pila.top(); // sumamos todos los elementos //
        mi_pila.pop();  // elimina el elemento que esta primero en la pila
    }
    promedio = suma/tam; //  saca el promedio
    return promedio; //  retorna  la variable  promedio
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
