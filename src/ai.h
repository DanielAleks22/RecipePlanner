#ifndef AI_H
#define AI_H

#include <string>

class AI {
public:
    AI(const std::string &apiKey);
    std::string getRecipeSuggestions(const std::string &ingredients);

private:
    std::string apiKey = "";
};

#endif // AI_H
