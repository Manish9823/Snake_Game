#include<iostream.h>
#include<conio.h>
#include<process.h>
class man
{public: void lost(int x,int y)
	 {if((x==1)||(x==79)||(y==1)||(y==11))
	   {gotoxy(35,5);
	     cout<<"You LOST!!!";
	     getch();
	     exit(0);
	   }
	   }
void wall()
	 { int t,s;
 t=s=1;
 for(int i=0;i<=799;i++)
 {int b;
   if(i<=79)
   cout<<"#";
   else
    {if(i/80==t)
     {b=i;
      cout<<"#";
      b=b+79;
      t++;
     }
    else
    {if(i==b)
     cout<<"#";
    else
     {if(t==10)
      cout<<"#";
     else
     cout<<" ";
     }
     }
    }
 }   }
};
void main()
{clrscr();
int i,j;
i=j=2;
man m;
int ch=1,p=1;
m.wall();
 gotoxy(i+1,j);
  cout<<"\2\t\t\3";gotoxy(20,7);cout<<"\3";gotoxy(3,8);cout<<"\3";
  gotoxy(53,3);cout<<"\3";gotoxy(72,9);cout<<"\3";
  gotoxy(35,5);cout<<"\3";gotoxy(61,4);cout<<"\3";
 gotoxy(1,11);cout<<"press 1 to strart";
 gotoxy(i+1,j);
 while(1)
 {ch=getch();
 p=ch;

 if(p==49)
   { gotoxy(2,11);cout<<"press 5 to exit"; m.lost(i+1,j);
      gotoxy(i,j); cout<<" "; i++;
      gotoxy(i,j); cout<<"\2";
    }
 else
  { if(p==50)
   {m.lost(i-1,j);
    gotoxy(i,j); cout<<" "; i=i-1;
     gotoxy(i,j); cout<<"\2";
   }
   else
    { if(p==51)
     {m.lost(i,j+1);
      gotoxy(i,j); cout<<" "; j=j+1;
      gotoxy(i,j);cout<<"\2";
     }
     else
      { if(p==52)
       {m.lost(i,j-1);
	gotoxy(i,j); cout<<" "; j=j-1;
	gotoxy(i,j); cout<<"\2";
       }
       else
	{if(p==53)
	 exit(0);
	 } }}}
}

 getch();
 }