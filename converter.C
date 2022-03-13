#include "cofo.h"

void menu();
void curr();

int po;
float re,ar;
char op;

void main()
{
 char op;
 clrscr();
 gotoxy(20,2);printf("----------------------------");
 gotoxy(25,4);printf("   CONVERTER   ");
 gotoxy(20,6);printf("----------------------------");
 gotoxy(25,9);printf("1.Currency.......Press 'c'");
 gotoxy(25,11);printf("2.Distance.......Press 'd'");
 gotoxy(25,13);printf("3.Mass...........Press 'm'");
 gotoxy(25,15);printf("4.Time...........Press 't'");
 gotoxy(25,17);printf("5.Temperature....Press 'p'");
 printf("\n\nChoose your choice.........");
 op=getchar();
 menu(op);
}
void menu(op)
char op;
{
 gotoxy(20,2);printf("----------------------------");
 gotoxy(25,4);printf("   CONVERTER   ");
 gotoxy(20,6);printf("----------------------------");
 if(op=='c')
  curr();
/* else if(op=='d')
  dist();
 else if(op=='m')
  mass();
 else if(op=='t')
  time();
 else if(op=='p')
  temp();*/
 else
  printf("!.........NO SUCH UNIT.............!");
}
void curr()
{
	   clrscr();
	   gotoxy(20,2);printf("----------------------------");
	   gotoxy(25,4);printf("   CONVERTER   ");
	   gotoxy(20,6);printf("----------------------------");
	   gotoxy(20,8);printf(" 1.Dollars.......Press 1");
	   gotoxy(20,10);printf("2.Rupees........Press 2");
	   gotoxy(20,12);printf("3.Euro..........Press 3");
	   gotoxy(20,14);printf("4.Pound.........Press 4");
	   gotoxy(20,16);printf("5.Ruble.........Press 5");
	   gotoxy(20,18);printf("Choose the input amount........");
	   scanf("%d",&po);
	   printf("\n\nEnter the amount:");
	   scanf("%f",&ar);
	   if(po==1)
	    re=doll(ar);
	   else if(po==2)
	    re=rup(ar);
	   else if(po==3)
	    re=eur(ar);
	   else if(po==4)
	    re=pou(ar);
	   else if(po==5)
	    re=rub(ar);
	   else
	    printf("!.......NO CURRENCY........!");
	   printf("%.2f\n",re);
}
/*void dist()
{
	   gotoxy(20,5);printf("1.Centimeter");
	   gotoxy(20,7);printf("2.Meter");
	   gotoxy(20,9);printf("3.Kilometer");
	   gotoxy(20,11);printf("4.Mile");
	   gotoxy(20,13);printf("5.Nautical Mile");
	   printf("Choose your choice.......");
	   scanf("%d",&po);
	   printf("Enter the distance:");
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
	   else
	    printf("!.......NO CURRENCY........!");
	   printf("%8.3f",re);
}
void mass()
{
	   gotoxy(20,5);printf("1.Gram");
	   gotoxy(20,7);printf("2.Kilogram");
	   gotoxy(20,9);printf("3.Pound");
	   gotoxy(20,11);printf("4.Quintal");
	   gotoxy(20,13);printf("5.Tonne");
	   printf("Choose your choice.......");
	   scanf("%d",&po);
	   printf("Enter the mass:");
	   scanf("%f",&ar);
	   if(po==1)
	    re=gram(ar);
	   else if(po==2)
	    re=kigr(ar);
	   else if(po==3)
	    re=pou(ar);
	   else if(po==4)
	    re=qui(ar);
	   else if(po==5)
	    re=ton(ar);
	   else
	    printf("!.......NO MASS........!");
	   printf("%8.3f",re);
}
void time()
{
	   gotoxy(20,5);printf("1.Seconds");
	   gotoxy(20,7);printf("2.Minutes");
	   gotoxy(20,9);printf("3.Hours");
	   gotoxy(20,11);printf("4.Day");
	   gotoxy(20,13);printf("5.Millisecond");
	   printf("Choose your choice.......");
	   scanf("%d",&po);
	   printf("Enter the time:");
	   scanf("%f",&ar);
	   if(po==1)
	    re=sec(ar);
	   else if(po==2)
	    re=min(ar);
	   else if(po==3)
	    re=hour(ar);
	   else if(po==4)
	    re=day(ar);
	   else if(po==5)
	    re=milsec(ar);
	   else
	    printf("!.......NO TIME........!");
	   printf("%8.3f",re);
}
void temp()
{
	   gotoxy(20,5);printf("1.Celcius");
	   gotoxy(20,7);printf("2.Kelvin");
	   gotoxy(20,9);printf("3.Fahrenheit");
	   gotoxy(20,11);printf("4.Rankine");
	   gotoxy(20,13);printf("5.Reaumur");
	   printf("Choose your choice.......");
	   scanf("%d",&po);
	   printf("Enter the temperature:");
	   scanf("%f",&ar);
	   if(po==1)
	    re=cel(ar);
	   else if(po==2)
	    re=kel(ar);
	   else if(po==3)
	    re=fah(ar);
	   else if(po==4)
	    re=ran(ar);
	   else if(po==5)
	    re=reau(ar);
	   else
	    printf("!.......NO TEMPERATURE........!");
	   printf("%8.3f",re);
}*/
