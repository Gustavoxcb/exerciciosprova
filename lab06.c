#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*exercicio 1
int main(){

    int A[6] = {1,0,5,-2,-5,7};
    int s = A[0] + A[1] + A[5];
    int i;

    for(i=0; i<6; i++){
        printf("%d\n", A[i]);
        if(i == 4 ){
            A[4] = 100;
            printf("Quarta posicao de A vale: %d\n", A[4]);
        }
    }

    printf("Soma dos valores da posicao 0, 1 e 5 eh %d", s);

return 0;
}
*/

/*exercicio 2
int main(){

    int V[8];
    int i;
    int x, y;
    int soma;

    for(i=0; i<8; i++){
        printf("Digite um valor: ");
        scanf("%d", &V[i]);
    }
    printf("Digite duas posicoes entre as oito: ");
    scanf("%d%d", &x, &y);

    soma = V[x - 1] + V[y - 1];

    printf("A soma correspondente dos valores das duas posicoes eh %d", soma);


return 0;
}
*/

/*exercicio 3
//crie um programa q le 6 valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa

int main(){

    int v[6];
    int i;

    for(i=0;i<6;i++){
        printf("Digite seis valores: ");
        scanf("\n%d", &v[i]);
    }
    for(i=5;i>-1;i--){
        printf("Os valores na ordem inversa sao: %d\n", v[i]);
    }

return 0;
}
*/
/*exercicio 4
int main() {
    int vet[5], i, maior, posMaior, menor, posMenor;

    printf("Digite cinco valores: \n");
    for (i = 0; i < 5; i++){
        scanf("%i", &vet[i]);
    }

    maior    = vet[0];
    posMaior = 0;
    for (i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior    = vet[i];
            posMaior = i;
        }
    }

    menor    = vet[0];
    posMenor = 0;
    for (i = 1; i < 5; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            posMenor = i;
        }
    }

    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%i ", vet[i]);
    }

    printf("\nMaior valor: %i - posicao: %i", maior, posMaior+1);
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor+1);

    return 0;
}
*/
/*exercicio 5
int main(){

    int i;
    int V[50];

    for(i=0;i<50;i++){
        V[i] = (i+5*i)%(i+1);
        printf("%d\n", V[i]);
    }


return 0;
}
*/
/*exercicio 6
int main(){

    int v[10];
    int i, j, c = 0;

    printf("- Dez valores - ");

    for(i=0;i<10;i++){
        printf("\nDigite um valor: ");
        scanf("\n%d", &v[i]);
        j = 1;
        for(j=1;j<=v[i];j++){
            if(v[i]%j==0){
                c++;
            }

        }
        if(c==2){
            printf("%d\n eh primo", v[i]);
        }
        else{
            printf("%d\n n eh primo", v[i]);
        }
    }
return 0;
}
*/
/*exercicio 7
int main(){

    int v[6];
    int i;
    int s = 0;
    int im = 0;

    printf("Digitar seis valores");

    for(i=0;i<6;i++){
        printf("\nDigite um valor: \n");
        scanf("\n%d", &v[i]);
        if(v[i]%2==0){
            printf("\n%d eh par", v[i]);
            s = s + v[i];
        }
        else if(v[i]%2!=0){
            printf("\n%d eh impar", v[i]);
            im = im + 1;
        }

    }
    printf("\nA soma dos pares eh: %d", s);
    printf("\nA qtd de n impares eh: %d", im);



return 0;
}
*/
/*exercicio 8
int main(){
	int i, vet[10], j;

    for(i=0;i<10;i++){
        printf("Digite um valor - 9 no total - :");
		scanf("%d", &vet[i]);


		for(j=0;j<i; j++){
		if(vet[i]==vet[j]){
			printf("\nNumero repetido, entre com outro.\n");
			i--;
        }
        }
	}

	for(i=0;i<10;i++){
		printf("\n%d", vet[i]);
	}

return 0;
}
*/
//MATRIZES
/*exercicio 1
int main(){
    int matriz[4][4], contagem = 0;
    int linha, coluna;

    for(linha=0; linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            printf("%d linha, %d coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }


    for(linha=0; linha<4; linha++)
        for(coluna=0; coluna<4; coluna++)
            if(matriz[linha][coluna] > 10)
                contagem++;


    printf("\n Existem na matriz %d numeros maiores que 10", contagem);

    return 0;
}
*/
/*exercicio 2
int main(){

    int matriz[5][5], linha, coluna;

    for(linha = 0 ; linha < 5; linha++){
        for(coluna = 0 ; coluna < 5; coluna++){
            if(linha == coluna) matriz[linha][coluna] = 1 ;
            else matriz[linha][coluna] = 0;
        }
     }

    for(linha = 0 ; linha < 5; linha++){
        for(coluna = 0 ; coluna < 5; coluna++){
            printf("[ %d ] ", matriz[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}
*/
/*exercicio 3
int main() {

	int matriz[4][4];
    int i, j;

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("Valor [linha %d][coluna %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    int maior = matriz[0][0]; // Assim garanto que mesmo numeros negativos possam ser o maior
    int posI = 1;
    int posJ = 1;

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
                if (matriz[i][j] > maior){
                        maior = matriz[i][j];
                        posI = i+1;
                        posJ = j+1;
				}
        }
    }

    printf("O maior numero da matriz eh: %d [linha %d][coluna %d].\n", maior, posI, posJ);
}
*/
/*exercicio 4
int main(){

    int num = 0, i, j, matriz[5][5];

    printf("Informe os elementos da matriz: \n");

    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            printf("[linha %d][coluna %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }

    }
    printf("Pesquisar um numero: \n");
    scanf("%d", &num);

    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            if(matriz[i][j] == num){
                printf("Numero encontrado na linha: %d e coluna: %d\n", i+1, j+1);
            }
        }
    }

return 0;
}
*/
/*exercicio 5
int main(){

    int matriz[10][10], i, j;

    for(i = 0 ; i < 10; i++){
        for(j = 0 ; j < 10; j++){
            if(i < j) matriz[i][j] = 2*i + 7*j - 2;
            else if(i == j) matriz[i][j] = 3*i*i - 1;
            else if(i > j) matriz[i][j] = 4*i*i*i - 5*j*j + 1;
        }
     }

    for(i = 0 ; i < 10; i++){
        for(j = 0 ; j < 10; j++){
            printf("[ %d ] ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
*/
/*exercicio 6
int main(){

    int num = 0, i, j, matriz[4][4];

    printf("Informe os elementos da matriz: \n");

    for(i = 0; i<4; i++){
        for(j = 0; j<4; j++){
            printf("[linha %d][coluna %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            while((matriz[i][j]<1)||(matriz[i][j]>20)){
                scanf("%d", &matriz[i][j]);
        }

    }
    }
    for(i = 0 ; i < 5; i++){
        for(j = 0 ; j < 5; j++){
            printf("[ %d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<4;i++){
        for (j=i+1;j<4;j++){
            matriz[i][j] = 0;
            printf("[ %d ] ", matriz[i][j]);
        }
    }
return 0;
}
*/
/*exercicio 8
int main(){

    int opc, n1, n2, i, j, matriz1[2][2], matriz2[2][2];

    printf("Informe os elementos da matriz: \n");

    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            printf("[linha %d][coluna %d]: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }

    }
    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            printf("[linha %d][coluna %d]: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }

    }
    do{
        printf("Opcoes: 1-somar as duas matrizes\n 2-subtrair a primeira matriz da segunda\n 3-adicionar uma constante às duas matrizes\n 4-imprimir as matrizes \n5-Saida:");
        scanf("%d", &opc);


    switch(opc){
        case 1:
            printf("O resultado da adicao eh %d", matriz1[i][j] + matriz2[i][j]);
            break;
        case 2:
            printf("O resultado da subtracao eh %d", matriz2[i][j] - matriz1[i][j]);
            break;
        case 3:
            printf("O resultado da multiplicacao eh %d", n1 * n2);
            break;
        case 4:
            for(i = 0 ; i < 2; i++){
                for(j = 0 ; j < 2; j++){
                    printf("[ %d ] [ %d ]  ", matriz1[i][j], matriz2[i][j] );
            }
            printf("\n");
            }
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida");
    }
    } while(opc!=5);


return 0;
}
*/
