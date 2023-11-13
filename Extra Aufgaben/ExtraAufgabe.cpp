#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    cout << fixed;                  
    cout << setprecision(2);        //Auf 2 Nachkommastellen setzten

    double Sollstunden, Überstunden, Stundenlohn, BonusJ, BonusG, Jahre;        //Werte definieren
    cout << "Wie wie viele Sollstunden waren es pro Monat?\n";                  //Abfrage Sollstunden
    cin >> Sollstunden;                                                         //Eingabe Sollstunden

    double Iststunden, JahresIststunden;                                        //Werte definieren
    int Monat = 1;                                                              //Wert setzten
    
    for (int i = 0; i < 12; i++) {                                              //Loop: Eingabe Iststunden für jeden Monat
    
        cout << "Wie viele Iststunden waren es im " << Monat << ". Monat?\n";
        cin >> Iststunden;
        JahresIststunden = JahresIststunden + Iststunden;
        Monat = Monat + 1;
    }

    cout << "Wie hoch ist der Stundenlohn?\n";                                  //Abfrage Stundenlohn
    cin >> Stundenlohn;                                                         //Eingabe Stundenlohn

    cout << "Wie viele Jahre wurden hier gearbeitet?\n";                        //Abfrage Mitglieds-Jahresboni
    cin >> Jahre;                                                               //Eingabe Mitglieds-Jahresboni
    
    double JahresIststundenGehalt;                                              //Wert definieren
    JahresIststundenGehalt = JahresIststunden * Stundenlohn;                    //Wert setzten und ausrechnung von Jahresgehalt

    double Bonus;                                                               //Wert Setzen
    

    BonusJ = Jahre < 1 ? 0 : (Jahre < 5 ? 0.05 : (Jahre < 10? 0.1 : 0.15));     //Komische If abfrage die Frau Eich hasst xD(Fürs ausrechnen des Jahresbonis)

    if ((Sollstunden * 12) * 1.1 < JahresIststunden) {                          //Actual if Abfrage für Provision
        Überstunden = JahresIststunden - (Sollstunden * 12);
        BonusG = Überstunden * Stundenlohn * 0.15;
    } else if ((Sollstunden * 12) < JahresIststunden) {
        Überstunden = JahresIststunden - (Sollstunden *12);
        BonusG = Überstunden * Stundenlohn * 0.1;
    }

    
    Bonus = BonusG + BonusJ;                                                    //Ausrechnung des Gesamtbonis


    double Netto;                                                               //Wert definieren
    Netto = JahresIststundenGehalt + Bonus;                                     //Netto gehalt ausrechnen

    double Umsatzsteuer, Brutto;                                                //Werte definieren
    Umsatzsteuer = Netto * 0.19;                                                //Umsatzsteuer ausrechnen
    Brutto = Netto - Umsatzsteuer;                                              //Brutto Gehalt ausrechnen

    //Ausgabe von allen wichtigen Werten:

    cout << "Deine gearbeitet Stunden im Ganzen Jahr waren: " << JahresIststunden << " h.\n";
    cout << "Deine Bonis durch dauer der hier gearbeiteten Jahre liegt bei: " << BonusJ << " €.\n";
    cout << "Deine Bonis durch Provision liegt bei: " << BonusG << " €.\n";
    cout << "Deine Gesamtbonis liegen bei: " << Bonus << " €.\n";
    cout << "Dein Netto Gehalt liegt bei: " << Netto << " €.\n";
    cout << "Deine gezahlten Umsatzsteuer sind dieses Jahr sind: " << Umsatzsteuer << " €.\n";
    cout << "Dein Bruttoverdienst dieses Jahr liegt bei: " << Brutto << " €.\n";
    
    //Ende lol
}




