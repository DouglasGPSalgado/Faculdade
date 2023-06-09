#ifndef BIBLIOTECAORDENACAO_H_INCLUDED
#define BIBLIOTECAORDENACAO_H_INCLUDED

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "bibliotecaOrdenacao.cpp"

class Ordenacao {
    public:
        void bubbleSort(std::vector<int> &v);
        void selectionSort(std::vector<int> &v);
        void insertionSort(std::vector<int> &v);
        void quickSort(std::vector<int> &v, int esquerda, int direita);
        void mergeSort(std::vector<int> &v, int inicio, int fim);
        void heapSort(std::vector<int> &v);
        int getNumComparacoes();
        int getNumTrocas();

    private:
        int numComparacoes;
        int numTrocas;
};

#endif // BIBLIOTECAORDENACAO_H_INCLUDED
