#include<stdio.h>
#include<conio.h>
void print(int);
int main()
{
    int n;
    printf("Enter the number.\n");
    scanf("%d",&n);
    print(n);
    return 0;
}
void print(int n)
{
    int r;
    if(n==1)
    {
        printf("1");
        return;
    }
    r=n%2;
    print(n/8);
    printf("%d",r);
}





