
#include <iostream>
#include <string>

class Estudiante {
private:
    std::string nombre;
    std::string apellido;
    int edad;
    std::string curso;

public:
    Estudiante(std::string n, std::string a, int e, std::string c) : nombre(n), apellido(a), edad(e), curso(c) {}

    void establecerDatos(std::string n, std::string a, int e, std::string c) {
        nombre = n;
        apellido = a;
        edad = e;
        curso = c;
    }

    void mostrarInformacion() {
        std::cout << "Estudiante: " << nombre << " " << apellido << "\nEdad: " << edad << "\nCurso: " << curso << std::endl;
    }
};

int main() {
    Estudiante estudiante1("Pablo", "Marroquin", 18, "Programacion I");
    estudiante1.mostrarInformacion();

    return 0;
}

