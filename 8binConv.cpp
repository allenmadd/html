#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

int main(int argc,char *argv[])
{
	//output error message
	if(argc!=2||strlen(argv[1])!=8)
	{
		cout<<"Usage: 8binConv <8-bit binary number>\n";
		exit(1);
	}
	//convert to decimal using ASCII(char to int)
	else
	{
		int decimal(0);
		for(int i=0;i<8;i++)
		{
			 decimal+=(int(argv[1][i])-48)*pow(2,7-i);
		}
		cout<<"That's "<<decimal<<" in decimal.\n";
	}
	return 0;
}


			

