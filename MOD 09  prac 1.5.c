/*#include<stdio.h>
int display(int n)
{
    if(n==0)
        return;
    else
   return n+display(n-1);
    printf("%d\t",display(n));

}
int main()
{
    int n;
    printf("Enter the number of N\n");
    scanf("%d",&n);
    display(n);
    printf("%d\n",display(n));
    return 0;

}
*/
#include<stdio.h>
 int display(int n)
{
     int sum;
    if(n==0)
        return ;
    else
    return n+display(n-1);
}
int main()
{
    int n;
    printf("please,Enter the sum number\n");
    scanf("%d",&n);
    display(n);
   printf("%d\n",display(n));
    return 0;

}
