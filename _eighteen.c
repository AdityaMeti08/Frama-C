/*@
  requires IsValidRange(a,n);
  
  assigns \nothing;
  
  behavior empty:
    assumes n ==0;
    ensures \result ==0;
    
  beahvior not_empty:
    assumes 0<n;
    ensures 0<=\result <n;
    
    ensures \forall integer i; 0<=i<n ==> a[\result] <= a[i];
    ensures \forall integer i; 0<=i<\result ==> a[\resutlt] < a[i];
  complete behaviors;
  disjoint behaviors;
*/
size_type min_element(const value_type* a, size_type n)
{
  if( n==0) return n;
  
  size_type min=0;
  
  /*@
    loop invariant 0<=i<=n;
    loop invariant 0<=min<n;
    loop invariant \forall integer k; 0<=k<i ==> a[min] <= a[k];
    loop invariant \forall integer k; 0<=k<min ==> a[min] < a[k];
    loop assigns min,i;
    loop variant n-i;
  */
 for(size_type i=0;i<n;i++)
   if(a[i] <a[min])
   min=i;
   
  return min;
  int main()
{
  int a[] = {3, 1, 4, 1, 5, 9, 2};
  int n = sizeof(a) / sizeof(int);
  int min = min_element(a, n);
  printf("Minimum element: %d\n", min);
  return 0;
}
 
