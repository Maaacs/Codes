#include <iostream>
#include <fstream>
#include <string>


int cerrParaErros(const std::string& filename){// recebe o nome do arquivo como uma string
    std::ifstream file(filename); // Cria um objeto ifstream (é criado usando o nome do arquivo passado como argumento)
    /*
    cerr está associada ao fluxo de erro padrão (standard error stream). 
    Isso significa que mensagens de erro são enviadas para um canal 
    separado do fluxo de saída padrão (cout), permitindo que erros sejam 
    tratados de forma distinta e não se misturem com a saída normal do programa
    */
    if (!file) {
        std::cerr << "Erro: Não foi possível abrir o arquivo 'example.txt'" << filename << std::endl;
        return 1;
    }
    // Processamento do arquivo
    std::cout << "Arquivo aberto com sucesso!" << std::endl;

    return 0;

}

void logProgressoLeitura(const std::string& filename) {
    std::ifstream file(filename); // ifstream é a classe. file é o nome do objeto. filename é o nome do arquivo que vamos abrir.
    std::string linha; // string é a classe. ela instancia "linha" que nada mais é que o nome do objeto (que pode ter atributos e métodos).
    int numeroLinha = 0;
    while (std::getline(file, linha)) {
        numeroLinha++;
        std::clog << "Lendo linha " << numeroLinha << ": " << linha << std::endl;
    }

    std::clog << "Leitura do arquivo '" << filename << "' concluída." << std::endl;
}


int main() {
    cerrParaErros("example.txt");
    logProgressoLeitura("example.txt");

    return 0;
}


