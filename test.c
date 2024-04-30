#include<stdio.h>
int main()
{
int r,c,i,j;
int Cr,Cc;

printf("Enter number of rows :");
scanf("%d",&r);
printf("Enter number of columns :");
scanf("%d",&c);

Cr=(r + 1)/2;
Cc=(c + 1)/2;

 for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(Cc == j && Cr == i)
            {
                printf("0");
            }

            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

return 0;
}
