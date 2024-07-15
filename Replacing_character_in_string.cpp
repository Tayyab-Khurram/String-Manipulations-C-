#include <iostream>
using namespace std;

int main()
{
    string user;
    char ch1, ch2;
    cout << "Enter string : " << endl;
    getline(cin, user);

    cout << "Which character to replace ?" << endl;
    cin >> ch1;
    cout << "What character to place there ?" << endl;
    cin >> ch2;

    for (int i = 0; i < user.size(); i++)
    {
        if (user[i] == ch1 || user[i] == ch1 - 32)
            user[i] = ch2;
    }

    cout << "New string : " << user;
    return 0;
}