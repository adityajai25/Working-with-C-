#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        long long sum_of_squares = (n*(n+1)*((2*n)+1))/6;
        long long squares_of_sum = pow((n*(n+1))/2,2);
        cout<<squares_of_sum-sum_of_squares<<endl;
    }
    return 0;
}
