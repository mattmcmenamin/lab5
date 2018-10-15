

// Matt McMenamin
//Lab 05


#include <iostream>
#include <limits>
#include <string>
#include<stack>	
#include<vector>
#include<list>
using namespace std;

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);
int main()
{


	cout << "enter a phrase to be reversed." << endl;
	string input;
	cin >> input;


	cout << stringReversal1(input) << endl;
	cout << stringReversal2(input) << endl;
	cout << stringReversal3(input) << endl;
	cout << stringReversal4(input) << endl;
	
	system("pause");
	return 0;


}


string stringReversal1(string input)
{

	stack<char> theStack;
	string stringinterim;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		theStack.push(input.at(i));

	}
	cout << endl;
	for (int i = 0; i < input.length(); i++)
	{
		stringinterim = theStack.top();
		out.append(stringinterim);
		theStack.pop();
	}

	return out;

}



string stringReversal2(string input)
{

	vector<char> theVector;
	string stringinterim;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		theVector.push_back(input.at(i));

	}
	cout << endl;
	for (int i = 0; i < input.length(); i++)
	{
		stringinterim = theVector.back();
		out.append(stringinterim);
		theVector.pop_back();
	}

	return out;

}

string stringReversal3(string input)
{

	list<char> theList;
	string stringinterim;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		theList.push_back(input.at(i));

	}
	cout << endl;
	for (int i = 0; i < input.length(); i++)
	{
		stringinterim = theList.back();
		out.append(stringinterim);
		theList.pop_back();
	}

	return out;

}


string stringReversal4(string input)
{

	list<char> theList;
	string stringinterim;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		theList.push_back(input.at(i));

	}
	cout << endl;
	for (int i = 0; i < input.length(); i++)
	{
		stringinterim = theList.back();
		out.append(stringinterim);
		theList.pop_back();
	}

	return out;

}