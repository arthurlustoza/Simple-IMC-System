#include <iostream>
using namespace std;

int main(){

    char nome[10];
    int  idade;
    float peso;
    float altura;
    float res_imc;

cout << "\nBem-vindo ao cadastro de ficha!!";
cout << "\nDigite suas informacoes abaixo para continuar";

    cout << "\nDigite seu nome: ";
    cin >> nome;

    cout << "\nDigite sua idade: ";
    cin >> idade;

    cout <<  "\nDigite seu peso: ";
    cin >> peso;

    cout <<  "\nDigite sua altura: ";
    cin >> altura;


    res_imc = peso/(altura*altura);


    cout << "\nNome de cadastro: " << nome <<
            "\nSua idade: " << idade <<
            "\nSeu peso: " << peso <<
            "\nSua altura: " << altura <<
            "\nSeu IMC: " << res_imc;
    return 0;
}