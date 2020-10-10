#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
int x,y;
void cse4()
{
    line(350,400,930,400);
    settextstyle(8,0,4);
    //outtextxy(380,410,"From all the students of");
    outtextxy(340,450,"Computer science & engineering");
    outtextxy(550,500,"2015-18");
    outtextxy(550,550,"4th sem");
    setlinestyle(0,0,2);
    line(230,650,350,400);
    line(1050,650,930,400);
}
void sutter()
{
    int i,j=1,k;
  k=y/5;
  setlinestyle(0,0,7);
      for(i=0;i<y/5;i++)
    {
        setcolor(GREEN);
        line(0,j+i,x,j+i);
        setcolor(BLUE);
        line(0,j+k+i,x,j+k+i);
        setcolor(YELLOW);
        line(0,j+2*k+i,x,j+2*k+i);
        setcolor(RED);
        line(0,j+3*k+i,x,j+3*k+i);
        setcolor(CYAN);
        line(0,j+4*k+i,x,j+4*k+i);
        delay(15);
    }

}
void htd()
{

}
main()
{
    int i,j;
     initwindow(1300,650,"powered by deepak yadav",0,0,false,true);
     x=getmaxx();
     y=getmaxy();
     j=15;
     getch();
     getch();
     for(i=0;i<400;i=i+2)
     {
         if(j==0)
            j=15;
         if(i%15==0)
        {  setcolor(j);
           j--;
        }
        cleardevice();
        cse4();
        outtextxy(380,410,"From all the students of");
        setlinestyle(0,0,2);
        line(0,0,230,-80+i);
        line(1300,0,1050,-80+i);
        line(0,0,230,0+i);
        line(1300,0,1050,0+i);
        setlinestyle(0,0,5);

        rectangle(230,-80+i,1050,0+i);
         settextstyle(8,0,7);
         outtextxy(260,-70+i,"HAPPY TEACHER's DAY");
         delay(50);
     }
     getch();
     settextstyle(8,0,4);
     setcolor(BLUE);
     outtextxy(50,10," you are not just a teacher, but a true inspiration to all ");
     outtextxy(80,50,"  of us. sir! you are not doing just your job but a lot ");
     outtextxy(110,90,"   more than this. thank you sir and have a wonder ");
     outtextxy(450,130,"  teacher's day...");
     getch();
     setcolor(YELLOW);
     outtextxy(150,170," Better than thousand days of diligent study is");
     outtextxy(280,210,"one day with a great teacher!");
     getch();
     sutter();
     cleardevice();
     j=15;
     for(i=0;i>=0;i=i+5)
     {
         cleardevice();
         settextstyle(5,0,5);
         setcolor(YELLOW);
         outtextxy(10,10,"We are so lucky to have a teacher as wonderful as you are.");
         outtextxy(150,50,"wishing you a very happy teacher's day..");
         setlinestyle(0,0,5);
         setcolor(j);
         if(j==0)
            j=15;
         if(i%50==0)
        {  setcolor(j);
           j--;
        }
         rectangle(-770+i,190,20+i,270);
         settextstyle(8,0,7);
         outtextxy(-750+i,200,"HAPPY TEACHER's DAY");
         setcolor(GREEN);
         cse4();
         delay(30);
         if(i==2000)
            i=0;
     }
     getch();
     return 0;
}
