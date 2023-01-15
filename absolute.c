#include<limits.h>
/*@ requires INT_MIN <= val <= INT_MAX
    && INT_MIN <= val <= INT_MAX;
    ensures \result>=0;
    ensures(val>=0 ==> \result==val) && (val<0 ==> \result== -val);
*/
int abs(int val)
{
  if(val>=0)
  return val;
  else
  return -val;
}
int main()
{
  int v=5;
  //@ assert v==5;
  int res=abs(v);
  //@ assert res==5;
  int v2=-5;
  //@ assert v2==-5;
  int res2=abs(v);
  //@ assert res2==5;
}
