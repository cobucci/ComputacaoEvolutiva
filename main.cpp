#include <bits/stdc++.h>
#include "ag.h"

using namespace std;

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
