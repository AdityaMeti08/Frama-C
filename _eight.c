/*@ requires n >= 0;
  @ ensures \result == n*(n + 1)/2;
  @ assigns \nothing;
  @*/
int sum_of_n_numbers(int n) 
{
  int i = 1;
  int sum = 0;
  while (i <= n) 
  {
    sum = sum + i;
    i = i + 1;
  }
  return sum;
}
int main()
{
 int n=5;
 //@assert n==5;
 int res=sum_of_n_numbers(n);
 //@assert n==15;
 }
 
