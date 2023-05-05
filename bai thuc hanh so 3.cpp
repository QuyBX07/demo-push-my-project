#include<iostream>

using namespace std;

int main()
{
	int n ,day[1000] , a;
	cin >> n;
	for(int i = 0; i < n;i++)
	{
		cin>>day[i];
		if(day[i]%2 == 0)
		{
			a++;
		}
	}
	cout << a;
	return 0;
}
