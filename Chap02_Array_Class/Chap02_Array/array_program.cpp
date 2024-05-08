#include <cstdio>
#define MAX_SIZE 10

void sub(int x, int arr[]) {
	x = 10;
	arr[0] = 10;

}
void main()
{
	int var = 0, list[MAX_SIZE];
	list[0] = 0;//list[0]=0
	sub(var, list);//var=0, list[0]=10
	printf("var=%d, list[0]=%d\n", var, list[0]); // var=0, list[0]=10
	list[0] = 0;//list[0]=0
	printf("var=%d, list[0]=%d\n", var, list[0]); // var=0, list[0]=0
	// var?, list[0]?
}