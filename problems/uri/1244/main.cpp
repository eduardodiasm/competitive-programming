#include <bits/stdc++.h>

using namespace std;

vector <string> split_string(string text) {

  int length = text.length();

  vector <string> words;

  for (size_t i = 0; i < length; i++) {
    
    string word = "";
    while (!isspace(text[i]) && i < length) {
      word += text[i++];
    }

    if (word != "") {
      words.push_back(word);
    }

  }
  
  return words;

}

void swap_strings (string *a, string *b) {
    string temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort (vector<string> &array)
{
    for (int i = 0; i < array.size(); i++) {
      for(int j = 0; j < array.size() - 1; j++) { 
        if (array[j].length() < array[j+1].length()) {
          swap_strings(&array[j], &array[j+1]);
        }
      }
    }
}


int main(int argc, char const *argv[])
{
  
  int n;
	cin >> n;

  cin.ignore();

	while(n--) {

    string text;
    getline(cin, text);

    vector <string>  words = split_string(text);

    bubble_sort(words);

    string last_element = words.back();
    words.pop_back();


    for (auto word : words) {
      cout << word << " ";
    }

    cout << last_element << '\n';
  }

  return 0;
}
