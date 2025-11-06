#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int a[1000]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(n<2){ printf("-1\n"); return 0; }
    int max1=-2147483648, max2=-2147483648;
    for(int i=0;i<n;i++){ if(a[i]>max1){ max2=max1; max1=a[i]; } else if(a[i]>max2 && a[i]!=max1) max2=a[i]; }
    if(max2== -2147483648) printf("-1\n"); else printf("%d\n",max2);
return 0;
}
