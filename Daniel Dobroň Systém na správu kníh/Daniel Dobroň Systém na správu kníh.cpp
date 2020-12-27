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
        cout << "------Systém na správu kníh------" << endl;
        cout << "---------------Menu--------------" << endl;
        cout << "Veková kategória : " << endl;
        cout << "Deti - Deti" << endl;
        cout << "Stud - Študenti" << endl;
        cout << "Dosp - Dospelí" << endl;
        cout << "Pre Deti (žáner) : Omaľovánky, Rozprávky " << endl;
        cout << "Pre Študentov (žáner) : Romány, Detektívky, Cestopisy" << endl;
        cout << "Pre Dospelých (žáner) : Romány, Novely, Kuchárky" << endl;
        Ciara();

        while (true)
        {
            cout << "Vyber vekovú kategóriu :" << endl;
            cin >> vyber;
            cout << endl << endl;

            if (vyber == "Deti")
            {
                cout << "-----------------------------Menu:Deti-----------------------" << endl;
                cout << "Žánre:" << endl;
                cout << "O - Omaľovánky" << endl;
                cout << "R - Rozprávky" << endl;
                Ciara();
                cin >> vyber;

                if (vyber == "O")
                {
                    cout << "Názov: Veľká kniha omaľovánok ; Vydavateľstvo : Foni book, 2006; Cena: 3.30 eur" << endl;
                    cout << "       Počet stran- 198 , Pevná väzba, Stručný dej: Vyfarbi, uč sa, raduj sa! " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;


                }
                else if (vyber == "R")
                {
                    cout << "Bala Poto fvjhjgh" << endl;
                }
                else cout << "Toto nie je v Žánroch!" << endl;

            }
            else if (vyber == "Stud")
            {
                cout << "---------------------------Menu:Študenti--------------------" << endl;
                cout << "Žanre : " << endl;
                cout << "R - Romány" << endl;
                cout << "D - Detektivky" << endl;
                cout << "C - Cestopisy" << endl;
                Ciara();
                cin >> vyber;

                if (vyber == "R")
                {
                    cout << "Pavol Bela Jozko debilko " << endl;

                }
                else if (vyber == "D")
                {
                    cout << "ratata fvjhjgh" << endl;
                }
                else if (vyber == "C")
                {
                    cout << "mala rrtrd frdfdf" << endl;
                }
                else cout << "Toto nie je v Žánroch! !" << endl;

            }
            else if (vyber == "Dosp")
            {
                cout << "---------------------------Menu:Dospelí--------------------" << endl;
                cout << "Žánre : " << endl;
                cout << "R - Romány" << endl;
                cout << "N - Novely" << endl;
                cout << "K - Kuchárky" << endl;
                Ciara();
                cin >> vyber;

                if (vyber == "R")
                {
                    cout << "Pavol Bela Jozko debilko " << endl;

                }
                else if (vyber == "N")
                {
                    cout << "Bala Poto fvjhjgh" << endl;
                }
                else if (vyber == "K")
                {
                    cout << "mala rrtrd frdfdf" << endl;
                }
                else cout << "Toto nie je v Žánroch!!" << endl;
            }



            else
            {
                Ciara();
                cout << "Veková kategória: " << vyber << " Neexistuje !" << endl;
                Ciara();
            }

            cout << "Chcete pokračovať v hľadaní kníh? (a/n) " << endl;
            cin >> dalej;
            if (dalej == "n") break;




        }
        cout << "Určite chcete ukončiť hľadanie kníh ? (a/n) " << endl;
        cin >> dalej;
        if (dalej == "a") break;

    }
}
