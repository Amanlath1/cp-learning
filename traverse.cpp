#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of your array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}