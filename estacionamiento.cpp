#include <iostream>
using namespace std;

int main(){

    float h, m, totalMin, costo, val_m;
    const float val_60m = 3.5; // costo por hora

    cout << "Parquimetro" << endl;
    cout << "El valor minimo es de $3.5" << endl;
    cout << "Ingrese el tiempo de su estadia: " << endl;
    cout << "Horas: ";
    cin >> h;
    cout << "Minutos: ";
    cin >> m;

    totalMin = h * 60 + m;
    val_m = val_60m / 60;

    if (totalMin <= 0) {
        cout << "No debe pagar" << endl;
    }
    else {
        costo = totalMin * val_m;
        if (costo < val_60m) {
            costo = val_60m;
        }
        cout << "El valor a pagar es de: $ " << costo << endl;
    }

    return 0;
}
