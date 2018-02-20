#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Sentence
{
  struct WordToken
  {
      WordToken(size_t s, size_t e)
        : start(s)
        , end(e)
        , capitalize(false)
      {
      }
      size_t start, end;
      bool capitalize;
      bool cover(size_t pos) const {
          return (pos >=start && pos <= end);
      }
  };

  Sentence(const string& text)
      : m_str(text)
  {
      // start from first alpha
      auto first_alpha = std::find_if(text.begin(), text.end(), ::isalpha);
      size_t start = std::distance(text.begin(), first_alpha);

      // find all words
      for (size_t i = start; i < text.size(); ++i) {

          if (!isalpha(text[i]) && i < text.size() - 1) {
              words.push_back(WordToken(start, i - 1));
              start = i + 1;
          } else if(i == text.size() - 1) {
              words.push_back(WordToken(start, i));
          }

      }
  }

  WordToken& operator[](size_t index)
  {
      return words[index];
    // todo
  }

  string str() const
  {
      string s;
      for (size_t i = 0; i < m_str.size(); ++i) {
          char c = m_str[i];
          for(auto& w : words) {
              if (w.cover(i) && w.capitalize)
              {
                  c = toupper(c);
              }
          }

          s+= c;
      }
      return s;
    // todo
  }
private:
  std::vector<WordToken> words;
  string m_str;
};

#endif // FLYWEIGHT_H
