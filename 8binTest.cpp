#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int binConv(string n)
{
	//output the error message
	if(n.size()!=8)
	{
		cerr<<"Usage: 8binConv <8-bit binary number>\n";
		exit(1);
	}
	//convert from char to int(ASCII)
	else
	{
		int decimal(0);
		for(int i=0;i<8;i++)
		{
			decimal+=(int(n[i])-48)*pow(2,7-i);
		}
		return decimal;
	}
}
//convert the decimal to binary and reverse the string
string convert(int decimal)
{
	string sum="";
	while(decimal!=0)
	{
		sum+=to_string(decimal%2);
		decimal/=2;
	}
	while(sum.size()!=8)
	{
		sum+=to_string(0);
	}
	sum=string(sum.rbegin(),sum.rend());
	return sum;
}
int main()
{
	//print out the output
	for(int i=0;i<256;i++)
	{
		cout<<"Binary number "<< convert(i)<<" is decimal number "<<i<<endl;
	}
	return 0;
}


