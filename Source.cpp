#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<vector<int>> BVA(int min, int max) //DONE
{
	vector<vector<int>> answer;
	vector<int> validInputs;
	int val = min;
	for (int i = 0; i < 5; i++)
	{
		validInputs.push_back(val);
		if (val == min) val = min + 1;
		else if (val == min + 1) val = max - 1;
		else if (val == max - 1) val = max;
		else val = (max + min) / 2;
	} //1 2 99 100 50

	int a = -1, b = 4, c = 4;
	for (int i = 1; i <= (4 * 3) + 1; i++)
	{
		if (i < 5)
		{
			a++;
		}
		else if (i == 5)
		{
			a = 4; b = 0; c = 4;
		}
		else if (i < 9)
		{
			b++;
		}
		else if (i == 9)
		{
			a = 4; b = 4; c = 0;
		}
		else if (i < 13)
		{
			c++;
		}
		else
		{
			a = 4; b = 4; c = 4;
		}
		vector<int> row;
		row.push_back(validInputs[a]);
		row.push_back(validInputs[b]);
		row.push_back(validInputs[c]);
		if (!(row[0] < row[1] + row[2] && row[1] < row[0] + row[1] && row[2] < row[0] + row[1])) row.push_back(3);
		else if (row[0] == row[1] && row[0] == row[2]) row.push_back(0);
		else if ((row[0] == row[1]) ^ (row[0] == row[2]) ^ (row[2] == row[1])) row.push_back(1);
		else row.push_back(2);
		// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
		answer.push_back(row);
	}
	return answer;
}

vector<vector<int>> RA(int min, int max)
{
	vector<vector<int>> answer;
	vector<int> validInputs;
	int val = min - 1;
	for (int i = 0; i < 7; i++)
	{
		validInputs.push_back(val);
		if (val == min - 1) val = min;
		else if (val == min) val = min + 1;
		else if (val == min + 1) val = max - 1;
		else if (val == max - 1) val = max;
		else if (val == max) val = max + 1;
		else val = (max + min) / 2;
	} //0 1 2 99 100 101 50

	int a = -1, b = 6, c = 6;
	for (int i = 1; i <= (6 * 3) + 1; i++)
	{
		if (i < 7)
		{
			a++;
		}
		else if (i == 7)
		{
			a = 6; b = 0; c = 6;
		}
		else if (i < 13)
		{
			b++;
		}
		else if (i == 13)
		{
			a = 6; b = 6; c = 0;
		}
		else if (i < 19)
		{
			c++;
		}
		else
		{
			a = 6; b = 6; c = 6;
		}
		vector<int> row;
		row.push_back(validInputs[a]);
		row.push_back(validInputs[b]);
		row.push_back(validInputs[c]);
		if (!(row[0] < row[1] + row[2] && row[1] < row[0] + row[1] && row[2] < row[0] + row[1])) row.push_back(3);
		else if (row[0] == row[1] && row[0] == row[2]) row.push_back(0);
		else if ((row[0] == row[1]) ^ (row[0] == row[2]) ^ (row[2] == row[1])) row.push_back(1);
		else row.push_back(2);
		// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
		answer.push_back(row);
	}
	return answer;
}

vector<vector<int>> WVA(int min, int max)
{
	vector<vector<int>> answer;
	vector<int> validInputs;
	int val = min;
	for (int i = 0; i < 5; i++)
	{
		validInputs.push_back(val);
		if (val == min) val = min + 1;
		else if (val == min + 1) val = max - 1;
		else if (val == max - 1) val = max;
		else val = (max + min) / 2;
	} //1 2 99 100 50

	int a = -1, b = -1, c = -1;
	for (int i = 1; i <= pow(5, 3); i++)
	{
		if (i % 25 == 1) a++;
		if (i % 5 == 1)
		{
			if (b == 4) b = -1;
			b++; 
		}
		if (c == 4) c = -1;
		c++;

		vector<int> row;
		row.push_back(validInputs[a]);
		row.push_back(validInputs[b]);
		row.push_back(validInputs[c]);
		if (!(row[0] < row[1] + row[2] && row[1] < row[0] + row[1] && row[2] < row[0] + row[1])) row.push_back(3);
		else if (row[0] == row[1] && row[0] == row[2]) row.push_back(0);
		else if ((row[0] == row[1]) ^ (row[0] == row[2]) ^ (row[2] == row[1])) row.push_back(1);
		else row.push_back(2);
		// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
		answer.push_back(row);
	}
	return answer;
}

