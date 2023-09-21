#include <iostream>

using namespace std;

int main() {
    int scelta;
    float x1;
    float x2;
    float risultato;

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
        cout << "Inserisci il primo numero: \n";
        cin >> x1;
        cout << "Inserisci il secondo numero: \n";
        cin >> x2;
        risultato = x1 + x2;
        cout << "Il risultato è: " << risultato;
        break;

    case 2:
        cout << "Inserisci il primo numero: \n";
        cin >> x1;
        cout << "Inserisci il secondo numero: \n";
        cin >> x2;
        risultato = x1 - x2;
        cout << "Il risultato è: " << risultato;
        break;

    case 3:
        cout << "Inserisci il primo numero: \n";
        cin >> x1;
        cout << "Inserisci il secondo numero: \n";
        cin >> x2;
        risultato = x1 * x2;
        cout << "Il risultato è: " << risultato;
        break;

    case 4:
        cout << "Inserisci il primo numero: \n";
        cin >> x1;
        cout << "Inserisci il secondo numero: \n";
        cin >> x2;
        risultato = x1 / x2;
        cout << "Il risultato è: " << risultato;
        break;

    default:
        cout << "Operazione non valida, selezionare un numero da 1 a 4" << endl;
        break;
    }

    return 0;
}