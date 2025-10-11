#include<iostream>
using namespace std;
// Rozwiązanie iteracyjne
int pot_szybkie(int baza, int wyklad)
{
	int wynik = 1;
	
	while(wyklad>0)
	{
		if (wyklad%2 == 1) 
			wynik *= baza;
			
		baza*= baza;
		wyklad/=2; 
	}
	return wynik;
}

int main()
{
	int wyklad;
	int baza;
	
	cout<<"Podaj podstawę: ";
	cin>>baza;
	cout<<"Podaj wykładnik: ";
	cin>>wyklad;
	
	cout<<baza<<" do potęgi "<<wyklad<<" wynosi "<<pot_szybkie(baza, wyklad);

	return 0;
}