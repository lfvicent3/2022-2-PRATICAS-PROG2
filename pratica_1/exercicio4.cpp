#include <iostream>
using namespace std;

struct Jogador {
    int pontos;
    int x, y;
};

void leDadosJogador(Jogador *j){
    cin >> j->pontos >> j->x >> j->y;
}

int main(){
    Jogador j[5];

    for (int i=0; i < 5; i++)
    {
        leDadosJogador(&j[i]);
    }

    for (int i=0; i < 5; i++)
    {
        Jogador *j1 = &j[i];
        cout <<  j1->pontos << " " << j1->x << " " << j1->y << endl;
    }
    
    return 0;
}