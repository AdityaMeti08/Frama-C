#include<limits.h>
/*@ requires a <= b;
    ensures \result == (\sum(a,b,i) i * i);
*/
int sum_of_squares(int a, int b) {
  int sum = 0;
  int j;
  /*@ loop invariant a <= i <= b+1;
      loop invariant sum == (\sum(a,i-1,j) j* j);
      loop assigns i, sum;
  */
  
  for (int i = a; i <= b; i++) {
    sum += i * i;
  }
  return sum;
}

int main()
{
 int a=1;
 int b=5;
 int res=sum_of_squares(a,b);
 //@assert res == 30
