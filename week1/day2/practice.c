#include<stdio.h>
int main()
{
    int  x = 25;
    int *p =&x;
    int **pp=&p;

    printf("value of X %d\n",x);
    printf("Value of P %d\n",*p);
    printf("value of PP %d\n",**pp);
    **pp =100;
    printf("Value of x after change %d\n",x);
    return 0;
}





/*int main()
{
    int reading[4]={10,20,30,40};
    int *p = reading;
    printf("Value of P  %d\n",*p);
    printf("Value of p+1 %d\n",*(p+1));
    printf("value of P+2 %d\n",*(p+2));
    printf("value of p+3 %d\n",*(p+3));
    return 0;

}*/