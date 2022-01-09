#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void main()
{
int gm=DETECT, gn=DETECT,t,z,x,l=-39,k,a,b,nt=40,x1[100],y1[100],i=1,p[10000],q[10000];

clrscr();
initgraph(&gm,&gn,"c:\\turboc3\\bgi");
setbkcolor(RED);
a=25;
b=150;
p[i]=a;
q[i]=b;
printf("\n\t\t\t      THE SNAKE GAME");
printf("\n\t\t\t    --------------------");

randomize();
for(k=1;k<=20;k++)
{
x1[k]=rand()%600+30;
y1[k]=rand()%300+150;
}
putpixel(x1[1],y1[1],BLUE);
putpixel(x1[1]+1,y1[1],BLUE);
putpixel(x1[1],y1[1]+1,BLUE);
putpixel(x1[1]-1,y1[1],BLUE);
putpixel(x1[1],y1[1]-1,BLUE);
rectangle(0,120,639,479);







while(1)
{
if(kbhit())
{
x=getch();
if(x==27)
{
break;
}

if(x==72)
{
b--;
i++;
p[i]=a;
q[i]=b;
}

if(x==80)
{
b++;
i++;
p[i]=a;
q[i]=b;
}

if(x==77)
{
a++;
i++;
p[i]=a;
q[i]=b;



}
if(x==75)
{
a--;
i++;
p[i]=a;
q[i]=b;

}




gotoxy(a,b);
putpixel(p[i],q[i],YELLOW);
for(l=-49;l<=0;l++)
{
p[l]=0;
q[l]=0;
}

putpixel(p[i-nt],q[i-nt],0);
for(t=1;t<=20;t++)
{
if(a==x1[t] && b==y1[t])
{
nt=nt+30;
putpixel(x1[t+1],y1[t+1],BLUE);
putpixel(x1[t+1]+1,y1[t+1],BLUE);
putpixel(x1[t+1],y1[t+1]+1,BLUE);
putpixel(x1[t+1]-1,y1[t+1],BLUE);
putpixel(x1[t+1],y1[t+1]-1,BLUE);
if(a==x1[21] && b==y1[21])
{
printf("\n\t\t\t\tWINNER");
getch();
exit(1);
}
}
}

for(z=4;z<=nt;z++)
{
if(a==p[i-z] && b==q[i-z])
exit(1);
}


if(b==120)
break;

if(b==479)
break;

if(a==0)
break;

if(a==639)
break;

}

}

}

