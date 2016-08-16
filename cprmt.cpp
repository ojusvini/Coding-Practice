#include <stdio.h>
#include <string.h>
 
int cnt[2][26];
 
int main() {
  char s[1001];
  int i;
  while (gets(s)) { 
    memset(cnt,0,sizeof(cnt));
    for (i = 0; s[i] != '\0'; i++) {
      cnt[0][s[i]-'a']++; 
    }
    gets(s);
    for (i = 0; s[i] != '\0'; i++) {
      cnt[1][s[i]-'a']++;
    }
    for (i = 0; i < 26; i++) {
      if (cnt[1][i] < cnt[0][i]) cnt[0][i] = cnt[1][i];
      while (cnt[0][i]--) {
        putchar(i+'a');
      }
    }
    putchar('\n');
  }
}
