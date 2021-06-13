// Linear Searching Array Improvement!!
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
void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
int LinearSearch(struct Array *arr1,int key){
  for(int i=0;i<arr1->length;i++)
  {
    if(key==arr1->A[i])
    {
      // swap(&arr1->A[i], &arr1->A[i-1]); //Transpostion
      swap(&arr1->A[i], &arr1->A[0]);//Move to front/Head
      return i-1;
    }
  }
  return -1;
}
int main() {
  struct Array arr1 = {{12,34,45,23,76,89,74,78},10,8};
  printf("Found At INDEX : %d",LinearSearch(&arr1,78));
  display(arr1);
return  0;
}