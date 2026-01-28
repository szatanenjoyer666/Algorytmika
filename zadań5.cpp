#include <iostream>
using namespace std;

void zamianka(int liczba) //funzmi
{
    int tab[31]; //zapodajemy max bitów
    int i = 0; // pozy tab


    while (liczba != 0)
    {
        tab[i++] = liczba % 2; // zwiększasz indeks
        liczba /= 2;
    }
    for (int j = i - 1; j >= 0; j--) //ini mini war zmian
    {
        cout << tab[j];
    }
}

int main()
{
    int liczba;

    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;

    cout << "Liczba " << liczba << " po zamianie na postac binarna: ";
    zamianka(liczba);

    return 0;
}
