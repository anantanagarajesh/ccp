/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q,i,j,k;
    printf("\n Enter the order of the matrix A:");
    scanf("%d%d",&m,&n);
    printf("\n enter the order of the matrix B:");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("\n Enter the elements of matrix A\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        }
         printf("\n Enter the elements of matrix B\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
        printf("\n MATRIX A\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            { 
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\n MATRIX B \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("\n MATRIX C \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Marix A AND B is not multiplicable");
    getch();
}
        
        
        
        
        
