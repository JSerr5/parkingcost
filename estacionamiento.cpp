#include <iostream>
using namespace std;

int main(){

    float h, m, h_enM, costo, val_m;
    const float val_60m = 3.5;

    cout << "Parquimetro" << endl;
    cout << "El valor minimo es de $3.5" << endl;
    cout << "Ingrese el tiempo de su estadia: " << endl;
    cout << "Horas: ";
    cin >> h;
    cout << "Minutos: ";
    cin >> m;

    h_enM = h*60;
    val_m = val_60m/60;
    costo = (h_enM + m) * val_m;

    if (h == 0 && m > 60){

        costo = (m) * val_m;
        cout << "EL valor a pagar es de: $ " << costo << endl;
    }

    else{
        cout << "EL valor a pagar es de: $ " << costo << endl;
    }

    system("pause");
    return 0;
}