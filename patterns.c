#include<stdio.h>
int main()
{
int r,c,i,j;
int Cr,Cc;

printf("Enter number of rows :");
scanf("%d",r);
printf("Enter number of columns :");
scanf("%d",c);

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
            else if(c%2 == 0 && Cc+1 == j)
            {
                if(Cr == i || (r%2 == 0 && Cr+1 == i))
                    printf("0");
                else
                    printf("1");
            }
            else if(r%2 == 0 && Cr+1 == i)
            {
                if(Cc == j || (c%2 == 0 && Cc+1 == j))
                    printf("0");
                else
                    printf("1");
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
