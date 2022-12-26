#include <stdio.h>
int delete_duplicate(int arr[], int n)
{
int ret=n,i,j,k;
// Please add your code Here
 for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {  
            // use if statement to check duplicate element  
            if ( arr[i] == arr[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < n - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                ret--,n--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  


return ret;
}
int main()
{
int n;
printf("\n Enter the array size ");
scanf("%d", &n);
int array[n];
int i;
printf("\n Enter the array values ");
for (i = 0; i < n; i++)
{
scanf("%d", &array[i]);
}
printf("\nArray value before removing duplicate ");
// Please add your code Here
for(int i=0;i<n;++i) printf("%d ",array[i]);
printf("\n");

n = delete_duplicate(array, n);

//print the array without duplicates
// Please add your code Here
printf("\nArray value after removing duplicate ");

for(int i=0;i<n;++i) printf("%d ",array[i]);

return 0;
}



::::::  OUTPUT ::::::::

Enter the array values 2 2 1 1 9 8 

Array value before removing duplicate 2 2 1 1 9 8 

Array value after removing duplicate 2 1 9 8 