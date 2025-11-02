#include <iostream> 
#include <cmath>     

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe: "; 
    cin >> n;                  

   
    if (n < 2) {
        cout << n << " nie jest liczba pierwsza." << endl;
        return 0; 
    }

    // Sprawdzamy wszystkie dzielniki od 2 do sqrt(n)
    for (int d = 2; d <= sqrt(n); d++) {
        // Jeśli n jest podzielne przez d, to nie jest pierwsze
        if (n % d == 0) {
            cout << n << " nie jest liczba pierwsza." << endl;
            return 0;  
        }
    }

    // Jeśli pętla się zakończyła bez znalezienia dzielnika, n jest pierwsze
    cout << n << " jest liczba pierwsza." << endl;

    return 0;
}