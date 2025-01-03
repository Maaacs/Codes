#include <iostream>
#include <cstdio>

void textocomvetor(){
    char str[100];

    std::cout << "Insira o primeiro texto (Max 100 caracteres)" << std::endl;

     //  std::cin apenas recebe caracteres até o primeiro espaço em branco (null terminator '\0')
    std::cin.getline(str,100); // std é o namespace que contém o cin que é o objeto. O getline é o método. Com isso conseguimos digitar palavras com espaços '\0' e armazená-las na string. 

    std::cout << "1 - " << str << std::endl;
}


void textocomputs(){
    char str[50];

    std::cout << "\nInsira o segundo texto (Max 50 caracteres)" << std::endl;

     //  std::cin apenas recebe caracteres até o primeiro espaço em branco (null terminator '\0')
    std::cin.getline(str,50); // std é o namespace que contém o cin que é o objeto. O getline é o método. Com isso conseguimos digitar palavras com espaços '\0' e armazená-las na string. 

    //std::cout << "2 - " << str << std::endl;
    puts("2 - "); //  imprime uma cadeia de caracteres no console, e então pula automaticamente uma linha.
    puts(str); 
}

void texcomfgets(){
    char str[100];

    std::cout << "\nInsira o terceiro texto (Max 50 caracteres)" << std::endl;

    fgets(str,100,stdin); // lê uma cadeia de caracteres completa (incluindo espaços) a partir de um arquivo stream e armazena-a em um vetor.

    std::cout << "O texto digitado eh: " << str << std::endl;
}


int main (){

    textocomvetor();
    textocomputs();
    texcomfgets();
   
    return 0;
}