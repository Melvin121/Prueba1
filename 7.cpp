#include <iostream>
using namespace std;

float raiz(float, float);

int main(){
    float n;
    cout << "Ingrese el valor positivo";
    cin >> n;

    float r;
    cout << "Ingrese el valor raiz";
    cin >> r;

    cout << "El valor de la raiz es: " << raiz(n, r) << endl;

}

float raiz( float n, float siguiente){
    float anterior = siguiente;
    siguiente = ((n/siguiente) + siguiente);

    if( anterior - siguiente < 0.000000001){
        return siguiente;
    } else {
        return raiz(n, siguiente);
    }
}