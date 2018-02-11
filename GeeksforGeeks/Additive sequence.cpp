/*You are required to complete this function*/
//INCOMPLETE
bool isAdditiveSequence(string n)
{
int len=n.length();
if(len<2)
    return true;
int a=n[0]-48,b=n[1]-48,temp;
int i=2,digit=0;
while(i<len)
    {
    temp=a+b;
    a=b;
    b=temp;
    int count=0;
    digit=log(b)/log(10)+1;
    //cout<<"digits="<<digit<<'\n';
    while(n[i]!='\0' && digit--)
        {
        count=count*10+(n[i]-48);
        i++;
        }
    //cout<<"count="<<count<<'\n';
    if(count!=b)
        return false;
    }
return true;

}
