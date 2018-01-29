#include <iostream>
#include <time.h>

using namespace std;

void bubble(int *array, int length);
void insertion(int *array, int length);
void selection(int *array, int length);
void shell(int *array, int length);
void printArr(int *array, int length);
void quickSort(int *arr, int left, int right);

int main()
{
	srand(time(NULL));
	int key;
	long size;
	cout << "Write number of the elements in array: ";
	cin >> size;
	int numbers[size];
	for(int i = 0; i < size; i++)
	{
		numbers[i] = rand();
	}
	cout << "Choose method of sort:\n1.Bubble\n2.Insertion\n3.Selection\n4.Shell\n5.QuickSort\n";
	cin >> key;
	clock_t start = clock();
	switch(key)
	{
		case 1:
			bubble(numbers, size);
			break;
		case 2:
			insertion(numbers, size);
			break;
		case 3: 
			selection(numbers, size);
			break;
		case 4:
			shell(numbers, size);
			break;
		case 5:
			quickSort(numbers, 0, (sizeof(numbers)/sizeof(numbers[0]))-1);
			break;
		default: 
			cout << "Wrong number!!" << endl;	

	}
	clock_t finish = clock();
	cout << "\nSeconds: " << (double)(finish - start)/(double) CLOCKS_PER_SEC << endl;
	system("pause");
}

void bubble(int *arr, int length)
{
	int temp;
	for (int i = 0; i < length - 1; i++) 
	{
        for (int j = 0; j < length - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    }
}

void selection(int *array, int length)
{
	int x, k;
	 for(int i=0; i < length; i++)
	  {   	
	    k = i; 
		x = array[i];
	
	    for(int j = i + 1; j < length; j++)	
	      if (  array[j] < x ) 
		  {
	        k=j; x=array[j];	        
	      }
	
	    array[k] = array[i]; array[i] = x;   	
	  }
}

void insertion(int *array, int length)
{
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

void shell(int *array, int length)
{
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

void quickSort(int *arr, int left, int right) 
{
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j) 
	  {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j)
			{
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

void printArr(int *array, int length)
{
	for(int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
}
