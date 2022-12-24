#include<stdio.h>
#include<conio.h>
int fun(int n);
int main()
{
    int n;
printf("choose 1 for addition\n");
printf("choose 2 for subtraction\n");
printf("choose 3 for multiplecation\n");
printf("choose 4 for division\n");
printf("choose 5 for remender\n");

scanf("%d", &n);
fun(n);
return 0;
}
int fun(int n){
    int a,b;
          printf("enter the first num\n");
        scanf("%d",&a);
          printf("enter the first num\n");
        scanf("%d",&b);
    switch (n)
    {
         case 1:{
         int c = a+b;
        printf("sum of tww num is %d + %d = %d",a,b,c);
        } break;

      case 2:{
        int c = a-b;
        printf("sub of two num is %d - %d = %d",a,b,c);
       } break;
       
       case 3:{
         int c = a*b;
        printf("mul of two num is %d * %d = %d",a,b,c);
        } break;
     
     case 4:{
       int c = a/b;
        printf("div of two num is %d / %d =%d ",a,b,c);
       } break;

     case 5:{
       int c = a%b;
        printf("rem of tow num is %d rem %d = %d ",a,b,c);
      } break;
default:
printf("enter the wrong value");
break;
    }
}