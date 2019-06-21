#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int mystricmp(char[], char[]);  // function prototype declaration
int mystrncpy(char[], char[],int); // function prototype declaration
int mystrncat(char[], char[], int);// function prototype declaration
int myAtoi(char);					// function prototype declaration
char myItoA(int);					// function prototype declaration



int main()
{
	
	char text1[100], text2[100];
	int compare,n,var;
	int Vcat,var1;

	cout<<"\n\nEnter 1st string: ";
	cin>>text1;

	cout<<"\n\nEnter 2nd string: ";
		cin>>text2;

	compare = mystricmp(text1, text2);  // function call

	if (compare == 1)
		cout<<"\n\nBoth the strings are exactly same.\n\n";
	else
		cout<<"\n\nBoth the strings are different.\n";

	cout << "\nenter number of characters to be copied : "; cin >> n;
	var = mystrncpy(text1, text2, n);
	if (var == 1)
		cout << "String : " << text2 << endl;
	
	cout << "enter number of characters to be concatinated : "; cin >>Vcat ;
	var1 = mystrncat(text1, text2, Vcat);
	if (var == 1) {
		
		cout << "string : " << text1<<endl;

	}
	
	char str;
	cout << "enter a character : "; cin >> str;

	int val = myAtoi(str);
	cout << "value : " << val<<endl;

	int val1=0;
	char str1;
	cout << "enetr integer value :"; cin >> val1;
	str1 = myItoA(val1);
	cout << "character : " << str1<<endl;


	getch();
	return 0;
}

int mystricmp(char mj1[], char mj2[])  // function definition
{
	int i = 0, flag = 0;
	mj1 = strupr(mj1);
	mj2 = strupr(mj2);


	while (mj1[i] != '\0' && mj2[i] != '\0') // until atleast one string ends
	{
		/*
		Even if they differ by a single character,
		don't iterate further
		*/
		if (mj1[i] != mj2[i])
		{
			flag = 1;
			break;
		}
		i++;
	}

	/*
	If all the characters are sequentially same as well as
	both strings have ended
	*/
	if (flag == 0 && mj1[i] == '\0' && mj2[i] == '\0')
		return 1;
	else
		return 0;
}

int mystrncpy(char s1[], char s2[],int size) {
	int i;
	s1 = strlwr(s1);
	s2 = strlwr(s2);

	for ( i = 0; s1[i] != '\0'; ++i)
	{
		s2[i] = s1[i];
		if (i == size) {
			break;
		}
	}

	s2[i] = '\0';
	
	return 1;


}
int mystrncat(char s1[], char s2[], int size) {
	int i,j,l;
	l=strlen(s1);
	for (i = l, j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
		if (j == size) {
			break;
		}

	}
	s1[i] = '\0';

	return 1;
}

int myAtoi(char ch)
{
	int n = 0;
	n = ch - 48;  //48 is the ascii of 0

	return n;


}
char myItoA(int num) {

	char ch;

	ch = num + 48;

	return ch;


}