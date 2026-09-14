#include "FileReading.hpp"
#include <iostream>

#include "../objetos/Menu.h"
#include "../estructuras/Queue.hpp"

int main() {
    Queue<Paciente> Atencion;

    readFileData("../data/pacientes.txt", Atencion);


    if (Atencion.empty()) {
        return 1;
    }

    Menu(Atencion).startMenu();

    return 0;


}

