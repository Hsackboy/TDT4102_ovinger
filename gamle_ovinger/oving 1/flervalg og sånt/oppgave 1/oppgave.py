"""
bool isFibonacciNumber(int n) {
int a = 0;
int b = 1;
while (b < n) {
int temp = b;
b += a;
a = temp;
}
return b == n;
"""

def isFibonacciNumber(n):
    a = 0
    b = 1
    while b<n:
        temp = b
        b+=a
        a = temp
    return b==n