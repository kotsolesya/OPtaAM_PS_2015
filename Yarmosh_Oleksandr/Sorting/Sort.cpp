 #include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void bubble(int *array, int length);
void insertion(int *array, int length);
void selection(int *array, int length);
void shell(int *array, int length);

void printArr(int *array, int length);

main(){
	srand(time(NULL));
	int key;
	long size;
	cout << "Write number of the elements in array: ";
	cin >> size;
	int numbers[size];
	for(int i = 0; i < size; i++){
		numbers[i] = rand();
	}
	cout << "Choose method of sort:\n1.Bubble\n2.Selection\n3.Insertion\n4.Shell\n";
	cin >> key;
	clock_t start = clock();
	switch(key){
		case 1:
			bubble(numbers, size);
			break;
		case 2:
			selection(numbers, size);
			break;
		case 3: 
			insertion(numbers, size);
			break;
		case 4:
			shell(numbers, size);
			break;
		default: 
			cout << "Wrong number!!" << endl;	

	}

	clock_t finish = clock();
	cout << "\nSeconds: " << (double)(finish - start)/(double) CLOCKS_PER_SEC << endl;
	system("pause");
}
void bubble(int *arr, int length){
	int temp;
	for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    }
}
void selection(int *array, int length){
	int x, k;
	 for(int i=0; i < length; i++) {   	
	    k = i; 
		x = array[i];
	
	    for(int j = i + 1; j < length; j++)	
	      if (  array[j] < x ) {
	        k=j; x=array[j];	        
	      }
	
	    array[k] = array[i]; array[i] = x;   	
	  }
}
void insertion(int *array, int length){
	int temp, item;
    for (int counter = 1; counter < length; counter++)
    {
        temp = array[counter]; 
        item = counter-1;
        while(item >= 0 && array[item] > temp)
        {
            array[item + 1] = array[item];
            array[item] = temp;
            item--;
        }
    }
}
void shell(int *array, int length){
	int i, j, k, t;
	for(k = length/2; k > 0; k /=2)
        for(i = k; i < length; i++)
        {
            t = array[i];
            for(j = i; j>=k; j-=k)
            {
                if(t < array[j-k])
                    array[j] = array[j-k];
                else
                    break;
            }
            array[j] = t;
        }
}
void printArr(int *array, int length){
	for(int i = 0; i < length; i++){
		cout << array[i] << " ";
	}
}
