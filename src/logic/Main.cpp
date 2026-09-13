#include "FileReading.hpp"
#include <iostream>
#include "../estructuras/Queue.hpp"

int main() {
    Queue<Paciente> Atencion;

    readFileData("../data/pacientes.txt", Atencion);

    cout << Atencion.top();


}

