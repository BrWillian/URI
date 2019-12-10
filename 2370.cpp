#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int players, team;

    vector<pair<int, string>> V;
    vector<string>times[1005];

    cin>>players>>team;

    for(int i=0; i<players; i++)
    {
        string nome;
        int h;
        cin>>nome>>h;
        V.push_back(make_pair(h, nome));
    }

    sort(V.begin(), V.end());

    int qual = 1;


    for(int i=V.size()-1; i>=0; i--)
    {
        times[qual].push_back(V[i].second);
        qual++;

        if(qual > team)
        {
            qual = 1;
        }
    }
    for(int i=1; i<=team; i++)
    {
        cout<<"Time "<<i<<endl;
        sort(times[i].begin(), times[i].end());
        for(int j=0; j<times[i].size(); j++)
        {
            cout<<times[i][j]<<endl;
        }
        cout<<endl;
    }
}
