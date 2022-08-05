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
    if(n==0)
    {
        return;
    }
    r=n%10;
    printf("%d",r);
    print(n/10);

}





