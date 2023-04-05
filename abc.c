#include<stdio.h>
void main()
{
    int w, x, c=0;
    //int c=0;
    scanf("%d", &w); 
    
    for (x=2; x<=w; x++)
    {
        int y=w-x;
        if((x%2==0)&&(y%2==0)){c++; break;}
    }
    (c==0)?printf("no"):printf("yes");
}