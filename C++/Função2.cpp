#include <iostream>

// Função que verifica se o número é positivo ou não
char verificaNumero(int num) {
    
    if (num > 0) {
        return 'P';
    } else {
        return 'N';
    }
}

int main() {
    
    int numero;
    
    
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;
    
   
    char resultado = verificaNumero(numero);
    
   
    std::cout << "O resultado é: " << resultado << std::endl;
    
    return 0;
}

