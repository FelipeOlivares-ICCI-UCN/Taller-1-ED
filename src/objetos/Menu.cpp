#include "Menu.h"

void Menu::startMenu() {
    int input = 0;
    int subInput;

    do {
        cout << "--------------- Opcion " << currentOptionNum << "---------------" << endl;
        input = userInput();
        currentOptionNum++;

    } while (input != exitOption);

    cout << "Adios Papu :v" << endl;

}

int Menu::userInput() {
    string input;

    do {
        displayOptions();
        cout << "Seleccionar opcion: ";
        cin >> input;

        if (input.length() == 1 && isdigit(input[0])) {
            return input[0] - '0';
        }

        cout << "Ingrese una opcion valida";


    } while (true);
}

void Menu::displayOptions() {
    cout << "=== HOSPITAL LA MACARENA === "<< endl;
    cout << "1. Atender Pacientes" << endl;
    cout << "2. Ver Departamento" << endl;
    cout << "3. Revisar Historial" << endl;
    cout << "4. Salir" << endl;

}