#ifndef COUNTER_H
#define COUNTER_H

#include <map>
#include <list>
#include <string>
#include <vector>

class Counter 
{
private:
    std::map<std::string, int> countMap;  // Хранит количество вхождений каждого слова
public:
    int totalWords = 0;
    void CountWords(std::list<std::string>& inputWords);  // Метод для подсчета слов
    int TotalWordCount() const;  // Метод для получения общего количества слов
    std::vector<std::pair<std::string, int>> SortedWordCount() const;  // Метод для получения отсортированных слов
};

#endif