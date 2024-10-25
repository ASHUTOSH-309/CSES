#include <bits/stdc++.h>

using namespace std;
void printarr(vector<int> & arr){
    for(auto it:arr) cout<<it<<"\t";
}


int main()
{

    long long n;
    cin >> n;
    if(n==1){
        cout<<"1"<<"\t";
        return 0;
    }
    if(n<=3){

    cout<<"NO SOLUTION"<<"\t";
    return 0;
    } 

    if(n==4){
        cout<<"2 4 1 3"<<"\t";
        return 0;
    }
    vector<int> odd;
    vector<int> even;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }

    if(even.size() && odd.size()){
        if(abs(even[0] - odd[odd.size()-1]) > 1){

            printarr(odd);
            printarr(even);

        }
        else{
            cout<<"NO SOLUTION"<<"\t";
        }
    }
}