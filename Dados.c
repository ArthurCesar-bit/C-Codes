#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nome[40], estCivil;
    int idade, tamanho;
    float renda;

    printf("Digite seu nome (+ 3 caracteres): \n");
    scanf("%s", nome);

    tamanho = strlen(nome);
    if(tamanho < 3){
        while(tamanho < 3){
            printf("Digite seu nome novamente: \n");
            scanf("%s", nome);
            tamanho = strlen(nome);
        }
    }

    printf("Digite seu estado civil (S, C, V): \n");
    scanf(" %c", &estCivil);

    estCivil = toupper(estCivil);
    if(estCivil != 'S' && estCivil != 'C' && estCivil != 'V'){
        do{
            printf("Digite seu estado civil novamente: \n");
            scanf(" %c", &estCivil);
            estCivil = toupper(estCivil);
        }while(estCivil != 'S' && estCivil != 'C' && estCivil != 'V');
    }

    printf("Digite sua renda (>1518.00): \n");
    scanf("%f", &renda);

    if(renda <= 1518.00){
        while(renda <= 1518.00){
            printf("Digite novamente sua renda: \n");
            scanf("%f", &renda);
        }
    }

    printf("Digite sua idade (entre 16 e 130 anos): \n");
    scanf("%d", &idade);

     if(idade < 16 || idade > 130){
        while(idade < 16 || idade > 130){
            printf("Digite novamente sua idade: \n");
            scanf("%d", &idade);
        }
    }

    printf("================\n");
    printf("Seu nome: %s \n", nome);
    printf("Seu estado civil: %c \n", estCivil);
    printf("Sua renda: %.2f \n", renda);
    printf("Sua idade: %d \n", idade);

    return 0;
}
