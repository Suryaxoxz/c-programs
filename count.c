#include<stdio.h>
int main()
{

    int n,freq[100],count,i,arr[100],size,j;

    printf("input");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&freq[i]);

        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;

                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }


    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }


return 0;
}
