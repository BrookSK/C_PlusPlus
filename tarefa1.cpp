#include <iostream>
#include <locale.h>
// a fun��o da biblioteca #include <locale.h> � configurar a exibi��o de caracteres com acentos como: "�" por exemplo
using namespace std;
//para que o compilador possa distinguir umas das outras funcoes com nome igual � usado o namespace
//serve para vc n�o ter que colocar toda hora o comando std:: na frente da fun��es

unsigned int ano = 0;
unsigned int mes = 0;
unsigned int dia = 0;
//pelo que eu entedi ele armazena os bits ou seja armazena os dados que esta sendo disponibilizados pelo usu�rio
//p todo s os codigos terem acesso ao q esta armazenado nos colocamos este unsigned int no modo "global" ou seja; fora do int main


bool bissexto()

//comando bool tem a fun��o de declarar intru��es como falso e verdadeiro

{
    bool valida = false;
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        if (mes == 2) {
            if (dia > 29) {
                valida = true;
                cout << "O ano de " << ano << " � um ano bissexto!" << endl;
            }

            /*o bool valida est� validando se o ano � bissexto de acordo com as condi��es apresentadas e dps ele ve que se essa condi��o for verdadeira ele va falar que o m�s 2 vai ter ate 29 dias mais se o nao n for bissexto ele volta falso e continua com os dias e meses normais*/

            /*O objeto cout representa o stream de sa�da no C++. Este stream � uma esp�cie de seq��ncia (fluxo) de dados a serem impressos na tela. Para realizar a impress�o, usa-se o "operador de inser��o" que "insere" dados dentro do stream.*/

            /*if representa uma condi��o no caso se for verdadeira ele va falar que o m�s 2 vai ter ate 29 dias mais se o nao n for bissexto ele volta falso e continua com os dias e meses normais*/

            else {
                valida = false;
                cout << "A data est� incorreta!" << endl;
            }
        }

        /*else As instru��es no if-branch ser�o executadas somente se o condition for avaliado como um valor diferente de zero (ou true ). ... Caso contr�rio, a instru��o a seguir ser� ignorada e, se houver else , a instru��o ap�s a else execu��o ser� executada.*/

        else {
            valida = true;
            cout << "O ano de " << ano << " � um ano bissexto!" << endl;
        }
    }
    else {
        if (mes == 2) {
            if (dia > 28) {
                cout << "A data est� incorreta!" << endl;
            }
        }
        else {
            cout << "O ano de " << ano << " � um ano bissexto!" << endl;
        }
    }
    return valida;
    //Isso serve para informar ao compilador que ocorreu tudo certo com a fun��o
}

bool validaFevereiro()
{
    if (mes != 2) return false;
    if (dia <= 28) return false;
    if ((ehBissexto(ano) == false) && (dia == 29)) return false;
    return true;
}

bool ValidaDias()
{
    bool valida2 = false;
    if (mes % 2 == 0) {
        if (dia > 30) {
            //divide por 2 pq se for par ele tem q ter 30 dias
            valida2 = false;
            cout << "Digite um dia v�lido para o m�s, a data est� errada!" << endl;
        }
        else {
            valida2 = true;
        }
    }
    else {
        if (mes % 2 == 1) {
            if (dia > 31) {
                valida2 = false;
                cout << "Digite um dia v�lido para o m�s, a data est� errada!" << endl;
            }
            else {
                valida2 = true;
            }
        }
    }
    return valida2;
}

bool validaDia(unsigned int valor)
{
    if (valor > 31 || valor == 0) return false;
    return true;
}

bool validaMes(unsigned int valor)
{
    if (valor > 12 || valor == 0) return false;
    return true;
}

bool validaAno(unsigned int valor)
{
    if ((valor == 0) && (bissexto))return false;
    return true;
}

int main(void)
{
    setlocale(LC_ALL, "");
    //serve pra corrigir aqueles caracteres com acento como o "�" por exemplo
    do {
        cout << "Informe o dia do compromisso:";
        cin >> dia;
        //O operador cin realiza a leitura de um seq��ncia de dados, sem espa�os e sem tabula��es, vindas do teclado
    } while (validaDia(dia) == false);

    /*O comando While testa a condi��o; Se a condi��o for falsa ent�o pula todos os comandos do bloco subordinado ao while e passa a executar os comandos ap�s o bloco do while. Se condi��o for verdadeira ent�o executa cada um dos comandos do bloco subordinado ao while.*/

    do {
        cout << "Informe o m�s do compromisso:";
        cin >> mes;
    } while (validaMes(mes) == false);

    do {
        cout << "Informe o ano do compromisso:";
        cin >> ano;
    } while (validaAno(ano) == false);

    if (ValidaDias() == true && bissexto() == true)
        cout << dia << "/" << mes << "/" << ano << endl;
    else
        cout << dia << "/" << mes << "/" << ano << endl;

    system("pause");
    //so serve para congelar o cmd
    return 0;
    //Isso serve para informar ao compilador que ocorreu tudo certo com a fun��o ineira e que finalmente acabou

    /*a mais e pq n colocamos mais um valida3 ai ? pelo simples motivo que o codigo acabou....se tivesse mais coisa para validar a ente colocaria*/
}

//   > maior, < menor