#include <iostream>
using namespace std;

int cuadrado(int numero) {
    return numero * numero;
}

void cuadrado2(int numero) {
    int resultado = numero * numero;
    cout << "El cuadrado de " << numero << " es " << resultado << endl;
}

void intercambiar(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void ordenar(int& num1, int& num2) {
    int menor = num1;
    int mayor = num2;
    if (num1 > num2) {
        menor = num2;
        mayor = num1;
    }
    num1 = menor;
    num2 = mayor;
}

int main() {
    int num, resultado;
    int num2;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    resultado = cuadrado(num);
    cout << "El cuadrado de " << num << " es " << resultado;

    fflush(stdin);

    cout << "\nIngrese otro numero numero: ";
    cin >> num2;
    cuadrado2(num2);

    cout << "El contenido de la 2da variable es: " << (&num2) << endl;
    
    int a, b;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nIngrese el valor de 'a': ";
        cin >> a;
        cout << "Ingrese el valor de 'b': ";
        cin >> b;

        intercambiar(a, b);

        cout << "Despues del intercambio, a es: " << a << endl;
        cout << "Despues del intercambio, b es: " << b << endl;

        ordenar(a, b);

        cout << "Despues de ordenarlos, el menor es: " << a << " y el mayor es " << b <<endl;

        cout << endl;

    }
    

    return 0;
}