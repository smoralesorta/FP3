
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    //1.1 Declarar las materias que cursas actualmente 

    string texto0 = "Hola, mundo!";
    cout << texto0 << endl;

    //1.2 Declarar el cuatrimestre que cursas actualmente

    string textoa = "Hola, ";
    string textob = "mundo!";
    string saludo = textoa + textob;
    cout << saludo << endl;


    //1.3 Declarar materia (string)

    string nombre;
    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "!" << endl;


    //1.4 Declarar la cuenta/matricula de UNITEC (string)
    cin.ignore();
    string nombreCompleto;
    cout << "Introduce tu nombre completo: ";
    getline(cin, nombreCompleto);
    cout << "tu nombre completo : " << nombreCompleto << endl;


    //1.5 Declarar tu nombre (string)


    cout <<
        "La longitud de tu nombre es" <<
        nombreCompleto.length() << endl;


    //1.7 Declara tu apellido paterno (string)


    cout << "El primer caracter " <<
        nombreCompleto[0] << endl;


    //1.12 Declara tu apellido materno (string)

    string cambio = "Texto";
    cambio[0] = ¨'t';
    cout << cambio << endl;


    //1.8 Declara tu numero de telefono
    string texto8 = "HOLA MUNDO!";
    transform(texto8.begin(),
        texto8.end(),
        texto8.begin(),
        ::tolower);
    cout << texto8 << endl;

    //1.9 Declarar el numero de tu casa
    string texto9 = "Hola, Mundo!";
    transform(texto9.begin(),
        texto9.end(),
        texto9.begin(), ::toupper);
    cout << texto9 << endl;


    //1.9 Declarar el correoQueMasUses
    
    string texto10 = "Sebastian ";
    texto10.insert(6, "Morales");
    cout << texto10 << endl;

    //1.10 Declara tu correo de MyUnitec (string)
    int numero1 = 123;
    string texto11 = to_string(numero1);
    cout << texto11 + "texto" << endl;


    //11.1 Declara la carrera que actualmente cursas

    string texto10 = "123";
    int numero2 = stoi(texto10);
    cout << "String como número: "
        << numero2 << endl;

    //1.12 Declara si ocupaste Blackboard

    string texto10 = "123";
    int numero2 = stoi(texto10);
    cout << "String como número: "
        << numero2 << endl;
