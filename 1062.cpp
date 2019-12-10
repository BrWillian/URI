#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> ordem;
    int n;
    int elements;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin>>elements;
        ordem.push(elements);
    }
}
