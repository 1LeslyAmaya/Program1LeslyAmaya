#include <iostream>
#include <cmath> // Para usar sqrt()
using namespace std;

// Función para calcular el factorial de un número
long long factorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Función que genera y muestra la serie de Fibonacci
void fibonacci(int n) {
    long long a = 0, b = 1, c;

    cout << "Serie de Fibonacci: ";
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";

    for (int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

// Función para mostrar la tabla de multiplicar de un número
void tablaMultiplicar(int numero) {
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

int main() {
    // Definición del vector y la matriz
    int vector[3] = {1, 2, 3};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // Mostrar elementos del vector
    cout << "Elementos del vector: ";
    for (int i = 0; i < 3; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    // Mostrar elementos de la matriz
    cout << "Elementos de la matriz: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Generar la tabla de multiplicar del 4
    cout << "Tabla del 4:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "4 x " << i << " = " << 4 * i << endl;
    }
    cout << endl;

    // Generar la tabla de multiplicar del 6
    cout << "Tabla del 6:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "6 x " << i << " = " << 6 * i << endl;
    }
    cout << endl;

    // Factorial
    int num;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    }

    // Serie de Fibonacci
    int cantidad;
    cout << "Ingrese la cantidad de terminos de la serie Fibonacci: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Ingrese un numero mayor a 0." << endl;
    } else {
        fibonacci(cantidad);
    }

    // Verificar si un número es primo
    int numero;
    bool esPrimo = true; // Suponemos que el número es primo inicialmente

    cout << "Ingrese un numero para verificar si es primo: ";
    cin >> numero;

    // Casos especiales
    if (numero <= 1) {
        esPrimo = false; // Los números menores o iguales a 1 no son primos
    } else {
        // Verificar divisibilidad desde 2 hasta la raíz cuadrada del número
        for (int i = 2; i <= sqrt(numero); i++) {
            if (numero % i == 0) {
                esPrimo = false; // Si es divisible, no es primo
                break; // Salir del bucle
            }
        }
    }

    // Mostrar el resultado
    if (esPrimo) {
        cout << numero << " es un numero PRIMO." << endl;
    } else {
        cout << numero << " NO es un numero PRIMO." << endl;
    }

    // Verificar si un número es par o impar
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El numero es impar." << endl;
    }

    // Mostrar la tabla de multiplicar
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> numero;
    tablaMultiplicar(numero);

    return 0;
}
