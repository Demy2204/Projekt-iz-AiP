#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    const double EuroTecaj = 7.5741;
    const double DolarTecaj = 6.9088;
    const double KonverMarkaTecaj = 3.8726;
    const double FuntaTecaj = 8.5074;
    const double CeskaKrunaTecaj = 0.2795;
    const double ForinteTecaj = 2.1675;

    int izbor, izborvalute1, svota, izborvalute2;
    while(1)
    {

        cout << "1. Zelim vidjeti tecajnu listu \n2. Zelim izmjeniti valute \n3. izlaz iz programa" << endl;
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
            }
         else if(izbor == 2)
         {
          //pitat odma za valute
            cout << "Koju valutu zelite promijeniti?" << endl;
            while(1)
                {
                    cout << "1. Euro \n2. Dolar \n3. Konvertabilna Marka \n4. Funta \n5. Kruna \n6. Forinte" << endl;
                    cout << "Unesite broj valute: ";
                    cin >> izborvalute1;
                    cout << endl;

                    if(izborvalute1 == 1)
                      {
                           cout << "Odabrali ste euro." << endl;
                           cout << "Unesite svotu koliko zelite promijeniti." << endl;
                           cin >> svota;
                           cout << endl;
                           cout << "U koju valutu zelite promijeniti svoj iznos?" << endl;
                           while(1)
                               {
                                  cout << "1. Dolar \n2. Konvertabilna Marka \n3. Funta \n4. Kruna \n5. Forinte" << endl;
                                  cout << "Unesite broj valute: ";
                                  cin >> izborvalute2;
                               }
                           //mozda vidjet dal je ovo oke
                      }
                    else if(izborvalute1 == 2)
                      {
                           cout << "Odabrali ste dolar." << endl;
                           cout << "Unesite svotu koliko zelite promijeniti." << endl;
                           cin >> svota;
                           cout << endl;
                           cout << "U koju valutu zelite promijeniti svoj iznos?" << endl;
                           while(1)
                               {
                                  cout << "1. Euro \n2. Konvertabilna Marka \n3. Funta \n4. Kruna \n5. Forinte" << endl;
                                   cout << "Unesite broj valute: ";
                                   cin >> izborvalute2;
                               }

                      }
                     else if(izborvalute1 == 3)
                      {
                           cout << "Odabrali ste marku." << endl;
                           cout << "Unesite svotu koliko zelite promijeniti." << endl;
                           cin >> svota;
                           cout << endl;
                           cout << "U koju valutu zelite promijeniti svoj iznos?" << endl;
                           while(1)
                               {
                                  cout << "1. Euro \n2. Dolar \n3. Funta \n4. Kruna \n5. Forinte" << endl;
                                  cout << "Unesite broj valute: ";
                                  cin >> izborvalute2;
                               }

                      }
                     else if(izborvalute1 == 4)
                      {
                           cout << "Odabrali ste funtu." << endl;
                           cout << "Unesite svotu koliko zelite promijeniti." << endl;
                           cin >> svota;
                           cout << endl;
                           cout << "U koju valutu zelite promijeniti svoj iznos?" << endl;
                           while(1)
                               {
                                  cout << "1. Euro \n2. Dolar \n3. Konvertabilna marka \n4. Kruna \n5. Forinte" << endl;
                                  cout << "Unesite broj valute: ";
                                  cin >> izborvalute2;
                               }

                      }
                     else if(izborvalute1 == 5)
                      {
                           cout << "Odabrali ste krunu." << endl;
                           cout << "Unesite svotu koliko zelite promijeniti." << endl;
                           cin >> svota;
                           cout << endl;
                           cout << "U koju valutu zelite promijeniti svoj iznos?" << endl;
                           while(1)
                               {
                                  cout << "1. Euro \n2. Dolar \n3. Konvertabilna marka \n4. Funta \n5. Forinte" << endl;
                                  cout << "Unesite broj valute: ";
                                  cin >> izborvalute2;
                               }

                      }
                     else if(izborvalute1 == 6)
                      {
                           cout << "Odabrali ste forinte." << endl;
                           cout << "Unesite svotu koliko zelite promijeniti." << endl;
                           cin >> svota;
                           cout << endl;
                           cout << "U koju valutu zelite promijeniti svoj iznos?" << endl;
                           while(1)
                               {
                                  cout << "1. Euro \n2. Dolar \n3. Konvertabilna marka \n4. Kruna \n5. Funte" << endl;
                                  cout << "Unesite broj valute: ";
                                  cin >> izborvalute2;
                               }

                      }
                    else
                    {
                        cout << "Krivi unos, unesite broj ponovno" << endl;
                    }

                }

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
//kad se pretvara - eure pomnozimo tecaj i kolko imamo i to jos onda sa drugom valutom?
