#include <iostream>
using namespace std;
#include <string>



void calculararea() {
    

    double radio, area, diametro;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    
    area = 3.14159 * radio * radio;
    diametro = 2 * radio;
    cout << "El area del circulo es: " << area << endl;
    cout << "El diametro del circulo es: " << diametro << endl;


}
    
void calcularAreaCuadrado() {
    double lado, area;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    
    area = lado * lado; 
    cout << "El area del cuadrado es: " << area << endl;
}

void calcularvolumen() {

    double radio, altura, volumen;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    volumen = 3.14159 * radio * radio * altura;
    cout << "El volumen del cilindro es: " << volumen << endl;

}
void calcularVolumenCuadrado() {
    double lado, volumen;
    cout << "Ingrese el lado del cubo: ";
    cin >> lado;
    volumen = lado * lado * lado;
    cout << "El volumen del cubo es: " << volumen << endl;
}

void calculadoraBasica() {
    double a, b;
    char op;
    cout << "\nCalculadora basica: no olvides usar bien los simbolos (+, -, *, /): ";
    cin >> a >> op >> b;
    double res;
    bool valido = true;
    switch (op) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/':
            if (b == 0) {
                cout << "Error: division por cero.\n";
                valido = false;
            } else {
                res = a / b;
            }
            break;
        default:
            cout << "Operador no valido. Usa + - * /.\n";
            valido = false;
    }
    if (valido) {
        cout << "Resultado: " << res << endl;
    }
}
    
int main() {
    char continuar;

    do {
        cout << "-------Bienvenido a mi calculadora cientifica experimental-------" << endl;
        
        
        cout << "¿Que operacion desea realizar?\n" << endl;
        cout << "1. Calcular el area de un circulo" << endl;
        cout << "2. Calcular el area de un cuadrado" << endl;
        cout << "3. Calcular el volumen de un cilindro" << endl;
        cout << "4. Calcular el volumen de un cuadrado" << endl;
        cout << "5. Calculadora basica (Suma, resta, Multiplicacion y division)" << endl;
        
        int operacion;
        cin >> operacion;
        
        if (operacion == 1) {
            calculararea();
        } else if (operacion == 2) {
            calcularAreaCuadrado();
        } else if (operacion == 3) {
            calcularvolumen();
        } else if (operacion == 4) {
            calcularVolumenCuadrado();
        } else if (operacion == 5) {
            calculadoraBasica();
        } else {
            cout << "Operacion no valida" << endl;
        }
        
        cout << "¿Desea continuar en el programa? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    
    cout << "-------Muchas gracias por usar nuestra calculadora experimental-------" << endl;
    return 0;



}