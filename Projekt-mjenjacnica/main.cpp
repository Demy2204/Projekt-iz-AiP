#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //osnovni kod
    //napravit random da sve valute mjenjaju vrijednost svakih x vremena
    //kad se pretvaraju vracat u kune pa u drugu valutu?
    //mjenjat te vrijednosti sa temp?
    //u binarnu datoteku kolicinu prebacenih novaca?

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

    }

    return 0;
}
