/*
小Q最近遇到了一个难题：把一个字符串的大写字母放到字符串的后面，各个字符的相对位置不变，且不能申请额外的空间。
你能帮帮小Q吗？
输入描述：
输入数据有多组，每组包含一个字符串s，且保证:1<=s.length<=1000.
输出描述：
对于每组数据，输出移位后的字符串。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		int flag = str.size();
		for (int i = str.size() - 1; i >= 0; i--)
		{
			if (isupper(str[i]))
			{
				char c = str[i];
				for (int j = i; j < flag-1; j++)
				{
					str[j] = str[j + 1];
				}
				str[flag - 1] = c;
				flag--;
			}
		}
		cout << str << endl;
	}
	return 0;
}