#include <iostream>
using namespace std;
int main()
{
    int n,j;
    cout <<"enter the num: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<< "* ";
        }
        cout<< endl;
        
    }
    

    return 0;
}
