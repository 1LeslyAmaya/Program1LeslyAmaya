#include <iostream>
//Lesly Amaya

using namespace std;

// Función para determinar si es mayor de edad
void mayorDeEdad() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }
}

// Función para determinar el número mayor
void numeroMayor() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "El numero mayor es: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "El numero mayor es: " << num2 << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }
}

// Función para determinar si un número es par o impar
void parOImpar() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero es par." << endl;
    } else {
        cout << "El numero es impar." << endl;
    }
}

// Función para calcular el factorial usando while
void factorialWhile() {
    int num, factorial = 1, i = 1;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;

    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "El factorial de " << num << " es " << factorial << endl;
}

// Función para mostrar los números impares usando for
void numerosImparesFor() {
    int num;
    cout << "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> num;

    if (num > 10 && num < 30) {
        for (int i = 1; i <= num; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "El numero ingresado no está en el rango válido." << endl;
    }
}

// Función para mostrar los números impares usando while
void numerosImparesWhile() {
    int num, i = 1;
    cout << "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> num;

    if (num > 10 && num < 30) {
        while (i <= num) {
            cout << i << " ";
            i += 2;
        }
        cout << endl;
    } else {
        cout << "El numero ingresado no está en el rango válido." << endl;
    }
}

// Función para mostrar el día de la semana usando switch
void diaDeLaSemana() {
    int num;
    cout << "Ingrese un numero del 1 al 5 para ver el dia de la semana: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        default:
            cout << "Numero fuera de rango." << endl;
    }
}

// Menú principal
void menu() {
    int opcion;
    do {
        cout << "\nSeleccione un ejercicio:" << endl;
        cout << "1. Determinar si es mayor de edad" << endl;
        cout << "2. Determinar el numero mayor" << endl;
        cout << "3. Determinar si un numero es par o impar" << endl;
        cout << "4. Calcular el factorial de un numero" << endl;
        cout << "5. Mostrar numeros impares con for" << endl;
        cout << "6. Mostrar numeros impares con while" << endl;
        cout << "7. Mostrar el dia de la semana" << endl;
        cout << "8. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mayorDeEdad();
                break;
            case 2:
                numeroMayor();
                break;
            case 3:
                parOImpar();
                break;
            case 4:
                factorialWhile();
                break;
            case 5:
                numerosImparesFor();
                break;
            case 6:
                numerosImparesWhile();
                break;
            case 7:
                diaDeLaSemana();
                break;
            case 8:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida, intente de nuevo." << endl;
        }
    } while (opcion != 8);
}

// Función principal
int main() {
    menu();
    return 0;
}
