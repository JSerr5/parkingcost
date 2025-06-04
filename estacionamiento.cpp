#include <iostream>
using namespace std;

int main(){

    float h, m, h_enM, costo, val_m;
    const float val_60m = 3.5;

    cout << "Parking meter" << endl;
    cout << "The minimum charge is $3.5" << endl;
    cout << "Enter your parking time:" << endl;
    cout << "Hours: ";
    cin >> h;
    cout << "Minutes: ";
    cin >> m;

    h_enM = h*60;
    val_m = val_60m/60;

    if (h == 0 && m > 60){

        costo = (m) * val_m;
        cout << "The amount to pay is: $" << costo << endl;
    }

    else if (h == 0 && m < 60){

        costo = val_60m;
        cout << "The amount to pay is: $" << costo << endl;
    }

    else{
        
        costo = (h_enM + m) * val_m;
        cout << "The amount to pay is: $" << costo << endl;
    }


    return 0;
}
