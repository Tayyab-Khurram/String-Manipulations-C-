#include <iostream>
using namespace std;

int main()
{
    int size, pos, NUM;
    cout << "Enter size of the array : ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " numbers : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Original array : " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

dubara:
    cout << "\nWhich position do you want to modify ?" << endl;
    cin >> pos;

    if (pos > size)
    {
        cout << "Invalid Position!\nPlease enter again!" << endl;
        goto dubara;
    }
    else
        cout << "\nEnter the number to update : " << endl;
    cin >> NUM;

    for (int i = 0; i < size; i++)
    {
        if (pos == i)
            arr[i] = NUM;
    }

    cout << "Modified array : " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}