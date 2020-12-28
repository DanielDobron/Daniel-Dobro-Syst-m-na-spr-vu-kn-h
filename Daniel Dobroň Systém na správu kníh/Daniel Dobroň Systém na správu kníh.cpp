#include <iostream>
#include <clocale>  

using namespace std;
void Ciara()
{
    cout << "-------------------------------------------------------------" << endl;
}
void Knihy();
string dalej, opakovat;
int vyber;
int  choice;




string Kategorie[3] = { "Deti", "Študenti ", "Dospelí" };
string Zanre[3][3] = { {"Omaľovánky", "Rozprávky"}, {"Romány", "Detektívky", "Cestopisy"}, {"Romány", "Novely", "Kuchárky"} };

int main()
{
    setlocale(LC_ALL, "");

    cout << "---------------------Systém na správu kníh-------------------" << endl;
    cout << "----------------------------Menu-----------------------------" << endl;
    cout << "Pre Deti (žáner) : Omaľovánky, Rozprávky " << endl;
    cout << "Pre Študentov (žáner) : Romány, Detektívky, Cestopisy" << endl;
    cout << "Pre Dospelých (žáner) : Romány, Novely, Kuchárky" << endl;
    for (int i = 0; i < sizeof(Kategorie) / sizeof(*Kategorie); ++i) //* - pointer
    {
        cout << i+1 << " " << Kategorie[i] << endl;
    }
    Ciara();
    Knihy();
    return 0;
}
void Knihy()
{

    setlocale(LC_ALL, "");

    cout << "Vyber vekovú kategóriu :" << endl;
    cin >> vyber;
    cout << endl << endl;

    if (vyber == 1)
    {
        system("cls");
        cout << "-----------------------------Menu:Deti-----------------------" << endl;
        cout << "Žánre:" << endl;
        cout << "1 - Omaľovánky" << endl;
        cout << "2 - Rozprávky" << endl;
        Ciara();
        cin >> vyber;

        if (vyber == 1)
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
        else if (vyber == 2)
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
    else if (vyber == 2)
    {
        system("cls");
        cout << "---------------------------Menu:Študenti--------------------" << endl;
        cout << "Žanre : " << endl;
        cout << "1 - Romány" << endl;
        cout << "2 - Detektivky" << endl;
        cout << "3 - Cestopisy" << endl;
        Ciara();
        cin >> vyber;

        if (vyber == 1)
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
        else if (vyber == 2)
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
        else if (vyber == 3)
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
    else if (vyber == 3)
    {
        system("cls");
        cout << "---------------------------Menu:Dospelí--------------------" << endl;
        cout << "Žánre : " << endl;
        cout << "1 - Romány" << endl;
        cout << "2 - Novely" << endl;
        cout << "3 - Kuchárky" << endl;
        Ciara();
        cin >> vyber;

        if (vyber == 1)
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
        else if (vyber == 2)
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
        else if (vyber == 3)
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
