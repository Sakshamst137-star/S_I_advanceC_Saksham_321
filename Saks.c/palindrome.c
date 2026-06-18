
# include <stdio.h>
int main ( )
{
   int rem; int num; int original; int rev = 0;
  printf("enter an integer:");
  scanf("%d", & num);
  original = num;
  while ( num != 0)
  {
    rem = num % 10;
    rev= rev*10 + rem;
    num /=10;
  }
  if ( original== rev)
  {
    printf("%d is palindrome.\n", original);
  }
  else
  {
    printf("%d is not palindrome.\n", original);
  }
  return 0;
}