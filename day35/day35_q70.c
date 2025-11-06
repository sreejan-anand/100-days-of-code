#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d",&n); int a[1000]; for(int i=0;i<n;i++) scanf("%d",&a[i]); int k; scanf("%d",&k);
    if(n>0){ k = k % n; int b[1000]; for(int i=0;i<n;i++) b[(i+k)%n]=a[i]; for(int i=0;i<n;i++){ printf("%d",b[i]); if(i<n-1) printf(" "); } }
return 0;
}
