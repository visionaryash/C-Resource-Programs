// a bar chart of asteriks representing value of arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size:";
    cin >> n;
    int *arr = new int(n);;

    cout << "Enter " << n << " items" << endl;
    for (int i = 0; i < n; i++)
    {
       cin>> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int j = max; j >= 1; j--)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= j)
            {
                cout << "\n"<< "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << " ";
    }

    return 0;
}