#include <iostream>
#include <ctime>
#include <iomanip>
#include <random>
#include <algorithm>
using namespace std;

int RandomNumber(int min, int max)
{
	srand(time(NULL));

	int num = min + rand() % (max - min + 1);
	return num;
}

int main()
{
	srand(time(0));

	int arr[5][5];

	for (int row = 0; row < 5; row++)
	{
		for (int coll = 0; coll < 5; coll++)
		{
			arr[row][coll] = rand() % 1001;
		}	
	}	

	cout << "Array unsorted: \n\n";

	for (int row = 0; row < 5; row++)
	{
		for (int coll = 0; coll < 5; coll++) 
		{
			cout << setw(4) << arr[row][coll] << "  ";
		}
		cout << endl;
	}

for (int row = 0; row < 5; row++)
{
	for (int coll = 0; coll < 5; coll++)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i + 1 == 5 && j + 1 == 5)
				{
					continue;
				}
				else
				{
					if (j + 1 == 5 && arr[i][j] > arr[i + 1][0])
					{
						swap(arr[i][j], arr[i + 1][0]);
					}
					else if (arr[i][j] > arr[i][j + 1])
					{
						swap(arr[i][j], arr[i][j + 1]);
					}
				}
			}
		}
	}
}

	cout << "\nArray sorted: \n\n";

	for (int row = 0; row < 5; row++)
	{
		for (int coll = 0; coll < 5; coll++)
		{
			cout << setw(4) << arr[row][coll] << "  ";
		}
		cout << endl;
	}
}

