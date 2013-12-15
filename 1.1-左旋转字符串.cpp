#include<iostream>
#include<string> 
using namespace std;
void rotate(char *start, char *end)
{
     while(start != NULL && end != NULL && start < end)
     {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;   
     }            
}
void leftrotate(char *p, int m)
{
     if(p == NULL) 
        return;
     int len = strlen(p);
     if(m > 0 && m <= len)
     {
        char *xstart, *xend;
        char *ystart, *yend;
        xstart = p;
        xend = p + m -1;
        ystart = p + m;
        yend = p + len -1;
        rotate(xstart, xend);
        rotate(ystart, yend);
        rotate(p, p + len -1);      
     }     
}
int main()
{
    char str[] = "abcdefghijk";
    leftrotate(str, 3);
    cout<<str<<endl;
} 
