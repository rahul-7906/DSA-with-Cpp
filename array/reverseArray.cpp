#include <iostream>
#include <string>
using namespace std;

void reverseArray(string arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    string fruits[5] = {"apple", "mango", "banana", "guava", "peach"};
    printArray(fruits, 5);
    reverseArray(fruits, 5);
    printArray(fruits, 5);

    return 0;
}