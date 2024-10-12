#include <iostream>

unsigned long factoriel(unsigned long n) {
    unsigned long Fact = 1;
    while (n>1)
    {
        Fact = Fact * n;
        n--;
    }
    return Fact;
}

double puissance(double x, int exp) {
    double result = 1.0;
    for (int i = 0; i < exp; ++i) {
        result = result * x;
    }
    return result;
}

double cosinus(double x) {
    return 1 - (puissance(x, 2) / factoriel(2)) + (puissance(x, 4) / factoriel(4)) - (puissance(x, 6) / factoriel(6)) + (puissance(x, 8) / factoriel(8));
}

double sinus(double x) {
    return x - (puissance(x, 3) / factoriel(3)) + (puissance(x, 5) / factoriel(5)) - (puissance(x, 7) / factoriel(7)) + (puissance(x, 9) / factoriel(9));
}

double tangente(double x) {
    return sinus(x) / cosinus(x);
}

int main() {
    double x ;
    double x_degre ;
    std::cout << "  Bonjour Mr/Mme et Bienvenue sur notre porgramme d'implementation du cosinus, sinus et tangente. \n" << "  Veillez entrez l'angle en degres \n";
    std::cin >> x_degre;
    x = x_degre * 0.01745 ;
    std::cout << "  La valeur de votre angle en radians est: "<< x << std::endl;
    std::cout << "      cos(" << x_degre << ") = " << cosinus(x) << std::endl;
    std::cout << "      sin(" << x_degre << ") = " << sinus(x) << std::endl;
    std::cout << "      tan(" << x_degre << ") = " << tangente(x) << std::endl;

    return 0;
}
