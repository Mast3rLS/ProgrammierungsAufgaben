#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <random>
#include <map>

#pragma execution_character_set( "utf-8" )  // Setzt die Ausgabe zu utf-8

using namespace std;    // Damit ich nicht immer std:: schreiben muss... die scheiße nerft echt.

double Guthaben = 500;  // Setzt den Guthaben



// Funktion für das Glücksspiel "Spiel1"
void Spiel1() {
    cout << "-------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - GLÜCKSLISTE\n";
    cout << "-------------------------------------------------------\n\n\n";

    Sleep(500); // Setzt nach einer halben Sekunde fort

    // Berechnet den neuen Guthaben
    cout << Guthaben << "€ - 2,50€\n";
    Guthaben = Guthaben - 2.50;
    cout << "Guthaben: " << Guthaben << " €\n\n";

    Sleep(500);

    // Eingabe Glückszahl
    cout << "Gebe deine Glückszahl ein (1-100):\n";
    int Glückszahl;
    cin >> Glückszahl;
    cout << "\n";

    int zahlen[250];
    int i;
    srand(time(0));

    Sleep(500);

    cout << "Deine Glücksliste ist:\n\n";

    // Füllt die Liste mit Zufallszahlen und sortiert sie
    for (i = 0; i < 250; i++) {
        zahlen[i] = rand() % 100 + 1;
    }

    sort(begin(zahlen), end(zahlen));

    Sleep(500);

    // Gibt die sortierte Glücksliste aus
    for (i = 0; i < 249; i++) {
        cout << zahlen[i] << " ";
        
    }

    cout << "\n\n";

    int Gewinnzahlen = 0;

    // Überprüft, wie viele Gewinnzahlen in der Glücksliste enthalten sind
    for (i = 0; i < 250; i++) {
        if (zahlen[i] == Glückszahl) {
            Gewinnzahlen = Gewinnzahlen + 1;
        }
        while (i + 1 < 250 && zahlen[i] == zahlen[i + 1]) {
            i++;
        }
    }

    Sleep(500);

    // Gibt entsprechende Meldungen basierend auf der Anzahl der Gewinnzahlen aus
    if (Gewinnzahlen == 0) {
        cout << "Leider verloren!\n";
    } else if (Gewinnzahlen <= 3) {
        cout << "Glückwunsch! Sie haben 5 Euro gewonnen!\n";
        cout << "Ihre Eingabe ist " << Gewinnzahlen << "x in der Glücksliste enthalten!\n";
        Guthaben = Guthaben + 5;
    } else if (Gewinnzahlen > 3) {
        cout << "Herzlichen Glückwunsch! Sie haben 5 Euro gewonnen!\n";
        cout << "Ihre Eingabe ist " << Gewinnzahlen << "x in der Glücksliste enthalten!\n";
        cout << "Jackpot! Sie erhalten zusätzlich 10 Euro!\n";
        Guthaben = Guthaben + 15;
    }

    Sleep(500);

    cout << "Guthaben: " << Guthaben << " €\n";
    
    Sleep(500);

    int Auszahlen;
    if (Guthaben == 1000) {
        cout << "Sie haben 1000€ erreicht! Möchten Sie auszahlen oder weiter spielen?\n   Ja[1]    Nein[2]";
        cin >> Auszahlen;
        if (Auszahlen == 1) {
            exit(0);
        }
    }

    Sleep(500);
    // Abfrage ob man nochmal spielen möchte
    int x;
    cout << "\n\nMöchten Sie nochmal spielen?\n    Ja[1]   Nein[2]\n";
    cin >> x;
    if (x == 1) {
        Spiel1();
    }

    cout << "\n\n\n\n\n";
}

