using namespace std;
#include <iostream>
const int MAX_SIZE = 100;

void inputArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
	}
}

void isEvenArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i == 0) continue;
		if (array[i] % 2 == 0)
		{
			cout << array[i] << " ";
		}
	}
}

void isArrayPositionEven(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
}

void biggerArray(int arr[], int n)
{
	int counter = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
		{
			counter++;
		}
	}
	cout << counter;
}

int length(char arr[])
{
	int i = 0, count = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

bool isArrayPalindrome(char arr[])
{
	int n = length(arr);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr[n - 1 - i])
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

void multiplyBy(int arr[], int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] * k << endl;
	}
}

void reverseArray(int arr[], int n)
{
	int reverseArr[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		reverseArr[i] = arr[n - 1 - i];
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = reverseArr[i];
		cout << reverseArr[i] << endl;
	}
}

int main()
{
	//TASK 1
	
	/*int arr[MAX_SIZE];
	int n;
	cout << "Enter the array size: ";
	do
    {
        cin >> n;
    } while (n > MAX_SIZE || n <= 0);
	inputArray(arr, n);
	isEvenArray(arr, n);*/

	//TASK 2

	/*int arr[MAX_SIZE];
	int n;
	cout << "Enter the array size: ";
	do
	{
		cin >> n;
	} while (n > MAX_SIZE || n <= 0);
	inputArray(arr, n);
	isArrayPositionEven(arr, n);*/

	//TASK 3

	/*int arr[MAX_SIZE];
	int n;
	cout << "Enter the arrat size: ";
	do
	{
		cin >> n;
	} while (n > MAX_SIZE && n <= 0);
	inputArray(arr, n);
	biggerArray(arr, n);*/

	//TASK 4
	/*char arr[MAX_SIZE];
	cin.getline(arr, MAX_SIZE);
	cout << length(arr) << endl;*/

	//TASK 5
	/*char arr[MAX_SIZE];
	cin.getline(arr, MAX_SIZE);
	cout <<isArrayPalindrome(arr) ? "YES" : "NO";*/

	//TASK 6

	/*int arr[MAX_SIZE];
	int k, n;
	cout << "Enter a number: ";
	cin >> k;
	cout << "Enter the array size: ";
	cin >> n;
	inputArray(arr, n);
	multiplyBy(arr, n, k);*/
	
	int arr[MAX_SIZE], n;
	cin >> n;
	inputArray(arr, n);
	reverseArray(arr, n);
}
