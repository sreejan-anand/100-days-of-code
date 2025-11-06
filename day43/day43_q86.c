#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[10000]; if(!fgets(s,10000,stdin)) return 0; int n=0; while(s[n]&&s[n]!='\n') n++; int ok=1; for(int i=0;i<n/2;i++) if(s[i]!=s[n-1-i]) ok=0; printf(ok? "Palindrome\n":"Not Palindrome\n");
return 0;
}