void Spiel2() {
    cout << "------------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - Raten einer Zahl\n";
    cout << "------------------------------------------------------------\n";

    Sleep(500);

    cout << Guthaben << "€ - 5€\n";
    Guthaben = Guthaben - 5;
    cout << "Guthaben: " << Guthaben << " €\n\n";

    Sleep(500);

    int EingegebeneZahl;
    cout << "Geben Sie eine Zahl zwischen 1 und 1000 ein:\n";
    cin >> EingegebeneZahl;

    int Glückszahl;
    srand(time(0));
    Glückszahl = rand() % 999 + 1;

    int Versuch = 0;

    Sleep(500);

    while(Glückszahl != EingegebeneZahl) {
        if(Glückszahl > EingegebeneZahl) {
            cout << "Die eingegebene Zahl ist zu klein!\n\n";
            Versuch = Versuch + 1;
            Sleep(250);
            cout << "Geben Sie eine Zahl zwischen 1 und 1000 ein:\n";
            cin >> EingegebeneZahl;
            
        } else if(Glückszahl < EingegebeneZahl) {
            cout << "Die eingegebene Zahl ist zu groß!\n\n";
            Versuch = Versuch + 1;
            cout << "Geben Sie eine Zahl zwischen 1 und 1000 ein:\n";
            cin >> EingegebeneZahl;
            
        }
    }
    cout << "\nHurra!!! Sie haben die richtige Zahl erraten!\n";

    if(Versuch < 1) {
        cout << "Jackpot!!! Sie haben 100 Euro gewonnen!\n";
        Guthaben = Guthaben + 100;
    }else if(Versuch < 3) {
        cout << "Glückwunsch! Sie haben 50 Euro gewonnen!\n";
        Guthaben = Guthaben + 50;
    }else if(Versuch < 5) {
        cout << "Glückwunsch! Sie haben 20 Euro gewonnen!\n";
        Guthaben = Guthaben + 20;
    }else if(Versuch < 10) {
        cout << "Glückwunsch! Sie haben 10 Euro gewonnen!\n";
        Guthaben = Guthaben + 10;
    }else {
        cout << "Leider verloren!\n";
    }

    cout << "Guthaben: " << Guthaben << " €\n";

    int x = 0;
    cout << "\n\nMöchten Sie nochmal spielen?\n    Ja[1]   Nein[2]\n";
    cin >> x;
    if (x == 1) {
        Spiel2();
    }
    
        int Auszahlen;
    if (Guthaben == 1000) {
        cout << "Sie haben 1000€ erreicht! Möchten Sie auszahlen oder weiter spielen?\n   Ja[1]    Nein[2]";
        cin >> Auszahlen;
        if (Auszahlen == 1) {
            exit(0);
        }
    }

    cout << "\n\n\n\n\n";
}


enum RangL { eins = 1, zwei, drei, vier, fünf, sechs, sieben, acht, neun, zehn, elf, zwölf, dreizehn, vierzehn, fünfzehn, sechzehn, siebzehn, achtzehn, neunzehn };





vector<RangL> initializeLotto() {
    vector<RangL> Lotto;
    for (int rangl = eins; rangl <= neunzehn; ++rangl) {
        Lotto.push_back(static_cast<RangL>(rangl));
    }

    
    random_device lo;
    mt19937 g(lo());
    shuffle(Lotto.begin(), Lotto.end(), g);

    return Lotto;
}





