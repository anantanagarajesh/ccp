/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>


void main()
{
    float a[10],*ptr,mean,std,sum=0;
    float sumstd=0;
    int n,i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%f",&a[i]);
    ptr=a;
    for (i=0;i<n;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd=sumstd+pow((*ptr-mean),2);
        ptr++;
    }
    
    std=sqrt(sumstd/n);
    printf("sum=%f\n",sum);
    printf("mean=%f\n",mean);
    printf("standard deviation=%f",std);
}
