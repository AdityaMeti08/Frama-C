#include<limits.h>
/*@requires INT_MIN<a<INT_MAX;
assigns \nothing;
ensures \result>=0;
behavior pos:
 assumes 0<=a;
 ensures \result==1;
behavior neg:
 assumes a<0;
 ensures \result==0;
complete behaviors;
disjoint behaviors; 
*/
  int check(int a)
  {
   if (a<0)
   return 0;
   return 1;
}
void main()
{
int x=6;
//@assert x==6;
int res=check(x);
//@assert res==1;
}
