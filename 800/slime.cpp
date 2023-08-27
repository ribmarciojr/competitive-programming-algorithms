#include <iostream>

// A. Slime Combining
// # 618A


int main(){
    int slimes;
    int drow[1000];
    
    std::cin >> slimes;

    //Inicialize vector positions with 0
    for(int i = 0; i < 1000; i++){
        drow[i] = 0;
    }

    //Start counting vector inside elements
    int elements = 0;

    //Adds 1 slime at right of last one
    for(int i = 0; i < slimes; i++){
        drow[elements] = 1;
        elements++;

        //Identifies when last slime have the same weight as the penultimate, there combine them and erase last one
        while (elements > 1 && drow[elements - 1] != 0 && drow[elements - 1] == drow[elements - 2]){
            drow[elements - 1] = 0;
            drow[elements - 2] = drow[elements - 2] + 1;

            //Decrease number off elements when slimes are combined
            elements--;
        }
        
    }

    //Read final vector
    for(int i = 0; i < elements; i++){
        std::cout << drow[i] << ' ';
    }
}