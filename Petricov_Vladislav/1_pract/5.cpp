#include <iostream>
using namespace std;
 
int main()
{
    int n, m;
    int sum1=0;
 	int sum2=0;
 	
    cout << "please, enter n = ";
    cin >> n;
    cout << "please, enter m = ";
    cin >> m;
 
    	while (n!=0)
    {
        sum1 += n%10;
        n /= 10;
    }
    cout << "sum(n) = " << sum1 << endl;
    
    
    	while (m!=0)
    {
        sum2 += m%10;
        m /= 10;
    }
    	cout << "sum(m) = " << sum2 << endl;
    	
    	if(sum1>sum2){
    		cout << "sum max n: " << sum1 << endl;
		}
    	else
    	{
    		cout << "sum max m: " << sum2 << endl;
		}
    
    	
    
    
    return 0;
}
