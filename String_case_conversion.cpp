#include <iostream>
using namespace std;
int main()
{
    string user;
    cout << "Enter string in UPPERCASE : " << endl;
    getline(cin, user);

    for (int i = 0; i < user.length(); i++)
    {
        if (user[i] != ' ')
            cout << (char)(user[i] + 32);
        else
            cout << user[i];
    }
    return 0;
}