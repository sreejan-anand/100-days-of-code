#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d",&n); long sum=0; int x;
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++){ scanf("%d",&x); if(i==j) sum+=x; } }
    printf("%ld\n",sum);
return 0;
}
