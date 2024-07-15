#include <iostream>
using namespace std;

int main()
{
    string user, temp;
    int i;
    cout << "Enter string : " << endl;
    getline(cin, user);

    for (i = user.length() - 1; i >= 0; i--)
    {
        temp += user[i];
    }

    cout << "Reverse : " << temp << endl;
    cout << "Real : " << user << endl
         << endl;

    if (temp == user)
        cout << "This is a palindrome string" << endl;
    else
        cout << "Not a palindrome string";
    return 0;
}