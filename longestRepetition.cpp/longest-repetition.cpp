#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;

    if(s.size()==0) return 0;
    long long GlobalMaxima = 1;
    for (int i = 0; i < s.size(); i++)
    {
        long long LocalMaxima = 1;
        for (int j = i + 1; j < s.size(); j++)
        {

            if (s[i] == s[j])
            {
                LocalMaxima++;
                GlobalMaxima = max(GlobalMaxima, LocalMaxima);
            }
            else
            {
                i = j - 1;
                break;
            }
        }
    }


    cout<<GlobalMaxima;
}