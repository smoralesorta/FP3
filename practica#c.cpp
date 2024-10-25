#include <iostream>
#include <iomanip>
#include <cmath>

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

                        


               

                
            return 0;
        }

