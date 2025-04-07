#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char nome[10], k;
    int qntVogal = 0, qntNome = 0, totVogal = 0, tamanho, i;

    while(qntVogal != 1){
        printf("Digite uma palavra: \n");
        scanf("%s", nome);

        qntNome = qntNome + 1;

        tamanho = strlen(nome);
        qntVogal = 0;

        for(i = 0; i < tamanho; i++){
            k = tolower(nome[i]);
            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
                qntVogal = qntVogal + 1;
            }
        }
        printf("Essa palavra tem %d vogais.\n", qntVogal);
        totVogal = totVogal + qntVogal;
    }
    printf("Foram armazenadas %d palavras e %d vogais. \n", qntNome, totVogal);
}
