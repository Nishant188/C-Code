// Insert a value at a particular index position in the array.
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
void Insert(struct Array *arr,int index,int x){
  if(index >= 0 && index <= arr->length)
  {
    for(int i =arr->length; i>index; i--)
    {
      arr->A[i] = arr->A[i-1]; 
    }
    arr->A[index] = x;
    arr->length++;
  }
}
int main() {
  struct Array arr = {{1,2,3,4,5},20,5};
  // Append(&arr,10);
  Insert(&arr,4,15);
  display(arr);
return  0;
}