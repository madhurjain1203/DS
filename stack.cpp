#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	
	string s;
	int num;
	cout<<"Enter the binary string";
	cin>>s;
	
	stack<char> st;
	for(int i=0;i<s.length();i++)
	{
		st.push(s[i]);
		
	}
	
	string str;
	cout<<"Enter the string to opt out"<<endl;
	cin>>str;
	int j = str.length();
	stack<char> frwd; 
	while(!st.empty())
	{	
		
		if(st.top() == str[j-1])
		{
			st.pop();
			j--;
		}
		else
		{
			
			char ch = st.top();
			frwd.push(ch);
			st.pop();
			
			
			
		}
	
	}
	
	while(frwd.empty() == false)

	{

		char ch = frwd.top();

		cout<<ch;

		frwd.pop();

	}
	cout<<"\n KHALI"<<endl;
	
	return 0;	
}
