#include <iostream>
#include <string>

// A. Tram
// 116A

int main(){
   int tram_stops;

   std::cin >> tram_stops;

    int min_passengers = 0;
    int inside_passengers = 0;
    for(int i = 0; i < tram_stops; i++){
        int entering_passengers;
        int exiting_passengers;

        std::cin >> exiting_passengers;
        std::cin >> entering_passengers;

        inside_passengers -= exiting_passengers;
        inside_passengers += entering_passengers; 

        if(inside_passengers > min_passengers){
            min_passengers = inside_passengers;
        }
    }

    std::cout << min_passengers << std::endl;
}