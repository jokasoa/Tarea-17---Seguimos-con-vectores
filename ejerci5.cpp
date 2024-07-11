/*
Datos informativos
Tema: Programa que convierte numeros a letras 

 
*/
#include<iostream>
 
using namespace std;
//Define el vector
const string unidades []={"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};

const string decenas []={"","diez","veinte","treinta","cuarenta","cincuenta","sesenta",}


//Devuelve las unidades del array de string
string GetUnidades (int num)
{
    return unidades [num];
}
int main()
{
    int num = 8;
    string resultado = GetUnidades (num);
    cout<<endl<<num" En letras es "<<resultado;
    return 0;
}
 
