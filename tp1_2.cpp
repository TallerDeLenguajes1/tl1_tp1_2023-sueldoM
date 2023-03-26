#include <iostream>
using namespace std;

int cuadrado(int numero) {
    return numero * numero;
}

int main() {
    int num, resultado;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    
    resultado = cuadrado(num);
    
    cout << "El cuadrado de " << num << " es " << resultado << endl;
    
    return 0;
}