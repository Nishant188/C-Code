// Now I create Fixed Size Array
#include <iostream>
struct Array{
 int A[20];
 int Size;
 int length; 
}; 
void display(struct Array arr){
  printf("Elements are :/");
  for(int i =0 ;i<arr.length;i++)
  printf("\n%d",arr.A[i]);
}
int main() {
  struct Array arr = {{1,2,3,4,5},20,5};
  display(arr);
return  0;
}