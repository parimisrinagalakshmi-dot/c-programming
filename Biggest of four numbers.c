#include <stdio.h>
int main()
{
    int k,s,v,total,per;
    printf("Enter k,s,v values");
    scanf("%d%d%d", & k, & s, & v);
    total = k+s+v;
    per = total/3;
    if (k >= 40, s >= 40, v >= 40)
    {
    if (per >= 90)
    printf("A grade");
    else if(per >= 70)
    printf("B grade");
    else if(per >= 50)
    printf("C grade");
    else if(per >= 40)
    printf("D grade");
    else
    printf("failed");
}
    return 0;
}

