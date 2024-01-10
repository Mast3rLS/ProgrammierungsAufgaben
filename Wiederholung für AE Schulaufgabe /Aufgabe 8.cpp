#include <iostream>
#include <iomanip>

using namespace std;

//Prototypen
void Aufgabe8(double Preis);
void Aufgabe9(int Wert1, int Wert2);
void Aufgabe10(double Nettopreis, string Leistungsart);

int main() {
    //Set output zu 2 Nachkommastellen
    cout << fixed << setprecision(2);
    int Aufgabe = 0, again1 = 1;
    while (Aufgabe != 8 && (Aufgabe != 9) && (Aufgabe != 10)) {
    cout << "Welche Aufgabe soll ausgewählt werden? (8, 9 oder 10)\n";
    cin >> Aufgabe;
    }
    //Welche Aufgabe Soll es sein?
    while (again1 == 1) {
        if (Aufgabe == 8) {
            //Eingabe Preis vom Medikament
            int again = 1;
            double Preis;
            //Loop wiederholungen
            while (again == 1) {
                cout << "Eingabe Preis Medikament: ";
                cin >> Preis;
                //Aufruf void Aufgabe 8
                Aufgabe8(Preis);
                cout << "\n\n\n";
                cout << "Noch eine Berechnung?      Ja(1)   Nein(2)\n";
                cin >> again;
            }
            return 69;
        } else if (Aufgabe == 9) {
            //Eingabe Wert 1 & 2
            int Wert1, Wert2, again = 1;
            //Loop wiederholungen
            while (again == 1) {
                cout << "Geben Sie Wert 1 ein: ";
                cin >> Wert1;
                cout << "Geben Sie Wert 2 ein: ";
                cin >> Wert2;
                //Aufruf void Aufgabe 9
                Aufgabe9(Wert1, Wert2);
                //Abfrage ob nochmal die Aufgabe gemacht werden soll
                cout << "\n\n\nNochmal?   Ja(1)   Nein(2)\n";
                cin >> again;
            }
            return 420;
        } else if (Aufgabe == 10) {
            int again = 1;
            double Nettopreis;
            string Leistungsart;
            //Loop wiederholungen
            while (again == 1) {
                //Eingabe Nettopreis und Leistungsart
                cout << "Nettopreis: ";
                cin >> Nettopreis;
                cout << "Leistungsart: ";
                cin >> Leistungsart;
                //Aufruf void Aufgabe 10
                Aufgabe10(Nettopreis, Leistungsart);
                //Abfrage ob nochmal die Aufgabe gemacht werden soll
                cout << "\n\n\nNochmal?   Ja(1)   Nein(2)\n";
                cin >> again;
            }
            return 69420;
        }
        cout << "Möchtest du eine andere Aufgabe berechnen?     Ja(1)   Nein(2)\n";
        cin >> again1;
    }
}

void Aufgabe8(double Preis) {
    double PatientBez, KrankenkasseBez;
    //if Abfrage und Rechnung
    if (Preis <= 5) {
        cout << "\nZahlung patient = " << Preis;
        cout << "\nZahlung Krankenkasse = 0 Euro";
    } else if (Preis > 5) {
        PatientBez = Preis * 0.1;
        KrankenkasseBez = Preis * 0.9;
        if (PatientBez >= 10) {
            PatientBez = 10;
            KrankenkasseBez = Preis - 10;
        } else if (PatientBez < 5) {
            PatientBez = 5;
            KrankenkasseBez = Preis - 5;
        }
    }
    //Ausgabe wer wieviel Zahlt
    cout << "\nZahlung Patient = " << PatientBez;
    cout << "\nZahlung Krankenkasse = " << KrankenkasseBez;
}

void Aufgabe9(int Wert1, int Wert2) {
    //Variablendefinition
    int Endwert = 0;
    Wert2++;
    //Rechnung
    for (Wert1; Wert1 < Wert2; Wert1++) {
        Endwert = Endwert + Wert1;
    }
    //Ausgabe Ergebnis
    cout << Endwert;
}

void Aufgabe10(double Nettopreis, string Leistungsart) {
    //Variablendefinition
    double Bruttopreis;
    //Abfrage um welche Leistungsart es sich handelt
    if (Leistungsart == "Kreditvermittlung") {
        //Ausgabe Bruttopreis
        cout << "Auf die Leistungsart Kreditvermittlung werden 0 % USt erhoben.\n";
        cout << "Bruttopreis: " << Nettopreis << " Euro";
    } else if (Leistungsart == "Buch") {
        //Berechnung und Ausgabe Bruttopreis
        cout << "Auf die Leistungsart Buch werden 7 % USt erhoben.\n";
        Bruttopreis = Nettopreis * 1.07;
        cout << "Bruttopreis: " << Bruttopreis << " Euro";
    } else if (Leistungsart == "sonstiges") {
        //Berechnung und Ausgabe Bruttopreis
        cout << "Auf die Leistungsart sonstiges werden 19 % USt erhoben.\n";
        Bruttopreis = Nettopreis * 1.19;
        cout << "Bruttopreis: " << Bruttopreis << " Euro";
    }
}