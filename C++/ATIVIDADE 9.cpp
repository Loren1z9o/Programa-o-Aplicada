#include <iostream>
using namespace std;

int main() {
    
    float num1, num2, num3, num4, media;

    
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    cout << "Digite o terceiro n�mero: ";
    cin >> num3;

    cout << "Digite o quarto n�mero: ";
    cin >> num4;

    
    media = (num1 + num2 + num3 + num4) / 4;

    
    cout << "A m�dia aritm�tica dos valores digitados �: " << media << endl;

    return 0;
}

