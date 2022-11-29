
class PosicoesVetor
{
private:
    int y;
    int *v;
public:
    PosicoesVetor(int y);
    ~PosicoesVetor();
    void preencherValores(int pos, int valor);
};
