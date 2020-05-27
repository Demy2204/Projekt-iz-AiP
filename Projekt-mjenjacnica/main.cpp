#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    const double EuroTecaj = 7.5741;
    const double DolarTecaj = 6.9088;
    const double MarkaTecaj = 3.8726;
    const double FuntaTecaj = 8.5074;
    const double CeskaKrunaTecaj = 0.2795;
    const double ForinteTecaj = 2.1675;

    int izbor;
    while(1)
    {

        cout << "1. Zelim vidjeti tecajnu listu prije izmjene valuta" << endl;
        cout << "2. Ne zelim vidjeti tecajnu listu prije izmjene valuta" << endl;
        cout << "3. izlaz" << endl;
        cout << "Unesite broj opcije: ";
        cin >> izbor;
        cout << endl;

        if(izbor == 1)
            {
             //ispisat tecajnu listu
            ifstream datoteka;
               string redak;
               datoteka.open("Tecajna lista.txt");
               getline(datoteka, redak);
               cout << redak << endl;
               datoteka.close();
            //pitat onda za valute
            }
         else if(izbor == 2)
         {
          //pitat odma za valute
         }
         else if(izbor == 3)
         {
             cout << "Izasli ste iz programa" << endl;
             break;
         }
         else
         {
             cout << "Krivi unos, unesite broj ponovno" << endl;
         }
        cout << endl;
        system("pause");
    }

    return 0;
}
