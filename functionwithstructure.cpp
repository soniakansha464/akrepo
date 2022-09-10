#include<iostream>
using namespace std;

struct divmod
{
    int quot;
    int rem;
};

divmod divison(int a, int b);

int main()
{
    int a = 21;
    int b = 5;
    divmod ans = divison(a, b);
    cout<< ans.quot <<" " <<ans.rem;
    return 0;
}

divmod divison(int n1, int n2)
{
    divmod result;
    result.quot = n1/n2;
    result.rem = n1%n2;
    return result;

}
