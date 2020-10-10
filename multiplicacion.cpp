#include <iostream>
using namespace std;

int multiplicacion(int num, int num2){
    int r = 0;
    if(num<=0){
        cout<<"Error, ingrese un numero entero positivo"<<endl;

    }else{
        int x = num2 - 1;
        int y = num * x;
        r = num + y;
    }
    return r;
}

int main(){
    int respuesta;
    int a;
    int b;

    cout<<"Ingrese dos numeros enteros positivos"<<endl;
    cout<<"Primer numero: ";
    cin>>a;
    cout<<"Segundo numero: ";
    cin>>b;

    respuesta = multiplicacion(a,b);

    cout<<"Resultado: "<<respuesta<<endl;
    
    return 0;
}