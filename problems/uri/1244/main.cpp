#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string text)
{

  int length = text.length();

  vector<string> words;

  for (size_t i = 0; i < length; i++)
  {

    string word = "";
    while (!isspace(text[i]) && i < length)
    {
      word += text[i++];
    }

    if (word != "")
    {
      words.push_back(word);
    }
  }

  return words;
}

int main(int argc, char const *argv[])
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  cin.ignore();

  while (n--)
  {

    string text;
    getline(cin, text);

    vector<string> words = split_string(text);

    stable_sort(
        words.begin(), words.end(),
        [](
            const std::string &s1, const std::string &s2) {
          return s1.size() > s2.size();
        });

    string last_element = words.back();
    words.pop_back();

    for (auto word : words)
    {
      cout << word << " ";
    }

    cout << last_element << '\n';
  }

  return 0;
}
