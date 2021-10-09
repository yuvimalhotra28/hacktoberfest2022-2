#include<stdio.h>
void func_print();
void func_value();
void func();

int a = 10;

int main()
{
	int a = 500;
	printf("%d\n",a);
	func_print();
	printf("%d\n",::a); //Scope Resolution Operator - To use global variable forcefully in local environment
	func_value();
	printf("%d\n",a);
	func();
	printf("%d\n",a);
	return 0;
}

void func_print()
{
	printf("%d\n",a);
	a=20;
}
 void func_value()
 {
 	a=30;
 	printf("%d\n",a);
  a=40;
 }
 
 void func()
 {
 	printf("%d\n",a);
 	a=50;
 }
