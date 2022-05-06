class Solution
{
public:
  string removeDuplicates(string s, int k)
  {
    stack<int> count;//stack to count occurances
    for (int i = 0; i < s.length(); i++)
    {
      if (i == 0 || s[i] != s[i - 1])//if element is not similar just push 1
      {
        count.push(1);
      }
      else if (++count.top() == k)
      {
        count.pop();
        s.erase(i - k + 1, k);
        i = i - k;
      }
    }
    return s;
  }
};