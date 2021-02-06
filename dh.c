#include<stdio.h>
#include<math.h>
void main()
{
    int q,xa,xb,a[100][100],ka,kb,ya,yb,alpha;
    printf("enter the prime no q\n");
    scanf("%d",&q);
    printf("enter \n");
    scanf("%d",&xa);
    printf("enter \n");
    scanf("%d",&xb);
    for(int x=1;x<q;x++)
    {
        for(int y=1;y<q;y++)
        {
            a[x][y]=pow(x,y);
            a[x][y]=a[x][y]%q;
        }
    }
    for(int x=1;x<q;x++)
    {
        int count=0;
        for(int y=1;y<q-1;y++)
        {
            for(int z=y+1;z<q;z++)
            {
                if(a[x][y]==a[x][z])
                {
                    count=1;
                    break;
                }
            }
            if(count==1)
                break;
        }
        if(count==0)
            {
                alpha=x;
                break;
            }
    }
    int m=((int)(pow(10,7)))%11;

    printf("ohh=%d\n",m);
    ya=((int)pow(alpha,xa))%q;
    yb=((int)pow(alpha,xb))%q;
    ka=((int)pow(yb,xa))%q;
    kb=((int)pow(ya,xb))%q;
    printf("%d\n",alpha);
    printf("%d %d %d %d",ya,yb,ka,kb);
}
