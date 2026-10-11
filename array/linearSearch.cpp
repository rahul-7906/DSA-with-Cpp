#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int marks[10] = {90, 98, 97, 96, 92, 96, 89, 98, 99, 100};

    cout << "Enter the number you want to search : ";
    int key;
    cin >> key;

    bool result = linearSearch(marks, 10, key);
    if (result)
    {
        cout << "Number found " << endl;
    }
    else
    {
        cout << "Number not found" << endl;
    }

    return 0;
}