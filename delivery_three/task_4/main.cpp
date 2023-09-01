#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <stdexcept>

using namespace std;

//TASK A
vector<string> getUserWords(const int numWords);

//TASK B
//ALT 1
string createSentence(const string &w1, const string &w2, const string &w3);
//ALT 2
string createSentence(const vector<string> &strVect);

//TASK C
//ALT 2
void printWordLengths(const vector<string> &strVect);

//TASK E
string xOutInterval(string &word, const int start, const int stop);

//TASK H
int countWordFrequency(const string &sentence, const string &word);

int main()
{
    const int NUM_WORDS = 3;
    //TASK A
	vector<string> userWords = getUserWords(NUM_WORDS);
	
	string word1 = userWords[0];
	string word2 = userWords[1];
	string word3 = userWords[2];
	cout << endl << "Task A:" << endl << endl;
	cout << "Word1: " << word1 << ", Word2: " << word2 << ", Word3:" << word3 << endl << endl;
	
	//TASK B
	 //ALT 1
	string sentence = createSentence(word1, word2, word3);
	
	 //ALT 2
	string sentenceAlt = createSentence(userWords);
	
	cout << endl << "Task B:" << endl << endl;
	cout << "Sentence(1): \n" << sentence << endl;
	cout << "Sentence(2): \n" << sentenceAlt << endl << endl;
	
  	//TASK C
  	 //ALT 1
  	cout << endl << "Task C:" << endl << endl;
  	cout << "Word-lengths for: " << endl;
	cout << "Word1: " << word1.size() << ", Word2: " << word2.size() << ", Word3:" << word3.size() << endl << endl;
	
	 //ALT 2
	printWordLengths(userWords);
	
	//TASK D
	string sentence2 = sentence;
	
	//TASK E
	cout << endl << "Task E:" << endl << endl;
	try
	{
	  	sentence2 = xOutInterval(sentence2, 9, 11);
 		cout << "Sentence normal: " << sentence << endl;
 		cout << "Sentence2 X-ed out: " << sentence2 << endl;
	}
	catch (const out_of_range& err)
	{
	    cerr << "Out_of_range: \n" << err.what() << endl;
	}
    catch (const invalid_argument& err)
    {
        cerr << "Invalid argument: \n" << err.what() << endl;
    }
    
    
    //TASK F
    cout << endl << "Task F:" << endl << endl;
    string sentence_start = "";
    if(sentence.size() >= 5)
    {
      sentence_start = sentence.substr(0,5);
    }
    else
    {
      cout << "The sentence was too short to fetch the first 5 characters, fetched as many as possible instead." << endl;
      sentence_start = sentence.substr(0, sentence.size());
      
    }
    
    cout << "Sentence: " << sentence << endl;
    cout << "Sentence-start: " << sentence_start << endl;
    
    //TASK G
    cout << endl << "Task G:" << endl << endl;
    string hallo = "hallo";
    bool containsHallo = sentence.find(hallo) != string::npos;
    
   cout << boolalpha << "Does the string '" << sentence << "' contain " << hallo << "?" << endl
   << containsHallo << endl;
   
   //TASK H
   	cout << endl << "Task H:" << endl << endl;
   int countEr = countWordFrequency(sentence,"er");
   
   cout << "The sentence is: " << sentence << endl;
   
   cout << "The number of 'er' occurrences: " << countEr << endl;

	return 0;
}


//TASK A
vector<string> getUserWords(const int numWords)
{

	cout << "Please enter " << numWords << " words, one by one:" << endl;
	int wordsReceived = 0;
	vector<string> words;
	

    while (wordsReceived < numWords)
    {
   	  string word;
   	  getline(cin, word);
   	  
   	  if (cin.fail())
   	  {
     	    cin.clear();
    		cin.ignore(numeric_limits<streamsize>::max(), '\n');
    		continue;
   	  }
   	  else {
   	    words.emplace_back(word);
   	    wordsReceived++;
   	  }    
    }
    
    return words;
}

//TASK B
 //ALT 1
string createSentence(const string &w1, const string &w2, const string &w3)
{
  return w1 + " " + w2 + " " + w3 + ".";
}

 //ALT 2
string createSentence(const vector<string> &strVect){
  string sentence;
  int count = 0;
  for (auto str : strVect)
  {
    if(count != 0) sentence += " ";
    sentence +=str;
    count ++;
  }
  sentence += ".";
  return sentence;
}


//TASK C
 //ALT 2
void printWordLengths(const vector<string> &strVect)
{
  for (size_t i = 0; i < strVect.size(); i++)
  {
	cout << "\nWord" << i << ": "<< strVect[i].size() << endl;
  }
}

//TASK E
string xOutInterval(string &word, const int start, const int stop)
{
  if(start < 0 || stop < 0) throw out_of_range("The input for the start and stop indexes where negative");
  int length = word.size();
  if(start > length - 1 || stop > length -1) throw out_of_range("One of the indexes were out of range");
  if(start > stop) throw invalid_argument("The start index was greater than the stop index");
  
  for(int i = start; i <= stop; i++)
  {
    word[i] = 'x';
  }
  
  return word;
  
}

//TASK H
int countWordFrequency(const string &sentence, const string &word)
{
  int sentenceLen = sentence.size();
  int wordLen = word.size();
  int matchCount = 0;
  for(int i = 0; i < sentenceLen; i++)
  {
    if(sentence[i] == word[0])
    {
      if(i + wordLen > sentenceLen) {
        continue;
      }
      bool match = true;
      for(int j = 0; j < wordLen; j++)
      {
        if(sentence[i+j] != word[j])
        {
          match = false;
          break;
        }
      }
      if(match) matchCount++;
    }
  }
  return matchCount;
}
