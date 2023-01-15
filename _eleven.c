/*@
  logic integer factorial(integer n)=(n<=0)?1:n*factorial(n-1);
*/

/*@
  assigns \nothing;
  ensures \result == factorial(n);
*/

int facto(int n)
{
  if (n<2) 
  return 1;
  int res=1;
  /*@
    loop invariant 2<=i<=n+1;
    loop invariant res == factorial(i-1);
    loop assigns i,res;
    loop variant n-1;
   */
   
   for(int i=2;i<=n;i++)
   {
     res=res*i;
}
return res;
}
int main()
{
  int n=5;
  //@assert n == 5;
  int res=facto(n);
  //@assert res == 120;
}

