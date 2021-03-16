std::string findNemo(std::string sentence) {
    std::string word;
    std::stringstream iss(sentence);
    int count=1;
    while (iss >> word){
        if(word=="Nemo") return "I found Nemo at " + std::to_string(count) + "!";
        count++;
    }
    return "I can't find Nemo :(";
}
/////////////////////////////////////////////////////
std::string findNemo(std::string sentence){
	std::vector<std::string> words;
	std::string word = "";
	for (char i : sentence){
		if (i == ' '){
			words.push_back(word);
			word = "";
		} else 
				word+=i;
	}
	int in = 1;
	for (std::string word : words){
		if (word == "Nemo")
			return "I found Nemo at " + std::to_string(in) + "!";
		in++;
	}
}