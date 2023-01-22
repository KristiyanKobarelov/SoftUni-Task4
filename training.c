#include <stdio.h>

void main()
{
    float m, yes, sl, sum, n, k, i;
    do
    {printf("\n Kilometers you've ran-");
    scanf("%f", &m);
    printf("\n Days you are running for-");
    scanf("%f", &n);
    printf("\n The percentage that it's increasing with-");
    scanf("%f", &k);
    }while(n<0 && m<0);
        i=2;
        sum=m;
        k=k/100;
        yes=m;
        while(i<=n)
        {
            yes=yes+yes*k;
            sum=sum+yes;
            i++;
        }
        if(sum<1000)
        {
            sl=1000-sum;
            printf("\n Sorry, you still have to run %f kilometers", sl);
        }
        else printf("\n Good job you've ran enough kilometers!");



}
