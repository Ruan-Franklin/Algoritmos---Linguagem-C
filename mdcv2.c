#include <stdio.h>
long long mdc(long long a, long long b){
  long long c=a%b;
  while(c!=0){
    a=b;
    b=c;
    c=a%b;
  }
  return b;
}
int main(){
  long long a,b,c;
  scanf("%lld %lld",&a,&b);
  c=mdc(a,b);
  printf("MDC(%lld, %lld) = %lld\n",a,b,c);
  return 0;
}

  


