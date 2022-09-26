#include <iostream>
using namespace std;

void leiaInteiros(int &a, int &b){
    cout << "Digite dois numeros inteiros: " ;
    cin >> a >> b;
}

void leiaInteiros2(int *a, int *b){
    cout << "Digite dois numeros inteiros: " ;
    cin >> *a >> *b;
}

int main()
{
    int a, b;

    leiaInteiros(a, b);
    cout << a << " " << b << endl;

    leiaInteiros2(&a, &b);
    cout << a << " " << b << endl;
    
    return 0;
}
