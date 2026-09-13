#include "FileReading.hpp"
#include <iostream>

#include "Menu.h"
#include "../estructuras/Queue.hpp"


int main() {
    Queue<Paciente> Atencion;

    readFileData("../data/pacientes.txt", Atencion);

    Menu(Atencion).startMenu();


    return 0;


}

