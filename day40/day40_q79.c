#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int r,c; scanf("%d %d",&r,&c); int m[100][100]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&m[i][j]);
    for(int k=0;k<r+c-1;k++){ for(int i=0;i<r;i++){ int j=k-i; if(j>=0 && j<c) { printf("%d ",m[i][j]); } } if(k<r+c-2) printf("\n"); }
return 0;
}
