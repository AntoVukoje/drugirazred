#include <graphics.h>
#include <conio.h>
#include <stdio.h>

main(){
    //Inicializacija
    int x=0,y;
    int gd = DETECT, gm;
    //Graphics Prozor
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,800);
    setbkcolor(0);
    cleardevice();
    //Glavni kod
    while(x<800*1.2){
        putpixel(x,400,2);
        putpixel(x/1.2,500,3);
        putpixel(x/1.2,300,4);
        x++;
        delay(5);
    }
    delay(650);
    settextstyle(7,0,7);
    outtextxy(100,320,"Ascending Vestige");
    delay(1000);
    settextstyle(5,0,6);
    outtextxy(60,425,"Interactive C++ Animation");
    //zatvaranje prozora
    getch();
    closegraph();
}
