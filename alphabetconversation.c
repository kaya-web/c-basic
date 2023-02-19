#include<stdio.h>
 int main()
 {
    char ch,asccie;
    printf("eneter character in \n");
    scanf("%c",&ch);
    if((ch>=65)&&(ch<=90))
    {
        asccie=ch+32;
    }
    else{
        if((ch>=97)&&(ch<=122))
    {
        asccie=ch-32;
    }
    }
    printf("%c",asccie);
 }