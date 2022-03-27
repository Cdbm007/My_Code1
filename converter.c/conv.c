//header files
#include "dist.h"
#include "mass.h"
#include "timee.h"

//function declaration
void len();
void mass();
void timee();

int po;
float re,ar;
int op;

//main function
void main()
{
 do
 {
 clrscr();
 gotoxy(20,2);printf("----------------------------");
 gotoxy(25,4);printf("   CONVERTER   ");
 gotoxy(20,6);printf("----------------------------");
 gotoxy(25,9);printf("Length.........Press 1");
 gotoxy(25,11);printf("Mass...........Press 2");
 gotoxy(25,13);printf("Time...........Press 3");
 gotoxy(25,15);printf("Quit ..........Press 4");
 printf("\n\nChoose your choice.........");
 scanf("%d",&op);
 switch(op)
 {
  case 1:len();break;
  case 2:mass();break;
  case 3:timee();break;
  default:exit(0);
 }
 }
 while(1);
}

//Call the corresponding length functions
void len()
{
	   clrscr();
	   gotoxy(20,2);printf("----------------------------");
	   gotoxy(25,4);printf("   CONVERTER   ");
	   gotoxy(20,6);printf("----------------------------");
	   gotoxy(20,8);printf("1.Centimeter..........Press 1");
	   gotoxy(20,10);printf("2.Meter...............Press 2");
	   gotoxy(20,12);printf("3.Kilometer...........Press 3");
	   gotoxy(20,14);printf("4.Mile...............Press 4");
	   gotoxy(20,16);printf("5.Nautical Mile......Press 5");
	   gotoxy(20,18);printf("Choose your Input Length.......");
	   scanf("%d",&po);
	   if(po<1||po>5) {
		clrscr();
		gotoxy(25,15);printf("!.......WRONG OPTION........!"); }
	   else {
	   printf("\n\nEnter the Length : ");
	   scanf("%f",&ar);
	   if(po==1)
	    re=centi(ar);
	   else if(po==2)
	    re=met(ar);
	   else if(po==3)
	    re=kime(ar);
	   else if(po==4)
	    re=mile(ar);
	   else if(po==5)
	    re=naumi(ar);
	   printf("%.6f",re); }
	   getch();
}

//Call the corresponding mass functions
void mass()
{
	   clrscr();
	   gotoxy(20,2);printf("----------------------------");
	   gotoxy(25,4);printf("   CONVERTER   ");
	   gotoxy(20,6);printf("----------------------------");
	   gotoxy(20,8);printf("1.Gram.........Press 1");
	   gotoxy(20,10);printf("2.Kilogram....Press 2");
	   gotoxy(20,12);printf("3.Pound.......Press 3");
	   gotoxy(20,14);printf("4.Quintal.....Press 4");
	   gotoxy(20,16);printf("5.Tonne.......Press 5");
	   gotoxy(20,18);printf("Choose your choice.......");
	   scanf("%d",&po);
	   if(po<1||po>5) {
		clrscr();
		printf("!.......WRONG OPTION........!"); }
	   else {
	   printf("Enter the mass:");
	   scanf("%f",&ar);
	   if(po==1)
	    re=gram(ar);
	   else if(po==2)
	    re=kigr(ar);
	   else if(po==3)
	    re=mpou(ar);
	   else if(po==4)
	    re=qui(ar);
	   else if(po==5)
	    re=ton(ar);
	   printf("%.6f",re); }
	   getch();
}

//Call the corresponding time functions
void timee()
{
	   clrscr();
	   gotoxy(20,2);printf("----------------------------");
	   gotoxy(25,4);printf("   CONVERTER   ");
	   gotoxy(20,6);printf("----------------------------");
	   gotoxy(20,8);printf("1.Milliseconds.....Press 1");
	   gotoxy(20,10);printf("2.Seconds.........Press 2");
	   gotoxy(20,12);printf("3.Minutes.........Press 3");
	   gotoxy(20,14);printf("4.Hours...........Press 4");
	   gotoxy(20,16);printf("5.Days............Press 5");
	   gotoxy(20,18);printf("Choose your choice.......");
	   scanf("%d",&po);
	   if(po<1||po>5) {
		clrscr();
		printf("!.......WRONG OPTION........!"); }
	   else {
	   printf("Enter the time:");
	   scanf("%f",&ar);
	   if(po==1)
	    re=mill_se(ar);
	   else if(po==2)
	    re=sec(ar);
	   else if(po==3)
	    re=min(ar);
	   else if(po==4)
	    re=hour(ar);
	   else if(po==5)
	    re=day(ar);
	   printf("%.6f",re); }
	   getch();
}
