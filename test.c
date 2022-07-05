#include <stdio.h>

// #pragma pack(1)

struct testa
{
	char  a;		// 1
	short int b;	// 2 
};					// 1 padding	//4

struct testb
{
	short int a;	// 2
	char  b;		// 1  +  1 padding	
	int c;			// 4
};								   //8

struct testc
{
	char a;			// 1   +  7 padding
	double b;		// 8
	int c;			// 4
};								   //20
struct testd
{
	double b;		// 8
	int c;			// 4
	char a;			// 1   +  3 padding
};								   //16
struct teste
{
	int *b;
	//int c[5];		// 4  * 5

};
struct testf
{
	char *d;
	char  a;		// 1
	double b;
	char c;
	
};								   //20
struct testg
{
	int c;			// 4
	double b;		// 8
	char a;			// 1   +  3 padding
};		
void main()
{
	printf("Size of testa = %lu\n",sizeof(struct testa));
	printf("Size of testb = %lu\n",sizeof(struct testb));
	printf("Size of testc = %lu\n",sizeof(struct testc));
	printf("Size of testd = %lu\n",sizeof(struct testd));
	printf("Size of teste = %lu\n",sizeof(struct teste));
	printf("Size of testf = %lu\n",sizeof(struct testf));
	printf("Size of testg = %lu\n",sizeof(struct testg));
}
