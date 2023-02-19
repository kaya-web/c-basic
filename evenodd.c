#include<stdio.h>
 int main()
 {
    int no,i;
    printf("eneter number\n");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        if(i%2==0)
        {
            printf("%d\t\n",i);
        }
        else{
            if(i%2!=0)
            {
                printf("%d",i);
            }
        }
    }

    return 0;
 }