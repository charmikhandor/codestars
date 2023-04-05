#include<stdio.h>
#include<conio.h>
#include<time.h>

void check(int a[], int n)
{
    int j, i, l, k, b=0; 
    for (j=1; j<=(n); j++)//size of the subarray
    {
        int r[100][100];//(n-j+1) denotes the amount of possibilities
        for (i=0; i<=(n-j); i++)//
        {
            for (k=0; k<j; k++)
            {
                r[i][k]=a[i+k];            
            }
        }
        for (k=0; k<j; k++)
        {
            for (i=0; i<=(n-j); i++)
            {
                printf("%d\t", r[i][k]);
            }
            printf("\n");
        }
    }

    
}

int main()
{
    clock_t t;
    
    int n, i;
    scanf("%d", &n);
    int a[10];
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    t = clock();
    check(a, n);

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf(" took %f seconds to execute \n", time_taken);

}