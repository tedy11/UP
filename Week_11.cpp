using namespace std;
#include <iostream>

//TASK 1
float sumOfPositiveElementsInArray(float* array, int n, float sum, int i = 0)
{
    if (i == n - 1)
    {
        return sum;
    }
    if (array[i] > 0.0 && i <= n - 2 && array[i] > array[i + 1])
    {
        return sumOfPositiveElementsInArray(array, n, sum + array[i], i + 1);
    }
    else
    {
        return sumOfPositiveElementsInArray(array, n, sum, i + 1);
    }
}

//TASK 2
int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

//TASK 3
bool isPalindrome(const char* str, int size, int i = 0)
{
    if (size == 1)
    {
        return 1;
    }
    if (str[i] == str[size - 2])
    {
        return isPalindrome(str + 1, size - 2, i + 1);
    }
    else
    {
        return 0;
    }
}

//TASK 4
int sumOfElementsOfArray(int* array, int size, int sum = 0)
{
    if (size == 1)
    {
        return sum + *array;
    }
    return sumOfElementsOfArray(array + 1, size - 1, sum + *array);
}

//TASK 5
bool isMono(int* array, int size, int i = 0)
{
    if (size == 1)
    {
        return 1;
    }
    if (array[i] < array[i + 1])
    {
        isMono(array, size - 1, i + 1);
    }
    else
    {
        return 0;
    }
}


//TASK 6
bool isPowOfTwo(int number)
{
    if (number == 1)
    {
        return 1;
    }
    if (number % 2 == 0)
    {
        return 1;
    }
}

//TASK 7
int minElementOfArray(int* array, int size, int min = INT_MAX)
{
    if (size == 0)
    {
        return min;
    }
    if (min > *array)
    {
        return minElementOfArray(array + 1, size - 1, *array);
    }
    else {
        return minElementOfArray(array + 1, size - 1, min);
    }
}

int main()
{
    //TASK 1
    //Да се напише рекурсивна функция, която по даден масив от 
    // дробни числа намира сумата от всички неотрицателни числа,
    // които са по-големи от числото, стоящо вдясно от тях 
    // (само ако има такова). Пример: {2, -1.9, 1.1, 3.5, 1, 0, 8.3} 
    // -> 6.5 (обяснение: 6.5 = 2 + 3.5 + 1;
    //пропускаме 8.3, тъй като вдясно от него няма число)
    /*int n;
    cin >> n;
    float* array = new float[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    cout << sumOfPositiveElementsInArray(array, n, sum);*/

    //TASK 2
    //Напишете рекурсивна функция за изчисление на 
    // n-тото число на Фибоначи 
    //Fib(n). Fib(0) = 0 , Fib(1) = 1 , 
    //Fib(n) = Fib(n − 1) + Fib(n − 2), n = 2, 3, ..
    /*int n;
    cin >> n;
    cout << fib(n);*/

    //TASK 3
    //Напишете рекурсивна функция, 
    // която проверява дали един низ е палиндром.
    /*cout << isPalindrome("abba", 5);*/

    //TASK 4
    //Да се напише функция,
    //  която рекурсивно намира сумата на елементите на масив.
    /*int array[5] = { 1,2,3,4,5 };
    cout << sumOfElementsOfArray(array, 5);*/

    //TASK 5
    //Да се напише функция, която рекурсивно 
    //проверява дали елементите на масив са подредени в нарастващ ред.
    /*int array[5] = { 1,2,3,4,5 };
    cout << isMono(array, 5);*/

    //TASK 6
    //Да се напише рекурсивна функция, която проверява
    //дали едно число е степен на двойката.
    c/*out << isPowOfTwo(4);*/

    //TASK 7
    //Да се напише рекурсивна функция, която намира 
    //и връща най-малкия елемент на масив.
    /*int array[6] = { 102, 56, 23, 56, 6, 7 };
    cout << minElementOfArray(array, 6);*/
}

