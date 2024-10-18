/ ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

	// Operadores Logicos

	cout << boolalpha;
	bool p = true, q = false

		// 1. Lógico AND 
		cout << "(p and q) " <<
		(p and q) << endl;
	// 2. OR Lógico
	cout << "(p and q) " <<
		(p and q) << endl;
	// 3. Logico NOT
	cout << "(!p): "
		<< (not(p))
		<< endl;
	// 4. Combinación de AND y NOT
	cout <<
		"(p and not(q)): "
		<< (p and not(q))
		<< endl;
	// 5. Double NOT 
	cout << "(not(not(q))): "
		<< (not(not(q))) << endl;
	// 6. Operaciones mixtas
	cout <<
		"(not(p and q) or (p or not(q))): "
		<< (not(p and q) or (p or not(q)))
		<< endl;
	// 7. Asignación de variables 
	// con operadores lógicos
	bool a = p and q;
	cout << "Valor asignado a variable"
		<< a << endl;
	// 8. Operaciones lógicas
	//n con números enteros
	int x = 5, y = 0;
	cout << "(x and y): "
		<< (x and y) << endl;
	// Operaciones lógicas
	// con tipos de numeros reales 
	float m = 3.5, n = 0.0;
	cout << "(m or n): "
		<< (m or n) << endl;
	// 10. Expresiones anidadas
	cout <<
		"((x and not(y)) and (m or not(q))): "
		<< ((x and not(y)) and (m or not(q)))
		<< endl;

}
