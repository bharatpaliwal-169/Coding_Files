//What could be the length of source code to sort n numbers using SoftSort Algorithm ?
/*
  void print( int a, int b, int c ) {
        printf( "%d %d %d\n", a, b, c );
}
void sort( int a, int b, int c ) {
        if( a < b )
            if( a < c )
                if( b < c )
                    print( a, b, c );
                else
                    print( a, c, b );
            else
                print( c, a, b );
        else
            if( b < c )
                if( a < c )
                    print( b, a, c );
                else
                    print( b, c, a );
            else
                print( c, b, a );
    }
*/
#include <iostream>
using namespace std;
unsigned long long int facto(long int n,unsigned long long int M[])
{
    if(n==1)
        return 1;
    if(M[n])
        return M[n];
    else
    {
        M[n]=(n*facto(n-1,M))%(1000000007);
        return M[n];
    }
}

int main()
{
    long int test,n,i,j;
    unsigned long long int fact,M[1000001]={0};
    cin>>test;
    while(test--)
    {
        cin>>n;
        fact = facto(n,M);
        cout<<(3*fact+3)%(1000000007)<<endl;
    }

return 0;
}
