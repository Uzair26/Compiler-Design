#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"enter any string";
	cin>>s;
	int zero_count=0,one_count=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0')
		zero_count++;
		else
		one_count++;
	}
	if((zero_count%2==0) && (one_count%2!=0))
	cout<<"accepted";
	else
	cout<<"rejected";
}
