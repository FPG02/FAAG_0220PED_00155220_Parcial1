#include <iostream>
using namespace std;

struct tarea{
    string nombre;
    string ubicacion;
    int dificultad;
    int duracion;
    char tipo;
};
struct tarea tareas[4];
int cont_tareas = 0;

void datos(){

        for (int i = 0; i<4; i++){

            cout<<"\nNombre: ";
            getline(cin, tareas[i].nombre);
            cout<<"\nUbicacion: ";
            getline(cin, tareas[i].ubicacion);
            cout<<"\nDificultad (Numero entre 1 y 5): ";
            cin>>tareas[i].dificultad;
            cout<<"\nDuracion (en segundos): ";
            cin>>tareas[i].duracion;
            cout<<"\nR-reparar, C-clasificar y O-otros"<<endl;
            cout<<"Tipo de tarea: ";
            cin>>tareas[i].tipo; cin.ignore();

            cont_tareas++;
        }
}

int time[4];
int sum = 0;

void tiempo(){
    for(int i=0; i<4; i++){

        if(tareas[i].dificultad == 4 || tareas[i].dificultad == 5){

            time[i] = tareas[i].duracion;

        }else{
            cout<<"\nNo hay ninguna tarea de tipo 4 o 5"<<endl;

        }
    }

    for(int i=0; i<4; i++){
        time[i],
        sum = sum + time[i];

        cout<<"El tiempo es: "<<sum<<" s"<<endl;
    }
}

int main(){
    bool salida = true;

    cout<<"\nBienvenido"<<endl;
    cout<<"Por favor ingrese los datos de cada una de sus tareas"<<endl;
    datos();
    tiempo();
}