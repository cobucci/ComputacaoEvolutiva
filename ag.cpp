#include <bits/stdc++.h>
#include "ag.h"

using namespace std;

void populacaoInicialBinario(int nIndividuos, int dimensao){

    int vetorPopulacaoInicial[nIndividuos][dimensao];
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
            cout << vetorPopulacaoInicial[i][j] << " ";
            aux++;
            if(aux == 4){
                cout << endl;
                aux=0;
            }
        }
    }

    return;


}


void populacaoInicialInt(int nIndividuos){

    int vetorPopulacaoInicial[nIndividuos];
    for(int i=0 ; i<nIndividuos ; i++){
      vetorPopulacaoInicial[i] = rand() % 16 + (-5);
      cout << vetorPopulacaoInicial[i] << " ";
    }
    cout << endl;


}

void populacaoInicialReal(int nIndividuos){

  int vetorPopulacaoInicial[nIndividuos];
  for(int i=0 ; i<nIndividuos ; i++){
    vetorPopulacaoInicial[i] = rand() % 21 + (-10);
    cout << vetorPopulacaoInicial[i] << " ";
  }
  cout << endl;
}
