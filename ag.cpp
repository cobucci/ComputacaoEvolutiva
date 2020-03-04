#include <iostream>
#include <list>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */



using namespace std;

//binario
//numero de indiviuos
// numero de cromossomos

void populacaoInicialBinario(int nIndividuos, int dimensao);

int main(){

    populacaoInicialBinario(10, 10);
    return 0;
}


void populacaoInicialBinario(int nIndividuos, int dimensao){

    int vetorPopulacaoInicial [nIndividuos][dimensao];
    for (int i=0 ; i<nIndividuos; i++){
        for(int j=0 ; j<dimensao ; j++){

            int randAux = rand() % 9999;
            if (randAux % 2 == 0){
                vetorPopulacaoInicial[i][j] = 0;
            }
            else{
                vetorPopulacaoInicial[i][j] = 1;
            }
        }

    }

    int aux=0;
    for (int i=0 ; i<nIndividuos; i++){
        for(int j=0 ; j<dimensao; j++){
            cout << vetorPopulacaoInicial[i] << " ";
            aux++;
            if(aux == 4){
                cout << endl;
                aux=0;
            }
        }
    }

    return;


}
