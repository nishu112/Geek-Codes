#include <bits/stdc++.h>

using namespace std;

int findMinSteps(int A,int B){
	if(!B || (A && B==1))	return -1;
	if(A+1==B || A==B+2)	return 1;
	if(A==B)	return 1;
	int SetBitA=0,SetBitB=0;
	SetBitA=__builtin_popcount(A);
	SetBitB=__builtin_popcount(B);
	int lastPositionOfSetBitB=0;
	int tempB=B;
	while(tempB){
		if((tempB&1)){break;}
		tempB>>=1;
		++lastPositionOfSetBitB;
	}
	//cout<<"bit pos="<<lastPositionOfSetBitB<<"\n";
	int noStepsByReducingSetBits,diff;
	int MaxSteps=0;
	if(SetBitA>SetBitB)	{
	noStepsByReducingSetBits=1; if((B&1))	++noStepsByReducingSetBits;
	noStepsByReducingSetBits+=lastPositionOfSetBitB;
	diff=INT_MAX;
	if(A<B)	diff=B-A;
	diff=log(diff)/log(2)+1;
	MaxSteps+=min(noStepsByReducingSetBits,diff);
		//MaxSteps+=lastPositionOfSetBitB;
	}
	if(SetBitA<SetBitB)		{
		
	MaxSteps+=SetBitB-SetBitA;
		MaxSteps+=lastPositionOfSetBitB;
	}
	else if(SetBitA==SetBitB )		{
		if((B&1))	MaxSteps+=2;
			MaxSteps+=lastPositionOfSetBitB;
		
	}
//	cout<<"debug "<<MaxSteps<<"\n";
	

	return MaxSteps;
	
}

int main()
{
int t;
cin>>t;
while(t--)
	{
	int A,B;
	cin>>A>>B;
	cout<<findMinSteps(A,B)<<"\n";
	}
return 0;
}


