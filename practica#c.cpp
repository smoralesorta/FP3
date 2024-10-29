#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main()
{
    // 1.1 Declarar una variable 
    double numero;

    // Pedir al usuario que ingrese un número

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Numero al cuadrado

    double cuadrado = numero * numero;

    // Mostrar el resultado

    std::cout << "El cuadrado de " << numero << " es " << cuadrado << std::endl;


    // 1.2 Declarar una variable para almacenar el número entero
    int numero1;

    // Ingresar un número entero

    std::cout << "Ingrese un número entero: ";
    std::cin >> numero1;

    // Imprimir los resultados de x, 2x, 3x, 4x y 5x

    std::cout << "Resultados:" << std::endl;
    std::cout << "1x: " << numero1 << std::endl;
    std::cout << "2x: " << 2 * numero1 << std::endl;
    std::cout << "3x: " << 3 * numero1 << std::endl;
    std::cout << "4x: " << 4 * numero1 << std::endl;
    std::cout << "5x: " << 5 * numero1 << std::endl;


    // 1.3 Declarar una variable para almacenar el peso en kilogramos

    double pesoKilogramos;

    // Pedir al usuario que ingrese su peso en kilogramos

    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> pesoKilogramos;

    // Convertir peso a libras

    double pesoLibras = pesoKilogramos * 2.2;

    // Mostrar el resultado

    std::cout << "Su peso en libras es: " << pesoLibras << " lbs" << std::endl;


    // 1.4 Declarar variables para los 3 números, total y promedio

    double numero11, numero2, numero3;
    double Total, Promedio;

    // Pedir al usuario ingresar los 3 números

    std::cout << "Ingrese el primer número: ";
    std::cin >> numero11;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;

    std::cout << "Ingrese el tercer número: ";
    std::cin >> numero3;

    // Calcular la suma total de los 3 números

    Total = numero11 + numero2 + numero3;

    // Calcular el promedio

    Promedio = Total / 3;

    // Mostrar los resultados

    std::cout << "Total: " << Total << std::endl;
    std::cout << "Promedio: " << Promedio << std::endl;


    // 1.5 Declarar variables para el total de la cuenta y propina 


    double totalCuenta, porcentaje, propina;

    // Pedir al usuario que ingrese el total 

    std::cout << "Ingrese el total de la cuenta: ";
    std::cin >> totalCuenta;

    // Pedir al usuario que ingrese el porcentaje de la propina

    std::cout << "Ingrese el porcentaje de propina (en %): ";
    std::cin >> porcentaje;

    // Calcular el total de la propina

    propina = (porcentaje / 100) * totalCuenta;

    // La cantidad a dar de propina

    std::cout << "La cantidad a dar de propina es: " << propina << std::endl;



    // 1.6 Solicitar un número mayor 100

        std::cout << "Ingrese un número: ";
        std::cin >> numero;

    // Verificar si es mayor a 100

        if (numero > 100) 
        {
            std::cout << "El número es mayor a 100" << std::endl;
        }
        else 
        {
            std::cout << "El número es menor o igual que 100" << std::endl;
        }


    // 1.7 Solicitar un número

            std::cout << "Ingrese un número: ";
            std::cin >> numero;

    // Verificar si el número es negativo o positivo

            if (numero < 0) 
            {
                std::cout << "El número es negativo" << std::endl;
            }
            else {
                std::cout << "El número es positivo" << std::endl;
            }

    // 1.8 Solicitar el correo electrónico al usuario

                std::string Miemail;
                std::string Password_Ingresado;

 // Ingresar el correo electrónico del usuario

                std::cout << "Ingrese su correo electrónico: ";
                std::getline(std::cin, Miemail);

    // Solicitar la contraseña del usuario

                std::cout << "Ingrese su contraseña: ";
                std::getline(std::cin, Password_Ingresado);

    // Confirmacion de la contraseña

                if (Password_Ingresado == "12345")
                {
                    std::cout << "Felicidades, password correcto" << std::endl;
                }
                else 
                {
                    std::cout << "Su password es incorrecto" << std::endl;
                }



                std::string convertirACentigrados(double fahrenheit) 
                {
                    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
                    return std::to_string(celsius);
                }

                std::string convertirACentigradosEnLetras(double celsius)
                {
                    if (celsius == 0) return "cero";
                    if (celsius == 1) return "uno";
                    if (celsius == 2) return "dos";
                    if (celsius == 3) return "tres";
                    if (celsius == 4) return "cuatro";
                    if (celsius == 5) return "cinco";
                    if (celsius == 6) return "seis";
                    if (celsius == 7) return "siete";
                    if (celsius == 8) return "ocho";
                    if (celsius == 9) return "nueve";
                    if (celsius == 10) return "diez";
                    // Agregar más números según sea necesario
                    return "mayor que diez"; // Para simplificar, más allá de 10
                }

                int main() 
                {
                    double Farenheith;

                    // Solicitar al usuario la temperatura en Fahrenheit
                    std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
                    std::cin >> Farenheith;

                    if (Farenheith == 32)
                    {
                        std::cout << "0 grados centígrados" << std::endl;
                    }
                    else 
                    {
                        double celsius = (Farenheith - 32) * 5.0 / 9.0;
                        std::string celsiusLetras = convertirACentigradosEnLetras(celsius);
                        std::cout << celsius << " grados centígrados (" << celsiusLetras << ")" << std::endl;
                    }

                






    return 0;
}
