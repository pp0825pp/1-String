//时间复杂度O(m+n)
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string strOne = "ABCDEFGHIJKHER";
    string strTwo = "DFGHJAAWE";
    //辅助数组并清零
    int hash[26] = {0};
    //辅助数组中元素个数
    int num = 0;
    //遍历短字符串 
    for(int j = 0; j < strTwo.length(); j++)
    {
         int index = strTwo[j] - 'A';
         if(hash[index] == 0)
         {
             hash[index] = 1;
             num++;               
         }     
    }  
    //遍历长字符串
    for(int i = 0; i < strOne.length(); i++)
    {
         int index = strOne[i] - 'A';
         if(hash[index] == 1)
         {
             hash[index] = 0;
             num--;
             if(num == 0)
                break;               
         }        
    }  
    if(num == 0)
         cout<<"true"<<endl;
    else
         cout<<"false"<<endl;
}
