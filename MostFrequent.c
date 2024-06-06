// Write a program to input an array (array size and array elements). Print the number of unique elements in the array of integers (elements that do not repeat).
#include<stdio.h>
int main()
{
	int size, arr[1000], count;
	
    printf("Nhap vao kich thuoc mang (size of array): ");
    scanf("%d", &size);
  
  	for(int i = 0 ; i < size; i++)
    {   
        printf("Nhap vao gia tri [%d]: ", i);
        scanf(" %d", &arr[i]);
    }

    printf("\nDANH SACH CAC PHAN TU TRONG MANG: \n"); // In cac so trong array
	for(int i=0; i<size;i++)
    {	
	    printf("%d\t", arr[i]);
	}
	
	int result = 0;
	
// Print unique elements in the array
//    printf("\nCAC PHAN TU CHI XUAT HIEN MOT LAN: \n"); //=> De bai khong hoi
    for (int i = 0; i < size; i++) 
    {
        int count = 0;
        for (int j = 0; j < size ; j++)
        {
           if (arr[i] == arr[j])
            {
                count++;
            }
    	}
        if (count == 1) 
        { 
//printf("%d\t", arr[i]);  //=> De bai khong hoi
            result++;
        }
    }
    printf("\n Result=so luong cac so chi xuat hien 1 lan : %d", result );
    return 0;
}

