#include <iostream>
#include <vector>
#include "sortic.h"
using namespace std;


void sa (vector <int> &mass)
{
int v2;
if (mass.size() > 1)
{
v2 = mass[1];
mass[1] = mass[0];
mass[0] = v2;
}
}


void ra(vector <int> &mass)
{
int i, cif;
if (mass.size() > 0)
{
i = 1;
cif = mass[0];
for(i; i < mass.size(); i++)
mass[i - 1] = mass[i];
mass[mass.size() - 1] = cif;
}
}


void rra(vector <int> &mass)
{
int i, cif;
if (mass.size() > 0)
{
i = mass.size() - 1;
cif = mass[i];
for(i; i > 0; i--)
mass[i] = mass[i - 1];
mass[0] = cif;
}
}


void pb (vector <int> &mass, vector <int> &mass1)
{
if (mass1.size() > 0)
{
mass.push_back(mass1[0]);
mass1[0] = 2147483647;
rr(mass);
}
}


int mp(string str)
{
int ch;
char sym;
for (int i = 0; i < str.size(); i++) 
{
sym = str[i];
ch = ch * 10 + (sym - '0');
}
return ch;
}


int mn(vector <int> mass) 
{
int mini;
mini = 2147483647;
for (int i = 0; i < mass.size(); i++) 
{
if (mass[i] <= mini)
mini = mass[i];
}
return mini;
}


void zn(const vector <int>& cop, vector <int>& osn)
{
for (int i = 0; i < cop.size(); i++)
osn[i] = cop[i];
}