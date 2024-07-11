/*
Datos informativos
Tema:
Se tiene un vector de N nombres de personas. Diseñe la función que
ordena este vector usando el algoritmo de ordenación secuencial.
Debe usar el mismo modelo de ordenación visto en clases (con pequeños ajustes).
 
*/
#include<iostream>
 
using namespace std;
 
//Ordena el vector de string usando el algortimo de ordenación secuencial
void OrdenSecuencial(int x[], int total)
{
  for(int k=0; k < total; k++)
  {
    for(int j=k+1; j < total; j++)
    {
      if(x[k] > x[j])
      {
        //intercambiar los valores
        int aux = x[k];
        x[k] = x[j];
        x[j] = aux;
      }
    }
  }
}
 
//Imprime los elementos del vector
void ImprimeVector(int x[], int total)
{
  for(int k=0; k <total; k++)
  {
    cout<<endl<<x[k];
  }
}
 
int main()
{
 int vector []={10,11,20,1,34,45,67,21,19,44,55,108,3};
 int MAX = sizeof (vector) /sizeof (int);
 OrdenSecuencial(vector,MAX);
 cout<<endl<<"El elemento menor del vector es"<<vector [0];
 cout<<endl<<"El elemento mayor del vector es"<<vector [MAX-1];
  return 0;
}