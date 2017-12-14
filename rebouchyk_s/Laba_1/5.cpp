#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <cstdlib>

using namespace std;

int main()
{
char s1[100];
char s2[100];
cin >> s1;
cin >> s2;
cout <<" 1 two more"<< endl <<"-1 one more" << endl << " 0 = more" << endl;
int k=strcmp(s1,s2);
cout << "Answer:" << endl;
cout << k << endl;

system("pause");
}
