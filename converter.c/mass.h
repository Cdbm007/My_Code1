#include "cofop.h"
int a;
float va;

//Convert Gram values to corresponding values
float gram(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Grams to .......",er);
 gotoxy(25,12);printf("1.Kilogram.....Press 1");
 gotoxy(25,14);printf("2.Pound....... Press 2");
 gotoxy(25,16);printf("3.Quintal......Press 3");
 gotoxy(25,18);printf("4.Tonne........Press 4");
 printf("\n\nChoose your choice.......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*72.52;
	 gotoxy(20,10);printf("Gram : %.2f--------->Kilogram : ",er);
	 break;
  case 2:va=er/1.19;
	 gotoxy(20,25);printf("Gram : %.2f--------->Pound : ",er);
	 break;
  case 3:va=er/1.39;
	 gotoxy(20,25);printf("Gram : %.2f--------->Quintal : ",er);
	 break;
  case 4:va=er*74.18;
	 gotoxy(20,25);printf("Gram : %.2f--------->Tonne : ",er);
	 break;
 }
 return(va);
}

//Convert Kilogram values to corresponding values
float kigr(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Kilograms to .......",er);
 gotoxy(25,12);printf("1.Gram.....Press 1");
 gotoxy(25,14);printf("2.Pound......Press 2");
 gotoxy(25,16);printf("3.Quintal....Press 3");
 gotoxy(25,18);printf("4.Tonne......Press 4");
 printf("\n\nChoose your choice.....");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*72.52;
	 gotoxy(20,10);printf("Kilogram : %.2f--------->Gram : ",er);
	 break;
  case 2:va=er/1.19;
	 gotoxy(20,25);printf("Kilogram : %.2f--------->Pound : ",er);
	 break;
  case 3:va=er/1.39;
	 gotoxy(20,25);printf("Kilogram : %.2f--------->Quintal : ",er);
	 break;
  case 4:va=er*74.18;
	 gotoxy(20,25);printf("Kilogram : %.2f--------->Tonne : ",er);
	 break;
 }
 return(va);
}

//Convert Pound values to corresponding values
float mpou(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Pounds to .......",er);
 gotoxy(25,12);printf("1.Gram........Press 1");
 gotoxy(25,14);printf("2.Kilogram....Press 2");
 gotoxy(25,16);printf("3.Quintal.....Press 3");
 gotoxy(25,18);printf("4.Tonne.......Press 4");
 printf("\n\nChoose your choice......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*72.52;
	 gotoxy(20,10);printf("Pounds : %.2f--------->Gram : ",er);
	 break;
  case 2:va=er/1.19;
	 gotoxy(20,25);printf("Pounds : %.2f------->Kilogram : ",er);
	 break;
  case 3:va=er/1.39;
	 gotoxy(20,25);printf("Pounds : %.2f--------->Quintal : ",er);
	 break;
  case 4:va=er*74.18;
	 gotoxy(20,25);printf("Pounds : %.2f--------->Tonne : ",er);
	 break;
 }
 return(va);
}

//Convert Quintal values to corresponding values
float qui(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Quintal to .......",er);
 gotoxy(25,12);printf("1.Gram........Press 1");
 gotoxy(25,14);printf("2.Kilogram....Press 2");
 gotoxy(25,16);printf("3.Pound.......Press 3");
 gotoxy(25,18);printf("4.Tonne.......Press 4");
 printf("\n\nChoose your choice......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*72.52;
	 gotoxy(20,10);printf("Quintal : %.2f-------->Gram : ",er);
	 break;
  case 2:va=er/1.19;
	 gotoxy(20,25);printf("Quintal : %.2f-------->Kilogram : ",er);
	 break;
  case 3:va=er/1.39;
	 gotoxy(20,25);printf("Quintal : %.2f-------->Pound : ",er);
	 break;
  case 4:va=er*74.18;
	 gotoxy(20,25);printf("Quintal : %.2f-------->Tonne : ",er);
	 break;
 }
 return(va);
}

//Convert Tonne values to corresponding values
float ton(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Tonne to .......",er);
 gotoxy(25,12);printf("1.Gram........Press 1");
 gotoxy(25,14);printf("2.Kilogram....Press 2");
 gotoxy(25,16);printf("3.Pound.......Press 3");
 gotoxy(25,18);printf("4.Quintal.....Press 4");
 printf("\n\nChoose your choice......");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*72.52;
	 gotoxy(20,10);printf("Tonne : %.2f-------->Gram : ",er);
	 break;
  case 2:va=er/1.19;
	 gotoxy(20,25);printf("Tonne : %.2f-------->Kilogram : ",er);
	 break;
  case 3:va=er/1.39;
	 gotoxy(20,25);printf("Tonne : %.2f-------->Pound : ",er);
	 break;
  case 4:va=er*74.18;
	 gotoxy(20,25);printf("Tonne : %.2f-------->Quintal : ",er);
	 break;
 }
 return(va);
}
