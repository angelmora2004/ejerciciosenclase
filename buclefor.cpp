#include <iostream>
using namespace std;

int main()
{
    cout<<"Ejemplo de bucle for ";

    int tabla=10; 
    for(int k=1; k<=10; k++)
    {
        cout<<endl<<tabla << " X " << k << " = " << (tabla *k);
    }

    //tabla de 3, con incrementos de 2 en 2
    cout<<endl<<endl<<"Tabla del 3";
    tabla=3;
    for(int k=1; k<=30; k+=2)
    {
        cout<<endl<<tabla <<" X " << k << " = " << (tabla * k); 
    }
}