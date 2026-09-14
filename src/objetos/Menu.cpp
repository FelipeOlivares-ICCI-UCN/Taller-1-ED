#include "Menu.h"

void Menu::startMenu() {
    int input = 0;
    int subInput;

    do {
        cout << "--------------- Opcion " << currentOptionNum << "---------------" << endl;
        displayOptions();
        input = userInput();

        switch (input) {
            case 1:
                cout << "=== PACIENTES EN ESPERA ==="  << endl << endl;

                atencion.show();
                if (atencion.empty()) {
                    cout << "Sin pacientes" << endl;
                    break;

                }
                cout << "Ingrese el numero de pacientes a atender (Entre 0 y 9)" << endl;
                subInput = userInput();
                attendPaciente(subInput);


        }

        currentOptionNum++;


    } while (input != exitOption);

    cout << "Adios Papu :v" << endl;

}

int Menu::userInput() {
    string input;

    do {
        cout << "Seleccionar opcion: ";
        cin >> input;

        if (input.length() == 1 && isdigit(input[0])) {
            return input[0] - '0';
        }

        cout << "Ingrese una opcion entre 0 y 9" << endl;


    } while (true);
}

void Menu::displayOptions() {
    cout << "=== HOSPITAL LA MACARENA === "<< endl;
    cout << "1. Atender Pacientes" << endl;
    cout << "2. Ver Departamento" << endl;
    cout << "3. Revisar Historial" << endl;
    cout << "4. Salir" << endl;

}

void Menu::attendPaciente(int numPacientes) {
    for (int i = 1; i <= numPacientes; i++) {
        if (atencion.empty()) {
            std:cout << "-----------------" << endl;
            std::cout << "Atendiste a todos!" << endl;
            return;
        }
        hospital.addPaciente(atencion.top());
        atencion.pop();
    }


}
