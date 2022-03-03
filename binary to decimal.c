/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int Binarytodecimal(int n)
{
    if(n==0)
    return 0;
    else
    return((n%10)+(2*Binarytodecimal(n/10)));
    
}
int main()
{
    int n;
    printf("enter the binary value:");
    scanf("%d",&n);
    printf("the decimal vaue is%d",Binarytodecimal(n));
}
