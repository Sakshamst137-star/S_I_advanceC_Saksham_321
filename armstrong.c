# include <stdio.h>
# include <math.h>
int main() 
{
  int count=0, rem, power, pow, sum=0;
  int num = 153;
  for(int temp =num; temp>0;temp=temp/10){
  rem=temp%10;
  count++;
  }
  printf(" total digits are:%d\n",count);
   
  for (int temp1= num; temp1>0;temp1/=10){
    rem = temp1 % 10;
    power = (int)round(pow(rem, count));
    sum += power;
  }

  if (sum == num)
    printf("its an armstrong no.\n");
  else
    printf("its not an armstrong no.\n");
   
  

   return 0;
}
