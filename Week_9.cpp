using namespace std;
#include <iostream>

void swapNumbers(int* num1, int* num2)
{
    int* temp = num1;
    num1 = num2;
    num2 = temp;
}

int rememberOldValue(int *firstN,int  *secondN)
{
    int old = *firstN;
    *firstN = *secondN;
    return old;
}

void multiplyArr(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= k;
        cout << arr[i] << " ";
    }
}
const int MAX_SIZE = 100;

int* pointerOfValue(int arr[], int size,int number)
{
    int* pointer;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            pointer = &arr[i];
            return pointer;
        }
    }
    return nullptr;
}

void findSmallestBiggestNumber(int* arr, int size, int& smallest, int& biggest)
{
    smallest = arr[0];
    biggest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
        if (biggest < arr[i])
        {
            biggest = arr[i];
        }
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Biggest: " << biggest;
}

int main()
{
    //TASK 1
    /*int a = 10;
    int b = 5;
    int* num1 = &a;
    int* num2 = &b;
    cout << "FirstN = " << *num1 <<endl;
    cout << "SecondN = " << *num2<<endl;
    swapNumbers(a, b);
    cout << "FirstN = " << *num1<<endl;
    cout << "SecondN = " << *num2<<endl;*/

    //TASK 3    
    /*int arr[MAX_SIZE];
    int n;
    int k;
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter array length: ";
    cin >> n;
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    multiplyArr(arr, n, k);*/


    //TASK 4
    /*int arr[] = { 1, 2, 3, 4 };
    int* pointer = pointerOfValue(arr, 4, 2);
    cout << *pointer << endl;
    cout << pointer;*/

    int smallest, biggest;
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    findSmallestBiggestNumber(arr, size, smallest, biggest);
}
