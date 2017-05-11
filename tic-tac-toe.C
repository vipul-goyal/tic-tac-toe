#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
void check();
int x[3][3],o[3][3],win=0,z[9];
void main()
 {
    /* request auto detection */
   int gdriver = DETECT, gmode;
   int a,b,c,i,j,k=0,flag=0;
   char ch;
   /* initialize graphics and local
   variables */
   initgraph(&gdriver, &gmode, "");
   randomize();
  do
  {
   for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      {
       x[i][j]=0;
       o[i][j]=0;
      }
    }
   cleardevice();
   //v
   line(20,20,40,95);
   line(30,20,50,80);
   line(20,20,30,20);
   line(50,80,70,20);
   line(70,20,80,20);
   line(80,20,60,95);
   line(40,95,60,95);
   //i
   rectangle(90,20,100,95);
   //p
   line(110,20,110,95);
   line(120,34,120,50);
   line(120,64,120,95);
   line(110,95,120,95);
   arc(120,42,270,90,8);
   line(110,20,120,20);
   arc(120,42,270,90,22);
   //u
   line(152,20,152,95);
   line(162,20,162,85);
   line(152,20,162,20);
   line(172,85,172,20);
   line(182,20,182,95);
   line(172,20,182,20);
   line(152,95,182,95);
   line(162,85,172,85);
   //l
   line(192,20,192,95);
   line(202,20,202,85);
   line(192,20,202,20);
   line(202,85,217,85);
   line(192,95,217,95);
   line(217,85,217,95);
   //'
   line(230,20,225,30);
   line(235,20,230,30);
   line(230,20,235,20);
   line(225,30,230,30);
   //s
   rectangle(245,20,255,57);
   rectangle(260,57,270,94);
   line(255,20,270,20);
   line(255,57,260,57);
   line(245,94,260,94);
   //t
   rectangle(350,20,360,94);
   line(330,20,380,20);
   line(330,20,330,30);
   line(380,20,380,30);
   //t
   rectangle(420,20,430,94);
   line(400,20,450,20);
   line(400,20,400,30);
   line(450,20,450,30);
   //t
   rectangle(490,20,500,94);
   line(470,20,520,20);
   line(470,20,470,30);
   line(520,20,520,30);
   //-
   line(380,52,400,52);
   line(380,62,400,62);
   line(380,52,380,62);
   line(400,52,400,62);
   //-
   line(450,52,470,52);
   line(450,62,470,62);
   line(450,52,450,62);
   line(470,52,470,62);

   //v fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(55,88,15);
   //i fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(95,25,15);
   //p fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(115,25,15);
   //u fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(157,25,15);
   //l fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(195,25,15);
    //' fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(230,21,15);
   //s fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(248,47,15);
   floodfill(266,88,15);
   //t fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(355,38,15);
    //-(1) fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(385,57,15);
   //t fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(422,38,15);
   //-(2) fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(455,57,15);
   //t fill
   delay(350);
   a=random(15);
   b=random(13);
   b++;
   setfillstyle(a,b);
   floodfill(495,38,15);

   //tic-tac-toe
   line(250,150,250,390);
   line(330,150,330,390);
   line(170,230,410,230);
   line(170,310,410,310);
   //player 1
   setcolor(3);
   delay(500);
   settextstyle(4, HORIZ_DIR,4);
   outtextxy(5,210,"PLAYER 1");
   line(50,260,100,310);
   line(100,260,50,310);
   //player 2
   setcolor(2);
   delay(500);
   settextstyle(4, HORIZ_DIR,4);
   outtextxy(420,210,"PLAYER 2");
   circle(490,285,30);
   //start
   setcolor(7);
   delay(500);
   settextstyle(3, HORIZ_DIR,1);
   outtextxy(420,350,"->> PLAYER 1 STARTS");
    b=0;
    win=0;
    for(i=0;i<9;i++)
     {
      z[i]=i+1;
     }
    while(b<9)
    {
      a=getch();
      flag=0;
      for(i=0;i<9;i++)
       {
	if(z[i]==(a-48))
	 {
	  z[i]=z[i]+10;
	  flag=1;
	 }
       }
      if(k==1)
       {
	setcolor(0);
	settextstyle(5, HORIZ_DIR,4);
	outtextxy(190,400,"CONTINUE");
	k=0;
       }
      c=random(14);
      c=c+1;
      setcolor(c);
      if(flag==1)
      {
      if(b%2==0)
       {
	if(a==49)
	 {
	  line(240,160,180,220);
	  line(180,160,240,220);
	  x[0][0]=1;
	 }
	else if(a==50)
	 {
	  line(260,160,320,220);
	  line(320,160,260,220);
	  x[0][1]=1;
	 }
	else if(a==51)
	 {
	  line(400,160,340,220);
	  line(340,160,400,220);
	  x[0][2]=1;
	 }
	else if(a==52)
	 {
	  line(180,300,240,240);
	  line(240,300,180,240);
	  x[1][0]=1;
	 }
	else if(a==53)
	 {
	  line(260,300,320,240);
	  line(320,300,260,240);
	  x[1][1]=1;
	 }
	else if(a==54)
	 {
	  line(340,300,400,240);
	  line(400,300,340,240);
	  x[1][2]=1;
	 }
	else if(a==55)
	 {
	  line(180,380,240,320);
	  line(240,380,180,320);
	  x[2][0]=1;
	 }
	else if(a==56)
	 {
	  line(260,380,320,320);
	  line(320,380,260,320);
	  x[2][1]=1;
	 }
	else if(a==57)
	 {
	  line(340,380,400,320);
	  line(400,380,340,320);
	  x[2][2]=1;
	 }
       }
      else
       {
	if(a==49)
	 {
	  circle(210,190,30);
	  o[0][0]=1;
	 }
	else if(a==50)
	 {
	  circle(290,190,30);
	  o[0][1]=1;
	 }
	else if(a==51)
	 {
	  circle(370,190,30);
	  o[0][2]=1;
	 }
	else if(a==52)
	 {
	  circle(210,270,30);
	  o[1][0]=1;
	 }
	else if(a==53)
	 {
	  circle(290,270,30);
	  o[1][1]=1;
	 }
	else if(a==54)
	 {
	  circle(370,270,30);
	  o[1][2]=1;
	 }
	else if(a==55)
	 {
	  circle(210,350,30);
	  o[2][0]=1;
	 }
	else if(a==56)
	 {
	  circle(290,350,30);
	  o[2][1]=1;
	 }
	else if(a==57)
	 {
	  circle(370,350,30);
	  o[2][2]=1;
	 }
       }
      }
      else
       {
	setcolor(4);
	settextstyle(5, HORIZ_DIR,4);
	outtextxy(150,400,"Wrong Choice Entered(Wait)");
	delay(1000);
	setcolor(0);
	settextstyle(5, HORIZ_DIR,4);
	outtextxy(150,400,"Wrong Choice Entered(Wait)");
	delay(600);
	setcolor(2);
	settextstyle(5, HORIZ_DIR,4);
	outtextxy(190,400,"CONTINUE");
	k=1;
	b--;
       }
      b++;
      check();
      if(win==1)
       break;
    }
    if(b==9 && win==0)
     {
      setcolor(4);
      settextstyle(4, HORIZ_DIR,4);
      outtextxy(160,400,"MATCH DRAWN");
      getch();
     }
    cleardevice();
    setcolor(15);
    settextstyle(5, HORIZ_DIR,2);
    outtextxy(150,200,"Do you want to play again(y/n)???");
    ch=getch();
   }while(ch=='y'|| ch=='Y');
   if(ch!='y')
    exit(0);
   getch();
 }
