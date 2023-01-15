#include<limits.h> 

#include<assert.h> 

/*@ @requires INT_MIN <= a <= INT_MAX 

&& INT_MIN <= b <= INT_MAX; 

    ensures \result>=a && \result>=b;  
*/ 

int max(int a,int b) 
{ 
return a>b?a:b; 
} 

int main() 

{ 
int a=3; 
//@ assert a==3; 
int b=4; 
//@ assert b==4; 
int res; 
res= max(a,b); 
} 
  
