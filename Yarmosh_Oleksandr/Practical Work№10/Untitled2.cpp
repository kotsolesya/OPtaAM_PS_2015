
#include <fstream>
#include <stdio.h>
#include <iostream>
using namespace std; 
 
int const n=5;
 
main()
{
    FILE *in,*out;
    int i;
    char s[254];
    const char  c=' ';
    in=fopen("f.txt","r");
 
    while(!feof(in))
    {
        fgets(s,254,in);
    }
    fclose(in);
    printf("stroka faila f.txt: %s",s);
    out=fopen("g.txt","w");
    cout<<endl;
    printf("stroka faila g.txt: ");
    for(i=(strlen(s)-1);i>=0;i--)
    {
        fprintf(out,"%c",s[i]);
        printf("%c",s[i]);
    }
    fclose(out);
    cout<<endl;
 
 
}
