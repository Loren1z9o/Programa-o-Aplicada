#include <iostream>

// Fun��o que verifica se o n�mero � positivo ou n�o
char verificaNumero(int num) {
    
    if (num > 0) {
        return 'P';
    } else {
        return 'N';
    }
}

int main() {
    
    int numero;
    
    
    std::cout << "Digite um n�mero inteiro: ";
    std::cin >> numero;
    
   
    char resultado = verificaNumero(numero);
    
   
    std::cout << "O resultado �: " << resultado << std::endl;
    
    return 0;
}

