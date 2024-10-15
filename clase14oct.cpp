#include <iostream>
{
using namespace std;
	cout << boolalpha;

	bool bb = true;
	cout << bb << endl;
	&&
		// Es para imprimir true en lugar 
		// de 1
		// false en lugar de cerp
		cout << boolalpha;

	// 1. Igualdad 
	cout << "(a == b) "
		<< (a == b) << endl;
	cout << "(x == y) "
		<< (x == y) << endl;
	
	// 2. Desigualdad 
	cout << (a != b) << endl;
	cout << (x != y) << endl;

	// 3. Mayor que
	cout << (a > b) << endl;
	cout << (x > y) << endl;

	// 4. Menos que
	cout << (a < b) << endl;
	cout << (x < y) << endl;
	
	// 5.	Mayor o igual que
	cout << (a >= b) << endl;
	cout << (x >= y) << endl;

	// 6. Menor o igual que 
	cout << (a <= b) << endl;
	cout << (x <= y) << endl;

	// 7. Comparaciones de tipos mixtos
	cout << (a > y) << endl;
	cout << (x < b) << endl;

	// 8. Valores negativos
	cout << (a > -b) << endl;
	cout << (x < -y) << endl;

	// 9. Combinación de comparaciones
	cout << ((a < b) and (x > y)) << endl;
	cout << ((a == 10) or (x == 5.2)) << endl;

	// 10. Comparaciones anidadas 
	cout << (a > b - 10) << endl;
	cout << (x <= y + 10.3) << endl;

	// 11. Comparación con constantes
	cout << (a == 10) << endl;
	cout << (y == 5.2) << endl;

	// 12.	Comparación de resultados de las operaciónes aritmeticas 
	cout << ((a + b) < (x * y)) << endl;
	cout << ((b - a) >= (x / y)) << endl;

	// 13. Comparación de resultados negaticos y positivos
	cout << (-a < b) << endl;
	cout << ((-x) > y) << endl;

	// 14. Combinación de aritmetica y comparación 
	cout << ((a * b) >
		(x - y)) << endl;
	cout << ((b / a) <=
		(x + y)) << endl;

	// 15. Comparaciónes encadenadas 
	cout << (a < b & &b < x)
		<< endl;
	cout << (y > x and x > a)
		<< endl;

	// 16. Comparación de módulos
	cout << ((b % a) == 0);

	
}
