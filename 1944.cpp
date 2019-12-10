#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>vetor;

    vetor.push_back(10);
    vetor.push_back(11);
    vetor.push_back(12);

    for (int i=0; i<3; i++)
    {
        cout<<vetor[i]<<endl;
    }


}
