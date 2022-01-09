#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int x=DETECT, y=DETECT, i=DETECT,gm=DETECT,gd=DETECT,b,a,c,z=0,k,n=1;
char name[1000];
clrscr();
initgraph(&gm,&gd,"c:\\turboc3\\bgi");
a=0;
b=40;
gotoxy(a,b);
setbkcolor(5);
setcolor(6);
rectangle(0,0,639,479);
rectangle(1,1,638,478);
line(0,0,0,639);
printf("\n\t\t* welcome to arrow game *");
printf("\n\n  * enter the name of player :- ");
line(0,0,0,639);
line(1,1,1,639);
scanf("%s",&name);
printf("\n\n  * instruction :-");
printf("\n  * Press arrow keys to move up and down then press enter to launch the arrow.\n  * Only three chances are available.");
printf("\n  * press enter to continue and escape to terminate the game.");
line(0,0,0,639);
line(1,1,1,639);
setcolor(11);
circle(300,300,120);
circle(240,240,20);
circle(360,240,20);
arc(300,320,180,0,80);
line(220,320,380,320);

getch();

initgraph(&x,&y,"c:\\turboc3\\bgi");

a=0;
b=40;
gotoxy(a,b);
setcolor(RED);

line(10,40,30,40);
line(30,40,25,35);
line(30,40,25,45);
setcolor(BLUE);
rectangle(600,79,580,144);
setfillstyle(SOLID_FILL,RED);
floodfill(585,80,BLUE);
setcolor(BLUE);
rectangle(595,144,580,209);
setfillstyle(SOLID_FILL,WHITE);
floodfill(585,200,BLUE);
setcolor(1);
rectangle(587,209,580,274);
setfillstyle(SOLID_FILL,RED);
floodfill(585,250,1);
setcolor(1);
rectangle(595,274,580,339);
setfillstyle(SOLID_FILL,WHITE);
floodfill(585,300,1);
setcolor(1);
rectangle(600,339,580,404);
setfillstyle(SOLID_FILL,RED);
floodfill(585,400,1);
rectangle(595,144,600,339);
setfillstyle(SOLID_FILL,RED);
floodfill(597,200,1);
setcolor(1);
rectangle(595,209,587,274);
setfillstyle(SOLID_FILL,WHITE);
floodfill(593,250,1);
setcolor(1);
rectangle(0,0,639,479);
setcolor(YELLOW);
circle(540,25,5);
circle(560,25,5);
circle(580,25,5);
putpixel(580,240,YELLOW);

setbkcolor(GREEN);


 while(1)
 {



  if(kbhit())
  {

    c=getch();



    if(c==72)
    {
     b=b-2;
     setcolor(GREEN);

     line(10,b+2,30,b+2);
     line(30,b+2,25,b-3);
     line(30,b+2,25,b+7);
     if(b==30 || b==31)
     b=478;
    }
    else if(c==80)
    {
     b=b+2;
     if(b==484 || b==485)
     b=40;
     setcolor(GREEN);

     line(10,b-2,30,b-2);
     line(30,b-2,25,b-7);
     line(30,b-2,25,b+3);

    }
    if(c==99)
    {
     b=240;
     setcolor(0);
     line(10,40,30,40);
     line(30,40,25,35);
     line(30,40,25,45);
    }
    if(c==13 && n<=3)
     {

       for(i=1;i<=480;i++)
      {
       setcolor(5);
       line(70+i,b,100+i,b);
       line(100+i,b,95+i,b-5);
       line(100+i,b,95+i,b+5);
       delay(3);
       setcolor(0);
       line(70+i,b,100+i,b);
       line(100+i,b,95+i,b-5);
       line(100+i,b,95+i,b+5);
      }
    if(b<79)
    {
     k=20;
     z=z+k;
    }
    else if(b>=79 && b<=144)
    {
     k=40;
     z=z+k;
    }
    else if(b>=144 && b<=209)
    {
     k=60;
     z=z+k;
    }
    else if(b>=209 && b<240)
    {
     k=80;
     z=z+k;
    }
    else if(b==240)
    {
     k=100;
     z=z+k;
    }
    else if(b>240 && b<=274)
    {
     k=80;
     z=z+k;
     }
    else if(b>=274 && b<=339)
    {
     k=60;
     z=z+k;
     }
    else if(b>=339 && b<=404)
    {
     k=40;
     z=z+k;
    }
    else
    {
     k=20;
     z=z+k;
     }
     n++;
   if(n==2)
   {
   setcolor(YELLOW);
   circle(540,25,5);
   setfillstyle(SOLID_FILL,RED);
   floodfill(538,23,YELLOW);
   }
   if(n==3)
   {
   setcolor(YELLOW);
   circle(560,25,5);
   setfillstyle(SOLID_FILL,RED);
   floodfill(558,23,YELLOW);
   }
   if(n==4)
   {
   setcolor(YELLOW);
   circle(580,25,5);
   setfillstyle(SOLID_FILL,RED);
   floodfill(578,23,YELLOW);
   }

   setcolor(0);

   line(10,b,30,b);
   line(30,b,25,b-5);
   line(30,b,25,b+5);
   b=40;
   if(n==4)
   {
   getch();
   break;
   }
   }
     if(c==27)
     {
     break;
     }
      gotoxy(a,b);
    setcolor(RED);
    line(10,b,30,b);
    line(30,b,25,b-5);
    line(30,b,25,b+5);
    }
 }
cleardevice();

setbkcolor(9);

printf("\n\t\t\t* your score*\n\n  * %s :- %d points",name,z);
if(z==300)
{
printf("\t\t# PERFECT");
}
setcolor(6);
rectangle(0,0,639,479);
rectangle(1,1,638,478);

getch();
return 0;
}
