/*@ requires a != \null;
    requires 0 <= n <= 5;
    requires 0 <= v <= 100;
    behavior found:
      assumes 0 <= v < n;
      ensures 0 <= \result < n;
      ensures a[\result] == v;
    behavior not_found:
      assumes v == 100 || v >= n;
      ensures \result == -1;
*/
int bs(int *a, int n, int v) {
  int l=0;
  int h=n-1;
  while (l<=h) {
    int mid=l+(h-l)/2;
    if (a[mid]==v)
   {
      return mid;
    }
    if (a[mid] < v) {
      l=mid+1;
    } else {
      h=mid-1;
    }
  }
  return -1;
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int n = 5;
  int v=4;
  int bs = binary_search(a, n, v);
  return 0;
}
