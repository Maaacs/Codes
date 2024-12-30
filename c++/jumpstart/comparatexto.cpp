#include <iostream>
#include <cstring>

void comparastring (char str2[]){

    char str1[100];
    std::cout << "Você está bem?" << std::endl;
    std::cin >> str1;

    if(!strcmp(str1, str2)){
        std::cout << "Que ótimo!" << std::endl;
    }

}

int main (){

    char str2[100] = "sim";
    
    comparastring(str2);

    return 0;
}