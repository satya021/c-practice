#include<stdio.h>

#include<conio.h> #include<math.h>

#include<graphics.h>>

void main()

{

float m,x1,y1,x2,y2; int x,y:

int gdriver=DETECT,gmode,gerror;

clrscr();

printf(" PROGRAM FOR THE LINE INTERCEPT \n"); printf("Enter the value of x1");

scanf("%f",&x1);

printf("Enter the value of y1"); scanf("%f",&y1);

printf("Enter the value of x2"); scanf("%f",&x2);

printf("Enter the value of y2"); scanf("%f",&y2);

initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

m=(y2-y1)/(x2-x1); for(x=1;x<=x2; x++)

{

y=m*(x-x1)+y1; putpixel(x,y,15);

}

getch();

closegraph();