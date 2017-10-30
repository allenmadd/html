#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//convert decimal to bit and reverse the string
string convert(int decimal,int bit)
{
	string sum="";
	while(decimal!=0)
	{
		sum+=to_string(decimal%2);
		decimal/=2;
	}
	while(sum.size()!=bit)
	{
		sum+=to_string(0);
	}
	sum=string(sum.rbegin(),sum.rend());
	return sum;
}
int main()
{
	int bits(0);
	cout<<"How many bits to generate?\n";
	cin>>bits;
	//print out the outcome
	for(int i=0;i<pow(2,bits);i++)
	{
		cout<<"The decimal number "<<i<<" is "<<convert(i,bits)<<endl;
	}
	return 0;
}
