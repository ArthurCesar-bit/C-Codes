#include <stdio.h>
#include <ctype.h>

int main()
{
    int num, ced2, ced5, ced10, ced20, ced50, ced100, res5, res10, res20, res50, res100, totSaq = 0;
    char opcao;

    printf("Voce esta em expediente (S / N) \n");
    scanf("%s", &opcao);
    opcao = toupper(opcao);

    switch(opcao){
        case 'N':
            do{
            printf("Digite um valor a ser sacado: \n");
            scanf("%d", &num);
            totSaq = totSaq + num;
            if(totSaq > 1000){
                printf("Nao autorizado pois passou do valor max de 1000. \n");
                totSaq = totSaq - num;
            }else{
                if(num != 0){
                    if(num % 2 == 0 || num % 5 == 0 || num % 10 == 0 || num % 20 == 0 || num % 50 == 0 || num % 100 == 0){
                        ced100 = num / 100;
                        res100 = num % 100;
                        ced50 = res100 / 50;
                        res50 = res100 % 50;
                        ced20 = res50 / 20;
                        res20 = res50 % 20;
                        ced10 = res20 / 10;
                        res10 = res20 % 10;
                        ced5 = res10 / 5;
                        res5 = res10 % 5;
                        ced2 = res5 / 2;

                        printf("O valor %d sacado recebera: \n", num);
                        if(ced100 > 0){
                            printf("%d nota(s) de 100\n", ced100);
                        }
                        if(ced50 > 0){
                            printf("%d nota(s) de 50\n", ced50);
                        }
                        if(ced20 > 0){
                            printf("%d nota(s) de 20\n", ced20);
                        }
                        if(ced10 > 0){
                            printf("%d nota(s) de 10\n", ced10);
                        }
                        if(ced5 > 0){
                            printf("%d nota(s) de 5\n", ced5);
                        }
                        if(ced2 > 0){
                            printf("%d nota(s) de 2\n", ced2);
                        }
                    }else{
                        printf("Esse numero nao e valido. \n");
                    }
                }
            }
            }while(totSaq < 1000 && num != 0);
            break;

        case 'S':
            do{
            printf("Digite um valor a ser sacado: \n");
            scanf("%d", &num);
            totSaq = totSaq + num;

            if(num != 0){
                if(num % 2 == 0 || num % 5 == 0 || num % 10 == 0 || num % 20 == 0 || num % 50 == 0 || num % 100 == 0){
                    ced100 = num / 100;
                    res100 = num % 100;
                    ced50 = res100 / 50;
                    res50 = res100 % 50;
                    ced20 = res50 / 20;
                    res20 = res50 % 20;
                    ced10 = res20 / 10;
                    res10 = res20 % 10;
                    ced5 = res10 / 5;
                    res5 = res10 % 5;
                    ced2 = res5 / 2;

                    printf("O valor %d sacado recebera: \n", num);
                    if(ced100 > 0){
                        printf("%d nota(s) de 100\n", ced100);
                    }
                    if(ced50 > 0){
                        printf("%d nota(s) de 50\n", ced50);
                    }
                    if(ced20 > 0){
                        printf("%d nota(s) de 20\n", ced20);
                    }
                    if(ced10 > 0){
                        printf("%d nota(s) de 10\n", ced10);
                    }
                    if(ced5 > 0){
                        printf("%d nota(s) de 5\n", ced5);
                    }
                    if(ced2 > 0){
                        printf("%d nota(s) de 2\n", ced2);
                    }
                }else{
                    printf("Esse numero nao e valido. \n");
                }
            }
            }while(num != 0);
            break;
    }

   printf("Total sacado: %d", totSaq);

    return 0;
}
