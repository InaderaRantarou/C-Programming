// Write a program to input an array (array size and array elements). Print the most frequent element in the array of integers.
#include<stdio.h>
int main() 
{
    int size;
    int maxfreq = 0, position =0; //luu vi tri cua so trong mang
    
    printf("Nhap vao kich thuoc mang (size of array): ");
    scanf("%d", &size);
    
    int arr[size];  
  	for(int i = 0 ; i < size; i++)
    {  
        printf("Nhap vao gia tri [%d] :  ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {	//dem tan so xuat hien cua 1 so
        int freq = 1;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                freq = freq + 1;
            }
        }      
        if(freq > maxfreq)
        {
            maxfreq = freq;
			position = i; //luu vi tri cua so maxfreq_number trong mang (so thu i)
        }
    }
    printf("so xuat hien nhieu nhat la: %d", arr[position]);
    printf("\nSo lan xuat hien: %d", maxfreq); // De bai khong hoi
}
