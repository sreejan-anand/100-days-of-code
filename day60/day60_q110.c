#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,k; if(scanf("%d %d",&n,&k)!=2) return 0; int a[100000]; for(int i=0;i<n;i++) scanf("%d",&a[i]); for(int i=0;i<=n-k;i++){ int mx=a[i]; for(int j=i;j<i+k;j++) if(a[j]>mx) mx=a[j]; printf("%d",mx); if(i<n-k) printf(" "); }
return 0;
}
