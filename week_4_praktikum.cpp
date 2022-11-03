using namespace std;
#include <iostream>

int main()
{
    //TASK 1


    /*int month, year, daysCount;
    bool leapYear = false;
    cout << "Input month: ";
    cin >> month;
    cout << "Input year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leapYear == true;
            }
        }
        else
        {
            leapYear = true;
        }
    }
    if (year > 0)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysCount = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysCount = 30;
            break;
        case 2:
            if (leapYear)
            {
                daysCount = 29;
            }
            else
            {
                daysCount = 28;
            }
            break;
        default:
            daysCount = 0;
            break;
        }
    }
    if (daysCount != 0)
    {
        cout << "This month has " << daysCount << " days" << endl;
    }
    else
    {
        cout << "There's no such month" << endl;
    }*/



    // TASK 2

    /*int number;
    cout << "Input number: ";
    cin >> number;
    if (number < 0 || number > 9)
    {
        cout << "Invalid number" << endl;
        return 0;
    }
    switch (number)
    {
    case 0:
    case 6:
    case 9:
        cout << "The count of circles is 1" << endl;
        break;
    case 8:
        cout << "The count of circles is 2" << endl;
        break;
    default:
        cout << "The count of circles is 0" << endl;
        break;
    }
    switch (number)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    case 6:
        cout << "Six" << endl;
        break;
    case 7:
        cout << "Seven" << endl;
        break;
    case 8:
        cout << "Eight" << endl;
        break;
    case 9:
        cout << "Nine" << endl;
        break;
    default:
        cout << "This is not a digit" << endl;
        break;
    }*/




    //TASK 3

   /* cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    cout << "Year is leap.";
    else
    cout << "Year is not leap.";*/


    //TASK 4

   /* int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (c + b) > a)
    cout << "Triangle";
    else
    cout << "Not triangle";*/


    //TASK 5

    bool isTrue = false;

    //a
    /*int p;
    cout << "Enter p: ";
    cin >> p;
    p % 4 == 0 || p % 7 == 0 ? isTrue = true : isTrue = false;
    cout << isTrue;*/

    //b
    /*int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a != 0)
    {
        cout << (b* b - 4 * a * c < 0 ? isTrue = true : isTrue = false);
    }
    else
    {
        cout << "The first number has to be positive" << endl;
    }*/


    //v
    /*int a, b;
    cout << "Enter point coordinates: ";
    cin >> a >> b;
    cout << (a >= -5 || a <= 5 || b <= 6 || b >= -6 ? isTrue = true : isTrue = false);*/

    //g
    /*int a, b, c, d, f;
    cout << "Enter point coordinates: ";
    cin >> a >> b;
    cout << "Enter circle's centre coordinates: ";
    cin >> c >> d;
    cout << "Enter the radius of the circle: ";
    cin >> f;
    cout << ((c < (c - f) || a >(c + f) && b < (d - f) || b > (d + f)) ? isTrue = true : isTrue = false);*/

    //d
    /*int a, b;
    cout << "Enter point coordinates: ";
    cin >> a >> b;
    cout << (a >= -5 || a <= 0 && b <= 0 || b >= -5 ? isTrue = true : isTrue = false);*/

    //e
    /*int a, b;
    cout << "Enter point coordinates: ";
    cin >> a >> b;
    cout << ((a > 5 && a < 10 || a > -5 && a < -10) && (b > 5 && b < 10 || b > -5 && b < -10) ? isTrue = true : isTrue = false);*/

    //j
    /*int x;
    cout << "Enter number: ";
    cin >> x;
    x >= 0 ?
        x <= 1 ? isTrue = true : isTrue = false :
        isTrue = false;*/

    //z
    /*int a, b, c,x;
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter three numbers to compare: ";
    cin >> a >> b >> c;
    x == max(a, b, c) ? isTrue = true : isTrue = false;*/

    //i
    /*int a, b, c, x;
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter three numbers to compare: ";
    cin >> a >> b >> c;
    x > max(a, b, c) ? isTrue = true :
        x < max(a, b, c) ? isTrue = true : isTrue = false;*/

    //k
    /*bool boolX, boolY;
    cout << "Enter two binary values: ";
    cin >> boolX >> boolY;
    if (boolX || boolY)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }*/

    //l
    /*bool boolX, boolY;
    cout << "Enter two binary values: ";
    cin >> boolX >> boolY;
    if (boolX && boolY)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }*/

    //m
    /*int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a < 0 && b < 0 && c < 0)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }*/

    //n
    /*int p;
    cout << "Enter a three-digit number: ";
    cin >> p;
    p % 10 == 7 ? isTrue = true :
        (p / 10) % 10 == 7 ? isTrue = true :
        (p / 100) % 10 == 7 ? isTrue = true : isTrue = false;*/

    
     //o
     /*int m;
     cout << "Enter a three-digit number: ";
     cin >> m;
     if (m % 10 != (m / 10) % 10 &&
         m % 10 != (m / 100) % 10 &&
         (m / 10) % 10 != (m / 100) % 10)
     {
         isTrue = true;
     }
     else
     {
         isTrue = false;
     }*/

     
     //p
     /*int m;
     cout << "Enter a three-digit number: ";
     cin >> m;
     if (m % 10 != (m / 10) % 10 &&
         m % 10 != (m / 100) % 10 &&
         (m / 10) % 10 != (m / 100) % 10)
     {
         isTrue = false;
     }
     else
     {
         isTrue = true;
     }*/

}

