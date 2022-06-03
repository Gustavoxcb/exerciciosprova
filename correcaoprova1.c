#include <stdio.h>
#include <stdlib.h>

/*questao 3
int main(){
    float salario;

    printf("---Aumento de Salario---\n");
    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Apos 25%% de aumento, o salario fica em R$%.2f", salario*1.25);

return 0;

}
*/
/*questao 4
int main(){

    char uni;
    float temp, conv;

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    printf("Digite a unidade: ");
    fflush(stdin);
    scanf("%c", &uni);

    if((uni == 'C') || (uni == 'c')){
        conv = temp * (9.0/5.0) / 32.0;
        printf("%.2f Celsius em Fahre eh %.2f", temp, conv);
    }
    else if((uni== 'f') || (uni== 'F')){
        conv = (temp-32.0)/(9.0/5.0);
        printf("%.2f F em Celsius eh %.2f", temp, conv);
    }
    else{
        printf("Unidade incorreta");
    }

return 0;
}
*/
/*questao 5
int main(){

    int x, i, j;

    printf("Digite um valor: ");
    scanf("%d", &x);

    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}
*/
//questao 6
int main(){

int opc, n1, n2;

    do{
        printf("\nEscolha uma opcao");
        printf("\n1.Adicao\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Modulo\n6.Sair\n");
        scanf("%d", &opc);

        if((opc>0)&&(opc<6)){
            printf("Digite dois valores: ");
            scanf("%d%d", &n1, &n2);
        }

        switch(opc){
            case 1:
                printf("n1 mais n2 eh: %d", n1 + n2);
                break;
            case 2:
                printf("n1 menos n2 eh: %d", n1 - n2);
                break;
            case 3:
                printf("n1 multiplicado  n2 eh: %d", n1 * n2);
                break;
            case 4:
                while(n2==0){
                    printf("Valor invalido para n2\n");
                    printf("Digite outro valor:");
                    scanf("%d", &n2);
                }
                printf("n1 dividido n2 eh: %d", n1 / n2);
                break;
            case 5:
                printf("n1 resto n2 eh: %d", n1 % n2);
                break;

        }
    } while(opc!=6);

return 0;
}






