#include <iostream>
#include <clocale>  

using namespace std;
void Ciara()
{
    cout << "-------------------------------------------------------------" << endl;
}
void Knihy();
string vyber, dalej, opakovat;
int  choice;


int main()
{  
        std::setlocale(LC_ALL, "");
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
        Knihy();   
        return 0;
}
void Knihy()
{

    std::setlocale(LC_ALL, "");

    cout << "Vyber vekovú kategóriu :" << endl;
    cin >> vyber;
    cout << endl << endl;

    if (vyber == "Deti")
    {
        system("cls");
        cout << "-----------------------------Menu:Deti-----------------------" << endl;
        cout << "Žánre:" << endl;
        cout << "O - Omaľovánky" << endl;
        cout << "R - Rozprávky" << endl;
        Ciara();
        cin >> vyber;

        if (vyber == "O")
        {

            cout << "Názov: Veľká kniha omaľovánok, pre popis stlačte- 1" << endl;
            cout << "Názov  " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "ffff" << endl;
                break;
            case 2:
                cout << "ggg" << endl;
                break;
            case 3:
                cout << "fhhh" << endl;
                break;
            case 4:
                cout << "hiiii" << endl;
                break;
            }
        }
        else if (vyber == "R")
        {
            cout << "Bala Poto fvjhjghpre, popis stlačte- 1 " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "ffffhhhh" << endl;
                break;
            case 2:
                cout << "ggg" << endl;
                break;
            case 3:
                cout << "fhhh" << endl;
                break;
            case 4:
                cout << "hiiii" << endl;
                break;
            }
        }
        else cout << "Toto nie je v Žánroch!" << endl;

    }
    else if (vyber == "Stud")
    {
        system("cls");
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
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "lll" << endl;
                break;
            case 2:
                cout << "jjj" << endl;
                break;
            case 3:
                cout << "fghj" << endl;
                break;
            case 4:
                cout << "gtgd" << endl;
                break;
            }

        }
        else if (vyber == "D")
        {
            cout << "ratata fvjhjgh" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "fgd" << endl;
                break;
            case 2:
                cout << "bnhh" << endl;
                break;
            case 3:
                cout << "qwee" << endl;
                break;
            case 4:
                cout << "hluu" << endl;
                break;
            }
        }
        else if (vyber == "C")
        {
            cout << "mala rrtrd frdfdf" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "hjhjh" << endl;
                break;
            case 2:
                cout << "vbvb" << endl;
                break;
            case 3:
                cout << "mala" << endl;
                break;
            case 4:
                cout << "awer" << endl;
                break;
            }
        }
        else cout << "Toto nie je v Žánroch! !" << endl;

    }
    else if (vyber == "Dosp")
    {
        system("cls");
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
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "hôú§" << endl;
                break;
            case 2:
                cout << "wxcv" << endl;
                break;
            case 3:
                cout << "xdxxx" << endl;
                break;
            case 4:
                cout << "weee" << endl;
                break;
            }

        }
        else if (vyber == "N")
        {
            cout << "Bala Poto fvjhjgh" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "qaxd" << endl;
                break;
            case 2:
                cout << "xccc" << endl;
                break;
            case 3:
                cout << "ääää" << endl;
                break;
            case 4:
                cout << "qesss" << endl;
                break;
            }
        }
        else if (vyber == "K")
        {
            cout << "mala rrtrd frdfdf" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "úúrúr" << endl;
                break;
            case 2:
                cout << "äääärr" << endl;
                break;
            case 3:
                cout << "rfvqw" << endl;
                break;
            case 4:
                cout << "alalsek" << endl;
                break;
            }
        }
        else cout << "Toto nie je v Žánroch!!" << endl;
    }

    else
    {
        Ciara();
        cout << "Veková kategória: " << vyber << " Neexistuje !" << endl;
        Ciara();
    }
    cout << "Chcete pokračovať v hladaní knih? (a/n) " << endl;
    cin >> dalej;
    if (dalej == "a") {
        system("cls");
        main();
    }
    else if (dalej == "n") {
        std::exit;
    }

}
