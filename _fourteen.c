#include <stdio.h>

/*@ predicate valid_array(int *a, integer n) =
  \valid(a+(0..n-1));
*/

/*@ requires valid_array(a, n);
  @ assigns \nothing;
  @ behavior found:
  @   assumes \exists integer i; 0 <= i < n && a[i] == x;
  @   ensures 0 <= \result < n;
  @ behavior not_found:
  @   assumes \forall integer i; 0 <= i < n ==> a[i] != x;
  @   ensures \result == -1;
  @*/
int linear_search(int *a, int n, int x) {
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      return i;
    }
  }
  return -1;
}

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int index = linear_search(a, 5, 3);
  //@ assert index == 2;
  return 0;
}
                    
