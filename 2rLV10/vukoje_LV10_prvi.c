#include <stdio.h>
main(){
    int x;
    int *px;
    int polje[15];
    px=&x;
    printf("Unesite 15 brojeva,nakon svakog broja stisnite enter:");
    for(int i=0;i<15;i++){
        scanf("%d ",&x);
        polje[i]=*px;
    }
    printf("Brojevi koji ste upisali su:");
    for(int i=0;i<15;i++){
        printf("%d ",polje[i]);
    }
}
