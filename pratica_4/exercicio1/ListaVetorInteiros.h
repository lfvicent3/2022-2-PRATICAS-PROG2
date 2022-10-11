#define TAMANHO_INICIAL 100

struct ListaVetorInteiros
{
    int *_elementos;
    int _num_elementos_inseridos;
    int _capacidade;

    ListaVetorInteiros();
    ~ListaVetorInteiros();

    void inserir_elemento(int elemento);
    void imprimir();
    void remove_primeiro();
    void remove_ultimo();
    void inverte();
};
