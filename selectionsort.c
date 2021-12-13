#include<stdio.h>
void readarray(int [],int);
void printarray(int [],int);
void selectionsort(int [],int);
void swapnumber(int *,int *);

void main()
{
    int a[100],n;
    printf("\nThe number of elements whis is needed to be orted is  : ");
    scanf("%d",&n);
    
        readarray(a,n);
        printarray(a,n);
        selectionsort(a,n);
        
}

void readarray(int a[],int n)
{
    int i;
    printf("\nEnter %d elements which is needed to be sorted:  \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}

void printarray(int a[],int n)
{
    int i;
    printf("\nThe %d elements after sorting is :  ",n);
    for(i=0;i<=n;i++)
    printf("\t%d",a[i]);
}

void selectionsort(int a[],int n)
{
    int i,j,min,ind;
    for(i=0;i<n;++i)
    min = a[i];
    ind = i;
    {
        for(j=i+1;j<n-1;++j)
        if(a[j]<min)
    
        {
            min = a[j];
            ind = j;
        }
       
    }
     swapnumber(&a[i],&a[min]);
    
}

void swapnumber(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


