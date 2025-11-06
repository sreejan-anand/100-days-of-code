#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d",&n); int m[100][100]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&m[i][j]);
    int seen[100000]={0}; int ok=1;
    for(int i=0;i<n;i++){ int v=m[i][i]; if(v>=0 && v<100000){ if(seen[v]) ok=0; seen[v]=1; } }
    printf(ok? "Distinct\n":"Not Distinct\n");
return 0;
}
