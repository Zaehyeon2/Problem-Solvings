#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  long double a,b,c;
  scanf("%Lf %Lf %Lf",&a,&b,&c);
  long double fmul = (a * b) / c;
  long double fdiv = (a / b) * c;
  long double ans = max(fmul, fdiv);

  printf("%d\n",int(ans));
}
