#include <iostream>
#include <vector>

int main(void){
    int t, n;
    std::cin >> t;
    std::vector<std::vector<int>> solutions(t);
    for(int i = 0; i < t; i++){
        std::cin >> n;
        std::vector<int> numbers(n);
        solutions[i].resize(n);
        for(int j = 0; j < n; j++){
            std::cin >> numbers[j];
        }
        for(int j = 0; j < n; j++){
            int b;
            std::string moves;
            std::cin >> b;
            std::cin >> moves;
            for(int k = 0; k < b; k++){
                if(moves[k] == 'U'){
                    numbers[j] = (numbers[j] + 9) % 10;
                }
                else if(moves[k] == 'D'){
                    numbers[j] = (numbers[j] + 1) % 10;
                }
            }
            solutions[i][j] = numbers[j];
        }
    }
    for(int i = 0; i < t; i++){
        for(int j = 0, size = solutions[i].size(); j < size; j++){
            std::cout << solutions[i][j] << " ";
        }
        std::cout << std::endl;
    }

}