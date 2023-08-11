#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 5, 100, 4};
    cout << "The greatest of all the elements is: ";
    int grt = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > grt)
        {
            grt = arr[i];
        }
    }

    cout << grt << endl;

    return 0;
}