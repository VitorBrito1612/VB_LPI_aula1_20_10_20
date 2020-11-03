/**
 * @file soma.c
 * @author Vitor Brito (a20765@alunos.ipca.pt)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * doxdocgen.file.copyrightTag
 * 
 */
#include <stdio.h>

int main(int argc, char *argv[])
{

    // variaveis
    int num1;
    int num2;
    int num3;

    // atribuição de valores às variaveis num1 e num2
    num1 = 10;
    num2 = 5;

    // efetuar a soma e atribuir o resultado à variavel num3
    num3 = num1 + num2;

    // escrever na consola o resultado
    printf("num1 + num2 = %d", num3);

    // pausa antes de fechar a aplicação
    getchar();

    return 0;
}
