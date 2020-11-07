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

////CUARTO PUNTO

//struct Persona{
//    string nombre;
//    int identificacion;
//};

//map<string,vector<Persona>> cargarDatos(map<string,vector<Persona>> contenedor){
//    Persona persona;
//    persona.nombre = "Marcela";
//    persona.identificacion = 43;
//    contenedor["Electronica"].push_back(persona);
//    persona.nombre = "Joaquin";
//    persona.identificacion = 28;
//    contenedor["Teleco"].push_back(persona);
//    persona.nombre = "David";
//    persona.identificacion = 60;
//    contenedor["Espacial"].push_back(persona);
//    persona.nombre = "Lorena";
//    persona.identificacion = 30;
//    contenedor["Teleco"].push_back(persona);
//    persona.nombre = "Gustavo";
//    persona.identificacion = 10;
//    contenedor["Sanitaria"].push_back(persona);
//    persona.nombre = "Mario";
//    persona.identificacion = 98;
//    contenedor["Electronica"].push_back(persona);
//    persona.nombre = "Angee";
//    persona.identificacion = 21;
//    contenedor["Espacial"].push_back(persona);
//    return contenedor;
//}

//vector<Persona> insertarOrdenado(vector<Persona> v, Persona p){
//    auto it = begin(v);
//    while(it != end(v) and (*it).identificacion <= p.identificacion){
//        it++;
//    }
//    v.insert(it, p);
//    return v;
//}

//vector<Persona> filtrarEstudiantes(vector<Persona> estudiantesArea){
//    vector<Persona> nuevo;
//    for(auto est = begin(estudiantesArea); est != end(estudiantesArea);est++){
//        nuevo = insertarOrdenado(nuevo, (*est));
//    }
//    return nuevo;
//}

//vector<Persona> eliminarEstudiante(vector<Persona> contenedor, int ident){
//    auto p = begin(contenedor);
//    while(p!=end(contenedor)){
//        if((*p).identificacion == ident){
//            contenedor.erase(p);
//        }else{
//            p++;
//        }
//    }
//    return contenedor;
//}

//void imprimir1(map<string,vector<Persona>> contenedor){
//    for(auto par = begin(contenedor);par!=end(contenedor);par++){
//        cout << "Carrera: " << par->first << endl;
//        for(auto est = begin(par->second); est != end(par->second);est++){
//            cout << "nombre: " << est->nombre << " --- Identificacion: " << est->identificacion << endl;
//        }
//    }
//}

//void imprimir2(vector<Persona> contenedor){
//    for(auto est = begin(contenedor); est != end(contenedor);est++){
//        cout << "nombre: " << est->nombre << " --- Identificacion: " << est->identificacion << endl;
//    }
//}

//int main()
//{
//    map<string,vector<Persona>> estudiantes;
//    estudiantes = cargarDatos(estudiantes);
//    Persona persona;
//    persona.nombre = "Dolph";
//    persona.identificacion = 99;
//    vector<Persona> ensayo;
//    ensayo = estudiantes["Espacial"];
//    auto p = begin(ensayo);
//    ensayo.insert((p+1),persona);
//    estudiantes["Espacial"] = ensayo;
//    imprimir1(estudiantes);
//    system("PAUSE");
//    system("CLS");

//    vector<Persona> filtrado;
//    string Area;
//    do{
//        cout << "Area a filtrar: ";
//        cin >> Area;
//    }while(estudiantes.find(Area) == end(estudiantes));
//    filtrado = filtrarEstudiantes(estudiantes[Area]);

//    imprimir2(filtrado);
//    system("PAUSE");
//    system("CLS");
//    int digito;
//    cout << "Ingrese indentificacion a eliminar: ";
//    cin >> digito;
//    filtrado = eliminarEstudiante(filtrado, digito);

//    imprimir2(filtrado);
//    system("PAUSE");
//    system("CLS");

//    return 0;
//}

//QUINTO PUNTO

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

int cantidadConInicial(map<string, vector<Persona>> contenedor, char letra){
    int cantidad = 0;
    for(auto par: contenedor){
        for(Persona estudiante: par.second){
            if(estudiante.nombre[0] == letra){
                cantidad++;
            }
        }
    }
    return cantidad;
}

int main()
{
    map<string,vector<Persona>> estudiantes;
    estudiantes = cargarDatos(estudiantes);

    char letra;
    cout << "Ingrese la inicial a buscar: ";
    cin >> letra;
    system("CLS");
    cout << "\n\n\n\t\t\t\tHay: " << cantidadConInicial(estudiantes, letra) << " Estudiantes que inician con la : " << letra << endl;
    return 0;
}
























