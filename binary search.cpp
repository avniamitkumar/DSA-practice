#include <iostream>
using namespace std;
int binary(int *arr,int n,int low ,int high)
{
    while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid] == n)
    {
       return mid;
    }
    if(arr[mid]<n)
    {
        low=mid+1;
    }
    if(arr[mid]>n)
    {
        high=mid-1;
    }
    else{
        return -1;
    }

}}
int main()
{
   int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binary(array,x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);


}
