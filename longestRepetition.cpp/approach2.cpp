#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n < 2){
        cout<<n;
        return 0;
    }

//ABABABAB
    long long GlobalLength=1;
    long long LocalLength=1;
    for(int i=1;i<n;i++){

        if(s[i]==s[i-1]){
            LocalLength++;
            GlobalLength=max(GlobalLength,LocalLength);
        }
        else{
            LocalLength=1;
        }

    }

    cout<<GlobalLength;
}