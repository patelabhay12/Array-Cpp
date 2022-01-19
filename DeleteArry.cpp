// 1. Delete Element From An Array.

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
        cout<<arr.A[i]<<endl;
    }
}

void Delete(struct Array *arr,int index)
{
    if(index<arr->size)
    {
        int x=arr->A[index];
        int i;
        for(i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}
int main()
{
    struct Array arr={{1,2,3,4,5},20,5};
    Delete(&arr,3);
    Display(arr);
    return 0;
}