#include <iostream>//cout, left, right ve endl

using namespace std;
int main()
{
	int a[2][3],transpose;
	cout << "Matrix" << endl;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j <3; j++)
		{
			cout << " i - j " << i << j<<" :";
			cin >> a[i][j];
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout<< a[i][j]<<" ";
		}
		cout << "\n";
	}
	cout << "Transpose of a Matrix" << endl;
	for (size_t i = 0; i <3; i++)
	{
		for (size_t j = 0; j <=2; j++)
		{
			cout<< a[i][j] <<" " <<a[i+1][j]<<endl;
			
		}
		break;
	}
	system("pause");
	return 0;
}



