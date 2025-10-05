#include <iostream>
using namespace std;
int szukana(int tablica[], int liczba) {
   int l = 0;
   int p = 14;
   
   while (l <= p) { 
      int sr = (l + p) / 2;
       if (tablica[sr] == liczba) {
           return sr;
       }
       else if (tablica[sr] > liczba) {
           p = sr - 1;
       }
       else {
           l = sr + 1; 
       }
	
   }
   return -1;
}
int main() { //funk gł
   int tablica[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
   int liczba; //zm
   cout << "Podaj liczbe: ";
   cin >> liczba;
   int wynik = szukana(tablica, liczba); //dzika dzika
   if (wynik != -1) { //wynik nierowności (jeśli nie ma tej samej wartosci)
       cout << "Liczba " << liczba << " wystepuje na indeksie " << wynik << endl;
   } else {
       cout << liczba << "?...nie ma takiej liczby jak " << liczba <<  endl;
   }
   return 0;
}