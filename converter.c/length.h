#include "cofop.h"
int a;
float va;

//Convert Centimeter values to the corresponding values
float centi(float er)
{
 clrscr();
 gotoxy(25,8);printf(" Convert %.2f Centimeter to .......",er);
 gotoxy(25,12);printf("1.Meter............Press 1");
 gotoxy(25,14);printf("2.Kilometer........Press 2");
 gotoxy(25,16);printf("3.Mile.............Press 3");
 gotoxy(25,18);printf("4.Nautical_Mile....Press 4");
 printf("\n\nChoose your choice........");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er/100.0;
	 gotoxy(20,25);printf("Centimeter : %.2f--------->Meter : ",er);
	 break;
  case 2:va=er/100000.0;
	 gotoxy(20,25);printf("Centimeter : %.2f--------->Kilometer : ",er);
	 break;
  case 3:va=er/160934.0;
	 gotoxy(20,25);printf("Centimeter : %.2f--------->Mile : ",er);
	 break;
  case 4:va=er/185200.0;
	 gotoxy(20,25);printf("Centimeter : %.2f--------->Nautical_Mile : ",er);
	 break;
 }
 return(va);
}

//Convert Meter values to corresponding values
float met(float er)
{
 clrscr();
 gotoxy(25,10);printf("Convert %f Meter to .......",er);
 gotoxy(20,12);printf("1.Centimeter.......Press 1");
 gotoxy(20,14);printf("2.Kilometer........Press 2");
 gotoxy(20,16);printf("3.Mile.............Press 3");
 gotoxy(20,18);printf("4.Nautical_Mile....Press 4");
 printf("\n\nChoose your choice........");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*100.0;
	 gotoxy(20,21);printf("Meter : %.2f--------->Centimeter : ",er);
	 break;
  case 2:va=er/1000.0;
	 gotoxy(20,21);printf("Meter : %.2f--------->Kilometer : ",er);
	 break;
  case 3:va=er/1609.0;
	 gotoxy(20,21);printf("Meter : %.2f--------->Mile : ",er);
	 break;
  case 4:va=er/1852.0;
	 gotoxy(20,21);printf("Meter : %.2f--------->Nautical_Mile : ",er);
	 break;
 }
 return(va);
}

//Convert Kilometer values to corresponding values
float kime(float er)
{
 clrscr();
 gotoxy(25,8);printf("Convert %f Kilometers to .......",er);
 gotoxy(20,12);printf("1.Meter...........Press 1");
 gotoxy(20,14);printf("2.Centimeter......Press 2");
 gotoxy(20,16);printf("3.Mile............Press 3");
 gotoxy(20,18);printf("4.Nautical_Mile...Press 4");
 printf("\n\nChoose your choice........");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*1000.0;
	 gotoxy(20,25);printf("Kilometer : %.2f--------->Meter : ",er);
	 break;
  case 2:va=er*100000.0;
	 gotoxy(20,25);printf("Kilometer : %.2f--------->Centimeter : ",er);
	 break;
  case 3:va=er/1.609;
	 gotoxy(20,25);printf("Kilometer : %.2f--------->Mile : ",er);
	 break;
  case 4:va=er/1.852;
	 gotoxy(20,25);printf("Kilometer : %.2f--------->Nautical_Mile : ",er);
	 break;
 }
 return(va);
}
//Convert Mile values to corresponding values
float mile(float er)
{
 clrscr();
 gotoxy(25,8);printf("Convert Miles to .......");
 gotoxy(20,12);printf("1.Meter...........Press 1");
 gotoxy(20,14);printf("2.Centimeter .... Press 2");
 gotoxy(20,16);printf("3.Kilometer.......Press 3");
 gotoxy(20,18);printf("4.Nautical_Mile...Press 4");
 printf("\n\nChoose your choice........");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*1609.0;
	 gotoxy(20,25);printf("Mile : %.2f--------->Meter : ",er);
	 break;
  case 2:va=er*160934.0;
	 gotoxy(20,25);printf("Mile : %.2f--------->Centimeter : ",er);
	 break;
  case 3:va=er*1.609;
	 gotoxy(20,25);printf("Mile : %.2f--------->Kilometer : ",er);
	 break;
  case 4:va=er/1.151;
	 gotoxy(20,25);printf("Mile : %.2f--------->Nautical_Mile : ",er);
	 break;
 }
 return(va);
}

//Convert Nautical_mile values to corresponding values
float naumi(float er)
{
 clrscr();
 gotoxy(25,8);printf("Convert Nautical_Miles to .......");
 gotoxy(20,12);printf("1.Meter........Press 1");
 gotoxy(20,14);printf("2.Centimeter...Press 2");
 gotoxy(20,16);printf("3.Kilometer....Press 3");
 gotoxy(20,18);printf("4.Mile.........Press 4");
 printf("\n\nChoose your choice........");
 scanf("%d",&a);
 clrscr();
 switch(a)
 {
  case 1:va=er*1852.0;
	 gotoxy(20,25);printf("Nautical_Mile : %.2f--------->Meter : ",er);
	 break;
  case 2:va=er*185200.0;
	 gotoxy(20,25);printf("Nautical_Mile : %.2f--------->Centimeter : ",er);
	 break;
  case 3:va=er*1.852;
	 gotoxy(20,25);printf("Nautical_Mile : %.2f--------->Kilometer : ",er);
	 break;
  case 4:va=er*1.151;
	 gotoxy(20,25);printf("Nautical_Mile : %.2f--------->Mile : ",er);
	 break;
 }
 return(va);
}
