#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void get_string(char* name);
void get_reverse(char name[], int lenght);
void print(char* name);
void pyramid(int lenght, char* name);


int main()
{
	int lenght = 0;
	char name[100];

	get_string(name);
	lenght = strlen(name);
	get_reverse(name, lenght);
	print(name);
	cout << endl;
	pyramid(lenght, name);




	return 0;
}
void get_string(char* name)
{
	printf("Input a string : ");
SORT:cin >> name;
	for (int i = 0; i < strlen(name); i++)
	{
		if (!(name[i] >= 48 and name[i] <= 57) and !(name[i] >= 65 and name[i] <= 90) and !(name[i] >= 97 and name[i] <= 122))
		{
			printf("\nnot right type \n");
			printf("Try again : ");
			goto SORT;
		}
	}
}
void get_reverse(char names[], int lenght)
{
	int counter = 0;
	int i = 0;
	char temp = 0;

	lenght = lenght - 1;
	char* ptr = &names[0];

	for (i = 0; i <= lenght; i++)
	{
		temp = ptr[i];
		ptr[i] = ptr[lenght];
		ptr[lenght] = temp;
		lenght--;
	}
}
void print(char* name)
{
	printf("Reverse of a string is %s", name);
}

void pyramid(int lenght, char* name)
{
	for (int i = lenght; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << name[j - 1] << " ";
		}
		cout << endl;
	}
}

