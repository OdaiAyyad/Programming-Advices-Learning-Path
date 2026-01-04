#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadText()
{
    string Text = "";

    cout << "Enter Text: "; cin >> Text;

    return Text;
}

string Encryption(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] += EncryptionKey;
    }
    
    return Text;
}

string Decryption(string EncryptedName)
{
    for (int i = 0; i <= EncryptedName.length(); i++)
    {
        EncryptedName[i] -= 2;
    }

    return EncryptedName;
}

int main()
{
    const short EncryptionKey = 2;

    string Text = ReadText();
    cout << "\nText Before Encryption: " << Text << endl;
    cout << "Text After Encryption: " << Encryption(Text) << endl;
    cout << "Text After Decryption: " << Decryption(Encryption(Text)) << endl;

    return 0;
}