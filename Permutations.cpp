#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    if(n>3){
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }

        for(int i=1;i<=n;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }

    else if(n==1) cout<<1<<endl;

    else cout<<"NO SOLUTION"<<endl;
    return 0;
}
