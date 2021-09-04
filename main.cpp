#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
    for (int i = 0; i < dim; ++i)
        cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
    const int dcol = 5; // solo por prolijidad

    for (int i = 0; i < dfil; ++i) {
        for (int j = 0; j < dcol; ++j)
            cout << m[i][j] << '\t';
        cout << endl;
    }

}

void revertir(int vector[], int dim){
    int reverso[dim];
    int j = dim - 1;
    for (int i = 0; i < dim; ++i) {
        reverso[j] = vector[i];
        j--;
    }
    mostrarvec(reverso,dim);
}

void revertir_matriz(int matriz[][5], int dim5, int matriztrans[][5]){
    for (int i = 0; i < dim5; ++i) {
        for (int j = 0; j < dim5; ++j) {
            matriztrans[j][i] = matriz[i][j];
        }
    }
}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    int matriztrans[dim5][dim5]{};

    // Primer ejercicio
    cout << "Vector de 10 elementos: " << "\n";
    mostrarvec(vec10,dim10);
    cout << "\n" << "Vector invertido: " << endl;
    revertir(vec10,dim10);

    cout << "\n" << "Vector de 5 elementos: " << endl;
    mostrarvec(vec5,dim5);
    cout << "\n" << "Vector invertido: " << endl;
    revertir(vec5,dim5);

    //Segundo ejercicio
    cout << "\n" << "Matriz:" << endl;
    mostrarmat(matriz, dim5);

    cout << "\n" << "La matriz transpuesta queda de la siguiente manera: " << endl;

    revertir_matriz(matriz,dim5,matriztrans);
    mostrarmat(matriztrans,dim5);
    return 0;
}