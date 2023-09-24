/*BENVENUTO NEL PROGRAMMA!*/
#include <iostream>

using namespace std;

int main() {
    int scelta;
    float x1;
    float x2;
    float risultato;
    bool ripeti = true;  // Variabile per determinare se ripetere la scelta o uscire dal programma

    while (ripeti) {
        // Selezione della modalità
        cout << "Seleziona un'opzione:\n";
        cout << "[1] Addizione\n";
        cout << "[2] Sottrazione\n";
        cout << "[3] Moltiplicazione\n";
        cout << "[4] Divisione\n";
        cout << "Inserisci numero: ";
        cin >> scelta;

        switch (scelta) {
        case 1:
            cout << "Inserisci il primo numero: ";
            cin >> x1;
            cout << "Inserisci il secondo numero: ";
            cin >> x2;
            risultato = x1 + x2;
            cout << "Il risultato è: " << risultato << endl;
            break;

        case 2:
            cout << "Inserisci il primo numero: ";
            cin >> x1;
            cout << "Inserisci il secondo numero: ";
            cin >> x2;
            risultato = x1 - x2;
            cout << "Il risultato è: " << risultato << endl;
            break;

        case 3:
            cout << "Inserisci il primo numero: ";
            cin >> x1;
            cout << "Inserisci il secondo numero: ";
            cin >> x2;
            risultato = x1 * x2;
            cout << "Il risultato è: " << risultato << endl;
            break;

        case 4:
            cout << "Inserisci il primo numero: ";
            cin >> x1;
            cout << "Inserisci il secondo numero: ";
            cin >> x2;
            risultato = x1 / x2;
            cout << "Il risultato è: " << risultato << endl;
            break;

        default:
            cout << "Operazione non valida, selezionare un numero da 1 a 4. Riprova." << endl;
            break;
        }

        // Chiedi all'utente se desidera ripetere
        char risposta;
        cout << "Vuoi effettuare un'altra operazione? (s/n): ";
        cin >> risposta;
        if (risposta != 's' && risposta != 'S') {
            ripeti = false;  // Se la risposta non è 's' o 'S', esci dal ciclo
        }
    }

    return 0;
}
