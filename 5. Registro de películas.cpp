#include <iostream>
#include <string>

class Pelicula {
private:
    std::string titulo;
    std::string director;
    int anioLanzamiento;

public:
    Pelicula(std::string t, std::string d, int anio) : titulo(t), director(d), anioLanzamiento(anio) {}

    void establecerDatos(std::string t, std::string d, int anio) {
        titulo = t;
        director = d;
        anioLanzamiento = anio;
    }

    void mostrarInformacion() {
        std::cout << "Pelicula: " << titulo << "\nDirector: " << director << "\nAnio de lanzamiento: " << anioLanzamiento << std::endl;
    }
};

int main() {
    Pelicula pelicula1("Jurassic World", "Steven Spielberg", 2015);
    pelicula1.mostrarInformacion();

    return 0;
}

