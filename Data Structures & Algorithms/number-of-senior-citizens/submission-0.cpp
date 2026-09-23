#include <vector>
#include <string>

class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int seniorCount = 0;
        
        for (const std::string& passenger : details) {
            // Extract the age substring at index 11 with length 2
            // e.g., "7868190130M7522" -> index 11 and 12 is "75"
            std::string ageStr = passenger.substr(11, 2);
            
            // Convert the string to an integer
            int age = std::stoi(ageStr);
            
            // Check if they are strictly older than 60
            if (age > 60) {
                seniorCount++;
            }
        }
        
        return seniorCount;
    }
};
