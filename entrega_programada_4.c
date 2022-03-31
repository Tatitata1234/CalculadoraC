/*Escreva um programa para implementar uma calculadora simples de números reais
usando o comando switch-case. As seguintes operações: adição (+), subtração (-),
multiplicação (*), divisão (/) e resto da divisão (%). O usuário deverá entrar com as
informações na seguinte ordem: <operando 1> <operação> <operando2>.
Para a operação, considere os caracteres: +, -, *, /, %. Caso o usuário informe que
a operação é inválida, escreva uma mensagem de erro e encerre o programa.
Exemplo de entrada e saída do programa:
Entrada: 2 + 5.5
Saída: 7
Atenção:
Nesse exercício, deve-se usar switch()*/

#include <stdio.h>

int main(){
    int op1_convertido, op2_convertido, resultado_convertido;
    float op1, op2, resultado;
    char op;

    printf("Calculadora:\n");
    printf("Insira o primeiro operando:\n");
    scanf("%f", &op1);

    printf("Insira um dos seguintes operadores: + , - , / , * , %% \n");
    scanf(" %c", &op);

    printf("Insira o segundo operando:\n");
    scanf("%f", &op2);

    op1_convertido = (int) op1;
    op2_convertido = (int) op2;

    switch(op){

        case '+':
            resultado = op1 + op2;
            printf("%.2f + %.2f = %.2f", op1, op2, resultado);
            break;

        case '%':
            if(op1>op2){
            resultado_convertido = op1_convertido % op2_convertido;
            printf("O resto da divisao de %.2f por %.2f e %d", op1, op2, resultado_convertido);
            }else{
            printf("Operacao invalida! Nao tem resto.");
            }
            break;

        case '-':
            resultado = op1 - op2;
            printf("%.2f - %.2f = %.2f", op1, op2, resultado);
            break;

        case '*':
            resultado = op1 * op2;
            printf("%.2f * %.2f = %.2f",op1, op2, resultado);
            break;

        case '/':
            if(op2 == 0){
                printf("Divisao por 0, invalido!");
            }else{
                resultado = op1 / op2;
                printf("%.2f / %.2f = %.2f", op1, op2, resultado);
            }break;

        default:
            printf("Operador invalido!");



    }


    return 0;

}


