#include<stdio.h>
int main()
{
    long long int budget,n,m,i,j,t;
    scanf("%lld%lld%lld",&budget,&n,&m);
    long long int a[n],b[m],c[n*m+1];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%lld",&b[i]);
    }
    long long int k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[k]=a[i]+b[j];
            k++;
        }
    }
    /*for(i=0;i<m*n;i++)
    {
        for(j=i;j<m*n;j++)
        {
            if(c[j]>c[i])
            {
                int q=c[j];
                c[j]=c[i];
                c[i]=q;
            }
        }
    }*/
    if(c[n*m-1]>budget)
    {
        printf("-1");
        return 0;
    }  
    k=0;
    for(i=0;i<n*m;i++)
    {
        if(c[i]>k && c[i]<=budget)
        {
            k=c[i];
        }
    /*for(i=0;i<n*m;i++)
    {
        if(budget<c[i])
        {
        printf("%d",c[i+1]);
        break;
        }
    }*/
    }
    printf("%lld",k);
    return 0;

   
}
