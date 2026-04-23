#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    // int - inteiros - 4 bytes
    int i1 = 50;
    cout << i1 << endl;
    cout << sizeof(int) << endl;

    // long int - 8 bytes
    long int l1 = 100;
    cout << l1 << endl;
    cout << sizeof(long) << endl;

    //short int - 2 bytes
    short int s1 = 10;
    cout << s1 << endl;
    cout << sizeof(short) << endl;

    //float - casas decimais - 4 bytes
    float f1 = 10.5;
    cout << f1 << endl;
    cout << sizeof(float) << endl;

    //double - casas decimais - 8 bytes - é possivel usar o long para o double
    double d1 = 7.8;
    cout << d1 << endl;
    cout << sizeof(double) << endl;

    //char - armazena apenas um caractere - 1 byte
    char c1 = 'c';
    cout << c1 << endl;
    cout << sizeof(char) << endl;

    //string - armazena texto
    string str1 = "João";
    cout << str1 << endl;

    //boolean
    bool b1 = true;
    cout << b1 << endl;
    cout << sizeof(b1) << endl;

    //o int também pode armazenar valores negativos
    int i2 = -10;
    cout << i2 << endl;

    //unsigned não permite valores negativos
    unsigned long int i3 = 20;
    cout << i3 << endl;

    


    return 0;
}