

// sorting using merge sort

// algorithm

// --> algorithm works on the principle divide and conquer
// --> first we divide the array into sub problem
// --> then we find the solution of these sub problems
// --> and then merge all those sub problems.

// --> average and worst time complexity of merge sort is O(nlogn)
// --> space complexity is O(n)


// l :- initial point of first array

// mid :- end poind of first array

// mid+1 :- initial point of second array

// h :-   end point of second array 

// merge(arr,l,mid,h)
// {
    
// /* function used two merge sorted array in a single array separated by mid 


// /*


// }


// merge_sort(arr,l,h)
// {
//     /* it is used to divide the array into sub array */

// /* it is recursively divide the array */

// }






















#include<bits/stdc++.h>


using namespace std;



void merge(int arr[],int l,int mid,int h)
{
    
    int i=l;
    
    int temp[h+1];
    int j=mid+1;
    int c=l;
    
while(i<=mid && j<=h)
{
    
    if(arr[i] <arr[j])
    temp[c++]=arr[i++];
    
    
    else
    temp[c++]=arr[j++];
    
}


for(;i<=mid;i++)
{
    temp[c++]=arr[i];
}


for(;j<=h;j++)
temp[c++]=arr[j];
    
    
    
    for(int k=l ; k<=h; k++)
    arr[k]=temp[k];
}



void merge_sort(int arr[],int l,int h)
{
    
    if(l<h)
    {
        
        int mid=(l+h)/2;
        
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        
        merge(arr,l,mid,h);
        
    }
    
    
}



int main()
{
    int n;
    cin>>n;

    int arr[n];
    
    
    for(int i=0;i<n;i++)
        cin>>arr[i];



    
    
    merge_sort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}