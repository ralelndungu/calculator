#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    int n1,n2;
    float res;
    printf("enter an operator (+,-,*,/")
    scanf("%c",&operator);//take an operator
    printf("enter the first number:");
    scanf("%d",&n1);//take the first number
    printf("enter the second number:");
    scanf("%d",%n2);//take the second number

    if(operator =='+')
    {
        res =n1+n2;//add two numbers
        printf(addition of %d and %d is:%f",n1,n2,res);

    }
    else if(operator =='-')
        res =n1-n2;//subtract the two numbers
    printf("subtraction of %d and %d is:%f",n1,n2,res);
}
else if(operation =='*')
    res =n1*n2;//multiply the two numbers
printf("multiplication if %d and %d is:%f"n1,n2,res);
}
else if(operation =='/')
{
    if(n2 == 0)if n2 == 0,take another number
    {
        printf("\n division cannot be zero,enter another value");
        scanf("%d",&n2);
    }
    res =n1/n2;//divide the two numbers
    printf(division of %d and %d is:%.2f",n1,n2,res);
}
else
{
    printf("\n you have entered a wrong input");

}
  return 0
}




