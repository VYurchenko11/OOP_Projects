#ifndef WRITER_H
#define WRITER_H

#include <string>
#include <vector>
#include <utility>

class Writer {
public:
    bool writeCSV(const std::string& fileName, const std::vector<std::pair<std::string, int>>& sortedWords, int totalWords);
};

#endif