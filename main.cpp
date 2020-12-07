#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int search(int *a, int s, int l, int r)
{
    int rnew, lnew;
    if(r-l)
    {
        if(s<=a[(l+r)/2])
        {
            rnew=(l+r)/2;
            lnew=l;
            search(a, s, lnew, rnew);
        }
        else
        {
            rnew=r;
            lnew=(l+r)/2+1;
            search(a, s, lnew, rnew);
        }
    }
    else
    {
        if(a[l]==s)
        {
             return l;
        }
        else
        {
            return -12345;
        }
    }
}
int main()
{
    int n, i, *a, s;
    scanf("%d", &n);
    a=(int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
       scanf("%d", &*(a+i));
    }
    scanf("%d", &s);
    printf("%d", search(a, s, 0, n));
    return 0;
}
