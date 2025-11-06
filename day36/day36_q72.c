#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int r,c; scanf("%d %d",&r,&c); long sum=0; int x;
    for(int i=0;i<r;i++) for(int j=0;j<c;j++){ scanf("%d",&x); sum+=x; }
    printf("%ld\n",sum);
return 0;
}
