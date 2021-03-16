#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <iterator>

 // Dummy std::vector of strings
 std::vector<std::string> sentence;
 sentence.push_back("aa");
 sentence.push_back("ab");

 // Required std::stringstream object
 std::stringstream ss;

 // Populate
 std::copy(sentence.begin(), sentence.end(),std::ostream_iterator<std::string>(ss,"\n"));

 // Display
 std::cout<<ss.str()<<std::endl;