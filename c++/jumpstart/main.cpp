#include <iostream>  
// Inclui a biblioteca padrão de entrada e saída em C++ (Input/Output Stream).
// É necessária para usar `std::cout` para imprimir no terminal ou `std::cin` para receber entrada do usuário.

int main(int argc, char** argv) {  
    // Define a função principal do programa. Todo programa C++ começa a execução por aqui.
    // `argc` e `argv` são usados para lidar com argumentos passados pela linha de comando:
    //   - `argc`: número de argumentos.
    //   - `argv`: vetor de strings que contém os argumentos (não usado neste código).

    std::cout << "olá, mundo!\n";  
    // Usa `std::cout` para imprimir texto no terminal.
    // O `<<` é o operador de inserção que direciona o texto para a saída padrão (normalmente o terminal).
    // O `\n` cria uma nova linha, equivalente a pressionar "Enter".

    return 0;  
    // Indica que o programa terminou com sucesso. 
    // O valor 0 é uma convenção para informar que não houve erros durante a execução.
}
