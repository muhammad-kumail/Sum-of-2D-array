#include<stdio.h>
#include<conio.h>
main()
{
    int ar[3][3];
    int a,b,c=0;
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            printf("Enter the value for Array[%d][%d]: ",a,b);
            scanf("%d",&ar[a][b]);
            c+=ar[a][b];
        }
    }
    printf("The sum of the elements of 2-D array %d",c);
}
