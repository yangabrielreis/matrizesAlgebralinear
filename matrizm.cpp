#include<iostream>
using namespace std;

int main(){
    float matriz[2][3];
    float aux = 0, x;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout << "Digite o valor da posicao " << i+1 << j+1 << endl;
            cin >> x;
            matriz[i][j]=x;
        }
    }

    cout << endl;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    aux = matriz[0][0];
    matriz[0][0] /= aux;
    matriz[0][1] /= aux;
    matriz[0][2] /= aux;

    aux = matriz[1][0];
    matriz[1][0] += (-aux)*(matriz[0][0]);
    matriz[1][1] += (-aux)*(matriz[0][1]);
    matriz[1][2] += (-aux)*(matriz[0][2]);

    cout << endl;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    aux = matriz[1][1];
    matriz[1][1] /= aux;
    matriz[1][2] /= aux;

    aux = matriz[0][1];
    matriz[0][1] += (-aux)*(matriz[1][1]);
    matriz[0][2] += (-aux)*(matriz[1][2]);

    cout << endl;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}