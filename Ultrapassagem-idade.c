#include <stdio.h>

int main()
{
    float i, j;
    int anos = 0, pop1, pop2, tax1, tax2, poptot1, poptot2;
    char cid1[10], cid2[10];

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &cid1);
    printf("Digite a populacao da cidade 1: \n");
    scanf("%d", &pop1);
    printf("Digite a taxa de crescimento da cidade 1 (em percentual): \n");
    scanf("%d", &tax1);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &cid2);
    printf("Digite a populacao da cidade 2: \n");
    scanf("%d", &pop2);
    printf("Digite a taxa de crescimento da cidade 2 (em percentual): \n");
    scanf("%d", &tax2);

    i = (tax1 / 100.00) + 1;
    j = (tax2 / 100.00) + 1;
    poptot1 = pop1;
    poptot2 = pop2;

    if((pop1 > pop2 && tax1 > tax2) || (pop2 > pop1 && tax2 > tax1)){
        printf("As cidades continuaram uma sem ultrapassar a outra.\n");
    }else if((pop1 > pop2 && tax1 < tax2) || (pop2 > pop1 && tax2 < tax1)){
        if(pop1 > pop2){
            while(poptot1 > poptot2){
                poptot1 = poptot1 * i;
                poptot2 = poptot2 * j;
                anos = anos + 1;
            }
        }else{
            while(poptot2 > poptot1){
                poptot1 = poptot1 * i;
                poptot2 = poptot2 * j;
                anos = anos + 1;
            }
        }
        if(pop1 > pop2){
            printf("Vai demorar %d anos para a cidade %s passar a cidade %s. \n", anos, cid2, cid1);
        }else{
            printf("Vai demorar %d anos para a cidade %s passar a cidade %s. \n", anos, cid1, cid2);
        }
    }
    return 0;
}
