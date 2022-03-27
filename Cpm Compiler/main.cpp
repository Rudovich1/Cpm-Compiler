#include <iostream>
#include <fstream>
#include "lexer.h"
#include "compiler_errors.h"
#include "log.h"

#define DEBUG

using namespace std;

int main() {
	try {
		string file_path = "code.cpm";
		lexer lex(file_path);
		lex.generate_tokens();
		lex.print_tokens();
	}
	catch (string error_information){

		file_logging::to_log(error_information);
		stream_logging::to_log(error_information);
		return -1;
	}

}