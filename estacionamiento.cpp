#include <iostream>
using namespace std;

int main(){

    float h, m, totalMin, costo, val_m;
    const float val_60m = 3.5; // cost per hour

    cout << "Parking Meter" << endl;
    cout << "The minimum charge is $3.5" << endl;
    cout << "Enter your parking time:" << endl;
    cout << "Hours: ";
    cin >> h;
    cout << "Minutes: ";
    cin >> m;

    totalMin = h * 60 + m;
    val_m = val_60m / 60;

    if (totalMin <= 0) {
        cout << "No payment needed" << endl;
    }
    else {
        costo = totalMin * val_m;
        if (costo < val_60m) {
            costo = val_60m;
        }
        cout << "Total charge: $" << costo << endl;
    }

    return 0;
}
