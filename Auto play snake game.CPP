#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>



static unsigned short int b[20000],a[26][81];
static int d=6,sc=5,x=5,y=3,p=0,q=3,l=5;
static int speed=455,scor=1,pa,qa;
static int appl=1;
char asdf,yn;



void init();
void welcome();
void snake();
void apple();
void find();
void run();
void space();
void disp();
void score();
void space();



void main()        //b[],a[][]
{
 clrscr();
 init();
 a[3][1]=1;
 a[3][2]=1;
 a[3][3]=1;
 a[3][4]=1;
 a[3][5]=1;
 b[0]=6;
 b[1]=6;
 b[2]=6;
 b[3]=6;
 b[4]=6;
 b[5]=6;
 textcolor(BLACK);
 textbackground(7);																																																														gotoxy(62,25);printf("Prepared By S@nket");
 clrscr();
 welcome();
 snake();
 gotoxy(37,12); printf("COMPLETE");
 getch();
 score();
}



void init()               //i,j,a[][]

{
 int i,j;
 for(i=1;i<25;i++)
  for(j=1;j<80;j++)
   a[i][j]=0;
  for(i=0;i<=14276;i++)
  b[i]=0;
}



void welcome()                 //speed,appl
{
 gotoxy(36,12);
 printf("Welcome To The Game");
 gotoxy(38,13);
 printf("(Press Any Key)");
 getch();
 clrscr();
 gotoxy(36,12);
 printf("What Is Your Speed[0-665]:"); 																																																																		gotoxy(62,25);printf("Prepared By S@nket");
 gotoxy(63,12);
 scanf("%d",&speed);
 clrscr();
 gotoxy(27,12);
 printf("How Many Apple Do You Want[1-600]:"); 																																																															        gotoxy(62,25);printf("Prepared By S@nket");
 gotoxy(63,12);
 scanf("%d",&appl);
 clrscr();																																					 		gotoxy(54,25);printf("Prepared By Sanket & Varun");
 gotoxy(30,14);
 printf("Are You Ready???");
 gotoxy(30,15);
 printf("(Press Any Key)");
 getch();
}



void snake()           //c,a[][],y,x,sc,l,b[],scor,appl
{
 char c;

 do
 {
  apple();
  find();
  run();
  a[y][x]=1;

  do
  {
   delay(666-speed);

   if(kbhit())
   {
   c=getch();

   if(c=='q') score();

   else if(c=='p') gotoxy(37,12);printf("PAUSE");getch();
   }

   switch(b[sc])
   {
    case 4 :   x--; break;           //a=left
    case 5 :   y++; break;           //s=down
    case 6 :   x++; break;           //d=right
    case 8 :   y--; break;           //w=up									   //q=quit
   }

   if(a[y][x]!=3)
   {
    switch(a[y][x])
    {
     case 1  : a[y][x]=2; break;
     case 2  : a[y][x]=5; break;
     case 0  : a[y][x]=1;
    }
   }

   sc++;
   space();
   disp();
  }while(a[y][x]!=3);

  l++;
  sc++;
  scor++;
  a[y][x]=1;
 }while(l<=appl+6);

 scor++;

 for(int lkj=1;lkj<=l;lkj++)
 {
  delay(666-speed);
  space();
  disp();
  }
}



void apple()        //a[][],t,s
{
 int s,t;
 randomize();
 apple:
 s=random(78)+2;
 t=random(21)+3;
 if(a[t][s]==0) {a[t][s]=3;}
 else {goto apple; }
}



void find()       //i,j,pa,qa
{
 int i,j;
 for(j=0;j<25;j++)
 {
  for(i=0;i<80;i++)
  {
   if(a[j][i]==3)
   {
    pa=i;
    qa=j;
   }
  }
 }
}



void run()     //i,j,x,pa,y,qa,b[i]
{
 int i,j;

 if(x>pa)
 {
  for(i=sc;i<sc+(x-pa);i++)
  {
  b[i]=4;
  }
  j=i;
  if(y>qa)
  {
   for(i=j;i<j+(y-qa);i++)
   {
    b[i]=8;
   }
  }
  else
  {
   for(i=j;i<j+(qa-y);i++)
   {
    b[i]=5;
   }
  }
 }
 else
 {
  for(i=sc;i<sc+(pa-x);i++)
  {
   b[i]=6;
  }
  j=i;
  if(y>qa)
  {
   for(i=j;i<j+(y-qa);i++)
   {
    b[i]=8;
   }
  }
  else
  {
   for(i=j;i<j+(qa-y);i++)
   {
    b[i]=5;
   }
  }
 }
}



void space()   //s,b,sc,l,a[][],p,q
{
 switch(d)
 {
  case 4 : p--;break;
  case 5 : q++;break;
  case 6 : p++;break;
  case 8 : q--;break;
 }

 switch(a[q][p])
 {
  case 5  : a[q][p]=2; break;
  case 2  : a[q][p]=1; break;
  default : a[q][p]=9;
 }
 d=b[sc-l];
}



void disp()        //j,i,sc,scor,x,y,pa,qa,p,q
{
 clrscr();
 int i,j;
 for(i=3;i<=24;i++)
 {
  for(j=1;j<=80;j++)
  {
   switch(a[i][j])
   {
    case 2 : gotoxy(j,i); printf("+"); break;
    case 5 : gotoxy(j,i); printf("+"); break;
    case 1 : gotoxy(j,i); printf("+"); break;
    case 9 : /* gotoxy(j,i); printf(" ");*/ a[i][j]=0; break;
    case 3 : gotoxy(j,i); printf("@"); break;
   }
  }
 }
 gotoxy(33,1);
 printf("SnAkE gAmE");
 gotoxy(1,2);
 printf("Steps=%d/24000 #Apple=%d/%d X=%d Y=%d pa=%d qa=%d p=%d q=%d",sc-5,scor-1,appl,x,y,pa,qa,p,q);   																																																									        gotoxy(62,25); printf("Prepared By S@nket");
}



void score()            //scor,yn,a[][],x,y,p,q,d,sc,l,flag,scor
{
 clrscr();
 gotoxy(30,14);
 printf("Play Again(y/n):");
 yn=getch();

 if(yn=='y')
 {
 x=5;
 y=3;
 p=0;
 q=3;
 d=6;
 sc=5;
 l=5;
 pa=0;
 qa=0;
 scor=0;
 main();
 }

 clrscr();																																																									gotoxy(54,25); printf("Prepared By Sanket & Varun");
 exit(0);
}