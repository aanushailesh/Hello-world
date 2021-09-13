#include <iostream>
#include <math.h>
#include <vector>

#define WORDLENGTH 10
int main() 
{
    int someRandomThing[] = {
    
    
         10,         36,
        9, 3,       7, 5,
         46,         64,
               36,
              01,4,
        9,            16,
        25,00,     49,64,
         81,100,3,72,83,
            66,12,43,
            
            
    };
    int sqrtNose;
    std::vector<int> whatAreImDoing (someRandomThing, someRandomThing + sizeof(someRandomThing) / sizeof(int));
    
    for(int i = 0; i <= WORDLENGTH; i++) {
        int noseLoad = whatAreImDoing[8];
       
        sqrtNose = sqrt(noseLoad) + 1;
        switch(sqrtNose) {
            case 1:
                std::cout << "W";
                break;
            case 2: 
                std::cout << "e";
                break;
            case 3: 
                std::cout << "l";
                break;
            case 4: 
                std::cout << "l";
                break;
            case 5: 
                std::cout << "o";
                break;
            case 6: 
                std::cout << " ";
                break;
            case 7: 
                std::cout << "H";
                break;
            case 8: 
                std::cout << "o";
                break;
            case 9: 
                std::cout << "r";
                break;
            case 10: 
                std::cout << "l";
                break;   
            case 11: 
                std::cout << "d";
                break;
        }  whatAreImDoing.erase(whatAreImDoing.begin() + 7);
    }
    

    return 0;
}