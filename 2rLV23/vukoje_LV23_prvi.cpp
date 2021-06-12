#include <graphics.h>
#include <conio.h>
#include <stdio.h>

main(){
    //Inicializacija
    int x,y;
    int gd = DETECT, gm;
    //Graphics Prozor
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,800);
    setbkcolor(0);
    cleardevice();
    //Glavni kod
    rectangle(100,100,300,200);
    outtextxy(110, 230, "rectangle(100,100,300,200);");
    bar(100,400,300,500);
    outtextxy(110, 530, "bar(100,400,300,500);");
    //zatvaranje prozora
    getch();
    closegraph();
}
