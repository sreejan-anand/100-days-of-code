#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d",&n);
    int a[1000]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int val,pos; scanf("%d %d",&val,&pos);
    if(pos<0||pos>n){ printf("Invalid position\n"); return 0; }
    for(int i=n;i>pos;i--) a[i]=a[i-1]; a[pos]=val; n++;
    for(int i=0;i<n;i++){ printf("%d",a[i]); if(i<n-1) printf(" "); }
return 0;
}
