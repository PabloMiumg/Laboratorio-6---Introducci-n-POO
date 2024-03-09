#include <iostream>
#include <string>

class CuentaBancaria {
private:
    std::string nombreTitular;
    std::string numeroCuenta;
    double saldo;

public:
    CuentaBancaria(std::string nombre, std::string numCuenta, double inicial) : nombreTitular(nombre), numeroCuenta(numCuenta), saldo(inicial) {}

    void depositar(double cantidad) {
        saldo += cantidad;
        std::cout << "Deposito exitoso. Nuevo saldo: " << saldo << std::endl;
    }

    void retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            std::cout << "Retiro exitoso. Nuevo saldo: " << saldo << std::endl;
        } else {
            std::cerr << "Error: Saldo insuficiente" << std::endl;
        }
    }

    void consultarSaldo() {
        std::cout << "Saldo actual: " << saldo << std::endl;
    }
};

int main() {
    CuentaBancaria cuenta("Pablo Marroquin", "123456789", 3000);
    cuenta.depositar(500);
    cuenta.retirar(200);
    cuenta.consultarSaldo();

    return 0;
}

