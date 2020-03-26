#include <stdio.h>
void main()
{ int size = 4; int i;
struct Data {int number; int month ; int years;};
struct Data bufer;
struct Data tel[] =
{{2,2,2002},
{1,2,2002},
{3,1,2004},
{2,1,2004}
};

int flag = 1;
while(flag){ flag = 0;
for(i = 0;i<size-1;i++)
{ struct Data bufer;
if(tel[i].years>tel[i+1].years)
{
bufer=tel[i+1];
tel[i+1]=tel[i];
tel[i]=bufer;
}
if(tel[i].years == tel[i+1].years)
{
    if(tel[i].month>tel[i+1].month)
    {
bufer=tel[i+1];
tel[i+1]=tel[i];
tel[i]=bufer;
    }
    if(tel[i].month == tel[i+1].month)
{
if(tel[i].number>tel[i+1].number)
{
bufer=tel[i+1];
tel[i+1]=tel[i];
tel[i]=bufer;
}
}}
}
for(i = 0;i<size;i++)
{
printf("number = %d; month: %d; years = %.d\n", tel[i].number, tel[i].month, tel[i].years); } }}
