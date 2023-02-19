#include<stdio.h>
 int main()
 {
    int x,y,power=1,i;
    printf("enter number for x and y");
    scanf("%d%d",&x,&y);
    for(i=0;i<y;i++)
    {
        power=power*x;
    }
    printf("%d",power);
 }