// exercise1 practiacl paper exam

#include<stdio.h>

int tong(int n1, int n2);       
int hieu(int n1, int n2);
int tich(int n1, int n2);
float thuong(int n1, int n2);
        
main()
{
	int n1, n2;
	int add, sub, mul;
	float div;
	char pheptinh;
	
	printf("\nNhap vao so thu nhat: ");
	scanf("%d", &n1);
	printf("\nNhap vao so thu hai: ");
	scanf("%d", &n2);
	printf("\nNhap vao phep tinh ban muon.\n");
	fflush(stdin);
	scanf("%c", &pheptinh);
	
	switch(pheptinh)
	{
		case '+':
			add = tong(n1,n2);           
			printf("\nTong cua 2 so: %f", add);
			break;
		case '-':
			sub = hieu(n1,n2);         
		    printf("\nHieu hai so la: %d", sub);
			break;
		case '*':
			mul = tich(n1,n2);          
		    printf("\nTich hai so la: %d", mul);
		    break;
		case '/':
			if(n2 != 0)
			 {
			    div = thuong(n1,n2);    
		        printf("\nThuong hai so la: %f", div);
		        }
		    else
			    printf("\nNhap so thu hai khac 0!");     
			break;
		default:
		    printf("\nKhong co phep tinh ban chon!");				
	}
	return 0;
}
                         
int tong(int n1, int n2)
{
	return (n1 + n2);
}
int hieu(int n1,int n2)
{
	return (n1 - n2);
}
int tich(int n1, int n2)
{
	return (n1 * n2);
}
float thuong(int n1, int n2)
{
	    return ((float)n1/(float)n2);    
}

