#include <iostream>
using namespace std;

void preencheAleatorios(int value[], int n)
{
    for (int i = 0; i < n; i++)
    {
        value[i] = rand() % 10;
    }
}

void imprime(int value[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << value[i] << ", ";
    }
    cout << endl;
}

void contaParImpar(int a[], int b[], int n, int &par, int &impar)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] + b[i]) % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
}

int main()
{
    srand(time(NULL));

    do
    {
        int n, par = 0, impar = 0;
        cout << "Digite a quantidade de jogadas a simular:";
        cin >> n;

        if (n < 0)
        {
            break;
        }

        int *a = new int[n];
        int *b = new int[n];

        preencheAleatorios(a, n);
        preencheAleatorios(b, n);

        contaParImpar(a, b, n, par, impar);

        imprime(a, n);
        imprime(b, n);

        cout << "Par: " << par << endl;
        cout << "Impar: " << impar << endl;

        delete[] a;
        delete[] b;
    } while (true);

    return 0;
}
