// 1.Binary Search in Cpp
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Display(struct Array arr)
{
    int i=0;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
void InsertSort(struct Array *arr, int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
    {
        return ;
    }
    
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
    
}

int Issorted(struct Array arr)
{
    int i;
    for (i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return 0;
        }

    }
    return 1;
    
}
void Rarrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0){i++};
        while(arr->A[j]>=0){j--;}
        if(i<j)
        {
            swap(&ar->A[i],&arr->A[j]);
        }
    }
}




int main()
{
    struct Array arr={{1,2,3,4,5},20,5};
   // InsertSort(&arr,20);
   cout<<Issorted(arr)<<endl;
    Display(arr);
    return 0;
}