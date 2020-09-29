//
//  main.c
//  Bai169
//
//  Created by MACBOOK PRO on 9/27/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#define MAX 100

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = \n",i);
        scanf("%d",&a[i]);
    }
}
void In(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//Hay Tim so Chan lon Nhat nho hon moi gia tri le trong Mang.
int VitriLeDautien(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
            return i;
        }
    }
    return -1;
}

int TimSoleNN(int a[], int n, int Vitridautien)
{
    int i;
    int MinLe = a[Vitridautien];
    for(i=Vitridautien+1;i<n;i++)
    {
        if(a[i]%2!=0 && MinLe>a[i])
        {
            MinLe = a[i];
        }
    }
    return MinLe;
    
}




//Tim so le lon nhat nho hon cac gia tri chan


//int timSoleNN(int a[], int n)
//{
//    int i;
//    int min =0;
//    for(i=0;i<n;i++)
//    {
//        if(a[i]%2!=0 && min>a[i])
//        {
//            min=a[i];
//        }
//    }
//    return min;
//}
//
//int TimSoChanMax(int a[], int n, int SoleNN)
//{
//    int i;
//    int Max=0;
//
//    for(i=0;i<n;i++)
//    {
//        if(a[i]%2==0 && a[i]<SoleNN && Max<a[i])
//        {
//            Max = a[i];
//        }
//    }
//    return Max;
//
//}







//int VitrichanDautien(int a[], int n)
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        if(a[i]%2==0)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int TimsoChanNN(int a[], int n, int VitriDautien)
//{
//    int i;
//    int MinChan=a[VitriDautien];
//    for(i=VitriDautien+1;i<n;i++)
//    {
//        if(a[i]%2==0 && MinChan<a[i])
//        {
//            MinChan = a[i];
//        }
//    }
//    return MinChan;
//
//}
int main(int argc, const char * argv[]) {
    // insert code here...
   int n;
    
    int a[MAX];
    
    do{
        printf("Nhap N: \n");
        scanf("%d",&n);
        
    }while(n<0 || n>MAX);
    
    Nhap(a, n);
    
    printf("\n---------- Mang a -------------\n");
    In(a, n);
    
    int Vitriledautien = VitriLeDautien(a, n);
    
    if(Vitriledautien==-1)
    {
        printf("Khong co Phan tu nao lon hon so le\n");
        
    }else
    {
        int Minle = TimSoleNN(a, n, Vitriledautien);
        int sochan = Minle-1;
        if(sochan%2==0)
        {
            printf("So chan lon nhat nho hon toan bo gia tri le trong mang: %d\n",sochan);
        }else
        {
            printf("Khong co phan tu chan nao nho hon so le");
        }
        
        
    }
    
   
    
    
    return 0;
}
