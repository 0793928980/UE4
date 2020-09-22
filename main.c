//
//  main.c
//  ThayKhang
//
//  Created by MACBOOK PRO on 9/22/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//
//Liet Ke Cac So nguyen to nho hon n.



#include <stdio.h>
#include<math.h>
#define Max 100
int KTNguyenTo(int n)//Bai120
{
    int i;
    if(n<2)
    {
        return 0;
    }else if( n>2)
    {
        if(n%2==0)
        {
            return 0;
        }
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
    
}

void LietKeNguyento(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(KTNguyenTo(i) == 1)
        {
            printf("%d ",i);
        }
    }
}


void LietKeCP(int n)
{
    int i,j=1;
    int cp=0;
    int t=0;
    while(t<n)
    {
        cp=0;
        for(i=1;i<=j;i++)
        {
            if(i*i==j)
            {
                cp=1;
            }
        }
        if(cp==1)
        {
            printf("%d ",j);
            t++;
        }
        j++;
    }
   
   
}
void Nhapint(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void Inint(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void Nhap(float a[], int n)
{
   
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%f",&a[i]);
        
    }
        
}

void in(float a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%.2f ",a[i]);
    }
}

float TimMaxinArray(float a[], int n)//Bai122
{
    float max=a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
             max=a[i];
        }
    }
    return max;
}

int TimVitriMin(int a[], int n)//Bai123
{
    int min=a[0];
    int i;
    int temp=0;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            temp=i;
        }
    }
    return temp;
}
int KTgiatrichanbehon2004(int a[], int n) //bai124
{
    int kt=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i] %2==0 && a[i]<2004)
        {
            kt=1;
        }
    }
    return kt;
    
}

int DemSontInArray(int a[], int n)//bai125
{
    int dem=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(KTNguyenTo(a[i])==1)
        {
            dem++;
        }
    }
    return dem;
}
float TongAm(float a[], int n)//Bai126
{
    float tong=0;
    
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            tong+=a[i];
        }
    }
    return tong;
}

void sapxepsothuc(float a[], int n)
{
    int i,j;
    float t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}


void LietKesochan(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i] % 2 ==0)
        {
            printf("%d ", a[i]);
        }
    }
}


void LietKeVitriAmsothuc(float a[], int n)//bai133
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",i);
        }
    }
}
float TimgiatriDuongfirst(float a[], int n)//bai135
{
    int i;

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            return a[i];
        }
    }
    return -1;
}

int TimSochanCuoi(int a[], int n)//bai136
{
    int i;
    for(i=n;i>0;i--)
    {
       if(a[i] % 2 ==0)
        {
            return a[i];
        }
    }
    return -1;
}


int TimVitriNhoNhat(int a[], int n)//Bai137
{
    int i;
    int min =a[0];
    int temp=0;
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            temp=i;
        }
    }
    return temp;
}


int TimvitriChanDauTien(int a[], int n)//Bai138
{
    int i;
  
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            return i;
        }
    }
    return -1;
}


int sohoanthien(int n)
{
    int tong=0;
    for (int i=1 ; i<n; i++)
        if(n%i==0)
            tong = tong + i;
    if (tong == n)
       return 1;
    return 0;
}
int vitrihoanthiencuoi(int a[],int n)//bai139
{
    for(int i=n-1; i>=0; i--)
        if(sohoanthien(a[i]==1))
            return i;
    return -1;
}
int TimGiatriDuong(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            return a[i];
        }
    }
    return -1;
}

int TimGiatriDuongNhoNhat(int a[], int n)//Bai140
{
    int i=0;
    int min =TimGiatriDuong(a, n);
    if(min==-1)
    {
        return -1;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0 && min>a[i])
        {
            min =a[i];
        }
       
        
    }
    return min;
}



