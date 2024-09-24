#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, f;
    
    cout << "Ingrese los coeficientes a, b, c, d, e, f respectivamente: " << endl;
    cin >> a >> b >>c >> d >> e >> f;
    
    //Recodar x = (c*e - bf)/(a*e - b*d), y = (-c*d + a*f)/(a*e - b*d)


    if ((a*e - b*d) != 0) { // sistema compatible determinado
        float x = (c*e - b*f) / (a*e - b*d);
        float y = (-c*d + a*f) / (a*e - b*d);
        cout << "El sistema es Compatible Determinado." << endl;
        cout << "La solución es: x = " << x << ", y = " << y << endl;
    } else if ((a*e - b*d == 0) && (c*e - b*f == 0)) { // sistema compatible indeterminado
        cout << "El sistema es Compatible Indeterminado. Tiene infinitas soluciones." << endl;
    } else if ((a*e - b*d == 0) && (c*e - b*f != 0)) { //sistema incompatible
        cout << "El sistema es Incompatible. No tiene solución." << endl;
    } 

    return 0;
}
