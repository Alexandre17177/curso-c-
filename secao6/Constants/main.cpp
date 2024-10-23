// Section 6
// Constants

/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main() {
    cout << "ola bem vindo ao limpa carpete do fank's" << endl;

    int numeroDeQuartosPequenos {0};
    int numeroDeQuartosGrandes {0};

    cout << "\nquantos quartos pequenos voce vai querer fazer a limpeza de carpete? " << endl;
    cin >> numeroDeQuartosPequenos;
    cout << "\nquantos quartos Grandes voce vai querer fazer a limpeza de carpete? " << endl;
    cin >> numeroDeQuartosGrandes;

    const double precoPorQuartoPequeno {25.0};
    const double precoPorQuartoGrande {35.0};
    const double precoTaxa {0.06};
    const int diasValidos {30};

    double totalDePequeno {precoPorQuartoPequeno * numeroDeQuartosPequenos};
    double totalDeGrande {precoPorQuartoGrande * numeroDeQuartosGrandes};


    
    cout << "\nestimado a pagar pela limpeza" << endl;
    cout << "numero de quartos pequenos " << numeroDeQuartosPequenos << endl;
    cout << "numero de quartos grandes " << numeroDeQuartosGrandes << endl;
    cout << "preco por quarto pequeno: $" << precoPorQuartoPequeno << endl;
    cout << "preco por quarto grande: $" << precoPorQuartoGrande << endl;
    cout << "custo total quarto pequeno: $" << totalDePequeno << endl;
    cout << "custo total quarto grande: $" << totalDeGrande << endl;
    cout << "taxa: $" << (totalDePequeno) + (totalDeGrande) * precoTaxa << endl;
    cout << "==============================================" << endl;
    cout << "total a pagar: $" << (totalDePequeno + totalDeGrande) + (totalDePequeno + totalDeGrande * precoTaxa) << endl;
    cout << "este servico de limpeza e valido por: " << diasValidos << " dias" << endl;


    return 0;
}

