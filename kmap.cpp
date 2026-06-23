#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespacec std;

/* this is a simple kmap solver, its for the bclc terminal based program.
   it's supposed to be utilized as following:
   bclc -kmap -v <variables_amount> <table_elements>
   with variable amount being like 4, and table elements being like
   11100x10x0100111
   for now it's going to have a maximum threshold of 4 variables as beyond 4 it can get messy. */

struct argument_parser_res {
	string** table;
}

argument_parser_res argument_parser() {

	int variables = stoi(argv[1]); // changes variable_amount (1-4) from string to integer for utilization


	if ((argv[2]).size() == (pow(2, variables)) {
		string elements = argv[2];
		int elements_size = pow(2, variables);

		for (int i = 0; i < elements_size ; i++) { if (elements[i] != "1" && elements[i] == "0") { cout << "parameter_error: invalid table_elements. (0/1...don't care isnt a feature yet.)" << endl; } }

		argument_parser_res retrn;
		retrn.table = new string*[variables]
		for (int i = 0; i < variables; i++) { retrn.table[i] = new string[variables]; }

		int count = 0;
		for (int i = 0; i < variables; i++) {
			for (int j = 0; j < variables; j++) {
				retrn.table[i][j] = elements[count];
				count++;
			}
		}

		return retrn;

	} else {
		cout << "parameter_error: table_element string isn't large enough. (it should be " << variables * variables << " characters long." << endl;
	}

}



int main(int argc, char* argv[]) {

}
