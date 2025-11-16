#include <iostream> 
#include <cmath>     

using namespace std;

int main() {
    int n; //zm
    cout << "Podaj liczbe: "; 
    cin >> n;                  

    //inst var
    if (n < 2) {
        cout << n << " nie jest liczba pierwsza." << endl;
        return 0; //👍
    }
    // pierwiastek kwadrat
    for (int d = 2; d <= sqrt(n); d++) {
        if (n % d == 0) { 
            cout << n << " nie jest liczba pierwsza." << endl;
            return 0;  
        }
    }
    cout << n << " jest liczba pierwsza." << endl;

    return 0;

}
