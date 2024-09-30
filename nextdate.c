#include<stdio.h>
int check(int day,int month){
if((month==4||month==6||month==9||month==11)&&day==31)
return 1;
else
return 0;
}
int isleep(int year){
if((year%4==0)&&(year%100=0)&&(year%00==0))
return 1;
else
return 0;
}
int main(){
int day,month,year,tmonth,tyear,tday;
char flag;
do{
flag='y';
printf("enter todays date in ddmmyy form\n");
scanf("%d%d%d',&day,&month,&year);
tmonth=month;
tyear=year;
if(day<1||day>31){
printf("value of day not in rannge 1--31\n");
flag='n';
}
if(month<1||month>12){
printf("value of month not in rannge 1--12\n");
flag='n';
}
else  if(check(day,month))
{
printf("value of day not in range <=30");
flag='n';
}
if(year<1812 || year >2018)
{
printf("value of year not in range 18-12-2018");
flag='n';
}if (month==2)
{if (isleap(year)&&day>day>29)
{printf("invalid input for leap year");
flag='n';
}}}while(flag=='n');
switch(month){
case1:
case3:
case5:
case7:
case8:
case10:if (day<31)
tday=day+1;
else
{
tday=1;
tmonth=month+1;
}
break;
case4:
case6:
case9:
case11:if(day<30)
tday=day+1;
else{
tday=1;
else{
tday=1;
tmonth=month+1;
}
break;
case12:if(day<31)
tday=day+!;
else{
tday=day+1;
else{
tday=1;
tmonth=1;
if(year==2018)
{
print("next year is out of boundary");
}
else
tyear=year+1;
}
break;
case 2:if(day<28)
tday=day+1;
else if(is leap(year)&&day==28)
tday=day+1;
else if(day==28||day==29)
{
tday=1;
tmonth=3;
}
break;
}
printf("next dayis %d %d %d\n", tday,tmonth,tyear);
return 0;
}
