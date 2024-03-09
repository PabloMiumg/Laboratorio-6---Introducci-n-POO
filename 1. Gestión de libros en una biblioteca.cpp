#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    int anioPublicacion;

public:
    Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

    void establecerDatos(std::string t, std::string a, int anio) {
        titulo = t;
        autor = a;
        anioPublicacion = anio;
    }

    void mostrarInformacion() {
        std::cout << "Libro: " << titulo << "\nAutor: " << autor << "\nAnio de publicacion: " << anioPublicacion << std::endl;
    }
};

int main() {
    Libro libro1("La mansion del pajaro serpiente", "Virgilio Rodriguez Macal", 1989);
    libro1.mostrarInformacion();

    return 0;
}