void Spiel3() {         
    cout << "\n\n\n";
    cout << "----------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - LOTTO 6 AUS 19\n";
    cout << "----------------------------------------------------------\n";

    cout << Guthaben << "€ - 2,50€\n";
    Guthaben = Guthaben - 2.50;
    cout << "Guthaben: " << Guthaben << " €\n\n";

    vector<RangL> numbers = { eins, zwei, drei, vier, fünf, sechs, sieben, acht, neun, zehn, elf, zwölf, dreizehn, vierzehn, fünfzehn, sechzehn, siebzehn, achtzehn, neunzehn };

    
    vector<int> eingegebeneZahlen;

    cout << "Tippen Sie Ihre 6 Lottozahlen:\n\n";
    for (int i = 1; i < 7; ++i) {
        int zahl;
        cout << i << ". Lottozahl: ";
        cin >> zahl;

        auto it = find(eingegebeneZahlen.begin(), eingegebeneZahlen.end(), zahl);
        if (it != eingegebeneZahlen.end()) {
            cout << "Diese Zahl wurde bereits eingegeben. Bitte geben Sie eine andere ein.\n";
            --i;
        } else if (zahl < 1 || zahl > 19) {
            cout << "Die eingegebene Zahl muss zwischen 1 und 19 liegen. Bitte versuchen Sie es erneut.\n";
            --i;
        } else {
            eingegebeneZahlen.push_back(zahl);
        }
    }

    int superzahl;
    cout << "\nSuperzahl: ";
    cin >> superzahl;
    cout << "\n\n\n";

    while (superzahl < 1 || superzahl > 19) {
        cout << "Die eingegebene Superzahl muss zwischen 1 und 19 liegen. Bitte versuchen Sie es erneut.\n";
        cout << "\nSuperzahl: ";
        cin >> superzahl;
    }

    int Superzahl = rand() % 18 + 1;
    sort(eingegebeneZahlen.begin(), eingegebeneZahlen.end());


    random_device lo;
    mt19937 g(lo());
    shuffle(numbers.begin(), numbers.end(), g);
    vector<RangL> selectNumbers(numbers.begin(), numbers.begin() + 6);

    

    int ÜbereinstimmendeZahlen = 0;
    for (int zahl : eingegebeneZahlen) {
        if (binary_search(numbers.begin(), numbers.end(), zahl)) {
            ÜbereinstimmendeZahlen++;
        }
    }


    sort(selectNumbers.begin(), selectNumbers.end());

    cout << "--------------------------------\n";
    for (const auto& number : selectNumbers) {
        cout << " - " << static_cast<int>(number);
    }
    cout << " -\n--------------------------------\n";


    cout << "\nDie Superzahl ist: " << Superzahl << "\n";

    if (ÜbereinstimmendeZahlen < 3) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Leider kein Gewinn!\n";
    } else if (ÜbereinstimmendeZahlen == 3) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Sie gewinnen 5 Euro\n";
        Guthaben = Guthaben + 5;
    } else if (ÜbereinstimmendeZahlen == 4) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Sie gewinnen 10 Euro\n";
        Guthaben = Guthaben + 10;
    } else if (ÜbereinstimmendeZahlen == 5) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Sie gewinnen 15 Euro\n";
        Guthaben = Guthaben + 15;
    } else if (ÜbereinstimmendeZahlen == 6) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Jackpot!!! Sie gewinnen 50 Euro\n";
        Guthaben = Guthaben + 50;
    }
    if (superzahl == Superzahl && ÜbereinstimmendeZahlen >= 3) {
        cout << "Sie haben die Richtige Superzahl! Sie gewinnen zusätzlich 5 Euro!\n";
    }

    cout << "Guthaben: " << Guthaben << " €\n";

    int Auszahlen;
    if (Guthaben == 1000) {
        cout << "Sie haben 1000€ erreicht! Möchten Sie auszahlen oder weiter spielen?\n   Ja[1]    Nein[2]";
        cin >> Auszahlen;
        if (Auszahlen == 1) {
            exit(0);
        }
    }

    int x;
    cout << "\n\nMöchten Sie nochmal spielen?\n    Ja[1]   Nein[2]\n";
    cin >> x;
    if (x == 1) {
        Spiel3();
    }

    cout << "\n\n\n\n\n";
}




enum Suit { Herz, Karo, Pick, Kreuz };
enum Rang { Ass = 1, Zwei, Drei, Vier, Fünf, Sechs, Sieben, Acht, Neun, Zehn, Bube, Königin, König };


map<Rang, int> cardValues = {
    {Ass, 11}, {Zwei, 2}, {Drei, 3}, {Vier, 4}, {Fünf, 5},
    {Sechs, 6}, {Sieben, 7}, {Acht, 8}, {Neun, 9}, {Zehn, 10},
    {Bube, 10}, {Königin, 10}, {König, 10}
};

struct Karten {
    Suit suit;
    Rang rang;
};

