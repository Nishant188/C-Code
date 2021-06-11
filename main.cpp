//FullyDynamicArrayCreations 

#include <iostream>
struct Array{
 int *A;
 int Size;
 int length; 
}; 
void display(struct Array arr){
  printf("Elements are :/");
  for(int i =0 ;i<arr.length;i++)
  printf("\n%d",arr.A[i]);
}
int main() {
  struct Array arr;
  int n;
  printf("Enter the Size of An Array you want to create in heap:");
  scanf("%d",&arr.Size);
  arr.A = new int(arr.Size);
  arr.length=0;
  printf("Enter the Numbers In Array:");
  scanf("%d",&n);
  printf("Enter the Numbers in Array:");
  for(int i=0; i<n; i++)
  scanf("%d",&arr.A[i]);
  arr.length = n;
  display(arr);
return  0;
}