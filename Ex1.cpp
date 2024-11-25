#include <iostream>
#include <thread>

using namespace std;

//imprimir els números imparells de l'1 al 10
void printOddNumbers() {
    cout << "Primer fil:" << endl; //inici primer fil
    for (int i = 1; i <= 10; i += 2) {
        cout << i << endl;
    }
}

//imprimir els números parells de l'1 al 10
void printEvenNumbers() {
    // Assegura't que el segon fil imprimeix després que el primer acabi
    cout << "Segon fil:" << endl; //inici segon fil
    for (int i = 2; i <= 10; i += 2) {
        cout << i << endl;
    }
}

int main() {
    // Creem els dos fils
    thread oddThread(printOddNumbers);  // Fil per imprimir imparells
    oddThread.join();

    thread evenThread(printEvenNumbers); // Fil per imprimir parells
    evenThread.join();

    return 0;
}
