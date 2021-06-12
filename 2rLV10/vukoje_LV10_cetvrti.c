#include <stdio.h>
main(){
    int x,y,brmoa=0,brvoa=0,z,a,loth,koth=0;
    int *px,*py,*pz;
    int polje[13],poljemoa[13],poljevoa[13];
    float art;
    px=&x;
    py=&y;
    pz=&z;
    y=0;
    printf("Unesite 13 brojeva,nakon svakog broja stisnite enter:\n");
    for(int i=0;i<13;i++){
        scanf("%d ",&x);
        polje[i]=*px;
        y=*py+*px;
        if(*px<loth){
            loth=*px;
        }
        if(*px>koth){
            koth=*px;
        }
    }
    art=(float)*py/13;
    for(int i=0;i<13;i++){
        if(polje[i]<art){
            poljemoa[i]=polje[i];
            brmoa++;
        }
        else{
            poljevoa[i]=polje[i];
            brvoa++;
        }
    }
    printf("Najmanji clan je %d\nNajveci clan je %d\n",loth,koth);
    printf("Zbroj svih clanova je %d\n",*py);
    printf("Ako zelite vidjeti koliko ima clanova koji su manji od aritmeticke sredine upisite 1, ako zelite vidjeti koliko clanova je manje od aritmeticke sredine upisite 2:\n");
    scanf("%d",&z);
    if(*pz==1){
        printf("\n%d je broj clanova koji su manji od art. sredine",brmoa);
    }
    else if(*pz==2){
        printf("\n%d je broj clanova koji su veci od art. sredine",brvoa);
    }
    else{
        printf("\nKrivi unos.");
    }
}
