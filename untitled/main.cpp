#include <iostream>
#include <string>

using namespace std;

int romain(int n)
{
    int m[12] = {1,4,5,6,9,10,40,50,90,100, 400, 500};
    string r[12] = {"I","IV","V","VI","IX","X","XL","L","XC","C", "CD", "D"};
    int i=11;
    while(n>0)
    {
        int j = n/m[i];
        n = n%m[i];
        while(j--)
        {
            cout<<r[i];
        }
        i--;
    }
    cout << "\n" << endl;
    return 0;
}

int main()
{
    cout << "tap number\n" << endl;
    int number = 0;
    cin >> number;
    if(number <= 0)
    {
        cout << "error\n";
        return 0;
    }
    romain(number);

    return 0;
}
