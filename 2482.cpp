#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    int n;
    string string1, string2;
    map<string, string>thisdict;
    cin>>n;
    cin.ignore(1, 'n');
    for(int i=0; i<n; i++)
    {
        getline(cin, string1);
        getline(cin, string2);
        thisdict.insert(pair<string, string>(string1, string2));
    }
    int k;
    cin >> k;
    cin.ignore(1,'n');
    for(int i=0; i<k; i++)
    {
        getline(cin, string1);
        getline(cin, string2);
        cout<<string1<<endl;
        cout << thisdict.find(string2)->second << endl;
        cout<<endl;

    }
    return 0;
}
