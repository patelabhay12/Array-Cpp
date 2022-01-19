// 1.Linear search In Cpp
// 2. Binary search In Cpp

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
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int Linearse(Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            
            swap(&arr->A[i],&arr->A[i-1]); //Treansposition swap by previous index
            swap(&arr->A[i],&arr->A[0]);
            //front menthod for frequntly serching it will be easy 
            return i;
        }
        return -1;
    }
}

int main()
{
    Array arr={{1,2,3,4,5,6,7,8,9,12,34,56,78,98,76,54,33},20,17};
    int key=80;
    cout<<Linearse(arr,key)<<endl;

    return 0;

}