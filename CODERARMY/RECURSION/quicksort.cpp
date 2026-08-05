#include<iostream>
using namespace std;
int Partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void QuickSort(int arr[],int start,int end){
    if(start>=end){
        return;}
        int pivot=Partition(arr,start,end);
        QuickSort(arr,start,pivot-1);
        QuickSort(arr,pivot+1,end);
    
}
int main(){
    int arr[]={58,41,39,122,61};
    int n=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity of quicksort is O(nlogn) in average case and O(n^2) in worst case.
//space complexity is O(logn) in average case and O(n) in worst case.
//best case time complexity is O(nlogn) when the pivot divides the array into two equal halves.