
#include <stdio.h>

int main()
{
   int i, j, rows,val;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for(i=1; i<=rows; i++)
    {
        val++;
        for(j=i; j<rows; j++)
        {
            printf("  ");
        }

        
        for(j=1; j<=i; j++)
        {
            printf("%d",val);
            printf(" ");            
            val++;
        }
        val--;

        
        printf("\n");
    }
    
    return 0;
}
