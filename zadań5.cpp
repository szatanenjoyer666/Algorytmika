#include <iostream>
using namespace std;

void zamianka(int liczba)
{
    int tab[31];
    int i = 0; //licz pozy tab


    while (liczba != 0)
    {
        tab[i++] = liczba % 2; //zapisujesz resztę z dzielenia przez 2, zwiększasz i
        liczba /= 2;
    }
    for (int j = i - 1; j >= 0; j--) //wypisuje lelementy tablicy od ostatniego do pierwszwego
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
