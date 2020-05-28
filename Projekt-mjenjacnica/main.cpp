#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

int main()
{
    int izbor, izborvalute1, svota, izborvalute2, k;
    string temp1, temp2, temp3, temp4, temp5, temp6;
    float arrayDevKup[36], arraySredTec[36], arrayDevProd[36];
    while(1)
    {

        cout << "1. Prikaz tecajne liste \n2. Izmjena devizne valute \n3. Izmjena efektivne valute \n4. Izlaz iz programa" << endl;
        cout << "Unesite broj opcije: ";
        cin >> izbor;
        cout << endl;

        if(izbor == 1)
            {
             //ispisat tecajnu listu
                ifstream datoteka;
                datoteka.open("Tecajna lista.txt");
                k = 0;
                for(int i=0;i<6;i++){
                    datoteka >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6;
                    arrayDevKup[k]= stof(temp4);
                    arraySredTec[k]= stof(temp5);
                    arrayDevProd[k]= stof(temp6);
                    cout << fixed;
                    cout << setprecision(6);
                    cout << "Kupovni tecaj" << endl;
                    cout <<  arrayDevKup[k] << endl;
                    cout << "Srednji tecaj" << endl;
                    cout <<  arraySredTec[k] << endl;
                    cout << "Prodajni tecaj" << endl;
                    cout <<  arrayDevProd[k] << endl;
                    cout<<endl;

                    k++;
                }

  /*             for(int i=0;i<6;i++){
               cout << array[i];}

*/

                //datoteka >> izborvalute1;
            }
         else if(izbor == 2)
         {
            cout << "Koju valutu zelite promijeniti?" << endl;
            while(1)
                {
                    cout << "1. Euro \n2. Dolar \n3. Konvertabilna Marka \n4. Funta \n5. Kruna \n6. Zloti \n7. Izadi iz biranja" << endl;
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
                                  cout << "1. Dolar \n2. Konvertabilna Marka \n3. Funta \n4. Kruna \n5. Zloti" << endl;
                                  cout << "Unesite broj valute: ";
                                  cin >> izborvalute2;
                               }
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
                                  cout << "1. Euro \n2. Konvertabilna Marka \n3. Funta \n4. Kruna \n5. Zloti" << endl;
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
                                  cout << "1. Euro \n2. Dolar \n3. Funta \n4. Kruna \n5. Zloti" << endl;
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
                                  cout << "1. Euro \n2. Dolar \n3. Konvertabilna marka \n4. Kruna \n5. Zloti" << endl;
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
                                  cout << "1. Euro \n2. Dolar \n3. Konvertabilna marka \n4. Funta \n5. Zloti" << endl;
                                  cout << "Unesite broj valute: ";
                                  cin >> izborvalute2;
                               }
                      }
                     else if(izborvalute1 == 6)
                      {
                           cout << "Odabrali ste Zlote." << endl;
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
                    else if(izborvalute1 == 7)
                     {
                           cout << "Izasli ste iz biranja" << endl;
                           break;
                     }
                    else
                    {
                        cout << "Krivi unos, unesite broj ponovno" << endl;
                    }

                }

         }
         else if(izbor == 4)
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