void check()
 {
  int i;
  for(i=0;i<3;i++)
   {
    if(x[i][0]==1 && x[i][1]==1 && x[i][2]==1)
     {
      win=1;
      setcolor(2);
      settextstyle(4, HORIZ_DIR,4);
      outtextxy(150,400,"RESULT:Player 1 wins!!");
      getch();
     }
   }
  for(i=0;i<3;i++)
   {
    if(x[0][i]==1 && x[1][i]==1 && x[2][i]==1)
     {
      win=1;
      setcolor(2);
      settextstyle(4, HORIZ_DIR,4);
      outtextxy(150,400,"RESULT:Player 1 wins!!");
      getch();
     }
   }
  if(x[0][0]==1 && x[1][1]==1 && x[2][2]==1)
   {
    win=1;
    setcolor(2);
    settextstyle(4, HORIZ_DIR,4);
    outtextxy(150,400,"RESULT:Player 1 wins!!");
    getch();
   }
  else if(x[0][2]==1 && x[1][1]==1 && x[2][0]==1)
   {
    win=1;
    setcolor(2);
    settextstyle(4, HORIZ_DIR,4);
    outtextxy(150,400,"RESULT:Player 1 wins!!");
    getch();
   }
  for(i=0;i<3;i++)
   {
    if(o[i][0]==1 && o[i][1]==1 && o[i][2]==1)
     {
      win=1;
      setcolor(2);
      settextstyle(4, HORIZ_DIR,4);
      outtextxy(150,400,"RESULT:Player 2 wins!!");
      getch();
     }
   }
  for(i=0;i<3;i++)
   {
    if(o[0][i]==1 && o[1][i]==1 && o[2][i]==1)
     {
      win=1;
      setcolor(2);
      settextstyle(4, HORIZ_DIR,4);
      outtextxy(150,400,"RESULT:Player 2 wins!!");
      getch();
     }
   }
  if(o[0][0]==1 && o[1][1]==1 && o[2][2]==1)
   {
    win=1;
    setcolor(2);
    settextstyle(4, HORIZ_DIR,4);
    outtextxy(150,400,"RESULT:Player 2 wins!!");
    getch();
   }
  else if(o[0][2]==1 && o[1][1]==1 && o[2][0]==1)
   {
    win=1;
    setcolor(2);
    settextstyle(4, HORIZ_DIR,4);
    outtextxy(150,400,"RESULT:Player 2 wins!!");
    getch();
   }
 }