#include <iostream>
using namespace std;

int main() {
    
    char letra;

    
    cout << "Digite uma letra: ";
    cin >> letra;

    
    letra = tolower(letra);

    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra " << letra << " é uma vogal." << endl;
    } 
    
    else if ((letra >= 'a' && letra <= 'z')) {
        cout << "A letra " << letra << " é uma consoante." << endl;
    } 
    
    else {
        cout << "O caractere digitado não é uma letra." << endl;
    }

    return 0;
}

