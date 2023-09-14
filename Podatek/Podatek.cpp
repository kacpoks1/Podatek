#include <iostream>
#include <locale.h>

using namespace std;

void do120k(double& kwota, double& podatek) {
    
    podatek = 0;
    podatek = (kwota * 0.12) - 3600;

    if (podatek <= 0) {
        cout << "nic nie p³acisz :)";
    }
    else {

        cout << "Podatek wynosi: " << podatek;
    }

   
}

void ponad120k(double& kwota, double& podatek) {

    double roznica = 0;
    roznica = (kwota - 120000);
    podatek = (roznica * 0.32) + 10800;

    if (podatek <= 0) {
        cout << "nic nie p³acisz :)";
    }
    else {

        cout << "Podatek wynosi: " << podatek;
    }
     
}

int main()
{
    setlocale(LC_CTYPE, "Polish");

    double kwota;
    cout << "Podaj zarobion¹ kwote: ";
    cin >> kwota;
    double podatek = 0;
    
    if (kwota <= 120000) {
        
        do120k(kwota, podatek);
    }
    else {
       
        ponad120k(kwota, podatek);
    }

    return 0;
}

