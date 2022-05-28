//PROGRAM TO FIND FACTORS OF A GIVEN NUMBER
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the desired number :");
    scanf("%d",&n);
    printf("Factors of %d are :\n",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}
