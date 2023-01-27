/*#include<stdio.h>
int sumofdigit(int n,int arr[])
{
    if(n==0)
        return 0;
        else
    return (arr[n-1]%10)+sumofdigit(n-1,arr);
    }

int main()
{
    int n;
    int arr[n];
    printf("please,Enter the number of Integer\n");
    scanf("%d",&n);
    printf("please,Enter the number of array digit\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    //scanf("%d",&arr[i]);
    printf("%d\n",sumofdigit(n,arr));
    return 0;
}
*/

#include <stdio.h>

int sumLastDigit(int n, int arr[]) {
    if (n == 0) {
        return 0;
    } else {
        return (arr[n-1] % 10) + sumLastDigit(n-1, arr);
    }
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum of last digits: %d\n", sumLastDigit(n, arr));
    return 0;
}

