#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>

using namespace std;

#pragma execution_character_set( "utf-8" )

void A1() {         //Das ist Aufgabe 1

double Menge, Einzelpreis, Gesamtbetrag;       //Hier sind alle Angaben definiert


cout << "Was ist die Menge? \n";            //Abfrage Menge
cin >> Menge;                               //Eingabe Menge
cout << "Was ist der Einzelpreis? \n";      //Abfrage Einzelpreis
cin >> Einzelpreis;                         //Eingabe Einzelpreis


Gesamtbetrag = Menge * Einzelpreis;         //Hier wird der Gesamtbetrag berechnet


cout << fixed << setprecision(2)<< "Der Gesamtbetrag ist " << Gesamtbetrag << " € \n";      //Ausgabe Ergebnis

}


void A2() {         //Das ist Aufgabe 2

double Länge, Breite, Umfang, Fläche;          //Hier sind alle Angaben definiert


cout << "Was ist die Länge? \n";            //Abfrage Länge
cin >> Länge;                               //Eingabe Länge

cout << "Was ist die Breite? \n";           //Abfrage Breite
cin >> Breite;                              //Eingabe Länge


Umfang = Länge * 2 + Breite * 2;            //Hier wird der Umfang berechnet
Fläche = Länge * Breite;                    //Hier wird die Fläche berechnet


cout << fixed << setprecision(2)<< "Der Umfang ist " << Umfang << "m und die Fläche ist " << Fläche << "m².\n";      //Ausgabe Ergebnis

}


void A3() {             //Das ist Aufgabe 3

double Tische, Einzelpreis, Nettobetrag, Mehrwertsteuer, Bruttobetrag;          //Hier sind alle Angaben definiert


cout << "Wie viele Tische werden gekauft?\n";      //Abfrage Tische
cin >> Tische;                                      //Eingabe Tische 

cout << "Was ist der Einzelpreis?\n";          //Abfrage Einzelpreis
cin >> Einzelpreis;                             //Eingabe Einzelpreis


Nettobetrag = Tische * Einzelpreis;             //Hier wird der Nettobetrag berechnet
Mehrwertsteuer = Nettobetrag * 0.19;            //Hier werden die Mehrwertsteuern berechnet
Bruttobetrag = Nettobetrag + Mehrwertsteuer;    //Hier wird der Bruttobetrag berechnet


cout << fixed << setprecision(2)<< "Nettobetrag: " << Nettobetrag << " €\nMehrwertsteuer: " << Mehrwertsteuer << " €\nBruttobetrag: " << Bruttobetrag << " €\n";

}

void A4() {         //Das ist Aufgabe 4

double Menge, Einzelpreis, Rabatt, Skonto, Listeneinkaufspreis, Zieleinkaufspreis, BareinkaufspreisN, BareinkaufspreisB, USt;           //Hier sind alle Angaben definiert


cout << "Was ist die Menge? \n";            //Abfrage Menge
cin >> Menge;                               //Eingabe Menge

cout << "Was ist der Einzelpreis? \n";      //Abfrage Einzelpreis
cin >> Einzelpreis;                         //Eingabe Einzelpreis

cout << "Was ist der Rabatt? \n";           //Abfrage Rabatt
cin >> Rabatt;                              //Eingabe Rabatt

cout << "Was ist der Skonto? \n";           //Abfrage Skonto
cin >> Skonto;                              //Eingabe Skonto

Listeneinkaufspreis = Menge * Einzelpreis;  //Hier wird der Listeneinkaufspreis berechnet

Rabatt = Rabatt / 100;                      //Hier wird der Rabatt als Zahl durch 100 genommen

Rabatt = Listeneinkaufspreis * Rabatt;      //Hier wird der Listeneinkaufspreis mit dem Rabatt mulitpliziert

Zieleinkaufspreis = Listeneinkaufspreis - Rabatt;   //Hier wird der Zieleinkaufspreis berechnet

Skonto = Skonto / 100;                      //Hier wird der Skonto durch 100 genommen

Skonto = Zieleinkaufspreis * Skonto;        //Hier wird der Zieleinkaufspreis mit Skonto multipliziert

BareinkaufspreisN = Zieleinkaufspreis - Skonto;     //Hier wird der Bareinkaufspreis(Netto) berechnet

USt = BareinkaufspreisN * 0.19;   

BareinkaufspreisB = BareinkaufspreisN * 1.19;       //Hier wird der Bareinkaufspreis(Brutto) berechnet



cout << fixed << setprecision(2)<< "Listeneinkaufspreis: " << Listeneinkaufspreis << " €\nRabatt: " << Rabatt << " €\nZieleinkaufspreis: " << Zieleinkaufspreis << " €\nSkonto: " << Skonto << " €\nBareinkaufspreis(Netto): " << BareinkaufspreisN << " €\nUSt: " << USt << " €\nBareinkaufspreis(Brutto): " << BareinkaufspreisB << " €\n";

}



int main() {                                        //Die main funktion
    int Aufgabe;                                    //Hier wird Aufgabe deklariert
    SetConsoleOutputCP( 65001 );                    //Hier wird der cmd auf UTF-8 gesetzt

    cout << "Welche Aufgabe machen wir? \n";        //Abfrage welche Aufgabe gemacht wird
    cin >> Aufgabe;                                 //Eingabe Aufgabe
    if (Aufgabe == 1) {                             //if Abfrage nach der Aufgabe
        A1();                                       //Aufgabe 1 wird aufgerufen
    } else if (Aufgabe == 2) {                      //""
        A2();                                       //Aufgabe 2 wird aufgerufen
    } else if (Aufgabe == 3) {                      //""
        A3();                                       //Aufgabe 3 wird aufgerufen
    } else if (Aufgabe == 4) {                      //""
        A4();                                       //Aufgabe 4 wird aufgerufen
    } else {
        main();                                     //Falls keine Aufgabe aufgerufen wird -> loop zum start  
    }

    main();                                         //Aufgabe beendet und abfrage nach neuer aufgabe
}