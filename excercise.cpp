
#include <vector>
#include <iostream>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

int main() {
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    // Write your code here
    double totalCost = 0.0;
    for(Resource resource : resources){
        auto type = resource.type;
        switch (type) {
            case 'L' :
                totalCost += (resource.baseCost * 0.15) + resource.baseCost;
                break;
            case 'B' :
                totalCost += (resource.baseCost * 0.05) + resource.baseCost;
                break;
            case 'E' :
                totalCost +=  resource.baseCost;
                break;
        }
    }
    std::cout << totalCost << std::endl;
    return totalCost;
}

