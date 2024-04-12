#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, f;
    int cont =0;
    while(cont < 3){
    	cout << "Ingrese los coeficientes a, b, c, d, e, f respectivamente: " << endl;
    cin >> a >> b >>c >> d >> e >> f;
    
    //Recodar x = (c*e - bf)/(a*e - b*d), y = (-c*d + a*f)/(a*e - b*d)


    if ((a*e - b*d) != 0) { // sistema compatible determinado
        float x = (c*e - b*f) / (a*e - b*d);
        float y = (-c*d + a*f) / (a*e - b*d);
        cout << "El sistema es Compatible Determinado." << endl;
        cout << "La solucon es: x = " << x << ", y = " << y << endl;
        cout <<"\n";
    } else if ((a*e - b*d == 0) && (c*e - b*f == 0)) { // sistema compatible indeterminado
        cout << "El sistema es Compatible Indeterminado. Tiene infinitas soluciones." << endl;
    	cout << "\n";
	} else if ((a*e - b*d == 0) && (c*e - b*f != 0)) { //sistema incompatible
        cout << "El sistema es Incompatible. No tiene solucion." << endl;
        cout << "\n";
    } 
    cont++;	
	}
    
    

    return 0;
}
