#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    double a;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4lf",a);
    return 0;
}