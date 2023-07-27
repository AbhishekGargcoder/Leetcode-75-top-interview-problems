//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n,int i)  
    {
        int left = 2*i+1, right= 2*i+2;
        int maxInd = i;
        if(left>n-1) return;
        else {if(arr[left]>arr[maxInd]) 
             maxInd = left;}
        if(right>n-1) ;
        else  { if(arr[right]>arr[maxInd])
              maxInd = right;}
        if(maxInd ==i) return ;
        swap(arr[maxInd],arr[i]);
        heapify(arr,n,maxInd);
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  //maxHeap O(n) 
    { 
      /*   int i=n-1;
         for(;i>=0;i--) {
             int left = 2*i+1;
             int right= left+1;
             int j=i;
             if(left>n-1) continue;
             else{
                 if(arr[left]>arr[j])
                   j= left;
                 if(right>n-1) continue;
                 else{
                     if(arr[right]>arr[j])
                       j=right;
                     }
                }
                if(j!=-1){
                    swap(arr[j], arr[i]);
                }
         }*/
         for(int i=n/2-1;i>=0;i--)
            heapify(arr,n, i);
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr, n);
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
        
        
           
           
        
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends