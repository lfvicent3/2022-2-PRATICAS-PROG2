class Aquecedor
{
private:
    double temperatura;
    double minTemperatura;
    double maxTemperatura;
    double fatorInclementoTemperatura;

public:
    Aquecedor();
    Aquecedor(double temperatura);
    Aquecedor(double temperatura, double fatorInclementoTemperatura);
    void aquecer();
    void esfriar();
    double getTemperatura();
    void setFatorInclementoTemperatura(double fatorInclementoTemperatura);
    ~Aquecedor();
};