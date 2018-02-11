#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
int t;
std::cin>>t;
while(t--)
    {
    int n;
    std::cin>>n;
    std::vector<int> a(n);
    std::vector<int> arr(n);
    for(int i=0;i<n;i++)
    	std::cin>>a[i];
    int i,j=1;
    std::fill(arr.begin(),arr.end(),1);
    while(j<n)
    	{
    	i=0;
    	while(i<j)
    		{
    		if(a[i]<a[j])	arr[j]=std::max(arr[i]+1,arr[j]);
			i++;
			}
		j++;
		}
	std::cout<<*max_element(arr.begin(),arr.end())<<'\n';//max_element retunr an iterator 
	//so we need * to reach at the element 
    }
	return 0;
}
