#include <iostream>
#include <list>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <fstream>
#include <vector>



using namespace std;


//binario

void populacaoInicialBinario(int nIndividuos, int dimensao);
void populacaoInicialInt(int nIndividuos);
void populacaoInicialReal(int nIndividuos);


int main(){

    srand (time(NULL));
    ifstream myReadFile;
    myReadFile.open("arquivo.txt");
    vector <int> opcoes;
    if (myReadFile.is_open()) {
      while (!myReadFile.eof()) {
        int aux;
        myReadFile >> aux;
        if (aux != -1){
            opcoes.push_back(aux);
        }
     }
   }
   
   myReadFile.close();
   if(opcoes[0] == 1){
     populacaoInicialBinario(opcoes[1], opcoes[2]);
   }
   else if(opcoes[0] == 2){
     populacaoInicialInt(opcoes[1]);
   }
   else if(opcoes[0] == 3){
     populacaoInicialReal(opcoes[1]);
   }

   return 0;
}


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
