//Author: Abdulla Aldhaheri
#include<iostream>

using namespace std;

int main()
{

	char character, letter;
	int upper_case, lower_case;

  cout<<"What character do you want to know about?\n";
  cin>> character;

	if(letter>='A' && letter<='Z')
	{
		character=upper_case;

	  //when user's entry is between A-Z...
	  cout<<" is an upper case letter!\n";
	  cin>> upper_case;


	}else if(letter>='a' && letter<='z')
	{
		character=lower_case;

	  //when user's entry is between a-z...
	  cout<<" is a lower case letter!\n";
	  cin>> lower_case;
	}else
	{

	  //in all other cases...
	  cout<<"?! Pssh. What are you talking about?\n";
	}


  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int)letter<<endl;


  return 0;
}
