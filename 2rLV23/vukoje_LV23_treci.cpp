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
    setbkcolor(15);
    cleardevice();
    //Glavni kod
    setcolor(1);
    setlinestyle(0,1,3);
    circle(200,200,75);
    setcolor(14);
    circle(275,285,75);
    setcolor(0);
    circle(360,200,75);
    setcolor(10);
    circle(435,285,75);
    setcolor(12);
    circle(520,200,75);
    //zatvaranje prozora
    getch();
    closegraph();
}
