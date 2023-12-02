#include<iostream>
using namespace std;

int main(){
    int matrizA[3][3] = {{0, 1, 4},{2, 0, 0},{1, 7, 0}};
    int matrizB[3][3] = {{3, 1, 3},{2, 1, 0},{5, 1, 1}};
    int matrizFinal[3][3] = {{0}};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << matrizA[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << matrizB[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // calculo
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
                matrizFinal[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << matrizFinal[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}