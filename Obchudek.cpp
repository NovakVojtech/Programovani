#include <iostream>
#include <unistd.h>
#include <vector>

using namespace std;

vector <string> nazevProduktu = {
        "Klobasy           ",
        "Krabice spaget    ",
        "Pizza             ",
        "Bramborove lupinky",
        "kvasnice          ",
        "cukr              ",
        "Basa piva         ",
        "Mleko             ",
        "Dzusovy koncetrat ",
        "Remen alternatoru ",
        "Brzdova kapalina  ",
        "Motorovy olej     ",
        "Chladici kapalina ",
        "Zapalovaci svicky ",
        "Autobaterie       "
};

vector <int> pocet = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0
};

vector <float> cenaProduktu ={
        10.95,
        11.95,
        9.95,
        14.95,
        8.95,
        6.95,
        149,
        5.5,
        9.95,
        295,
        35,
        149,
        195,
        99,
        495
};

float cena = 0;

int main () {
    START:
    int moznosti = 0;
    cout << "-------------------------------------------- \n";
    cout << "Vitejte v Teimon Kauppa, jake je vase prani? \n";
    cout << "-------------------------------------------- \n";
    cout << "*--------------* \n";
    cout << "| 1. Obchod    |\n| 2. Kosik     | \n| 3. Platba    |\n";
    cout << "*--------------* \n";

    cin >> moznosti;
    system("CLS");
    if (moznosti > 0 && moznosti < 5) {
        switch (moznosti) {
            case 1: {
                MENU:
                int sortiment;
                cout << "*---------------*\n";
                cout << "| 1. Potraviny  | \n";
                cout << "| 2. Napoje     |\n";
                cout << "| 3. Auto dily  |\n";
                cout << "*---------------* \n";
                cout << "4. Zpet do hlavniho menu.\n";

                cin >> sortiment;
                system("CLS");
                switch (sortiment) {
                    case 1: {
                        int produkt;
                        int pocetProduktu;
                        SORTIMENT:
                        cout << "*------------------------*----------* \n";
                        cout << "| 1. Klobasy             | 10.95 mk | \n";
                        cout << "| 2. Krabice spaget      | 11.95 mk | \n";
                        cout << "| 3. Pizza               |  9.95 mk | \n";
                        cout << "| 4. Bramborove lupinky  | 14.95 mk | \n";
                        cout << "| 5. Kvasnice            |  8.95 mk | \n";
                        cout << "| 6. Cukr                |  6.95 mk | \n";
                        cout << "*------------------------*----------* \n";
                        cout << "  7. Zpet do nabidky sortimentu.\n\n";
                        cout << "Jaky produkt si chcete pridat do kosiku? \n";
                        cin >> produkt;
                        bool validProdukt = true;
                        if (produkt > 0 && produkt != 7) {
                            if (produkt < 7) {
                                cout << "Kolik chcete kusu? \n";
                                cin >> pocetProduktu;
                            }

                            bool valid = true;
                            if (produkt < 0 || produkt > 6) {
                                valid = false;
                                cout << "Zadali jste neplatnou moznost, zkuste to znovu.\n\n";
                            }

                            if (valid) {
                                pocet[produkt - 1] += pocetProduktu;
                                cena += cenaProduktu[produkt - 1] * (float) pocetProduktu;
                                cout << "\n" << cena;
                            }
                        } else {
                            validProdukt = false;
                        }

                        system("PAUSE");
                        system("CLS");
                        if (validProdukt) {
                            goto SORTIMENT;
                        } else {
                            goto MENU;
                        }
                    }
                    case 2: {
                        int produkt = -1;
                        int pocetProduktu;
                        NAPOJE:
                        cout << "*------------------------*----------* \n";
                        cout << "| 1. Basa piva           |   149 mk | \n";
                        cout << "| 2. Mleko               |   5.5 mk | \n";
                        cout << "| 3. Dzusovy koncetrat   |  9.95 mk | \n";
                        cout << "*------------------------*----------* \n";
                        cout << "  4. Zpet do nabidky sortimentu.\n\n";
                        cout << "Jaky produkt si chcete pridat do kosiku? \n";
                        cin >> produkt;
                        bool validProdukt = true;
                        if (produkt > 0 && produkt != 4) {
                            if (produkt < 4) {
                                cout << "Kolik chcete kusu? \n";
                                cin >> pocetProduktu;
                            }

                            bool valid = true;
                            if (produkt < 0 || produkt > 3) {
                                valid = false;
                                cout << "Zadali jste neplatnou moznost, zkuste to znovu.\n\n";
                            }

                            if (valid) {
                                pocet[produkt + 6 - 1] += pocetProduktu;
                                cena += cenaProduktu[produkt + 6 - 1] * (float) pocetProduktu;
                                cout << "\n" << cena;
                            }
                        } else {
                            validProdukt = false;
                        }

                        system("PAUSE");
                        system("CLS");
                        if (validProdukt) {
                            goto NAPOJE;
                        } else {
                            goto MENU;
                        }
                    }
                    case 3: {
                        int produkt = -1;
                        int pocetProduktu;
                        AUTODILY:
                        cout << "*------------------------*----------* \n";
                        cout << "| 1. Remen alternatoru   |   295 mk | \n";
                        cout << "| 2. Brzdova kapalina    |    35 mk | \n";
                        cout << "| 3. Motorovy olej       |   149 mk | \n";
                        cout << "| 4. Chladici kapalina   |   195 mk | \n";
                        cout << "| 5. Zapalovaci svicky   |    99 mk | \n";
                        cout << "| 6. Autobaterie         |   495 mk | \n";
                        cout << "*------------------------*----------* \n";
                        cout << "  7. Zpet do nabidky sortimentu.\n\n";
                        cout << "Jaky produkt si chcete pridat do kosiku? \n";
                        cin >> produkt;
                        bool validProdukt = true;
                        if (produkt > 0 && produkt != 7) {
                            if (produkt < 7) {
                                cout << "Kolik chcete kusu? \n";
                                cin >> pocetProduktu;
                            }

                            bool valid = true;
                            if (produkt < 0 || produkt > 7) {
                                valid = false;
                                cout << "Zadali jste neplatnou moznost, zkuste to znovu.\n\n";
                            }

                            if (valid) {
                                pocet[produkt + 9 - 1] += pocetProduktu;
                                cena += cenaProduktu[produkt + 9 - 1] * (float) pocetProduktu;
                                cout << "\n" << cena;
                            }
                        } else {
                            validProdukt = false;
                        }

                        system("PAUSE");
                        system("CLS");
                        if (validProdukt) {
                            goto AUTODILY;
                        } else {
                            goto MENU;
                        }
                    }
                    case 4: {
                        system("CLS");
                        goto START;
                    }
                    default: {
                        cout << "Zadal jste neplatnou moznost, zkuste to znovu. \n\n";
                        system("PAUSE");
                        system("CLS");
                        goto START;
                    }
                }

            }
            case 2: {
                cout << "*-------*\n| Kosik |\n*-------*\n\n";
                cout << "*----------------------*-------*----------*\n";
                int i = 0;
                for (int pocetProduktu: pocet) {
                    cout << "|  " << nazevProduktu[i] << "  |  ...  |  " << pocetProduktu << " kusu  | - " << cenaProduktu[i] << "  mk\n";
                    i++;
                }
                cout << "*----------------------*-------*----------*\n\n";
                cout << "V kosiku mate dohromady zbozi za " << cena << " mk.\n\n";
                break;
            }
            case 3: {
                int typPlatby;
                cout << " *---------------------------------------*\n";
                cout << " | Chcete platit hotove nebo kartou?     |\n";
                cout << " | 1. Hotove                             |\n";
                cout << " | 2. Kartou                             |\n";
                cout << " *---------------------------------------*\n";
                cin >> typPlatby;
                break;
            }
            case 4: {
                return 0;
            }
            default: {
                cout << "Zadal jste neplatnou moznost, zkuste to znovu. \n\n";
                system("PAUSE");
                system("CLS");
                goto START;
            }
        }
    }

    system("PAUSE");
    system("CLS");
    goto START;
}
