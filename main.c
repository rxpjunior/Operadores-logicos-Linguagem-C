#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Teste com condicoes OU (OR)\n");
    char opcao='a';
    while((opcao=='a') || (opcao=='e') || (opcao=='i') || (opcao=='o') || (opcao=='u')){
    fflush(stdin);
    printf("Entre com uma vogal para continuar ou uma consoante para sair: ");
    scanf("%c",&opcao);
    if(opcao=='a') printf("Letra digitada foi a\n");
    else
        if(opcao=='e') printf("Letra digitada foi e\n");
    else
        if(opcao=='i') printf("Letra digitada foi i\n");
    else
        if(opcao=='o') printf("Letra digitada foi o\n");
    else
        if(opcao=='u') printf("Letra digitada foi u\n");
    else printf("Voce digitou algo que nao era uma vogal\n\n");
    }

    printf("Teste com condicoes E (AND)\n");
    int num=6;
    while((num%2==0)&&(num<=6)){
    fflush(stdin);
    printf("Para continuar entre com um numero par menor ou igual a 6: ");
    scanf("%i",&num);
    if(num==0) printf("Numero digitado foi 0\n");
    else
        if(num==2) printf("Numero digitado foi 2\n");
    else
        if(num==4) printf("Numero digitado foi 4\n");
    else
        if(num==6) printf("Numero digitado foi 6\n");
    else
        if(num<0) printf("Voce digitou um numero par negativo\n");
    }

    printf("Teste de comparacao de strings\n");
    if(strcmp("pato","pato")==0){
        printf("pato == pato - Verdadeiro"); // compara as atrings. Se =0 elas são iguais
    }




    return 0;
}
