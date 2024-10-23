#include <iostream>
#include <locale.h>

using namespace std;
int main() {
    std::setlocale(LC_CTYPE, "");
    int numeroFavorito;

    std::cout << "digite seu numero favorito entre 1 e 100";
    std::cin >> numeroFavorito;
    std::cout << "incrivel! esse e meu nomureo favorito tambem!!" << std::endl;
    std::cout << "nao serio, " << numeroFavorito << " e meu numero favorito tambem" << std::endl;
    return 0;
}