// Append a value in last position of the array
#include <iostream>
struct Array{
 int A[20];
 int Size;
 int length; 
}; 
void display(struct Array arr){
  printf("After Appending Elements are :/");
  for(int i =0 ;i<arr.length;i++)
  printf("\n%d",arr.A[i]);
}
void Append(struct Array *arr,int x)
{
  if(arr->length<arr->Size)
    arr->A[arr->length++] = x; 
}
int main() {
  struct Array arr = {{1,2,3,4,5},20,5};
  Append(&arr,10);
  display(arr);
return  0;
}