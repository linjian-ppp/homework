#include <iostream> 
using namespace std;
int main()
{ 
	string  s;
	cin>>s; //endl是用来换行的，看实际使用 
	int length = s.size(),m = 0;
	char n;
	for(int i = 0;i < length;i ++)
	{
		if(!isdigit(s[i]))  //isdigit用来判断字符串是否只有数字构成 
		{
			n = s[i];
			m = i;
			break;
		}
 
	}
	
	if(!m)
	{
		while(s[length-1] == '0')
		length --;
		for(int i = length -1;i >= 0; i --)
		{
			cout << s[i];
		}
		if(length -1 < 0 )
		cout << "0"; 
	}
	else if(n == '.' || n  == '/')
	{
		int l = m -1;
		int r = m + 1;
		while(s[l] == '0') l --;
		for(int i = l; i>= 0;i --)
		cout << s[i];
		if(l < 0 )
		cout << "0";
		cout << n;
		if(n == '.')
		{
			while(s[r]=='0')
			r ++;
		}
		else while(s[length -1] == '0')
		length --;
		for(int i = length -1;i >= r;i --)
		{
			cout << s[i];
		}
		if(r == length )
		cout << "0";
	}
	
	return 0;
}
