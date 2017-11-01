#include <fstream>
#include <iostream>   
#include <time.h>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Russian");
    ofstream fout("devcpp.txt");
      int rows,cols;
   cout<<"¬ведите кол-во строк: ";
   cin>>rows;
   cout<<"¬ведите кол-во столбцов: ";
   cin>>cols;

int** matrix = new int*[rows];
for (int i = 0; i < rows; ++i)
    matrix[i] = new int[cols];
    for (int i = 0; i < rows; ++i)
   for(int i=0;i<rows;i++){
       int count=0;
       if(i%rows)
           fout<<endl;
       for(int j=0;j<cols;j++){
           matrix[i][j]=rand()%100;
           fout<<matrix[i][j]<<" ";}
   }
  int min=matrix[0][0];
  for(int i=0;i<rows;i++){
      int min=matrix[i][0];
      for(int j=0;j<cols;j++){
          if(matrix[i][j]<min)
              min=matrix[i][j];}           
  fout<<endl<<endl;
  for(int i=0;i<rows;i++)      
   fout<<endl;         
    fout.close(); 
      delete [] matrix[i];
delete [] matrix;
      //  system("pause");
    return 0;}
}


