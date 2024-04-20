//============================================================================
// Name        : lab5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <iomanip>
#include <map>
#include <sstream>
using namespace std;

string correctSentence(string sentence) {


    for (size_t i = 0; i < sentence.length(); ++i) {
        if (isspace(sentence[i])) {
            while (isspace(sentence[i + 1])) {
                sentence.erase(i + 1, 1);
            }
        }
    }
    bool capitalizeNext = true;
    for (size_t i = 0; i < sentence.length(); ++i) {
        if (isspace(sentence[i])) {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            sentence[i] = toupper(sentence[i]);
            capitalizeNext = false;
        } else {
            sentence[i] = tolower(sentence[i]);
        }
    }
    //if (sentence.back() != '.') {
    //    sentence += '.';
    //}
    return sentence;
}


int main() {
    string inputsentence;
    cout << "Enter a sentence (up to 100 characters, ending with a period): ";
    getline(cin, inputsentence);


    if (inputsentence.length() > 100) {
        cout << "Input sentence is too long. Please keep it within 100 characters." << endl;
    } else {
        string correctedsentence = correctSentence(inputsentence);
        cout << "Corrected sentence: " << correctedsentence << endl;
    }


    return 0;
//Enter a sentence (up to 100 characters, ending with a period): A dOg         iS ChAsiNg A    cAt.
//    Corrected sentence: A Dog Is Chasing A Cat.
//

/*
int main(){
    map<string,string> wordrepl;
    wordrepl["he"] = "she or he";
    wordrepl["she"] = "she or he";
    wordrepl["him"] = "her or him";
    wordrepl["her"] = "her or him";
    wordrepl["his"] = "her(s) or his";
    wordrepl["her"] = "her(s) or his";


    while (true) {
        string inputstring = "";
        cout << "Enter your sentence (or type 'quit' to exit): ";
        getline(cin, inputstring);


        if (inputstring == "quit" || inputstring =="Quit") {
            break; // Exit the program if the user enters "quit"
        }


    istringstream iss(inputstring);
    string word;
    string result;
    string removedchar;


    while (iss >> word) {
    	removedchar={""};
        // Convert the word to lowercase for case-insensitive comparison
        string lowerword = word;
        //for (char& c : lowerword) {
        //    c = tolower(c);
        //}
        for (int i = 0; i < lowerword.size(); ++i) {
        lowerword[i] = tolower(lowerword[i]);
        }
        // Check if the word is a masculine pronoun
        //char c : lowerword
        for (string::size_type i=0; i<lowerword.length();i++) {
            char c = lowerword[i];
            if (ispunct(c)) {
                removedchar = lowerword[lowerword.length()-1]; // Store the removed character
                lowerword.erase(lowerword.length()-1);
            }
        }
        if (wordrepl.find(lowerword) != wordrepl.end()) {
            // Replace the masculine pronoun with the gender-neutral alternative
            word = wordrepl[lowerword];
            word += removedchar;
        }
        // Add the modified word to the modified sentence
        result += word + " ";
    }
    // Remove the trailing space
    if (!result.empty()) {
        result.erase(result.end()-1);
    }
    cout<<result<<"\n";
}
}
/*
 *
 * Enter your sentence (or type 'quit' to exit): Who is she? She is his mother.
Who is she or he? she or he is her(s) or his mother.
Enter your sentence (or type 'quit' to exit): quit
 *
 *
 */


