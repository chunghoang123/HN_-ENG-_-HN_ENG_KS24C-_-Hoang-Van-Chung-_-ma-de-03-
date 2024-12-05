#include<stdio.h>
int main()
{
	int chon;
	int a[101];
	int n;
	int xoa;
	int giatri;
	int batdau;
	int ket;
	int mid;
	int check;
	do
	{
		printf("MENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang theo dang(a[0]=1...)\n");
		printf("3. Dem so luong cac so nguyen to co trong mang\n");
		printf("4. Tim gia tri nho thu hai trong mang\n");
		printf("5. Them 1 phan tu tai 1 vi tri ngau nhien trong mang, phan tu moi them vao vu tri them vao phai do nguoi dung nhap vao\n");
		printf("6. Xoa phan tu tai mot vi tri cu the(nguoi dung nhap vao)\n");
		printf("7. Sap xep mang theo thu tu tang dan (insertion sort)\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay ko(binary search)\n");
		printf("9. Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co o trong mang\n");
		printf("10. Dao nguoc thu tu cac phan tu trong mang\n");
		printf("11. Thoat\n");
		printf("moi chon 1-11: ");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1:
			{
				printf("moi nhap kich thuoc mang: ");
				scanf("%d",&n);
				for(int i=0;i<n;i++)
				{
					printf("a[%d] = ",i);
					scanf("%d",&a[i]);
				}
				printf("\n");
				break;
			}
			case 2:
			{
				printf("gia tri trong mang: ");
				for(int i=0;i<n;i++)
				{
					printf("a[%d]= %d, ",i,a[i]);
				}
				printf("\n");
				break;
			}
			case 3:
			{
				printf("cac gia tri la so nguyen to trong mang: ");
				for(int i=0;i<n;i++)
				{
					int m=a[i];
					int ngto=1;
					if(m<=1)
					{
						ngto=0;
					}
					else
					{
						for(int j=2;j<m;j++)
						{
							if(m%j==0)
							{
								ngto=0;
								break;
							}
						}
					}
					if(ngto)
					{
						printf("%d, ",a[i]);
					}
				}
				printf("\n");
				break;
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				break;
			}
			case 6:
			{
				printf("nhao vt xoa(0-%d): ",n-1);
				scanf("%d",&xoa);
				if(xoa<0&&xoa>=n)
				{
					printf("sai vi tri");
				}
				else
				{
					for(int i=xoa;i<n-1;i++)
					{
						a[i]=a[i+1];
					}
					n--;
					printf("mang da xoa");
					for(int i=0;i<n;i++)
					{
						printf("%d, ",a[i]);
					}
				}
				printf("\n");
				break;
			}
			case 7:
			{
				for (int i = 1; i < n; i++) {
			    	int	key = a[i];
			    	int j = i - 1;
			     	while (j >= 0 && a[j] > key) {
			            a[j + 1] = a[j];
			            j = j - 1;
				    }
				    a[j + 1] = key;
				}
				printf("Mang duoc sap xep theo thu tu tang dan: ");
				for (int i = 0; i < n; i++) {
				    printf("%d ", a[i]);
				}
				printf("\n");
				break;
			}
			case 8:
			{
				printf("moi nhap gia tri can tim\n");
				scanf("%d",&giatri);
				batdau=0;
				ket=n-1;
				while(batdau<=ket)
				{
					mid=batdau+(ket-batdau)/2;
					if(a[mid]==giatri)
					{
						printf("phan tu %d xuat hien tai vi tri a[%d]\n", giatri,mid);
						check=1;
						break;
					}
					if(a[mid]<giatri)
					{
						batdau=mid+1;
					}
					else
					{
						batdau=mid-1;
					}
				}
				if(check==0)
				{
					printf("gia tri ko ton tai\n");
					break;
				}
				printf("\n");
				break;
			}
			case 10:
			{
				printf("dao nguoc thu tu");
				for(int i=n-1;i>=0;i--)
				{
					printf("a[%d]= %d",i,a[i]);
				}
				break;
			}
			case 11:
				default:
					printf("Thoat");
					break;
		}
		
	}while(chon>0&&chon<11);
	
	
	
	
}
