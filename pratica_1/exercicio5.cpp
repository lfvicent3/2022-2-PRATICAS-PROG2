#include <iostream>
using namespace std;

int main()
{
    char str[] = "abc teste";

    char *manipula = str;
    char *str2 = str;

    for (; *manipula; manipula++);
    for (; true; manipula--){
        cout << *manipula;
        if(*manipula == *str2){
            break;
        }   
    }

    cout << endl;
   
    return 0;
}
