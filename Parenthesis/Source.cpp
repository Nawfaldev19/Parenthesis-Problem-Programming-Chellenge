#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

bool isValid(string parArr) {
	stack<char> orderedPar;
	for (int i = 0; i < parArr.length(); i++)
	{
		if (parArr[i] == '[')
		{
			orderedPar.push(']');
		}
		else if (parArr[i] == '{')
		{
			orderedPar.push('}');
		}
		else if (parArr[i] == '(')
		{
			orderedPar.push(')');
		}
		else if (orderedPar.empty() || orderedPar.top() != parArr[i])
		{
			return false;
		}
		else {
			orderedPar.pop();
		}
	}
	if (orderedPar.empty())
		return true;
	else return false;
}

int main()
{
/*
	 https://leetcode.com/problems/valid-parentheses/
	 Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
		Input: s = "()"
		Output : true
		
		Input: s = "()[]{}"
		Output: true
		
		Input: s = "(]"
		Output: false
	*/
}