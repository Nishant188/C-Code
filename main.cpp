// Deleting a value at a particular index position in the array.
#include <iostream>
struct Array{
 int A[20];
 int Size;
 int length; 
}; 
void display(struct Array arr){
  printf("\nAfter Deleting Elements are :/");
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
int Delete(struct Array *arr,int index){
  int n=0;
  if(index>=0 && index <= arr->length){
    n = arr->A[index];
    for(int i = index; i<arr->length-1; i++)
    {
      arr->A[i] = arr ->A[i+1];
    }
    arr->length--;
    return n;
  }
  return 0;
}
int main() {
  struct Array arr1 = {{1,2,3,4,5},20,5};
  // Append(&arr,10);
  // Insert(&arr,4,15);
  // Delete(&arr1,3);
  printf("\n%d",Delete(&arr1,0));
  display(arr1);
return  0;
}