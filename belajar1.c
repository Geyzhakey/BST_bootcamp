#include <stdio.h>

    int faktorial(int n){
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * faktorial(n - 1);
    }

    int main(){
        int hasil = faktorial(5);
        printf("5! = %d\n", hasil);
    return 0;
}