int TimVTGiaTriDuongNhoNhat(int a[], int n)//Bai141
{
    int i;
    int dem=0;
    int min=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            dem++;
            min=i;
            break;
        }
    }
    
    if(dem==0)
    {
        return -1;
    }
    for(i=i+1;i<n;i++)
    {
        if(a[i]>0 && a[min]>a[i])
        {
            min=i;
        }
    }
    return min;
}

float GiatriNhoNhat(float a[], int n)//Bai142
{
    int i;
    float min=a[0];
    
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}

int TimSoNguyenToDauTien(int a[], int n)//Bai144
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(KTNguyenTo(a[i])==1)
        {
            return a[i];
        }
    }
    return -1;
}

int TimSoHTDautien(int a[], int n)//Bai145
{
    int i;
    for(i=0;i<n;i++)
    {
        if(sohoanthien(a[i]==1))
        {
            return a[i];
        }
    }
    return -1;
}

float TimGiatriAmDauTien(float a[], int n)//Bai146
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            return a[i];
        }
    }
    return -1;
        
}

float TimGiatriDuongCuoiCung(float a[], int n)//Bai147
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>0)
        {
            return a[i];
        }
    }
    return -1;
}

int TimSoNTCuoiCung(int a[], int n)//Bai148
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(KTNguyenTo(a[i])==1)
        {
            return a[i];
        }
    }
    return -1;
}

int TimSoHTCuoiCung(int a[], int n)//Bai149
{
    int i;
    for(i=n-1;i>=0;i++)
    {
        if(sohoanthien(a[i]==1))
        {
            return a[i];
        }
    }
    return -1;
}
float TimGiaAm(float a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            return a[i];
        }
    }
    return -1;
}
float TimGiaTriAmMax(float a[], int n)//Bai150
{
    int i;
    
    float max=TimGiaAm(a, n);
    if(max==0)
    {
        return -1;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0 && max<a[i])
        {
            max= a[i];
        }
    }
    return max;
    
}
int TimVTSNTDau(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(KTNguyenTo(a[i])==1)
        {
            return i;
        }
    }
    return -1;
}

int TimSNTMax(int a[], int n, int vitringuyentodau)//Bai151
{
    int i;
    int max=a[vitringuyentodau];
    for(i=vitringuyentodau;i<n;i++)
    {
        if(max<a[i] && KTNguyenTo(a[i])==1)
        {
            max = a[i];
        }
    }
    return max;
}

int TimSoHTDauTien(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(sohoanthien(a[i])==1)
        {
            return i;
        }
    }
    return -1;
}

int TimSoHTNN(int a[],int n ,int VTHoanThienDau)//Bai152
{
    int i;
    int min = a[VTHoanThienDau];
    for(i=VTHoanThienDau+1;i<n;i++)
    {
        if(min>a[i] && sohoanthien(a[i]==1))
        {
            min = a[i];
        }
    }
    return min;
}

int TimVTChanDauTien(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            return i;
        }
    }
    return -1;
}

int TimGiaTriChanNN(int a[], int n, int VTCDT)//Bai153
{
    int i;
    int min = a[VTCDT];
    for(i=VTCDT+1;i<n;i++)
    {
        if(min>a[i] && a[i] %2 == 0)
        {
            min=a[i];
        }
    }
    return min;
}

float TimVTGiaTriAmDauTien(float a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            return i;
        }
    }
    return -1;
}

float TimGiaTriAmNN(float a[], int n, int VTADT) //Bai154
{
    int i;
    float min = a[VTADT];
    for(i=0;i<n;i++)
    {
        if(min<a[i] && a[i]<0)
        {
            min=a[i];
        }
    }
    return min;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0;
    float a[Max];

    do{
        printf("Nhap N: ");
        scanf("%d",&n);

    }while(n<0 || n>Max);
    Nhap(a, n);
    printf("----- Mang Ban Dau-----\n");
    in(a, n);
    
    int VTCDT = TimVTGiaTriAmDauTien(a, n);
    
    printf("\nGia Tri Am NN la: %.f\n",TimGiaTriAmNN(a, n, VTCDT));
    
    return 0;
    
    
}
