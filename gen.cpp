#include <iostream>
#include<fstream>
#include <ctime>
#include <cstdlib>
long long const mod = 18000000007L;
int mod1=1000000;
int main()
{
    long long int n;
    std::ofstream fOut("input.txt");
    std::cout<<"n1=";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        fOut<<rand()%mod1<<" "<<rand()%mod<<std::endl;
    }
    fOut.close();
}