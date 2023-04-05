#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<math.h>

void check(int n)
{
    if (n>=0){
        long int sr=sqrt(n);
        if (n==(sr*sr))
        {printf("yes");}
        else {printf("no");}
    }
    else printf("no");
}
int main()
{
    clock_t t;
    long int n;
    
    scanf("%d", &n);
    
    t = clock();
    check(n); 
    
    t = clock() - t;
    long double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf(" took %f seconds to execute \n", time_taken);

}