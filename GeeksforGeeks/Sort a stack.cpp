//incomplete
void SortedStack :: sort()
{
std::multiset<int> m_set;
while(s.empty())
	{
	m_set.insert(s.top);
	s.pop();
	}
for(multiset<int> ::iterator itr=m_set.begin();itr!=m_set.end();++itr)
	{
	s.push_back(*itr);
	}
}
