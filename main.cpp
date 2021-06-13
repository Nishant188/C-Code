// Linear Searching Array!!
#include <iostream>
struct Array{
 int A[10];
 int Size;
 int length; 
}; 
void display(struct Array arr1){
  for(int i =0 ;i<arr1.length;i++)
  printf("\n%d",arr1.A[i]);
}
int LinearSearch(struct Array arr1,int key){
  for(int i=0;i<arr1.length;i++)
  {
    if(key==arr1.A[i])
      return i;
  }
  return -1;
}
int main() {
  struct Array arr1 = {{12,34,45,23,76,89,74,78},10,8};
  printf("Found At INDEX : %d",LinearSearch(arr1,2));
  display(arr1);
return  0;
}