vector<vector<int>> WRA(int min, int max)
{
	vector<vector<int>> answer;
	vector<int> validInputs;
	int val = min - 1;
	for (int i = 0; i < 7; i++)
	{
		validInputs.push_back(val);
		if (val == min - 1) val = min;
		if (val == min) val = min + 1;
		else if (val == min + 1) val = max - 1;
		else if (val == max - 1) val = max;
		else if (val == max) val == max + 1;
		else val = (max + min) / 2;
	} //0 1 2 99 100 101 50

	int a = -1, b = -1, c = -1;
	for (int i = 1; i <= pow(7, 3); i++)
	{
		if (i % 49 == 1) a++;
		if (i % 4 == 1)
		{
			if (b == 6) b = -1;
			b++;
		}
		if (c == 6) c = -1;
		c++;

		vector<int> row;
		row.push_back(validInputs[a]);
		row.push_back(validInputs[b]);
		row.push_back(validInputs[c]);
		if (!(row[0] < row[1] + row[2] && row[1] < row[0] + row[1] && row[2] < row[0] + row[1])) row.push_back(3);
		else if (row[0] == row[1] && row[0] == row[2]) row.push_back(0);
		else if ((row[0] == row[1]) ^ (row[0] == row[2]) ^ (row[2] == row[1])) row.push_back(1);
		else row.push_back(2);
		// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
		answer.push_back(row);
	}
	return answer;
}

