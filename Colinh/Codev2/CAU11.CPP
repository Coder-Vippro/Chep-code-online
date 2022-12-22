#include<bits/stdc++.h>
using namespace std;
void str_reverse(char str[]) {
  int lo = 0;
  int length;
  for (length = 0; str[length] != '\0' ; length++) {}
  while ( lo < length ) {
    --length;
    char tmp = str[lo];
    str[lo] = str[length];
    str[length] = tmp;
    ++lo;
  }
}
char str[100001];
int main() {
    cin >>  str;
    str_reverse(str);
    cout<< str;
    return 0;
}
