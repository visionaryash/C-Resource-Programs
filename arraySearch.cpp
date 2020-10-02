// FInd element in an array

#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int *arr;
    arr = new int[n];
    arr[0] = 5;
    arr[1] = 45;
    arr[2] = 100;
    arr[3] = 55;
    for (int i = 0; i < sizeof(arr); i++)
    {
        arr[i];
    }
    int data = n;
    int idx = -1;
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == data)
        {
            idx = 1;
            break;
        }
    }
    cout << idx;
    return 0;
}