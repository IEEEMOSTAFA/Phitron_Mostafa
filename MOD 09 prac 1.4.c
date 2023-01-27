#include<stdio.h>
int display(int n)
{
    if(n==0)
        return;
    else
    //display(n-1);
    printf("%d\t",n);
    display(n-1);
}
int main()
{
    int n;
    printf("Enter the number of N\n");
    scanf("%d",&n);
    display(n);
    return 0;

}
