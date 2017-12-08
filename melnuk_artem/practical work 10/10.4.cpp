#include <iostream>
#include <map>
#include <string>
#include <algorithm>
 
using namespace std;
 
typedef map<int, string> TokensMap;
 
void replace_numbers(string& _sBuffer, TokensMap& _mTokens);
 
int main(int argc, char* argv[])
{
    string sBuffer("123");
    
    TokensMap mTokens;
    mTokens[0] = "_zero_";
    mTokens[1] = "_one_";
    mTokens[2] = "_two_";
    mTokens[3] = "_three_";
    mTokens[4] = "_four_";
    mTokens[5] = "_five_";
    mTokens[6] = "_six_";
    mTokens[7] = "_seven_";
    mTokens[8] = "_eigth_";
    mTokens[9] = "_nine_";
 
    replace_numbers(sBuffer, mTokens);
    cout << sBuffer << endl;
 
    system("pause");
    return EXIT_SUCCESS;
}

void replace_numbers(string& _sBuffer, TokensMap& _mTokens)
{
    char cNum;
    int nIndex;
    string::iterator itrNumPos = find_if(_sBuffer.begin(), _sBuffer.end(), isdigit);
 
    while (itrNumPos != _sBuffer.end())
    {
        cNum = *itrNumPos;
        nIndex = atoi(&cNum);
        _sBuffer.replace(itrNumPos, 
                itrNumPos + 1, 
                _mTokens.at(nIndex).begin(), 
                _mTokens.at(nIndex).end());
        itrNumPos = find_if(_sBuffer.begin(), _sBuffer.end(), isdigit);
    }
}
