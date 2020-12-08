// Daniel Dobroň Systém na správu kníh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <clocale>  
using namespace std;
void Ciara()
{
    cout << "----------------------------------------------------------" << endl;
}
int main()
{
    std::setlocale(LC_ALL, "");
    string vyber, dalej;
    while (true)
    {
        cout << "------System na spravu kníh------" << endl;
        cout << "---------------Menu--------------" << endl;
        cout << "Vekova kategoria : " << endl;
        cout << "Deti - Deti" << endl;
        cout << "Stud - Študenti" << endl;
        cout << "Dosp - Dospeli" << endl;
        cout << "Pre deti (zaner) : Omalovanky, Rozprávky " << endl;
        cout << "Pre studentov (zaner) : Romany, Detektivky, Cestopisy" << endl;
        cout << "Pre dospelych (zaner) : Romany, Novely, Kuchárky" << endl;
        Ciara();

        while (true)
        {
            cout << "Vyber vekovú kategoriu :" << endl;
            cin >> vyber;
            cout << endl << endl;
            
            if (vyber == "Deti")
            {
                cout << "-----------------------------Menu:Deti-----------------------" << endl;
                cout << "Žánre:" << endl;
                cout << "Omalovanky" << endl;
                cout << "Rozpravky" << endl;
                Ciara();
                cin >> vyber;

                if (vyber == "Omalovanky")
                {
                   cout << "Nazov: Velka kniha omalovanok ; Vydavatelstvo : Foni book, 2006; Cena: 3.30 eur" << endl;
                   cout << "       Pocet stran- 198 , Pevna vazba, Strucny dej: Vyfarbi, uc sa, raduj sa! " << endl;
                   cout << " " << endl;
                   cout << " " << endl;
                   cout << " " << endl;
                   cout << " " << endl;
                   cout << " " << endl;


                }
                else if (vyber == "Rozpravky")
                {
                    cout << "Bala Poto fvjhjgh" << endl;
                }
                else cout << "Toto nie je Žanre !" << endl;

            }
             else if (vyber == "Stud")
             {
                cout << "---------------------------Menu:Študenti--------------------" << endl;
                cout << "Žanre : " << endl;
                cout << "Romány" << endl;
                cout << "Detektivky" << endl;
                cout << "Cestopisy" << endl;
                Ciara();
                cin >> vyber;

                if (vyber == "Romany")
                {
                    cout << "Pavol Bela Jozko debilko " << endl;

                }
                else if (vyber == "Detektivky")
                {
                    cout << "Bala Poto fvjhjgh" << endl;
                }
                else if (vyber == "Cestopisy")
                {
                    cout << "mala rrtrd frdfdf" << endl;
                }
                else cout << "Toto nie je Žanre !" << endl;

             }
             else if (vyber == "Dosp")
             {
                cout << "---------------------------Menu:Dospeli--------------------" << endl;
                cout << "Zanre : " << endl;
                cout << "Romany" << endl;
                cout << "Novely" << endl;
                cout << "Kucharky" << endl;
                Ciara();
                cin >> vyber;

                if (vyber == "Romany")
                {
                    cout << "Pavol Bela Jozko debilko " << endl;

                }
                else if (vyber == "Novely")
                {
                    cout << "Bala Poto fvjhjgh" << endl;
                }
                else if (vyber == "Kucharky")
                {
                    cout << "mala rrtrd frdfdf" << endl;
                }
                else cout << "Toto nie je Žanre !" << endl;
             }
            
            
       
            else
            {
              Ciara();
              cout << "Vekova kategoria: " << vyber << " Neexistuje !" << endl;
              Ciara();
            }

            cout << "Chcete pokracovat v hladani knih? (a/n) " << endl;
            cin >> dalej;
            if (dalej == "n") break;




        }
        cout << "Urcite chcete ukoncit hladanie knih ? (a/n) " << endl;
        cin >> dalej;
        if (dalej == "a") break;
        
    }
}