#include<stdio.h>

void star1(int a)
{        
    for(int i=0;i<a;i++)
        {
            printf("*");
        }
}

void star2(int a)
{        

    for(int j=0;j<a;j++)
        {
            printf(" ");
        }
}

int main()
{    
    int n;
    
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        star2(n-i);
        star1(i);
        star1(i-1);
        
        printf("\n"); 
    }   
    for (int i=1;i<=n;i++)
    {
        star2(i);
        star1(n-i);  
        star1(n-i-1);
          
        printf("\n"); 
    }

}