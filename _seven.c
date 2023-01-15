#include<limits.h>
/*@ requires n > 0;
  @ ensures n < (\result + 1) * (\result + 1);
  @ ensures \result * \result == n;
  @*/
int integer_sqrt(int n) 
{
  int i = 0;
  while (i * i <= n) 
  {
    i = i + 1;
  }
  return i - 1;
}


int main()
{
 int n=25;
 int res=integer_sqrt(n);
 //@assert res==5;
}

