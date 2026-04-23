#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int a = 10;
    int b = 20;

    //soma
    int sum = a + b;
    cout << sum << endl;

    //subtração
    int sub = a - b;
    cout << sub << endl;

    //multiplicação
    int mult = a * b;
    cout << mult << endl;

    //divisão
    float div = double(a) / double(b);
    cout << div << endl;

    //módulo
    int mod = a % b;
    cout << mod << endl;

    //incermento - se colocado depois da variavel ele adiciona na próxima linha, se colocado antes ele adiciona na mesma linha
    a++;
    cout << a << endl;

    //decremento - se colocado depois da variavel ele subtrai na próxima linha, se colocado antes ele subtrai na mesma linha
    a--;
    cout << a << endl;

    return 0;
}
