#include<stdio.h>
#include<conio.h>
void main(){
int a;
float c,b,d,e;
clrscr();
printf("==========================\n\n");
printf("======Electric Bill=======\n\n");
printf("==========================\n\n");
printf("Enter The Total Number of UNITS Used :");
scanf("%d",&a);
if(a<=50){
b=a*0.5;
}else if(a<=100){
b=25+((a-50)*0.75);
}else if(a<=250){
b=100+((a-150)*1.2);
}else{
b=220+((a-250)*1.5);
}

d=b*0.2;
e=b+d;
printf("\n\nYour Total Electricity Bill Is: Rs%.2f",e);


getch();
}