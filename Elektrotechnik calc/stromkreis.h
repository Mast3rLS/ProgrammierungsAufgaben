#include <iostream>
#include "converter_einheit.h"



double stromkreis() {
    double I, Q, t, e, U, W, n;
    char Einheit, AufgabenGruppe;
    string Arbeit;
    std::cout << "\nIn welcher Aufgabengruppe berechnen wir?\n";
    std::cin >> AufgabenGruppe;
    if (AufgabenGruppe == 'I') {
        std::cout << "\nNach welcher Einheit suchen wir?\n";
        std::cin >> Einheit;
        if (Einheit == 'I' || Einheit == 'i') {
            std::cout << "\nWas ist Q?\n";
            std::cin >> Q;
            umrechner(Q);
            Q = umrechner(Q);
            std::cout << "\nWas ist t?\n";
            std::cin >> t;
            umrechner(t);
            t = umrechner(t);
            I = Q / t;

            std::cout << "\n\nDie Stromstärke ist: " << I << " A";

        } else if (Einheit == 'Q' || Einheit == 'q') {
            std::cout << "\nWas ist t?";
            std::cin >> t;
            std::cout << "\nWas ist I?\n";
            std::cin >> I;
            Q = t * I;

            std::cout << "Die Ladung ist: " << Q << " c";
        } else if (Einheit == 't') {
            std::cout << "\nWas ist I?\n";
            std::cin >> I;
            std::cout << "\nWas ist Q?\n";
            std::cin >> Q;

            t = Q / I;

            std::cout << "\n\nDie Zeit ist: " << t << " sekunden";
        }
    } else if (AufgabenGruppe == 'Q') {
        std::cout << "\nNach welcher Einheit suchen wir?\n";
        std::cin >> Einheit;
        if (Einheit == 'Q' || Einheit == 'q') {
            std::cout << "\nWas ist n?\n";
            std::cin >> n;
            std::cout << "\nWas ist e?\n";
            std::cin >> e;
            Q = n * e;

            std::cout << "Die Ladung ist: " << Q << " C";

        } else if (Einheit == 'n') {
            std::cout << "\nWas ist Q?";
            std::cin >> Q;
            std::cout << "\nWas ist e?\n";
            std::cin >> e;
            n = Q / e;

            std::cout << "Die Anzahl ist: " << n;
        } else if (Einheit == 'e') {
            std::cout << "\nWas ist I?\n";
            std::cin >> I;
            std::cout << "\nWas ist Q?\n";
            std::cin >> Q;

            e = Q / n;

            std::cout << "\n\nDie Elementarladung ist: " << e << " C";
        }
    } else if (AufgabenGruppe == 'U' || AufgabenGruppe == 'u') {
        std::cout << "\nNach welcher Einheit suchen wir?\n";
        std::cin >> Einheit;
        if (Einheit == 'U' || Einheit == 'u') {
            std::cout << "\nWas ist W?\n";
            std::cin >> I;
            std::cout << "\nWas ist Q?\n";
            std::cin >> Q;
            U = W / Q;

            std::cout << "\n\nDie Spannung ist: " << U << " V";
        } else if (Einheit == 'W' || Einheit == 'w') {
            std::cout << "\nWelche Arbeit haben wir?\n";
            std::cin >> Arbeit;
            std::cout << "\nWas ist U?\n";
            std::cin >> U;
            std::cout << "\nWas ist Q?\n";
            std::cin >> Q;
            W = U * Q;

            std::cout << "\n\nDie Arbeit ist: " << W << " " << Arbeit;
        } else if (Einheit == 'Q' || Einheit == 'q') {
            std::cout << "\nWas ist W?\n";
            std::cin >> W;
            std::cout << "\nWas ist U?\n";
            std::cin >> U;
            Q = W / U;

            std::cout << "\n\nDie Ladung ist: " << Q << " C";
        }
    }


}