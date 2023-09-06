// caesar.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    printf("\t\t\t\x1B[32mIn england ples\033[0m\t\t\n\n");
    cout << "Input the offset ";
    int offset = 0;
    cin >> offset;
    string text ;
    cout << "Input the text to encode: \n";
    cin >> text;
    for (size_t i = 0; i < text.size(); i++)
    {
        int changed = int(text[i]) + offset;
        if (changed>90 && int(text[i])<91)
        {
           cout << char(64 + (changed - 90));
           continue;
        }
        if (changed<65 && 64<int(text[i]) < 91)
        {
            cout << char(91 - (65 - changed));
            continue;
        }
        if (changed < 97 && 96 < int(text[i]) < 123)
        {
            cout << char(123 - (97 - changed));
            continue;
        }
        if (changed>121 && int(text[i]) < 123)
        {
            cout << char(96 + (changed - 122));
            continue;
        }
        cout << char(changed);
    }

}
