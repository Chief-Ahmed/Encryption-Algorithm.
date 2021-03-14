#include <iostream>

using namespace std;

int main()
{
    // Made by Ahmed Qureshi.
    int i, x;
    char str[75];

    cout << "Enter a message.";
    cin >> str;

    cout << "\n Select the following Options";
    cout << "Select 1 to Encrypt the message.";
    cout << "Select 2 to Decrypt the message.";
    cin >> x;

    switch(x) {

    case 1:
        for (i=0; (i < 75 && str[i]!='\0'); i++)
        str[i] = str[i] + 2;
        cout << "\n Message Encrypted: " << str << endl;
        break;

    case 2:
        for (i = 0; (i < 75 && str[i] != '\0'); i++)
        str[i] = str[i]-2;
        cout << "\n Decrypted Message: " << str << endl;
        break;
    default:
        cout << "\nInvalid Input.";
    }
    return 0;
}
