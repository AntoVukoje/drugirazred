#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <sstream>

main(){
    int n,p,il=0,id=0;
    int xp=640, yp=480, xt,yt,lb=4,db=1;

    srand(time(NULL));
    initwindow(xp,yp);

    printf("Unesite broj tocaka");
    scanf("%d",&n);
    p=xp/2;
    while(il<n && id<n){
        xt=rand()%xp;
        yt=rand()%yp;
        if(xt<p){
            putpixel(xt,yt,lb)
            il++;
        }
        else if(xt>p){
            putpixel(xt,yt,db);
            id++;
        }
    }


    getch();
    closegraph();
}
