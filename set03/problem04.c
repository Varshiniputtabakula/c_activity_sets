

#include<stdio.h>
int input(){
    int n;
    printf("enter nth number of fibonacci series: ");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n){
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, fib;

        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }

        return fib;
    }

}
void output(int n, int fibo){
    printf("the %d number in the fibo series is %d", n, fibo);
}

int main(){
    int n=input();
    int fibo = find_fibo(n);
    output(n,fibo);
    return 0;
}