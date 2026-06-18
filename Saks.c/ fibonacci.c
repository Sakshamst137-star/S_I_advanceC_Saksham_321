# include <stdio.h>
int main ( )
{
    int n = 61;
    int num1 = 0, num2 =1, num3;
    for (int i = 2; i < n; i++)
    {
        num1=num2;
        num2=num3;
    }
    printf("the 61st tern in fibonacci series is: %d\n",num3);
    return 0;

    

}