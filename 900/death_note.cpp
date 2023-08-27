#include <iostream>

// A. Death Note
// 1016A

int main(){
    int days, limit_names_per_page;
    
    std::cin >> days >> limit_names_per_page;

    int total_names = 0;
    for(int i = 0; i < days; ++i){
        int today_names;
        std::cin >> today_names;

        total_names += today_names; 

        int needed_pages = total_names / limit_names_per_page;
        std::cout << needed_pages << " ";
                  
        total_names = total_names % limit_names_per_page;
      

        std::cout << total_names << " ";       
    }
}