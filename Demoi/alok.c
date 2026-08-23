#include<stdio.h>
// int fabanoci(int n){
//     if(n == 0 ){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     else{
//         return fabanoci(n-1) + fabanoci(n-2);
//     }
// }




int factorial(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;

}
