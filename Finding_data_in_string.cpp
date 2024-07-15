#include <iostream>
using namespace std;

int main()
{
    string user;
    int i, alpha = 0, numb = 0, special = 0;
    cout << "Enter string : " << endl;
    getline(cin, user);

    cout << "Alphabets : ";
    for (i = 0; i < user.length(); i++)
    {
        if ((user[i] >= 'A' && user[i] <= 'Z') ||
            (user[i] >= 'a' && user[i] <= 'z'))
        {
            cout << user[i];
            alpha++;
        }

        else if (user[i] >= '0' && user[i] <= '9')
        {
            cout << "Numbers : " << user[i] << " ";
            numb++;
        }
        else
            special++;
    }

    cout << "\nTotal number of alphabets : " << alpha << endl;
    cout << "Total numbers : " << numb << endl;
    cout << "Total number of special characters : " << special << endl;

    return 0;
}
