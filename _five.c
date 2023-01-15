#include<limits.h> 

/*@requires INT_MIN<=*a<=INT_MAX && INT_MIN<=*b<=INT_MAX; 

ensures \old(*a) == *b && \old(*b) == *a; 

*/ 

int swap(int *a,int *b) 

{ 

int temp=*a; 

*a=*b; 

*b=temp; 

return 0; 

} 

void main() 

{ 

int a=10; 

//@ assert a==10; 

int b=20; 

//@ assert b==20; 

swap(&a,&b); 

//@ assert a==20 && b==10; 

} 
