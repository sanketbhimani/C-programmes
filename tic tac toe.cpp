






#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
static int z=0,x=0,y=0,w=0,v=0,s=0,t=0,u=0,r=0,a=0;
void fream()

{
printf("\n\n\n       |   |   \n");
printf("     1 | 2 | 3 \n");
printf("       |   |   \n");
printf("   _____________\n");
printf("       |   |   \n");
printf("     4 | 5 | 6 \n");
printf("       |   |   \n");
printf("   _____________\n");
printf("       |   |   \n");
printf("     7 | 8 | 9 \n");
printf("       |   |   \n");
}



void userinput()
{

scanf("%d",&a);

if(a==1 && z==0) {gotoxy(6,5);printf("X");z=1; }
else if(a==2 && x==0) {gotoxy(10,5);printf("X");x=1;}
else if(a==3 && y==0) {gotoxy(14,5);printf("X");y=1;}
else if(a==4 && w==0) {gotoxy(6,9);printf("X");w=1; }
else if(a==5 && v==0) {gotoxy(10,9);printf("X");v=1;}
else if(a==6 && s==0) {gotoxy(14,9);printf("X");s=1;}
else if(a==7 && t==0) {gotoxy(6,13);printf("X");t=1;}
else if(a==8 && u==0) {gotoxy(10,13);printf("X");u=1;}
else if(a==9 && r==0) {gotoxy(14,13);printf("X");r=1;}
else {printf("sala khabar nathi padti 1 thi 9 ma number nakhai dofa!!!"); }


}




void computerinput()
{                                         //loop needed
int b,c=1;
while(c==1)

{
randomize();
b = rand() % 10;
if (a==b)
{ b = rand() % 10;}

if(b==1 && z==0) {gotoxy(6,5);printf("0");z=2;c=2;}
else if(b==2 && x==0){gotoxy(10,5);printf("0");x=2;c=2;}
else if(b==3 && y==0) {gotoxy(14,5);printf("0");y=2;c=2;}
else if(b==4 && w==0) {gotoxy(6,9);printf("0");w=2;c=2; }
else if(b==5 && v==0) {gotoxy(10,9);printf("0");v=2;c=2;}
else if(b==6 && s==0) {gotoxy(14,9);printf("0");s=2;c=2;}
else if(b==7 && t==0) {gotoxy(6,13);printf("0");t=2;c=2;}
else if(b==8 && u==0) {gotoxy(10,13);printf("0");u=2;c=2;}
else if(b==9 && r==0) {gotoxy(14,13);printf("0");r=2;c=2;}
else {b=rand() % 10; }
   }	}


computerinput2()
{


if(((x==1 && y==1) || (v==1 && r==1) || (w==1 && t==1))&& z==0) {gotoxy(6,5);printf("0");z=2; }
else if(((z==1 && y==1) || (v==1 && u==1)) && x==0) {gotoxy(10,5);printf("0");x=2; }
else if(((z==1 && x==1) || (v==1 && t==1) || (s==1 && r==1))&& y==0) {gotoxy(14,5);printf("0");y=2;}
else if(((z==1 && t==1) || (v==1 && s==1)) && w==0) {gotoxy(6,9);printf("0");w=2; }
else if(((z==1 && r==1) || (x==1 && u==1) || (v==1 && t==1) || (w==1 && s==1))&& v==0) {gotoxy(10,9);printf("0");v=2;}
else if(((y==1 && r==1) || (w==1 && v==1))&& s==0) {gotoxy(14,9);printf("0");s=2;}
else if(((z==1 && w==1) || (y==1 && v==1) || (u==1 && r==1))&& t==0) {gotoxy(6,13);printf("0");t=2;}
else if(((x==1 && v==1) || (t==1 && r==1)) && u==0) {gotoxy(10,13);printf("0");u=2;}
else if(((z==1 && v==1) || (x==1 && s==1) || (t==1 && u==1))&& r==0) {gotoxy(14,13);printf("0");r=2;}
else {computerinput();}


}



computerinput3()
{


if(((x==2 && y==2) || (v==2 && r==2) || (w==2 && t==2))&& z==0) {gotoxy(6,5);printf("0");z=2; }
else if(((z==2 && y==2) || (v==2 && u==2)) && x==0) {gotoxy(10,5);printf("0");x=2; }
else if(((z==2 && x==2) || (v==2 && t==2) || (s==2 && r==2))&& y==0) {gotoxy(14,5);printf("0");y=2;}
else if(((z==2 && t==2) || (v==2 && s==2)) && w==0) {gotoxy(6,9);printf("0");w=2; }
else if(((z==2 && r==2) || (x==2 && u==2) || (v==2 && t==2) || (w==2 && s==2))&& v==0) {gotoxy(10,9);printf("0");v=2;}
else if(((y==2 && r==2) || (w==2 && v==2))&& s==0) {gotoxy(14,9);printf("0");s=2;}
else if(((z==2 && w==2) || (y==2 && v==2) || (u==2 && r==2))&& t==0) {gotoxy(6,13);printf("0");t=2;}
else if(((x==2 && v==2) || (t==2 && r==2)) && u==0) {gotoxy(10,13);printf("0");u=2;}
else if(((z==2 && v==2) || (x==2 && s==2) || (t==2 && u==2))&& r==0) {gotoxy(14,13);printf("0");r=2;}
else {computerinput2();}


}





void winner()
{
if((z==1 && x==1 && y==1) ||  (w==1 && v==1 && s==1)  || (t==1 && u==1 && r==1) || (z==1 && w==1 && t==1)   ||  (x==1 && v==1 && u==1)  ||   (y==1 && s==1 && r==1)  || (z==1 && v==1 && r==1)  || (y==1 && v==1 && t==1)) {gotoxy(1,21);printf("congretulations!!! you won...!!!!");}
else if((z==2 && x==2 && y==2) ||  (w==2 && v==2 && s==2)  || (t==2 && u==2 && r==2) || (z==2 && w==2 && t==2)   ||  (x==2 && v==2 && u==2)  ||   (y==2 && s==2 && r==2)  || (z==2 && v==2 && r==2)  || (y==2 && v==2 && t==2)) {gotoxy(1,21);printf("sorry you lose...!");}
else {gotoxy(1,21); printf("it's tie!!!");}
getch();
exit(1);
}
void winner1()
{
if((z==1 && x==1 && y==1) ||  (w==1 && v==1 && s==1)  || (t==1 && u==1 && r==1) || (z==1 && w==1 && t==1)   ||  (x==1 && v==1 && u==1)  ||   (y==1 && s==1 && r==1)  || (z==1 && v==1 && r==1)  || (y==1 && v==1 && t==1)) {gotoxy(1,21);printf("congretulations!!! you won...!!!!");getch();exit(1);}
else if((z==2 && x==2 && y==2) ||  (w==2 && v==2 && s==2)  || (t==2 && u==2 && r==2) || (z==2 && w==2 && t==2)   ||  (x==2 && v==2 && u==2)  ||   (y==2 && s==2 && r==2)  || (z==2 && v==2 && r==2)  || (y==2 && v==2 && t==2)) {gotoxy(1,21);printf("sorry you lose...!");getch();exit(1);}


}







void main()
{clrscr();
fream();
gotoxy(1,20);
printf("enter value for place of X:");
userinput();
computerinput();
gotoxy(28,20);
userinput();
computerinput2();
gotoxy(28,20);
userinput();
computerinput3();
gotoxy(28,20);
winner1();
userinput();
winner1();
computerinput3();
gotoxy(28,20);
winner1();
userinput();
winner();
getch();}
