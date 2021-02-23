#include <iostream>
#include<string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    char name[50];
    gets(name);
    cin>>a>>b;
    cout<<(a+i);
    cout<<(b+d);
    cout<< strcat(name,s);

    return 0;
}
