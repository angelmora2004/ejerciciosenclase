#include <iostream> 

using namespace std;

int main()
{
    cout<<"Ejemplo del bucle while"; 

    int i=0;
    while(i < 10)
    {
        i++; 
        cout<<endl<<"Mensaje # :" << i;
        cout<<endl<<"El cuadrado de 1:" <<(i * i);

    }
    return 0;
}