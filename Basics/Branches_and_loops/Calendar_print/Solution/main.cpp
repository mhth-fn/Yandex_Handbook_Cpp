#include <iostream>

int main(){
  int first_day, days_in_month;
  std::cin >> first_day >> days_in_month; 
    
  int current_day = 0;
  for (int i = 1; i < (first_day + days_in_month); i++){

		if (i >= first_day){
      current_day++;
      if (current_day < 10 && i != 0){
				std::cout << " ";
      }
		std::cout << current_day;
		} else{
			std::cout << "  ";
  	}

		if (i % 7 == 0 && i != 0){
			std::cout << '\n';
		} else{
			std::cout << " ";
		}
  }

    return 0;
}