int main()
{
	bool loop = true;
	int option;
	cout << "Welcome! This program will run the following test cases for the triangle identification problem.";

	while (loop)
	{
		cout << "\n\n1. Boundary Value Analysis\n2. Robust Approach\n3. Worst Value\n4. Worst Robust Approach\n5. Exit \nPlease select an option from 1 to 5: ";
		cin >> option;
		switch (option)
		{
		case 1: //DONE!
		{
			int min, max;
			cout << "\nBoundary Value Analysis:\nA black box form of testing, this technique should print out 4(number of variables) + 1 number of test cases. The triangle problem has three variables. This means, there will be a total of 13 test cases. Please enter a minimum value, a space, and then a maximum value for the sides of the triangles that will be considered in this test.\nInput example:\n4 14\n\nPlease enter your input:\n";
			cin >> min >> max;
			vector<vector<int>> testTable = BVA(min, max);
			cout << "Test Case ID     a     b     c     Expected Output\n";
			for (int i = 0; i < testTable.size(); i++)
			{
				cout << "T" << i + 1 << ":";
				if (i + 1 < 10)
				{
					cout << "              ";
				}
				else if (i + 1 < 100)
				{
					cout << "             ";
				}
				
				for (int j = 0; j < testTable[i].size(); j++)
				{
					if (j == testTable[i].size() - 1)// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
					{
						if (testTable[i][j] == 0)
						{
							cout << "Equilateral";
						}
						else if (testTable[i][j] == 1)
						{
							cout << "Isosceles";
						}
						else if (testTable[i][j] == 2)
						{
							cout << "Scalene";
						}
						else if (testTable[i][j] == 3)
						{
							cout << "Not a Triangle";
						}
					}
					else
					{
						cout << testTable[i][j];
					}
					if (testTable[i][j] < 10)
					{
						cout << "     ";
					}
					else if (testTable[i][j] < 100)
					{
						cout << "    ";
					}
					else
					{
						cout << "   ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 2: //DONE
		{
			int min, max;
			cout << "\nRobustness Testing/Robust Approach:\nEssentially the BVA with invalid inputs right outside the boundary, this form of testing technique has 6(number of variables) + 1 total test cases. The triangle problem has three variables. This means, there will be a total of 19 test cases. Please enter a minimum value, a space, and then a maximum value for the sides of the triangles that will be considered in this test.\nInput example:\n4 14\n\nPlease enter your input:\n";
			cin >> min >> max;
			vector<vector<int>> testTable = RA(min, max);
			cout << "Test Case ID     a     b     c     Expected Output\n";
			for (int i = 0; i < testTable.size(); i++)
			{
				cout << "T" << i + 1 << ":";
				if (i + 1 < 10)
				{
					cout << "              ";
				}
				else if (i + 1 < 100)
				{
					cout << "             ";
				}

				for (int j = 0; j < testTable[i].size(); j++)
				{
					if (j == testTable[i].size() - 1)// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
					{
						if (testTable[i][j] == 0)
						{
							cout << "Equilateral";
						}
						else if (testTable[i][j] == 1)
						{
							cout << "Isosceles";
						}
						else if (testTable[i][j] == 2)
						{
							cout << "Scalene";
						}
						else if (testTable[i][j] == 3)
						{
							cout << "Not a Triangle";
						}
					}
					else
					{
						cout << testTable[i][j];
					}
					if (testTable[i][j] < 10)
					{
						cout << "     ";
					}
					else if (testTable[i][j] < 100)
					{
						cout << "    ";
					}
					else
					{
						cout << "   ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 3: //DONE
		{
			int min, max;
			cout << "\nWorst Value Analysis:\nWhile the BVA and Robust Approach were single fault assumption techniques, this method assumes the multiple fault theory. It consists of a total of 5 to the (number of variables) test cases. The triangle problem has three variables. This means, there will be a total of 125 test cases. Please enter a minimum value, a space, and then a maximum value for the sides of the triangles that will be considered in this test.\nInput example:\n4 14\n\nPlease enter your input:\n";
			cin >> min >> max;
			vector<vector<int>> testTable = WVA(min, max);
			cout << "Test Case ID     a     b     c     Expected Output\n";
			for (int i = 0; i < testTable.size(); i++)
			{
				cout << "T" << i + 1 << ":";
				if (i + 1 < 10)
				{
					cout << "              ";
				}
				else if (i + 1 < 100)
				{
					cout << "             ";
				}
				else if (i + 1 < 1000)
				{
					cout << "            ";
				}

				for (int j = 0; j < testTable[i].size(); j++)
				{
					if (j == testTable[i].size() - 1)// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
					{
						if (testTable[i][j] == 0)
						{
							cout << "Equilateral";
						}
						else if (testTable[i][j] == 1)
						{
							cout << "Isosceles";
						}
						else if (testTable[i][j] == 2)
						{
							cout << "Scalene";
						}
						else if (testTable[i][j] == 3)
						{
							cout << "Not a Triangle";
						}
					}
					else
					{
						cout << testTable[i][j];
					}
					if (testTable[i][j] < 10)
					{
						cout << "     ";
					}
					else if (testTable[i][j] < 100)
					{
						cout << "    ";
					}
					else
					{
						cout << "   ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 4: //DONE!
		{
			int min, max;
			cout << "\nWorst Robust Approach:\nWhile the Worst Value Analysis applies the mutliple fault theory to the BVA, this technique applies multiple fault to the Robust Approach. It consists of a total of 7 to the (number of variables) test cases. The triangle problem has three variables. This means, there will be a total of 343 test cases. Please enter a minimum value, a space, and then a maximum value for the sides of the triangles that will be considered in this test.\nInput example:\n4 14\n\nPlease enter your input:\n";
			cin >> min >> max;
			vector<vector<int>> testTable = WRA(min, max);
			cout << "Test Case ID     a     b     c     Expected Output\n";
			for (int i = 0; i < testTable.size(); i++)
			{
				cout << "T" << i + 1 << ":";
				if (i + 1 < 10)
				{
					cout << "              ";
				}
				else if (i + 1 < 100)
				{
					cout << "             ";
				}
				else if (i + 1 < 1000)
				{
					cout << "            ";
				}

				for (int j = 0; j < testTable[i].size(); j++)
				{
					if (j == testTable[i].size() - 1)// 0 = Equi, 1 = Isosceles, 2 = Scalene, 3 = Not
					{
						if (testTable[i][j] == 0)
						{
							cout << "Equilateral";
						}
						else if (testTable[i][j] == 1)
						{
							cout << "Isosceles";
						}
						else if (testTable[i][j] == 2)
						{
							cout << "Scalene";
						}
						else if (testTable[i][j] == 3)
						{
							cout << "Not a Triangle";
						}
					}
					else
					{
						cout << testTable[i][j];
					}
					if (testTable[i][j] < 10)
					{
						cout << "     ";
					}
					else if (testTable[i][j] < 100)
					{
						cout << "    ";
					}
					else
					{
						cout << "   ";
					}
				}
				cout << endl;
			}
			break;
		}
		case 5:
		{
			loop = false;
			break;
		}
		}
	}
}