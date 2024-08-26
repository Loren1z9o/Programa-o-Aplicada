#include <iostream>
using namespace std;

int main() {
    
    float comprimento, largura, altura, volume;

    
    cout << "Digite o comprimento da caixa: ";
    cin >> comprimento;

    
    cout << "Digite a largura da caixa: ";
    cin >> largura;

    
    cout << "Digite a altura da caixa: ";
    cin >> altura;

    
    volume = comprimento * largura * altura;

   
    cout << "O volume da caixa é: " << volume << endl;

    return 0;
}

