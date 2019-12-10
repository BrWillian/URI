#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>vetor;
    int * v = new int[100000];
    int n, d, s, q;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>d;
        vetor.push_back(d);
    }

    cin>>s;

    for(int i=0; i<s; i++)
    {
        cin>>q;
        v[q] = 1;
    }
    int primeiro = 1;
    for(int i=0; i<(int)vetor.size(); i++)
    {
        if(v[vetor[i]] == 1)
        {
            continue;
        }
        if(primeiro == 1)
        {
            cout<<vetor[i];
            primeiro = 0;
        }else
        {
            cout<<" "<<vetor[i];
        }
        cout<<endl;
    }
}
