#include<stdio.h>

int power(int m, int e);

int main(void) 
{
    int m, e;
    m = 2;
    e = 3;  

    printf("%d to the power %d is %d\n", m, e, power(m, e));
    printf("4 to the power %d is %d\n", e, power(4, e));  
    printf("3 to the power %d is %d\n", e, power(3, e));  
  
}

int power(int m, int e) {
    int temp;
    
    temp = 1;
    for( ; e>0; e--) {
        temp = temp * m;
    }

    return temp;
}