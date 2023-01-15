#include<limits.h> 

/*@requires a>INT_MIN && b>INT_MIN; 

ensures (b == \old(a))&&(a == \old(b)); 

*/ 

int swap(int a, int b) 

{ 

int temp=a; 

a=b; 

b=temp; 

} 

void main() 

{ 

int a=21;  

// @ assert a==21; 

int b=18;  

//@ assert b==18; 

int res=swap(a, b); 

//@assert a==18 && b==21; 

} 
