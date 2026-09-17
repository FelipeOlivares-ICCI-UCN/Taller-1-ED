#include "Menu.h"

void Menu::startMenu() {
    int input = 0;
    int subInput;

    do {
        cout << "--------------- Opcion " << currentOptionNum << "---------------" << endl;
        displayOptions();
        input = userInput(1, exitOption);

        switch (input) {
            case 1:
                cout << "=== PACIENTES EN ESPERA ==="  << endl << endl;

                atencion.show();
                if (atencion.empty()) {
                    cout << "Sin pacientes" << endl;
                    break;

                }
                cout << "Ingrese el numero de pacientes a atender (Entre 0 y 9)" << endl;
                subInput = userInput(0, 9);
                attendPaciente(subInput);
                break;

            case 2:
                cout <<"=== DEPARTAMENTOS/SERVICIOS ===" << endl;
                cout << "1. Urgencias" << endl;
                cout << "2. MedicinaGeneral" << endl;
                cout << "3. Cardiologia" << endl;
                cout << "4. Neurologia" << endl;
                cout << "5. Traumatologia" << endl;
                cout << "6. Cirugia" << endl;
                cout << "7. Pediatria" << endl;
                cout << "8. Hospitalizacion" << endl;

                cout << endl;
                subInput = userInput(1, 8);

                hospital.showPacientes(subInput);
                break;

            case 3:
                cout <<"=== HISTORIAL DE ATENCION ===" << endl;
                hospital.showHistorial();
                break;
        }

        currentOptionNum++;


    } while (input != exitOption);

    cout << "Adios Papu :v" << endl;

}

int Menu::userInput(int min, int max) {
    string input;

    do {
        cout << "Seleccionar opcion: ";
        cin >> input;

        if (input.length() == 1 && isdigit(input[0])) {
            int option = input[0] - '0';

            if (min <= option && option <= max) {
                return option;
            }
        }

        cout << "Ingrese una opcion entre " << min << "y" << max << endl;


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
