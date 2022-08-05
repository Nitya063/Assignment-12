#include<stdio.h>
#include<conio.h>
void print(int);
int main()
{
    int n;
    printf("Enter the limit.\n");
    scanf("%d",&n);
    print(n);
    return 0;
}
void print(int n)
{
    if(n==0)
        return;
    printf("%d\n",(2*n)-1);
    print(n-1);

}


