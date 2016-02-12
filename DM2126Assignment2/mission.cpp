#include "DetectMemoryLeak.h"
#include <string>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <queue>

using std::string;
using std::vector;
using std::list;
using std::map;
using std::stack;
using std::queue;

// DO NOT MODIFY ANY LINE ABOVE OR ADD EXTRA INCLUDES

/*! 
 *  \brief     DM2126 Assignment 2
 *  \details   Submit the whole solution, but only this file will be used to grade
 *  \author    <John Doe>
 *  \date      2015 
 *  \note      <Admin ID>
 */


// Balanced parenthesis
bool Brackets(const string& input)
{
	string open_brackets = "({[<";
	string close_brackets = ")}]>";
	stack<char> s;
	for (auto c : input)
	{
		auto pos = string::npos;
		if (open_brackets.find(c) != string::npos)
		{
			s.push(c);
		}
		else if ((pos = close_brackets.find(c)) != string::npos)
		{
			if (s.empty())
			{
				return false;
			}
			if (s.top() == open_brackets[pos])
			{
				s.pop();
			}
			else
			{
				return false;
			}
		}
	}
	return s.empty();
}
// Query machine, hits
void QueryMachine(vector<int>& data, vector<int>& queries, vector<unsigned int>& results)
{

}