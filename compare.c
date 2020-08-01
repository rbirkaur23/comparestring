#include<stdio.h>
#include<conio.h>
void main()
{
  char a[50],b[50];
  clrscr();
  strcpy(a,"hello world");
  strcpy(b,"bye world");
  if(a==b)
  { 
    printf("Equal");
  }
  else
  {
    printf("Not Equal");
  }
  getch();
}
