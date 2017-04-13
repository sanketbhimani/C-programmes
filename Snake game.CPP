#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>

int b[2000],d=6,a[25][80],sc=5,x=5,y=3,p=0,q=3,l=5;
int flag=0,speed=455,scor=0;
int appl,g;
char asdf,yn;

void snake();
int out();
void disp();
void init();
void score();
void space();

void main()
{
	clrscr();
	init();
	b[0]=6;
	b[1]=6;
	b[2]=6;
	b[3]=6;
	b[4]=6;
	b[5]=6;
	textcolor(BLACK);
	textbackground(7);
	gotoxy(36,12);
	printf("Welcome To The Game");
	gotoxy(38,13);
	printf("(Press Any Key)");
	getch();
	clrscr();
	gotoxy(36,12);
	printf("What Is Your Speed[0-500]:"); 																																																																		gotoxy(54,25);printf("Prepared By Sanket");
	gotoxy(63,12);
	scanf("%d",&speed);
	clrscr();
	gotoxy(27,12);
	printf("How Many Apple Do You Want[1-1000]:"); 																																																																		gotoxy(54,25);printf("Prepared By Sanket");
	gotoxy(63,12);
	scanf("%d",&appl);
	clrscr();
	gotoxy(30,8);
	printf("W for UP");   																																																																		 		gotoxy(54,25);printf("Prepared By Sanket");
	gotoxy(30,9);
	printf("D for RIGHT");
	gotoxy(30,10);
	printf("A for LEFT");
	gotoxy(30,11);
	printf("S for DOWN");
	gotoxy(30,12);
	printf("P for PAUSE");
	gotoxy(30,13);
	printf("Q For EXIT");
	gotoxy(30,14);
	printf("Are You Ready???");
	gotoxy(30,15);
	printf("(Press Any Key)");
	getch();                                                                                                                                                                                                                                                                                                                                                                                                                                                     								          				  		gotoxy(54,25);printf("Prepared By Sanket");
	clrscr();
	snake();
	getch();
}






void apple()
{
	int s,t;
	randomize();
apple:
	s=random(70)+5;
	t=random(18)+5;
	if(a[t][s]==0) {a[t][s]=3;}
	else {goto apple; }
}






void snake()
{
	char c='d';
	for(g=0;g<appl;g++)
	apple();
	do
	{
		delay(501-speed);
		if(kbhit())
		{
			c=getch();
		}
BHIM:
		switch(c)
		{
		case 'a' :   x--; if(a[y][x]==1 && a[y][x]!=3) score(); b[sc]=4;  break;           //a=left
		case 's' :   y++; if(a[y][x]==1 && a[y][x]!=3) score(); b[sc]=5;  break;           //s=down
		case 'd' :   x++; if(a[y][x]==1 && a[y][x]!=3) score(); b[sc]=6;  break;           //d=right
		case 'w' :   y--; if(a[y][x]==1 && a[y][x]!=3) score(); b[sc]=8;  break;           //w=up
		case 'q' :   score(); break;
		case 'p' :   gotoxy(37,12); printf("PAUSE"); getch(); gotoxy(37,12); printf("     ");c=asdf; goto BHIM;													   //q=quit
		}
		asdf=c;
		if(a[y][x]==3)
		{
			apple();
			a[y][x]=1;
			l++;
			sc++;
			scor++;
			goto SNK;
		}
		else
		{
			a[y][x]=1;
		}
		sc++;
		space();
SNK:
		disp();
	}
	while(out());
	score();
}






void space()
{
	switch(d)
	{
	case 4 : p--;break;
	case 5 : q++;break;
	case 6 : p++;break;
	case 8 : q--;break;
	}
	a[q][p]=0;
	d=b[sc-l];
}






int out()
{
	if(x==81 || y==26 || y==0 || x==0)
	return(0);
	else
	return (1);
}






void disp()
{
	clrscr();
	int i,j;
	for(i=0;i<25;i++)
	{
		for(j=0;j<80;j++)
		{
			switch(a[i][j])
			{
			case 1 : gotoxy(j,i); printf("+"); break;
				//case 9 : gotoxy(j,i); printf(" "); break;
			case 3 : gotoxy(j,i); printf("@"); break;
			}
		}
	}
	gotoxy(33,1);
	printf("SnAkE gAmE");
	gotoxy(1,2);
	printf("Steps=%d Score=%d X=%d Y=%d",sc-5,scor,x,y);   																																																															gotoxy(54,25); printf("Prepared By Sanket");
}






void init()

{
	int i,j;
	for(i=1;i<25;i++)
	for(j=1;j<80;j++)
	a[i][j]=0;
}





void score()
{
	clrscr();
	gotoxy(30,12);
	printf("Sorry You Out!!!");
	gotoxy(30,13);
	printf("Your Score Is: %d",scor);
	getch();
	clrscr();
	gotoxy(30,14);
	printf("Play Again(y/n):");
	yn=getch();
	if(yn=='y')
	{
		a[1][1]=0;
		x=5;
		y=3;
		p=0;
		q=3;
		d=6;
		sc=5;
		l=5;
		flag=0;
		scor=0;
		main();
	}
	gotoxy(54,25); printf("Prepared By Sanket");
	exit(0);
}

