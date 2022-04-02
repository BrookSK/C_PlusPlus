#include <iostream>
using namespace std;

int escolha, num1, num2;

int main(){
    cout << "Digite 1 para somar" << endl;
    cout << "Digite 2 para subtrair" << endl;
    cout << "Digite 3 para multiplicar" << endl;
    cout << "Digite 4 para dividir" << endl;
    cin >> escolha;
    
    cout << "Digite seu primeiro numero: " << endl;
    cin >> num1;
    
    cout << "Digite seu segundo numero: " << endl;
    cin >> num2;
    
    if(escolha == 1){
        cout << "O resultado e: " << num1+num2 << endl;
    } else{
    if(escolha == 2){
        cout << "O resultado e: " << num1-num2 << endl;
    } else{
    if(escolha == 3){
        cout << "O resultado e: " << num1*num2 << endl;
    } else{
    if(escolha == 4){
        cout << "O resultado e: " << num1/num2 << endl;
    }
    }
    }
    }
return 0;
}