# include <stdio.h>
int main ( )
{
    int  del_index=3;
    int Arr[]={1,3,6,8,3,2,7};
    int n =7;
    
    for (int i = del_index; i<n-1;i++)
    {
      Arr[i]=Arr[i+1];
    }
    n--;
    printf("New Array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
    return 0;
}
