using namespace std;
#include <iostream>

int main()
{
    //TASK 1

    /*int number;
    cout << "Enter a number: ";
    do {
        cin >> number;
    } while (number < 10 || number > 100 || number < -10 || number > -100);*/



    //TASK 3

    /*int n;
    int factoriel = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n ; i++) {
        factoriel *= i;
    }
    cout << factoriel;*/

    // TASK 4

    /*for (int i = 100; i < 1000; i++) {
        int a, b, c;
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a == b || b == c || a == c) {
            continue;
        }
        else {
            cout << i << endl;
        }
    }*/

    //TASK 5
    /*for (int i = 100; i < 1000; i++) {
        int a, b, c;
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a * b * c == 0) continue;
        if (i % (a * b * c) == 0) {
            cout << i << endl;
        }
    }*/

}
