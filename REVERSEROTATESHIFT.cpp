
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i=0;
    cout<<"Elements are"<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
void Reverse1(struct Array *arr)
{
    int *B;
    B=new int[arr->length];
    int i,j;
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}
void Reverse2(struct Array *arr)
{
    int i,j,temp;
    for (i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}
int main()
{
    struct Array arr={{1,2,3,4,5,6,7,8,9},20,9};
   // Reverse1(&arr);
   // Display(arr);
    cout<<endl;
    cout<<"Second Method Of reversing of Array :"<<endl;
    Reverse2(&arr);
    Display(arr);
    
    return 0;
}