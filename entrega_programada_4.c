/*Escreva um programa para implementar uma calculadora simples de n�meros reais
usando o comando switch-case. As seguintes opera��es: adi��o (+), subtra��o (-),
multiplica��o (*), divis�o (/) e resto da divis�o (%). O usu�rio dever� entrar com as
informa��es na seguinte ordem: <operando 1> <opera��o> <operando2>.
Para a opera��o, considere os caracteres: +, -, *, /, %. Caso o usu�rio informe que
a opera��o � inv�lida, escreva uma mensagem de erro e encerre o programa.
Exemplo de entrada e sa�da do programa:
Entrada: 2 + 5.5
Sa�da: 7
Aten��o:
Nesse exerc�cio, deve-se usar switch()*/

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


