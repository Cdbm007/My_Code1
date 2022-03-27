#include "cofop.h"
int a;
float va;

//Converting the Milliseconds to the corresponding values
float mill_se(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Milliseconds to .......",er);
 gotoxy(25,12);printf("1.Seconds.....Press 1");
 gotoxy(25,14);printf("2.Minutes.....Press 2");
 gotoxy(25,16);printf("3.Hours.......Press 3");
 gotoxy(25,18);printf("4.Days........Press 4");
 printf("\n\nChoose your choice.......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er/1000.0;
	 gotoxy(20,25);printf("Milliseconds : %.2f--------->Seconds : ",er);
	 break;
  case 2:va=er/60000.0;
	 gotoxy(20,25);printf("Milliseconds : %.2f--------->Minutes : ",er);
	 break;
  case 3:va=er/3.6e+6;
	 gotoxy(20,25);printf("Milliseconds : %.2f--------->Hours : ",er);
	 break;
  case 4:va=er/8.64e+7;
	 gotoxy(20,25);printf("Milliseconds : %.2f--------->Days : ",er);
	 break;
 }
 return(va);
}

//Converting the Seconds to the corresponding values
float sec(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Seconds to .......",er);
 gotoxy(25,12);printf("1.Milliseconds....Press 1");
 gotoxy(25,14);printf("2.Minutes...........Press 2");
 gotoxy(25,16);printf("3.Hours.........Press 3");
 gotoxy(25,18);printf("4.Days............Press 4");
 printf("\n\nChoose your choice.....");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*1000.0;
	 gotoxy(20,25);printf("Seconds : %.2f--------->Milliseconds : ",er);
	 break;
  case 2:va=er/60.0;
	 gotoxy(20,25);printf("Seconds : %.2f--------->Minutes : ",er);
	 break;
  case 3:va=er/3600.0;
	 gotoxy(20,25);printf("Seconds : %.2f--------->Hours : ",er);
	 break;
  case 4:va=er/86400.0;
	 gotoxy(20,25);printf("Seconds : %.2f--------->Days : ",er);
	 break;
 }
 return(va);
}

//Converting the Minutes to the corresponding values
float min(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Minutes to .......",er);
 gotoxy(25,12);printf("1.Milliseconds....Press 1");
 gotoxy(25,14);printf("2.Seconds.........Press 2");
 gotoxy(25,16);printf("3.Hours...........Press 3");
 gotoxy(25,18);printf("4.Days............Press 4");
 printf("\n\nChoose your choice......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*60000.0;
	 gotoxy(20,25);printf("Minutes : %.2f--------->Milliseconds : ",er);
	 break;
  case 2:va=er*60.0;
	 gotoxy(20,25);printf("Minutes : %.2f------->Seconds : ",er);
	 break;
  case 3:va=er/60.0;
	 gotoxy(20,25);printf("Minutes : %.2f--------->Hours : ",er);
	 break;
  case 4:va=er/1440.0;
	 gotoxy(20,25);printf("Minutes : %.2f--------->Days : ",er);
	 break;
 }
 return(va);
}

//Converting the Hours to the corresponding values
float hour(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Hours to .......",er);
 gotoxy(25,12);printf("1.Milliseconds....Press 1");
 gotoxy(25,14);printf("2.Seconds.........Press 2");
 gotoxy(25,16);printf("3.Minutes.........Press 3");
 gotoxy(25,18);printf("4.Days............Press 4");
 printf("\n\nChoose your choice......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*3.6e+6;
	 gotoxy(20,25);printf("Hours : %.2f--------->Milliseconds : ",er);
	 break;
  case 2:va=er*3600.0																																																																														;
	 gotoxy(20,25);printf("Hours : %.2f------->Seconds : ",er);
	 break;
  case 3:va=er*60.0;
	 gotoxy(20,25);printf("Hours : %.2f--------->Minutes : ",er);
	 break;
  case 4:va=er/24.0;
	 gotoxy(20,25);printf("Hours : %.2f--------->Days : ",er);
	 break;
 }
 return(va);
}

//Converting the Days to the corresponding values
float day(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Days to .......",er);
 gotoxy(25,12);printf("1.Milliseconds....Press 1");
 gotoxy(25,14);printf("2.Seconds.........Press 2");
 gotoxy(25,16);printf("3.Minutes.........Press 3");
 gotoxy(25,18);printf("4.Hours...........Press 4");
 printf("\n\nChoose your choice......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*8.64e+7;
	 gotoxy(20,25);printf("Days : %.2f--------->Milliseconds : ",er);
	 break;
  case 2:va=er*86400.0;
	 gotoxy(20,25);printf("Days : %.2f------->Seconds : ",er);
	 break;
  case 3:va=er*1440.0;
	 gotoxy(20,25);printf("Days : %.2f--------->Minutes : ",er);
	 break;
  case 4:va=er*24.0;
	 gotoxy(20,25);printf("Days : %.2f--------->Hours : ",er);
	 break;
 }
 return(va);
}
