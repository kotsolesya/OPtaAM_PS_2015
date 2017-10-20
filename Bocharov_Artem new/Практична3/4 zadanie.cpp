#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
 
int count_buf(char const *buf,int size,char needle) {
    int counter=0;
    char const *ptr=buf;
    while ((ptr=memchr(ptr,needle,size-(ptr-buf)))) {
        counter++;
        ptr++;}
    return counter;
}
int main(){
char str[]={"Hello"};
int res=count_buf(str,sizeof(str),'z');
return 0;
}
