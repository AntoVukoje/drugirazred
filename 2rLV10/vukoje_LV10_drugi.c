#include <stdio.h>
main(){
    int x,y;
    int *px,*py;
    int polje[5];
    px=&x;
    py=&y;
    y=0;
    printf("Unesite 5 brojeva,nakon svakog broja stisnite enter:");
    for(int i=0;i<5;i++){
        scanf("%d ",&x);
        polje[i]=*px;
        y=*py+*px;
    }
    printf("Brojevi koje ste upisali su:");
    for(int i=0;i<5;i++){
        printf("%d ",polje[i]);
    }
    printf("Njihov zbroj je jednak %d",*py);
}
