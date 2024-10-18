#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int matrix[3][3] = {
        {1,4,7},
        {3,6,1},
        {2,8,9}
    };
    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < 3;i++) {
        for (int j = 0; j < 3;j++) {
            cout << matrix[i][j] << "";
        }
        cout << endl;
    }
    for (int i = 0;i < 3;i++) {
        matrix[i][i] = 0;
    }
    cout << "Матриця після зміни головної діагоналі на 0:"<<endl;
        for (int i = 0;i < 3;i++) {
            for (int j = 0; j < 3; j++) {
                cout << matrix[i][j] << "";
            }
            cout << endl;
        }
        return 0;
}
