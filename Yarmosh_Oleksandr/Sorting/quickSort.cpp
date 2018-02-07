#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
using namespace std;
void QuickSort(int *arr, int left, int right) 
{
int l = left;
int r = right - 1;
int size = right - left;
if(size > 1) {
int pivot = arr[rand() % size + l];
while(l < r) {
while(arr[r] > pivot && r > l) {
r--;
}
while(arr[l] < pivot && l <= r) {
l++;
}
if(l < r) {
swap(arr[l], arr[r]);
l++;
}
}
QuickSort(arr, left, l);
QuickSort(arr, r, right);
}
}
//Create a random array
int* makeRandomArray(int size) {
int* array = new int[size];
srand(time(NULL));
for (int i = 0; i < size; i++) {
array[i] = (100 * rand()) / RAND_MAX;
}
return array;
}
void printArray(int *arr, int size) {
for(int i = 0; i < size; i++) {
cout << arr[i] << " ";
}
}

int main() 
{
    
int size = 100000; //����� ���. 100-100�

int *array = makeRandomArray(size);

QuickSort(array, 0, size);

printArray(array, size);
delete [] array;
clock_t t2 = clock();
   cout << "Time: " << (double) (t2-1) / (double)CLOCKS_PER_SEC << '\n';
system ("pause");
return 0;
}
