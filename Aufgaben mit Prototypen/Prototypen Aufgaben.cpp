#include <iostream>
#include <iomanip>
#include <tuple>
#include "Aufgabe3.h"
//I HATE WRITING STD:: SO FUCK THAT DISGUSTING SHIT AND TAKE MY USING NAMESPACE STD!!!!
using namespace std;
//Prototyp
void Aufgabe1(double a, double b, double c);
tuple<double, double, string> Aufgabe2(double a, double b, double c);


int main() {
    //Auf 2 Nachkommastellen
    cout << fixed << setprecision(2);
    //Var.deklaration
    int again = 1, again1 = 1, Aufgabe = 0;
    while (again1 == 1) {
        cout << "Welche Aufgabe wird gebraucht?\n";
        cin >> Aufgabe;
        while (Aufgabe != 1 && Aufgabe != 2 && Aufgabe != 3 && Aufgabe != 4) {
            cout << "Welche Aufgabe wird gebraucht?\n";
            cin >> Aufgabe;
        }
        //If Abfrage welche Aufgabe
        if (Aufgabe == 1) {
            double a = 0, b = 0, c = 0;
            //Eingabe
            while (again == 1) {
                cout << "Bitte geben Sie die Länge a ein: ";
                cin >> a;
                cout << "Bitte geben Sie die Länge b ein: ";
                cin >> b;
                cout << "Bitte geben Sie die Länge c ein: ";
                cin >> c;
                //Funktionsaufruf
                Aufgabe1(a, b, c);
                cout << "\n\nNochmal?\n";
                cin >> again;
            }
            return 69;
        } else if (Aufgabe == 2) {
            double a = 0, b = 0, c = 0;
            //Eingabe
            while (again == 1) {
                cout << "Bitte geben Sie die Länge a ein: ";
                cin >> a;
                cout << "Bitte geben Sie die Länge b ein: ";
                cin >> b;
                cout << "Bitte geben Sie die Länge c ein: ";
                cin >> c;
                //Funktionsaufruf
                auto result = Aufgabe2(a, b, c);

                double Umfang = get<0>(result);
                double Flächeninhalt = get<1>(result);
                string Dreiecksart = get<2>(result);
                //Ausgabe welche Dreiecksart
                cout << Dreiecksart << "\n";
                //Ausgabe Umfang und Flächeninhalt
                cout << "Der Umfang ist: " << Umfang << " cm.\n";
                cout << "Der Flächeninhalt ist: " << Flächeninhalt << " cm²\n";

                cout << "Nochmal?\n";
                cin >> again1;
            }
            return 69;
        } else if (Aufgabe == 3) {
            //Var.deklaration
            while (again == 1) {
                double netto;
                int umsatzsteuersatz;
                //Eingabe
                cout << "Bitte geben Sie den Nettobetrag ein: ";
                cin >> netto;
                cout << "Bitte geben Sie den umsatzsteuersatz ein: ";
                cin >> umsatzsteuersatz;

                //Funktionsaufruf
                ust(netto, umsatzsteuersatz);

                cout << "Nochmal?\n";
                cin >> again;
            }
        }
        cout << "Andere Aufgabe?    Ja(1)   Nein(2)\n";
        cin >> again1;
    }
}
//Funktion dreieck
void Aufgabe1(double a, double b, double c) {
    //Variablen definition
    double Umfang, Flächeninhalt;
    //if Abfrage
    if (a == b && a == c) {
        //Ausgabe welche Dreiecksart
        cout << "\nEs ist ein gleichseitiger Dreieck!\n";
        //Ausrechnung Umfang und Flächeninhalt
        Umfang = a + b + c;
        Flächeninhalt = (a * b) / 2;
        //Ausgabe Umfang und Flächeninhalt
        cout << "Der Umfang ist: " << Umfang << " cm.\n";
        cout << "Der Flächeninhalt ist: " << Flächeninhalt << " cm²\n";
    } else if (a == b || a == c || b == c) {
        //Ausgabe welche Dreiecksart
        cout << "\nEs ist ein gleichschenklicher Dreieck!\n";
        //Ausrechnung Umfang und Flächeninhalt
        Umfang = a + b + c;
        Flächeninhalt = (a * b) / 2;
        //Ausgabe Umfang und Flächeninhalt
        cout << "Der Umfang ist: " << Umfang << " cm.\n";
        cout << "Der Flächeninhalt ist: " << Flächeninhalt << " cm²\n";
    } else if (a != b && a != c) {
        //Ausgabe welche Dreiecksart
        cout << "\nEs ist ein weder ein gleichseitiger Dreieck, noch ein gleichschenklicher Dreieck!\n";
        //Ausrechnung Umfang und Flächeninhalt
        Umfang = a + b + c;
        Flächeninhalt = (a * b) / 2;
        //Ausgabe Umfang und Flächeninhalt
        cout << "Der Umfang ist: " << Umfang << " cm.\n";
        cout << "Der Flächeninhalt ist: " << Flächeninhalt << " cm²\n";
    }
}
//Aufgabe 2
tuple<double, double, string> Aufgabe2(double a, double b, double c) {
    //Variablen definition
    double Umfang, Flächeninhalt;
    string Dreieckart;
    //if Abfrage
    if (a == b && a == c) {
        //Setzten der Dreiecksart
        Dreieckart = "Es ist ein gleichseitiger Dreieck!";
        //Ausrechnung Umfang und Flächeninhalt
        Umfang = a + b + c;
        Flächeninhalt = (a * b) / 2;
    } else if (a == b || a == c || b == c) {
        //Setzten der Dreiecksart
        cout << "Es ist ein gleichschenklicher Dreieck!";
        //Ausrechnung Umfang und Flächeninhalt
        Umfang = a + b + c;
        Flächeninhalt = (a * b) / 2;
    } else if (a != b && a != c) {
        //Setzten der Dreiecksart
        cout << "Es ist ein weder ein gleichseitiger Dreieck, noch ein gleichschenklicher Dreieck!";
        //Ausrechnung Umfang und Flächeninhalt
        Umfang = a + b + c;
        Flächeninhalt = (a * b) / 2;
    }
    return make_tuple(Umfang, Flächeninhalt, Dreieckart);
}