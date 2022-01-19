// 1.Insertion of Element 
// 2.Diaply of Element 
// 3. Append A element 
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
void Append(struct Array *arr,int n)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=n;
    }
}

void Insertatindex(struct Array *arr,int index,int e)
{
    if(index && index<arr->size)
    {
        int i;
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=e;
        arr->length++;
    }
}
int main()
{
    struct Array arr={{1,2,3,4,5},20,5};
    Display(arr);
   // Append(&arr,10);
    Insertatindex(&arr,4,13);
    Display(arr);
    return 0;
}
