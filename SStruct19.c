a// tao 1 struct employee (name, spH, hour)
//name : ten nhan vien
// sph Luong tren 1 gio
// hour so gio thuc nhan vien da lam trong thang

// tao 1 mang voi struct vua tao
// nhap lieu cho mang size
// in ra thong tin cua nhan vien theo chieu doc

#include <stdio.h>
int main()
{
	struct Employee
	{
		char name[20];
		int sPH;
		int hour;
	};	
	int size;
	int sum = 0;
	printf("Input size: ");
	scanf("%d", &size);
	
	struct Employee emps[size];
	for(int i = 0; i < size; i++)
	{
		printf("Input name: ");
		fflush(stdin);
		gets(emps[i].name);
		printf("Input salary per hour: ");
		scanf("%d",&emps[i].sPH);
		printf("Input hour: ");
		scanf("%d",&emps[i].hour);
	}	
	printf("%3s %10s %5s %5s %7s\n","No","Name","SpH","Hour","Total");
	for(int i = 0; i < size; i++)
	{
		printf("%3d %10s %5d %5d %7d\n",i+1,emps[i].name,emps[i].sPH,emps[i].hour,emps[i].sPH*emps[i].hour);
		sum += emps[i].sPH*emps[i].hour;
	}
	printf("------------------------------------\n");
	printf("%34d",sum);
}
