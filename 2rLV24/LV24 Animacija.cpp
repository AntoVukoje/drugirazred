#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void intro();
void credits();
void krugovi();
void sat();
void gfc();
void mc();

main(){
    //Inicializacija
    int x=0,y,i=1,j=1,r=0;
    int gd = DETECT, gm;
    int tocke[8]={133+x,320,133+x,325,139+x,322.5,133+x,320};
    //Graphics Prozor
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,800);
    setbkcolor(0);
    cleardevice();
    //Glavni kod
    intro();
    credits();
    cleardevice();
    while(i!=360){
        setcolor(4);
        arc(400,300,0,i,400);
        setcolor(2);
        arc(400,400,0,i,400);
        setcolor(3);
        arc(400,500,0,i,400);
        i++;
        delay(10);
    }
    while(j<800){
        bar(200-j,200+j,600+j,600-j);
        j++;
        delay(5);
    }
    setcolor(0);
    setlinestyle(0,0,3);
    setbkcolor(15);
    cleardevice();
    while(r!=175){
        cleardevice();
        circle(400,400,r);
        r++;
        delay(5);
    }
    i=0;
    while(i<60*2){
        cleardevice();
        sat();
        line(400,400,340+i/2,355-i/2);
        i++;
        delay(10);
    }
    delay(500);
    i=0;
    setbkcolor(0);
    cleardevice();
    r=800;
    setfillstyle(1,14);
    setcolor(14);
    circle(400,400,r);
    floodfill(400,400,14);
    while(r>50){
        cleardevice();
        circle(400,400,r);
        floodfill(400,400,14);
        line(400,400,400,0);
        r-=25;
        delay(10);
    }
    while(i<200){
        cleardevice();
        circle(400-i,400-i/2.2,r);
        floodfill(400-i,400-i/2.2,14);
        line(400-i,400-i/2.2,400,0);
        i+=30;
        delay(50);
    }
    delay(500);
    cleardevice();
    i=0;
    x=0;
    setcolor(6);
    while(x<150){
        cleardevice();
        setcolor(6);
        line(0,450,50+x,350);
        line(0,350,50+x,450);
        line(50+x,350,100+x*2,450);
        line(50+x,450,100+x*2,350);
        setfillstyle(1,1);
        fillellipse(100+x*2,400,25,75);
        setfillstyle(1,4);
        fillellipse(100+x*2,335,35,35);
        x++;
        delay(5);
    }
    setbkcolor(0);
    setfillstyle(1,14);
    while(i<200){
        cleardevice();
        setcolor(14);
        circle(400+i,400-i/2.2,r);
        floodfill(400+i,400-i/2.2,14);
        line(400+i,400-i/2.2,400,0);
        i+=30;
        delay(50);
    }
    //zatvaranje prozora
    getch();
    closegraph();
}

void intro(){
    int x=0;
    while(x<800*1.2){
        putpixel(x,400,2);
        putpixel(x/1.2,500,3);
        putpixel(x/1.2,300,4);
        x++;
        delay(5);
    }
}

void credits(){
    settextstyle(7,0,7);
    outtextxy(210,320,"Napravio:");
    delay(1000);
    settextstyle(5,0,6);
    outtextxy(230,425,"Anto Vukoje");
    delay(400);
    settextstyle(3,0,2);
    outtextxy(285,525,"Pritisnite neku tipku");
    getch();
}

void sat(){
    setcolor(0);
    circle(400,400,175);
    setlinestyle(0,0,3);
    line(400,225,400,250);
    line(225,400,250,400);
    setlinestyle(0,0,3);
    line(400,575,400,550);
    line(575,400,550,400);
    line(400,400,400,275);
}




