#include <iostream>
#include <cmath>

using namespace std;

double * rownanieKwadratowe(double a, double b, double c){
    double * rozwiazania = new double[2];
    double delta;
    delta = (pow(b,2)) - (4*a*c);

    cout << "Twoje rownanie ma postac: f(x) = " << a << "x^2 + " << b << "x + " << c << endl;

    if (b == 0 && a == 0){
            cout << "Nie mozna rozwiazac. Parametry kierunkowe sa zerowe.";
            return rozwiazania;
    }

    cout << "Liczymy delte: D = " << b << "^2 - 4*" << a << "*" << c << endl;

    if (delta > 0){
        cout << "Delta jest dodatnia i wynosi D = " << delta << endl;
        cout << "Liczymy miejsca zerowe x1 oraz x2." << endl;
        cout << "x1 = (-b + sqrt(delta)) / 2a || x2 = (-b - sqrt(delta)) / 2a" << endl;
        rozwiazania[0] = (-b + sqrt(delta))/ (2*a);
        rozwiazania[1] = (-b - sqrt(delta))/ (2*a);
        cout << "x1 = " << rozwiazania[0] << " || x2 = " << rozwiazania[1] << endl;
    }

    else if (delta == 0){
        cout << "Delta = 0, zatem traktujemy rownanie jako rownanie liniowe.";
        rozwiazania[0] = -b / (2*a);
        cout << "x = " << rozwiazania[0];
    }
    else if (delta < 0) {
        cout << "Delta = "<< delta << " < 0. Brak rozwiazan.";
    }

    return rozwiazania;
}

int main()
{
    cout << "Rozwiazmy rownanie kwadratowe w postaci ogolnej: ax^2 + bx + c = 0. \nPodaj parametry a, b oraz c: ";
    double a, b, c;
    cin >> a >> b >> c;
    double * rozw = rownanieKwadratowe(a, b, c);
    return 0;
}
