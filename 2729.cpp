#include <iostream>
#include <sstream>
#include <vector>
#include <set>

using namespace std;


vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

int main() {
    string str;
    set<string>thisdict;
    int n,c=0,p=0;
    cin>>n;
    cin.ignore(1, 'n');
    for(int i=0; i<n; i++)
    {
        getline(cin, str);
        vector<string> v = split (str, ' ');
        for (auto it = v.begin(); it != v.end(); it++)
        {
            thisdict.insert(*it);
        }
        for (auto it = thisdict.begin(); it != thisdict.end(); it++)
        {

            if(p == thisdict.size()-1)
            {
                cout<<*it<<endl;
            }else
            {
                cout << *it<<" ";
                p++;
            }
        }
        p = 0, c = 0;
        thisdict.clear();

    }


    return 0;
}
