#include <iostream>
using namespace std;

int calculaTamanhoString1(char str[])
{
    int tam = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        tam++;
    }

    return tam;
}

int calculaTamanhoString2(char *str)
{
    int tam = 0;
    for (; *str; str++)
    {
        tam++;
    }
    return tam;
}

int calculaTamanhoString3(char *str)
{
    char *init = str;
    char *finish = str;

    for (; *finish; finish++);

    return (finish - init) / sizeof(char);
}

int main()
{
    char str[51];
    cout << "Digite alguma string ... ( com ate 50 caracteres ) : ";
    cin.getline(str, 50);

    cout << "Tamanhos calculados:" << endl;
    cout << calculaTamanhoString1(str) << " " << calculaTamanhoString2(str) << " " << calculaTamanhoString3(str);
    cout << endl;

    return 0;
}
