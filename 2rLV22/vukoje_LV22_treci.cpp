#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

float Duljina(float a,float b,float c,float d);

main(){
    int xp=640, yp=480;
    float d;
    int i=0;
    int  x1,y1,x2,y2;
    srand(time(NULL));
    initwindow(xp,yp);

    while(i<10){
        x1=rand()%xp;
        y1=rand()%yp;
        x2=rand()%xp;
        y2=rand()%yp;
        d=Duljina(x1,y1,x2,y2);
        if(d>=200 && d<=400){
            line(x1,y1,x2,y2);
            i++;
        }
    }

    getch();
    closegraph();
}

float Duljina(float a,float b,float c,float d){
    return sqrt(pow(a-c,2)+pow(b-d,2));
}
