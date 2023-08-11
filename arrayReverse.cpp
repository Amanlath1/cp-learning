#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Elements of the array are: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    int revArr[5];

    int j = 0;

    for (int i = 4; i >= 0; i--)
    {
        revArr[j] = arr[i];
        j++;
    }

    cout << "Element of reverse array are: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << revArr[i] << endl;
    }

    return 0;
}