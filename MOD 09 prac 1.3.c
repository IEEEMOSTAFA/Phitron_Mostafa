/*#include<stdio.h>
void display(int n)
{
    if(n==0)
    {
       return ;
    }

    else
    {
        display(n-1);
        printf("%d ",n);
    }
}
int main()
{
    int x=5;
    display(x);
    return 0;
}
*/
#include<stdio.h>
int display(int n)
{
    if(n==0)
        return;
    else
    display(n-1);
    printf("%d\t",n);
}
int main()
{
    int n;
    printf("Enter the number of N\n");
    scanf("%d",&n);
    display(n);
    return 0;

}
