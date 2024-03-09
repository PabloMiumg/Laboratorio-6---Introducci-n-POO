#include <iostream>

class Calculadora {
private:
    double num1;
    double num2;

public:
    Calculadora(double n1, double n2) : num1(n1), num2(n2) {}

    double suma() {
        return num1 + num2;
    }

    double resta() {
        return num1 - num2;
    }

    double multiplicacion() {
        return num1 * num2;
    }

    double division() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division por cero" << std::endl;
            return 0;
        }
    }
};

int main() {
    Calculadora calc(20, 5);
    std::cout << "Suma: " << calc.suma() << "\nResta: " << calc.resta() << "\nMultiplicacion: " << calc.multiplicacion()
              << "\nDivision: " << calc.division() << std::endl;

    return 0;
}

