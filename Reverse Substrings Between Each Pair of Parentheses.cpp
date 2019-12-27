// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the modified string
string reverseParentheses(string str, int len)
{
	stack<char> st;

	for (int i = 0; i < len; i++) {

		// Push the index of the current
		// opening bracket
		if (str[i] == '(') {
			st.push(i);
		}

		// Reverse the substring starting
		// after the last encountered opening
		// bracket till the current character
		else if (str[i] == ')') {
			reverse(str.begin() + st.top() + 1,
					str.begin() + i);
			st.pop();
		}
	}

	// To store the modified string
	string res = "";
	for (int i = 0; i < len; i++) {
		if (str[i] != ')' && str[i] != '(')
			res += (str[i]);
	}
	return res;
}

// Driver code
int main()
{
	string str =  "(u(love)i)";
	int len = str.length();

	cout << reverseParentheses(str, len);

	return 0;
}
