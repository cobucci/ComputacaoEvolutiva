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


void populacaoInicialIntPermutado(int nIndividuos){

  vector <int> aux;

  int vetorPopulacaoInicial[nIndividuos];
  for(int i=0 ; i<nIndividuos ; i++){
    int r1 = rand() % 16 + (-5);
    bool verifica = verificacaoPermutacao(r1, aux);
    while(!verifica){
      r1 = rand() % 16 + (-5);
      verifica = verificacaoPermutacao(r1, aux);
    }
    vetorPopulacaoInicial[i] = r1;
    aux.push_back(r1);
    cout << vetorPopulacaoInicial[i] << " ";
  }
  cout << endl;
}

bool verificacaoPermutacao(int num, vector<int> aux){

  for(int i=0 ; i<aux.size() ; i++){
    if(num == aux[i]){
      return false;
    }
  }
  return true;
}


void populacaoInicialReal(int nIndividuos){

  float vetorPopulacaoInicial[nIndividuos];
  for(int i=0 ; i<nIndividuos ; i++){
    float r = -10 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(10-(-10))));
    vetorPopulacaoInicial[i] = r;
    cout << vetorPopulacaoInicial[i] << " ";
  }
  cout << endl;
}
