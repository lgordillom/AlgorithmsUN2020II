#include <iostream>
#define ll long long
long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}
int gcd(int a, int b) {
  if(b>a){
    int aux=a;
    a=b;
    b=aux;
  }
  if(b==0){
    return a;
  }
  return gcd(b, a%b);

}
long long lcm_fast(int a, int b) {

  return (a/(long long)gcd(a,b))*b;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
