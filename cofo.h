#include "cofop.h"
int a;
float va;

float doll(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Dollars to .......",er);
 gotoxy(25,12);printf("1.Rupees.......");
 gotoxy(25,14);printf("2.Euro .......");
 gotoxy(25,16);printf("3.Pound.......");
 gotoxy(25,18);printf("4.Ruble.......");
 printf("\n\nChoose your choice........");
 scanf("%d",&a);
 switch(a)
 {
  case 1:va=er*72.52;
	 clrscr();
	 gotoxy(20,10);printf("Dollars : %.2f--------->Rupees : ",er);
	 break;
  case 2:va=er/1.19;
	 gotoxy(20,25);printf("Dollars : %.2f--------->Euros : ",er);
	 break;
  case 3:va=er/1.39;
	 gotoxy(20,25);printf("Dollars : %.2f--------->Pounds : ",er);
	 break;
  case 4:va=er*74.18;
	 gotoxy(20,25);printf("Dollars : %.2f--------->Rubles : ",er);
	 break;
 }
 return(va);
}
float rup(float er)
{
 clrscr();
 gotoxy(25,10);printf("Convert %f Rupees to .......",er);
 gotoxy(20,12);printf("1.Dollars.......");
 gotoxy(20,14);printf("2.Euro .......");
 gotoxy(20,16);printf("3.Pound.......");
 gotoxy(20,18);printf("4.Ruble.......");
 printf("Choose your choice........");
 scanf("%d",&a);
 switch(a)
 {
  case 1:va=er/72.52;
	 gotoxy(20,21);printf("Rupees : %.2f--------->Dolllars : ",er);
	 break;
  case 2:va=er/86.46;
	 gotoxy(20,21);printf("Rupees : %.2f--------->Euros : ",er);
	 break;
  case 3:va=er/100.95;
	 gotoxy(20,21);printf("Rupees : %.2f--------->Pounds : ",er);
	 break;
  case 4:va=er*1.02;
	 gotoxy(20,21);printf("Rupees : %.2f--------->Rubles : ",er);
	 break;
 }
 return(va);
}
float eur(float er)
{
 clrscr();
 gotoxy(25,10);printf("Convert %f Euros to .......",er);
 gotoxy(20,12);printf("1.Rupees.......");
 gotoxy(20,14);printf("2.Dollars .......");
 gotoxy(20,16);printf("3.Pound.......");
 gotoxy(20,18);printf("4.Ruble.......");
 printf("Choose your choice........");
 scanf("%d",&a);
 switch(a)
 {
  case 1:va=er*86.46;
	 gotoxy(20,21);printf("Euros : %.2f--------->Rupees : ",er);
	 break;
  case 2:va=er*1.19;
	 gotoxy(20,21);printf("Euros : %.2f--------->Dollars : ",er);
	 break;
  case 3:va=er/1.17;
	 gotoxy(20,21);printf("Euros : %.2f--------->Pounds : ",er);
	 break;
  case 4:va=er*88.47;
	 gotoxy(20,21);printf("Euros : %.2f--------->Rubles : ",er);
	 break;
 }
 return(va);
}
float pou(float er)
{
 clrscr();
 gotoxy(25,10);printf("Convert Pounds to .......");
 gotoxy(20,12);printf("1.Rupees.......");
 gotoxy(20,14);printf("2.Euro .......");
 gotoxy(20,16);printf("3.Dollars.......");
 gotoxy(20,18);printf("4.Ruble.......");
 printf("Choose your choice........");
 scanf("%d",&a);
 switch(a)
 {
  case 1:va=er*100.95;
	 gotoxy(20,21);printf("Pounds : %.2f--------->Rupees : ",er);
	 break;
  case 2:va=er*1.17;
	 gotoxy(20,21);printf("Pounds : %.2f--------->Euros : ",er);
	 break;
  case 3:va=er*1.39;
	 gotoxy(20,21);printf("Pounds : %.2f--------->Dollars : ",er);
	 break;
  case 4:va=er*103.33;
	 gotoxy(20,21);printf("Pounds : %.2f--------->Rubles : ",er);
	 break;
 }
 return(va);
}
float rub(float er)
{
 clrscr();
 gotoxy(25,10);printf("Convert Rubles to .......");
 gotoxy(20,12);printf("1.Rupees.......");
 gotoxy(20,14);printf("2.Euro .......");
 gotoxy(20,16);printf("3.Pound.......");
 gotoxy(20,18);printf("4.Dollars......");
 printf("Choose your choice........");
 scanf("%d",&a);
 switch(a)
 {
  case 1:va=er/1.02;
	 gotoxy(20,21);printf("Rubles : %.2f--------->Rupees : ",er);
	 break;
  case 2:va=er/88.47;
	 gotoxy(20,21);printf("Rubles : %.2f--------->Euros : ",er);
	 break;
  case 3:va=er/103.33;
	 gotoxy(20,21);printf("Rubles : %.2f--------->Pounds : ",er);
	 break;
  case 4:va=er/74.18;
	 gotoxy(20,21);printf("Rubles : %.2f--------->Dollars : ",er);
	 break;
 }
 return(va);
}

