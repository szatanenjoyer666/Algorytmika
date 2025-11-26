#include<iostream>
using namespace std;

int pot_szybkie(int baza, int wyklad) //param
{
	int wynik = 1; //inicjalizacja, start
	
	while(wyklad>0) {
		if (wyklad%2 == 1) //reszka /
			wynik *= baza; 
			
		baza*= baza; //podwojenie pot
		wyklad/=2; 
	}
	return wynik; 
}

int main(){
	int wyklad; //zm
	int baza;
	
	cout<<"Podaj podstawę: ";
	cin>>baza;
	cout<<"Podaj wykładnik: ";
	cin>>wyklad;
	
	cout<<baza<<" do potęgi "<<wyklad<<" wynosi "<<pot_szybkie(baza, wyklad); //main nic nie widzi nic nie słyszy

	return 0;

}
