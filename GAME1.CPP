#include<iostream.h>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<time.h>

void main()
{ clrscr();
  int r1,r2,r3,r4,r5;
  double avg;
  const no;

  srand(time(0));
  r1=rand()%6+1;
  r2=rand()%6+1;
  r3=rand()%6+1;
  r4=rand()%6+1;
  r5=rand()%6+1;

  avg=(double)(r1+r2+r3+r4+r5)/no;

  cout<<"Number of rolls:"<<no;
  cout<<setprecision(1)<<setiosflags(ios::fixed);
  cout<<"Average="<<avg;
getch();
}