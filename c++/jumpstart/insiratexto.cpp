#include <iostream>

int main (){

    char str[100];

    std::cout << "Insira o texto (Max 100 caracteres)" << std::endl;

    //  std::cin apenas recebe caracteres até o primeiro espaço em branco (null terminator '\0')
    std::cin.getline(str,100); // std é o namespace que contém o cin que é o objeto. O getline é o método. Com isso conseguimos digitar palavras com espaços '\0' e armazená-las na string. 

    std::cout << "O texto digitada eh: " << str << std::endl;

    return 0;

}