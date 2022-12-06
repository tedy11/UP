using namespace std;
#include <iostream>
const int MAX_ROWS_COLS = 100;

void inputMatrix1(int matrix1[][MAX_ROWS_COLS], int r1, int c1)
{
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout << "Matrix1 [ " << j << "][" << i <<  "] = ";
            cin >> matrix1[j][i];
        }
        cout << endl;
    }
}

void inputMatrix2(int matrix2[][MAX_ROWS_COLS], int r2, int c2)
{
    for (int i = 0; i < c2; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            cout << "Matrix1 [ " << j << "][" << i << "] = ";
            cin >> matrix2[j][i];
        }
        cout << endl;
    }
}



int multiplyMatrixs(int matrix1[][MAX_ROWS_COLS], int matrix2[][MAX_ROWS_COLS], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {

            }
        }
    }
}


int main()
{
    int rows, cols;
    cin >> rows >> cols;
    int matrix1[MAX_ROWS_COLS][MAX_ROWS_COLS];
    inputMatrix1(matrix1, rows, cols);
    outputMatrix(matrix1,rows, cols);
}

