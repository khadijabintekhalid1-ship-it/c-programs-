#include <stdio.h>
int main ()
{
	int a ;
	printf ("ENTER YOUR PASSWORD ");
	scanf ("%d",& a);
	if ( a== 1234){
		printf ("Password Granted");
	}else {
		printf (" Wrong Password ");
	}
	return 0;
}
