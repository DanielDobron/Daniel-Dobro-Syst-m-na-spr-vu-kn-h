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
string Zanre[3][3] = { {"Omaľovánky", "Rozprávky"}, {"Romány", "Detektívky", "Cestopisy"}, {"Príručky", "Novely", "Kuchárky"} };

int main()
{
    setlocale(LC_ALL, "");

    cout << "---------------------Systém na správu kníh-------------------" << endl;
    cout << "----------------------------Menu-----------------------------" << endl;
    cout << "Pre Deti (žáner) : Omaľovánky, Rozprávky " << endl;
    cout << "Pre Študentov (žáner) : Romány, Detektívky, Cestopisy" << endl;
    cout << "Pre Dospelých (žáner) : Príručky, Novely, Kuchárky" << endl;
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
            cout << "Názov: Omaľovánky / Maľovanky, pre popis stlačte- 2" << endl;
            cout << "Názov: Krtko maliarom, pre popis stlačte- 3 " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Vydavateľstvo: Foni book 2006   Cena:3.30 eur  Počet strán-198  Pevna väzba" << endl;
                break;
            case 2:
                cout << "Vydavateľstvo: Akim 2003 Cena: 0.85eur Počet strán 16   Šitá väzba" << endl;
                break;
            case 3:
                cout << "Vydavateľstvo: Akim-2011  Cena: 2.35 eur Počet strán 16  Paperback väzba " << endl;
                break;
            
            }
        }
        else if (vyber == 2)
        {
            cout << " Rozprávky o psíčkovi a mačičke, pre popis stlačte- 1 " << endl;
            cout << " Ako sa chytá radosť, pre popis stlačte- 2" << endl;
            cout << " Adam a čarovná šmykľavka, pre  popis stlačte- 3" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Vydavateľstvo: Eastone Books 2010 Cena: 5.75 eur   Počet strán 110   Pevná väzba" << endl;
                break;
            case 2:
                cout << "Vydavateľstvo: Mladé Letá 2012    Cena: 7.93 eur   Počet strán  112   Pevná väzba" << endl;
                break;
            case 3:
                cout << "Vydavateľstvo: Slovart 2015       Cena: 9.29 eur   Počet strán  88    Pevná väzba" << endl;
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
            cout << "Názov: Amnestia na zradu, pre popis stlačte- 1 " << endl;
            cout << "Názov: Dokonalý vzťah, pre popis stlačte- 2 " << endl;
            cout << "Názov: Alibi, pre popis stlačte- 3 " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Autor: Andrea Rimová   Vydavateľstvo: Motýľ  2011   Cena: 4.90 eur   Počet strán: 272   E-kniha" << endl;
                break;
            case 2:
                cout << "Autor: Katarína Harmatova   Vydavateľstvo: MERIDIANO press 2020   Cena: 8.99 eur   Počet strán: 380   E-kniha" << endl;
                break;
            case 3:
                cout << "Autor: Sandra Brown    Vydavateľstvo:  Remedium  2002   Cena: 12.90 eur  Počet strán 336  Brozovaná väzba" << endl;
                break;
            
            }

        }
        else if (vyber == 2)
        {
            cout << "Názov: Vraždy v Tatrách: Smrť horolezca, pre popis stlačte- 1" << endl;
            cout << "Názov: V tieni, pre popis stlačte- 2 " << endl;
            cout << "Názov: Odkazy z minulosti, pre popis stlačte- 3 " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Autor: Daniel J Dančík  Vydavateľstvo: Severin Sincilery  2018   Cena: 6.90 eur  Počet stran: 156   E-kniha" << endl;
                break;
            case 2:
                cout << "Autor: Dominik Dan  Vydavateľstvo: Slovart  2020   Cena: 38.02 eur   Počet strán: 304   Pevná väzba" << endl;
                break;
            case 3:
                cout << "Autor: Daniel J.Dančík  Vydavateľstvo: Marenčip PT  2017  Cena: 10.90 eur Počet strán: 144   Pevná-väzba" << endl;
                break;
            
            }
        }
        else if (vyber == 3)
        {
            cout << "Názov: Život v dodávke, pre popis stlačte- 1" << endl;
            cout << "Názov: Lada Svetom  Na Žigulíku cez Himaláje, pre popis stlačte- 2 " << endl;
            cout << "Názov: Mongolsko a Sibír, pre popis stlačte- 3 " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Autor: Forest Trenz a Barbora Masaříková   Vydavateľstvo: Bizbooks  2020  Cena: 14.99 eur   Počet strán: 272   Pevná väzba" << endl;
                break;
            case 2:
                cout << "Autor: Marián Grofčík   Vydavateľstvo:  Lada-svetom o.z. 2018 Cena: 12.00 eur  Počet strán: 336  Pevná väzba" << endl;
                break;
            case 3:
                cout << "Autor: Zuzana a Martin Remišovci   Vydavateľstvo: Ultimo Press 2018  Cena: 17.99 eur   Počet strán: 256    Pevná väzba" << endl;
                break;
            
            }
        }
        else cout << "Toto nie je v Žánroch!" << endl;

    }
    else if (vyber == 3)
    {
        system("cls");
        cout << "---------------------------Menu:Dospelí--------------------" << endl;
        cout << "Žánre : " << endl;
        cout << "1 - Príručky" << endl;
        cout << "2 - Novely" << endl;
        cout << "3 - Kuchárky" << endl;
        Ciara();
        cin >> vyber;

        if (vyber == 1)
        {
            cout << "Nová príručka domáceho remeselníka, pre popis stlačte- 1 " << endl;
            cout << "Ivan Hričovský záhradkárom - Diár, pre popis stlačte- 2" << endl;
            cout << "Stavba a prevádzka domu, pre popis stlačte- 3" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Autor: ******   Vydavateľstvo: Ikar  2005   Cena: 17.31 eur   Počet strán: 376   Pevná väzba" << endl;
                break;
            case 2:
                cout << "Autor: Hričovský a Boris Horák   Vydavateľstvo: Plat4M Books  2017   Cena: 9.95 eur   Počet strán: 224  Pevná väzba" << endl;
                break;
            case 3:
                cout << "Autor: ****** Vydavateľstvo: Jaga group  2016   Cena: 3.76 eur   Počet strán: 376   Pevná väzba" << endl;
                break;
           
            }

        }
        else if (vyber == 2)
        {
            cout << "Spomienky na jedno dobrodružstvo, pre popis stlačte- 1" << endl;
            cout << "Zlosť a hanba, smútok a hrdosť, pre popis stlačte- 2" << endl;
            cout << "Cudzie pribehy, pre popis stlačte- 3" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Autor: Robert Fulghum   Vydavateľstvo: Agro  2013   Cena: 9.00 eur  Počet strán: 182   Pevná väzba" << endl;
                break;
            case 2:
                cout << "Autor:  Adam Michník   Vydavateľstvo: Kalligram  2006   Cena: 5.00 eur  Počet strán: 355 Brožovaná vazba" << endl;
                break;
            case 3:
                cout << "Autor: Jana Juranová   Vydavateľstvo: Aspekt  2016    Cena: 3.00 eur  Počet strán: 216  Brožovaná vazba" << endl;
                break;
            }
        }
        else if (vyber == 3)
        {
            cout << "Kuchárska kniha Terézie Vansovej, pre popis stlačte- 1 " << endl;
            cout << "Slovenská kuchárka, pre popis stlačte- 2  " << endl;
            cout << "Torty a zákusky, pre popis stlačte- 3  " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Autor: Terézia Vansová   Vydavateľstvo: Nestor 2005   Cena: 21.50 eur   Počet strán: 528   Viazaná väzba" << endl;
                break;
            case 2:
                cout << "Autor: Kolektív   Vydavateľstvo: Topas 2010   Cena: 6.90 eur   Počet strán: 350   Viazaná väzba" << endl;
                break;
            case 3:
                cout << "Autor: Zdenka a Vladimír Horecký   Vydavateľstvo: Ikar 2017   Cena: 3.72 eur  Počet strán: 96  Brožovaná väzba" << endl;
                break;
           
            }
        }
        else cout << "Toto nie je v Žánroch!" << endl;
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
