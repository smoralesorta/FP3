
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    //1. Declarar e imprimir un texto

    string texto0 = "Hola, mundo!";
    cout << texto0 << endl;

    //2. Unir dos textos en uno

    string textoa = "Hola, ";
    string textob = "mundo!";
    string saludo = textoa + textob;
    cout << saludo << endl;


    //3. Introducir un valor en una variable de texto (string)
    // usando el teclado

    string nombre;
    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "!" << endl;


    //4. Introducir una linea completa de texto (string)
    cin.ignore();
    string nombreCompleto;
    cout << "Introduce tu nombre completo: ";
    getline(cin, nombreCompleto);
    cout << "tu nombre completo : " << nombreCompleto << endl;


    //5. Longitud de un texto


    cout <<
        "La longitud de tu nombre es" <<
        nombreCompleto.length() << endl;


    //6. Como acceder a un caracter 
    // especifico en un texto (string)


    cout << "El primer caracter " <<
        nombreCompleto[0] << endl;


    //7. Cambiar un caracter, en una
    // posicion especifica.
    string cambio = "Texto";
    cambio[0] = ¨'t';
    cout << cambio << endl;


    //8. Covertir un string a mayusculas
    string texto8 = "HOLA MUNDO!";
    transform(texto8.begin(),
        texto8.end(),
        texto8.begin(),
        ::tolower);
    cout << texto8 << endl;

    //9. Covertir un string a minusculas
    string texto9 = "Hola, Mundo!";
    transform(texto9.begin(),
        texto9.end(),
        texto9.begin(), ::toupper);
    cout << texto9 << endl;
    
    
    //10. insertar un texto
    //dentro de otro
    string texto10 = "Sebastian ";
    texto10.insert(6, "Morales");
    cout << texto10 << endl;

    //11. convertir un numero entero
    // a string
    int numero1 = 123;
    string texto11 = to_string(numero1);
    cout << texto11 + "texto" << endl;


    //12. convertir un string
    // a numero entero

    string texto10 = "123";
    int numero2 = stoi(texto10);
    cout << "String como número: "
        << numero2 << endl;

