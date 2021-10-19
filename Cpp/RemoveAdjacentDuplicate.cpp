#include <iostream>
using namespace std;
#define max 100005

//Question: Remove Duplicate characters that are adjacent to each other

// Example: Input=aabccde    Output= abcde


void duplicate_removal(char *input) {

	if (input[0] == '\0')
	{	//checking if the array has reached the end
		return;
	}
  
	duplicate_removal(input + 1); //passing the pointer . Hence,
	//"aabcc" would become "abcc" and "abcc" will be passed

  
	if (input[0] == input[1])
	 {	 	
		for (int i=0; input[i] != '\0'; i++) {

			input[i] = input[i+1];
		}
	}


}
int main() {
	char s[max];
	cin >> s;
	duplicate_removal(s);
	cout << s << endl;
}