vector<Karten> initializeDeck() {
    vector<Karten> Deck;

    for (int suit = Herz; suit <= Kreuz; ++suit) {
        for (int rang = Zwei; rang <= König; ++rang) {
            Karten card;
            card.suit = static_cast<Suit>(suit);
            card.rang = static_cast<Rang>(rang);

            Deck.push_back(card);
        }
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(Deck.begin(), Deck.end(), g);

    return Deck;
}

string getCardString(const Karten& card) {
    string suitNames[] = { "Herz", "Karo", "Pick", "Kreuz" };
    string rankNames[] = { "Ass", "Zwei", "Drei", "Vier", "Fünf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Königin", "König" };

    string cardString = rankNames[card.rang] + " von " + suitNames[static_cast<int>(card.suit)];
    return cardString;
}

pair<int, string> calculateHandValue(const vector<Karten>& hand) {
    int totalValue = 0;
    string cardsString;

    for (const auto& card : hand) {
        totalValue += cardValues[card.rang];
        cardsString += getCardString(card) + ", ";
    }

    if (!cardsString.empty()) {
        cardsString = cardsString.substr(0, cardsString.size() - 2);
    }

    return make_pair(totalValue, cardsString);
}

string getDealerCardString(const Karten& dcard) {
    string suitNames[] = { "Herz", "Karo", "Pick", "Kreuz" };
    string rankNames[] = { "Ass", "Zwei", "Drei", "Vier", "Fünf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Königin", "König" };

    string cardString = rankNames[dcard.rang] + " von " + suitNames[static_cast<int>(dcard.suit)];
    return cardString;
}

pair<int, string> calculateDealerHandValue(const vector<Karten>& dhand) {
    int totalValue = 0;
    int numAces = 0;
    string cardsString;

    for (const auto& card : dhand) {
        totalValue += cardValues[card.rang];
        cardsString += getDealerCardString(card) + ", ";
        if (card.rang == Ass) {
            numAces++;
            totalValue += 11;
        }
    }

    if (!cardsString.empty()) {
        cardsString = cardsString.substr(0, cardsString.size() - 2);
    }

    while (numAces > 0 && totalValue > 21) {
        totalValue -= 10;
        numAces--;
    }

    return make_pair(totalValue, cardsString);
}



void Spiel4() {
    cout << "-----------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - Blackjack\n";
    cout << "-----------------------------------------------------\n";

    double Einsatz;

    cout << "Wie hoch ist der Einsatz?\nWenn sie eine Kommazahl als Einsatz nehmen wollen schreiben Sie mit . Anstatt ,!!\nGuthaben: " << Guthaben << " €\n";
    cin >> Einsatz; 
    Sleep(1000);
    cout << "Guthaben: " << Guthaben << " € - " << Einsatz << " €\n";
    Guthaben = Guthaben - Einsatz;
    cout << "\nGuthaben: " << Guthaben << " €\n\n\n";
        if (Guthaben < Einsatz) {
        cout << "So viel können Sie sich nicht leisten!\n";
        Guthaben = Guthaben +  Einsatz;
        Sleep(1000);
        Spiel4();
    }
    Sleep(1000);

    vector<Karten> Deck = initializeDeck();

    vector<Karten> SpielerHand;
    vector<Karten> DealerHand;


    SpielerHand.push_back(Deck.back());
    Deck.pop_back();

    SpielerHand.push_back(Deck.back());
    Deck.pop_back();

    auto result = calculateHandValue(SpielerHand);
    int handValue = result.first;
    string cardsString = result.second;


    DealerHand.push_back(Deck.back());
    Deck.pop_back();

    DealerHand.push_back(Deck.back());
    Deck.pop_back();

    auto dresult = calculateDealerHandValue(DealerHand);
    int dhandValue = dresult.first;
    string dcardsString = dresult.second;


    cout << "Ihre Karten: " << cardsString << "\n";
    cout << "Ihre Karten haben den Wert: " << handValue << "\n\n";

    int Draw;
    cout << "Möchten Sie noch eine Karte ziehen? Ja[1] Nein[2]\n";
    cin >> Draw;

    while (Draw == 1) {
        SpielerHand.push_back(Deck.back());
        Deck.pop_back();

        auto result = calculateHandValue(SpielerHand);
        handValue = result.first;
        cardsString = result.second;

        cout << "Ihre Karten: " << cardsString << "\n";
        cout << "Ihre Karten haben den Wert: " << handValue << "\n\n";
        
        if (handValue > 21) {
  
            Draw = 2;
        } else {
            cout << "Möchten Sie noch eine Karte ziehen? Ja[1] Nein[2]\n";
            cin >> Draw;
        }
        cout << "\n";
    }

    cout << "Die Karten vom Dealer: " << dcardsString << "\n";
    cout << "Die Karten vom Dealer haben den Wert: " << dhandValue << "\n\n";

    Sleep(1000);

    while (dhandValue < 17) {
        DealerHand.push_back(Deck.back());
        Deck.pop_back();

        auto dresult = calculateDealerHandValue(DealerHand);
        dhandValue = dresult.first;
        dcardsString = dresult.second;

        cout << "Die Karten vom Dealer: " << dcardsString << "\n";
        cout << "Die Karten vom Dealer haben den Wert: " << dhandValue << "\n\n";
        Sleep(1000);
    }


    if (handValue > 21) {
        cout << "Sie sind über 21 gekommen! Busted.\n\n";
    } else if (handValue > dhandValue) {
        cout << "Sie haben gewonnen!\n\n";
        if (handValue == 21) {
            cout << "Sie haben mit einem Blackjack gewonnen! Plus " << Einsatz / 2 << " €\n";
            Guthaben = Guthaben + (Einsatz * 2.5);
            cout << "Guthaben: " << Guthaben << " €\n\n";
        } else {
            Guthaben = Guthaben + (Einsatz * 2);
            cout << "Guthaben: " << Guthaben << " €\n\n";
        }
    } else if (dhandValue > 21) {
        cout << "Dealer ist über 21 gekommen! Sie gewinnen!\n";
        Guthaben = Guthaben + (Einsatz * 2);
        cout << "Guthaben: " << Guthaben << " €\n\n";
    } else if (handValue < dhandValue) {
        cout << "Dealer gewinnt! Sie haben verloren!\n";
    }
    
    int x;
    cout << "\n\nMöchten Sie nochmal spielen?\n    Ja[1]   Nein[2]\n";
    cin >> x;
    if (x == 1) {
        Spiel4();
    } 

    cout << "\n\n\n\n\n";

}

int main() {
    SetConsoleOutputCP( 65001 );
    srand(time(0));
    cout << fixed;
    cout << setprecision(2);
    system("cls"); // Cleared die Konsole

    cout << "-----------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH\n";
    cout << "-----------------------------------------\n\n\n";

    Sleep(500);

    cout << "Sie haben ein Startguthaben von 500€!\nErreichen Sie 1000€ können Sie es auszahlen!\n\n\n";

    Sleep(500);

    int Spiel;
    cout << "Welches Spiel möchten Sie spielen?\n\n";
    cout << "Spiel 1(2,50€) [1]      Spiel 2(5€) [2]       Spiel 3(2,50€) [3]       Spiel 4(Einsatz) [4]\n\n";
    cin >> Spiel;

    Sleep(500);

    int i;

    if (Spiel == 1) {
        system("cls"); // Cleared die Konsole
        Spiel1();
        Sleep(500);
        cout << "Möchten Sie ein anderes Spiel spielen?\n   Ja[1]   Nein[2]\n";
        cin >> i;
            if (i == 1) {
                main();
            }
    } else if (Spiel == 2) {
        system("cls"); // Cleared die Konsole
        Spiel2();
        Sleep(500);
        cout << "Möchten Sie ein anderes Spiel spielen?\n   Ja[1]   Nein[2]\n";
        cin >> i;
            if (i == 1) {
                main();
            }

    } else if (Spiel == 3) {
        system("cls"); // Cleared die Konsole
        Spiel3();
        Sleep(500);
        cout << "Möchten Sie ein anderes Spiel spielen?\n   Ja[1]   Nein[2]\n";
        cin >> i;
            if (i == 1) {
                main();
            }
    } else if (Spiel == 4) {
        system("cls"); // Cleared die Konsole
        Spiel4();
        Sleep(500);
        cout << "Möchten Sie ein anderes Spiel spielen?\n   Ja[1]   Nein[2]\n";
        cin >> i;
            if (i == 1) {
                main();
            }
    }
}