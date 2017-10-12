#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define PRIM_MAX 100000
long int primek[5000]={2,0};
bool prim_e(int a);
int osztok_szama(long long int a);
int main(void)
{
    int iprimek=0;
    long long int triangle_numbers[13000]={0}, szam, i, j;
    for(szam=3;primek[iprimek]<PRIM_MAX && iprimek<5000;szam+=2)
    {
        if(prim_e(szam))
        {
        iprimek++;
        primek[iprimek]=szam;
        }
    }
    for(i=0;i<13000;i++)
    {
        for(j=1;j<=i+1;j++)
            triangle_numbers[i]+=j;
    }
    printf("%lli",triangle_numbers[12374]);
    return 0;
}
int osztok_szama(long long int a)
{
    int kitevok[5000]={0}, osztok=1, j, i;
    for(i=0;a!=1;i++)
    {
        while(a%primek[i]==0)
        {
            a=a/primek[i];
            kitevok[i]++;
        }
    }
    for(j=0;j<i;j++)
    {
        osztok*=kitevok[j]+1;
    }
    return osztok;
}
bool prim_e(int a)

{
    int i;
    if(sqrt(a)==(int)(sqrt(a)))
    {
        for(i=0; primek[i]<=sqrt(a); i++)
            if(a%primek[i]==0)
                return false;
    }
    else
    {
        for(i=0; primek[i]<(int)(ceil(sqrt(a))); i++)
            if(a%primek[i]==0)
                return false;
    }
    return true;
}
