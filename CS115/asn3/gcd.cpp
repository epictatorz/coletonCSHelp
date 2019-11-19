
long int gcd(long int a, long int b) {
  while (b != 0) {
    long int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

long int lcm(long int a, long int b) {
  return a * b / gcd(a, b);
}
