#include <iostream>
using namespace std;

struct Imagem
{
    int **pixels;
    int nrows;
    int ncolumns;
};

void leImagem(Imagem &imagem)
{
    char nquero[3];

    cin >> nquero;
    cin >> imagem.ncolumns;
    cin >> imagem.nrows;

    imagem.pixels = new int *[imagem.nrows];
    for (int i = 0; i < imagem.nrows; i++)
    {
        imagem.pixels[i] = new int[imagem.ncolumns];
    }

    for (int i = 0; i < imagem.nrows; i++)
    {
        for (int j = 0; j < imagem.ncolumns; j++)
        {
            cin >> imagem.pixels[i][j];
        }
    }
}

void deletaImagem(Imagem &imagem)
{
    for (int i = 0; i < imagem.nrows; i++)
    {
        delete[] imagem.pixels[i];
    }

    delete[] imagem.pixels;
}

void imprimeImagem(Imagem &imagem)
{
    cout << "P1" << endl;
    cout << imagem.ncolumns << " " << imagem.nrows << endl;

    for (int i = 0; i < imagem.nrows; i++)
    {
        for (int j = 0; j < imagem.ncolumns; j++)
        {
            if (j < imagem.ncolumns - 1)
            {
                cout << imagem.pixels[i][j] << " ";
            }
            else
            {
                cout << imagem.pixels[i][j];
            }
        }
        cout << endl;
    }
}

void invertCorImagem(Imagem &imagem)
{
    for (int i = 0; i < imagem.nrows; i++)
    {
        for (int j = 0; j < imagem.ncolumns; j++)
        {
            if (imagem.pixels[i][j] == 0)
            {
                imagem.pixels[i][j] = 1;
            }
            else
            {
                imagem.pixels[i][j] = 0;
            }
        }
    }
}

int main()
{
    Imagem im;
    leImagem(im);
    invertCorImagem(im);
    imprimeImagem(im);
    deletaImagem(im);

    return 0;
}
