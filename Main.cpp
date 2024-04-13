#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generarDNI() {
    return rand() % 9000 + 1000; // Genera un número de 4 dígitos
}

int generarLechePreferida() {
    return rand() % 4 + 1; // Genera un número entre 1 y 4
}

int main() {
    srand(time(0)); // Inicializa la semilla para generar números aleatorios

    const int numEncuestados = 100; // Puedes cambiar este valor según la cantidad de encuestados que necesites

    cout << "Resultados de la encuesta:\n";

    for (int i = 0; i < numEncuestados; ++i) {
        int dni = generarDNI();
        int lechePreferida = generarLechePreferida();

        cout << "Encuestado " << i + 1 << ": DNI " << dni << ", Leche preferida: " << lechePreferida << endl;
    }
    
    return 0;
}
