// 1.Binary Search in Cpp
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};


int BinaryS(struct Array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr.A[mid]==key)
        {
            return mid;
        }
        else if(arr.A[mid]<key)
        {
            l=mid+1;
        }
        else{
            h=mid+1;
        }
    }
    return -1;

}
// Recursive Binary Search

int RBinary(int A[],int l,int h,int key)
{
    if(l<=h)
    {
        int mid=(l+h)/2;
        if(A[mid]==key)
        {
            return mid;

        }
        else if(A[mid]>key)
        {
            return RBinary(A,l,mid-1,key);

        }
        else{
            return RBinary(A,mid+1,h,key);
        }

    }
    return -1;
}
int main()
{
    struct Array arr={{1,2,3,4,5,6,7,8,9,1,22,33,45,66,78,89},20,16};
    int l,h;
    l=0;
    h=arr.length-1;
    int key=66;
    cout<<RBinary(arr.A,l,h,key);
    return 0;
}