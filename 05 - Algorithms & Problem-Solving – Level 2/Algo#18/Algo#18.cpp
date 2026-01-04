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

string Decryption(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] -= EncryptionKey;
    }

    return Text;
}

int main()
{
    const short EncryptionKey = 2;

    string Text = ReadText();
    string TextAfterEncryption = Encryption(Text, EncryptionKey);
    string TextAfterDecryption = Decryption(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption: " << Text << endl;
    cout << "Text After Encryption: " << TextAfterEncryption << endl;
    cout << "Text After Decryption: " << TextAfterDecryption << endl;

    return 0;
}