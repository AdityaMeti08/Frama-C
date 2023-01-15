#include<limits.h> 

/*@ requires INT_MIN<=i<=INT_MAX; 
    assigns \nothing; 
    ensures \result==i+1; 
*/ 

  

int increment(int i) 

{ 
 return ++i; 
} 

int main() 

{ 

int a=5; 

//@ assert a==5; 

int res=increment(a); 

//@ assert res==6; 

} 
