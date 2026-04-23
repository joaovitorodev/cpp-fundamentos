#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[]) {
    //recebendo um valor
    double x, y;
    cout << "Primeiro valor: ";
    cin >> x;
    cout << "Segundo valor: ";
    cin >> y;

    cout << "Soma: " << x + y << endl;

    //recebendo um texto
    string nome;
    cout << "Digite um nome: ";
    cin >> nome;

    cout << nome << endl;

    //getline - adiciona um valor a variavel
    //cin.ignorer - limpa o buffer e aguarda o valor
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nome);
    cout << nome << endl;


    return 0;
}