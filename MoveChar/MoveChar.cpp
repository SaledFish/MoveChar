/*
СQ���������һ�����⣺��һ���ַ����Ĵ�д��ĸ�ŵ��ַ����ĺ��棬�����ַ������λ�ò��䣬�Ҳ����������Ŀռ䡣
���ܰ��СQ��
����������
���������ж��飬ÿ�����һ���ַ���s���ұ�֤:1<=s.length<=1000.
���������
����ÿ�����ݣ������λ����ַ�����
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