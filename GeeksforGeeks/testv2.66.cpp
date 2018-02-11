#include<stdio.h>
#define str(x) #x
#define Xstr(X) str(X)
#define oper multiply
namespace hell
{
	void d()
	{
		extern int a;
		printf("%d",a);
	}
	int a=1111;
}
main()
{

	hell::d();
	extern int a;
	printf("%d",a);

}
int a=5555;
