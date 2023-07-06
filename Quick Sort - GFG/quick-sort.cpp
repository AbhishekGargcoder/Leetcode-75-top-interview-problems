//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
   /* public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
    }*/
    
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int l, int h)
    {
         if(l<h){
           int p=partition (arr,l,h);
         quickSort(arr,l,p-1);
          quickSort (arr,p+1,h);
         }
    }
    
    public:
    int partition (int a[], int start, int end)
    {
      //  if(l>=h) return l;
     /*  int p=h;
       int i=l,j=h-1;
       while(i<=j){
           while(arr[j]>arr[p]){
               j--;
           } 
         // if(j<i) {swap(arr[p],arr[j]);return j;}
           while(arr[i]<arr[p])
              i++;
           if(i<j) swap(arr[i],arr[j]);
       }
       swap(arr[p],arr[i]);
       return i;*/
int pivot = a[end]; // pivot element  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends