#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "sortic.h"

using namespace std;


int main()
{
    int n, zn, maxi, kon;
    ofstream file;
    string znak;
    cin >> znak;
    kon = 0;


    vector <int> a;

    vector <int> a1;

    vector <int> b;


    file.open("mass.txt");
    for(int i = 0; znak != "!"; i++)
{
        a.push_back(cifrovizacia(znak));
        cin >> znak;
}
    while (kon < a.size())
{
            kon = 0;
           maxi = maximum(a);
    while (a[0] != maxi)
{
               r(a);
                file << "ra" << endl;
                cout << "ra" << endl;
}
        p(b, a);
        file << "pb" << endl;
        cout << "pb" << endl;
        for (int l = 0; l < a.size(); l++)
            if (a[l] == -2147483648)
                kon++;
}
    for (int i = 0; i < b.size(); i++)
{
        rr(b);
        file << "rrb" << endl;
        cout << "rrb" << endl;
file << "rrb" << endl;
        cout << "rrb" << endl;

        p(a1, b);
        file << "pa" << endl;
        cout << "pa" << endl;
file << "pa" << endl;
        cout << "pa" << endl;
}
    file << " ";
    zamen(a1, a);
    for (int i = 0; i < a.size(); i++)
        cout << endl << a[i] << " " << endl;
    file.close();
    return 0;
}
