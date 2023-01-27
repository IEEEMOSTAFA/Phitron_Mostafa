#include<stdio.h>
int power(int n, int m)
{


    if (m==0)

     return 1;


    else

       return  n * power(n, m-1);

}
int main()
{
    int n,m;
     printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);

    //power(n,m);
    printf("%d\n",power(n,m));
return 0;

}

/*#include <stdio.h>

int power(int n, int m) {
    if (m == 0) {
        return 1;
    } else {
        return n * power(n, m-1);
    }
}

int main() {
    int n, m;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("%d^%d = %d\n", n, m, power(n, m));
    return 0;
}
*/
