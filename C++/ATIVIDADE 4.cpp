#include <iostream>
using namespace std;

int main() {
    
    char letra;

    
    cout << "Digite uma letra: ";
    cin >> letra;

    
    letra = tolower(letra);

    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra " << letra << " � uma vogal." << endl;
    } 
    
    else if ((letra >= 'a' && letra <= 'z')) {
        cout << "A letra " << letra << " � uma consoante." << endl;
    } 
    
    else {
        cout << "O caractere digitado n�o � uma letra." << endl;
    }

    return 0;
}

