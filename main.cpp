#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

//PRIMER Y SEGUNDO PUNTO
//struct Persona{
//    string nombre;
//    int edad;
//};

//vector<Persona> cargarDatos(vector<Persona> contenedor){
//    Persona persona;
//    persona.nombre = "Marcela";
//    persona.edad = 43;
//    contenedor.push_back(persona);
//    persona.nombre = "Joaquin";
//    persona.edad = 28;
//    contenedor.push_back(persona);
//    persona.nombre = "David";
//    persona.edad = 60;
//    contenedor.push_back(persona);
//    persona.nombre = "Lorena";
//    persona.edad = 30;
//    contenedor.push_back(persona);
//    persona.nombre = "Gustavo";
//    persona.edad = 10;
//    contenedor.push_back(persona);
//    return contenedor;
//}

////void imprimir(vector<Persona> contenedor){ //Hacia el frente
////    for(auto p = begin(contenedor); p != end(contenedor);p++){
////        cout << "nombre: " << p->nombre << "--- Edad: " << p->edad << endl;
////    }
////}

//void imprimir(vector<Persona> contenedor){ //Hacia atras
//    for(auto p = contenedor.rbegin(); p != contenedor.rend();p++){
//        cout << "nombre: " << p->nombre << "--- Edad: " << p->edad << endl;
//    }
//}

//int main()
//{
//    vector<Persona> participantes;
//    participantes = cargarDatos(participantes);
//    imprimir(participantes);
//    return 0;
//}

//TERCER PUNTO

//struct Persona{
//    string nombre;
//    int identificacion;
//};

//map<string,Persona> cargarDatos(map<string,Persona> contenedor){
//    Persona persona;
//    persona.nombre = "Marcela";
//    persona.identificacion = 43;
//    contenedor["Electronica"] = persona;
//    persona.nombre = "Joaquin";
//    persona.identificacion = 28;
//    contenedor["Ambiental"] = persona;
//    persona.nombre = "David";
//    persona.identificacion = 60;
//    contenedor["Industrial"] = persona;
//    persona.nombre = "Lorena";
//    persona.identificacion = 30;
//    contenedor["Sistemas"] = persona;
//    persona.nombre = "Gustavo";
//    persona.identificacion = 10;
//    contenedor["Espacial"] = persona;
//    return contenedor;
//}

//void imprimir(map<string,Persona> contenedor){
//    for(auto par = begin(contenedor);par!=end(contenedor);par++){
//        cout << "Departamento: " << par->first << endl;
//        cout << "Jefe: " << par->second.nombre << " -- Identificado con: "<<par->second.identificacion<<endl << endl;
//    }
//}

//int main()
//{
//    map<string,Persona> jefes;
//    jefes = cargarDatos(jefes);
//    imprimir(jefes);
//    return 0;
//}

//CUARTO PUNTO

struct Persona{
    string nombre;
    int identificacion;
};

map<string,vector<Persona>> cargarDatos(map<string,vector<Persona>> contenedor){
    Persona persona;
    persona.nombre = "Marcela";
    persona.identificacion = 43;
    contenedor["Electronica"].push_back(persona);
    persona.nombre = "Joaquin";
    persona.identificacion = 28;
    contenedor["Teleco"].push_back(persona);
    persona.nombre = "David";
    persona.identificacion = 60;
    contenedor["Espacial"].push_back(persona);
    persona.nombre = "Lorena";
    persona.identificacion = 30;
    contenedor["Teleco"].push_back(persona);
    persona.nombre = "Gustavo";
    persona.identificacion = 10;
    contenedor["Sanitaria"].push_back(persona);
    persona.nombre = "Mario";
    persona.identificacion = 98;
    contenedor["Electronica"].push_back(persona);
    persona.nombre = "Angee";
    persona.identificacion = 21;
    contenedor["Espacial"].push_back(persona);
    return contenedor;
}

void imprimir(map<string,vector<Persona>> contenedor){
    for(auto par = begin(contenedor);par!=end(contenedor);par++){
        cout << "Carrera: " << par->first << endl;
        for(auto est = begin(par->second); est != end(par->second);est++){
            cout << "nombre: " << est->nombre << " --- Identificacion: " << est->identificacion << endl;
        }
    }
}

int main()
{
    map<string,vector<Persona>> estudiantes;
    estudiantes = cargarDatos(estudiantes);
    imprimir(estudiantes);
    return 0;
}








