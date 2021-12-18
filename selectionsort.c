#include<stdio.h>
void readnumber(int [],int);
void selectionsort(int [],int);
void swapnumber(int *,int *);
void displaynumber(int [],int);

void main()
{
    int a[100],n;
    printf("\nEnter the no: of numbers  : \t");
    scanf("%d",&n);
    
    readnumber(a,n);
    selectionsort(a,n);
    displaynumber(a,n);
    
}


void readnumber(int a [],int n)
{
    int i;
    printf("\nEnter %d numbers to be sorted :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}



void selectionsort(int a [],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=1+i;j<n;j++)
        if(a[j]<a[min])
        {
            min=j;
        }
        if(min != i)
        {
        swapnumber(&a[i],&a[min]);
        }
      
    }
}


void swapnumber(int *a,int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}


void displaynumber(int a[],int n)
{
    int i;
    printf("\nOrder of numbers after getting sorted is :\t");
    for(i=0;i<=n;i++)
    {
        printf("\t%d",a[i]);
    }
}


