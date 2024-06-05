#include <stdio.h>
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arrays[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) 
	  {
        scanf("%d", &arrays[i]);
    }
    
    printf("Array in reverse order: ");
    for(int i = size - 1; i >= 0; i--) 
    {
        printf("%d ", arrays[i]);
    }
    return 0;
}
