//1/1!+1/2!+1/3!...n
// 1/1!+2/2!+3/3!..n
#include<stdio.h>
 int main()
 {
    float no,fact=1,i,sum=0;
    printf("eneter value in no");
    scanf("%f",&no);
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
        // sum=sum+1/fact;
        sum=sum+i/fact;

    }
    printf("%f",sum);
 }