//so the problem simply is to find the  frequency of each digit in the given number string.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t;
    
    getline(cin,str);
    int arr[10],ar_count[10];
    for(int i=0;i<10;i++)
    {
        arr[i] = i;
        ar_count[i] = 0;
    }
    for(int i=0;i < str.length();i++)
    {
        t = str.at(i);
        
        if(t == '0' )
            ar_count[0]  += 1;
        
        if(t == '1' )
            ar_count[1]  += 1;
        
        if(t == '2' )
            ar_count[2]  += 1;
            
        if(t == '3' )
            ar_count[3]  += 1;
            
        if(t == '4' )
            ar_count[4]  += 1;
        
        if(t == '5' )
            ar_count[5]  += 1;
        
        if(t == '6' )
            ar_count[6]  += 1;
        
        if(t == '7' )
            ar_count[7]  += 1;
        if(t == '8' )
            ar_count[8]  += 1;
        
        if(t == '9' )
            ar_count[9]  += 1;
        
    }
    
    for(int i=0;i<10;i++)
    {
        cout << arr[i] << " " << ar_count[i] << endl;
    }
    
    return 0;
    
    
}
