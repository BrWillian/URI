#include <iostream>
#include <map>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    map<string, float> thisdict;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int m;
        string fruit;
        float price;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>fruit>>price;
            thisdict.insert(pair<string, float>(fruit, price));
        }
        int o;
        float total = 0;
        cin>>o;
        for(int i=0; i<o; i++)
        {
            cin>>fruit>>price;
            total += thisdict[fruit]*price;
        }
        cout<<"R$ "<< fixed << setprecision(2) <<total<<endl;
        total = 0;
        thisdict.clear();
    }
}
