#include <iostream>

using namespace std;

int main()
{
//enteros
    short m = 80;
    int a = 715;
    long l = 87;
    long long h = 76765;
//decimales
    float b = 3.54;
    double s = 2.55;

    cout <<"el tamañano en bytes de una variable short es "<< sizeof(m)<<endl;
    cout <<"el tamañano en bytes de una variable int es "<< sizeof(a)<<endl;
    cout <<"el tamañano en bytes de una variable long es "<< sizeof(l)<<endl;
    cout <<"el tamañano en bytes de una variable float es "<< sizeof(b)<<endl;
    cout <<"el tamañano en bytes de una variable double es "<< sizeof(s)<<endl;
    cout <<"el tamañano en bytes de una variable long long es "<< sizeof(h)<<endl;
//letras
    char val = 'Q';
    int valNUM = static_cast<int>(val);
    cout <<"el tamañano en bytes de una variable char es "<< sizeof(val)<<endl;
    cout << "el valor en la tabla ASCII de mi variable char es "<< valNUM <<endl;

    return 0;
}
