#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,m,k;
    string in;
    char c;

    cin>>n>>m;

    multimap<int, char>thisdict;

    for(int i=0; i<n*m; i++)
    {
        cin>>in;
        thisdict.insert(make_pair((int)in[0]-48, in[1]));
    }
    multimap<int, char>::iterator itr;
    for (auto itr = thisdict.rbegin(); itr != thisdict.rend(); ++itr)
    {
        if(itr->second == 'V')
        {
            cout<<itr->first<<itr->second<<endl;
        }
    }
    for (auto itr = thisdict.rbegin(); itr != thisdict.rend(); ++itr)
    {
        if(itr->second == 'D')
        {
            cout<<itr->first<<itr->second<<endl;
        }
    }

}
