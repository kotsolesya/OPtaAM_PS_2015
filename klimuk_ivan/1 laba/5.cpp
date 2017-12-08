#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <set>
#include <map>
#include <cstdlib>
using namespace std;
struct LenCmp {
    bool operator () (const std::string & a, const std::string & b){
        return a.size() > b.size();
    }
};
int main(){
        int startMax = 0, endMax = 1, bufStart = 0, bufEnd = 0;
    char s[200];
    cin.getline(s, 200);
    
    for (int i = 0; i < strlen(s) + 1; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            bufEnd = i;
            if (bufEnd - bufStart > endMax - startMax)
            {
                startMax = bufStart;
                endMax = bufEnd;
            }
            bufStart = i + 1;
        }
    }
    for (int i = startMax; i < endMax; i++){
        cout << s[i];
    }
    cout << endl;
system("pause");
return 0;
}
