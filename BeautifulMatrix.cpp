#include <iostream>

int main(){
    int array[5][5];
    int onepos[2];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cin >> array[i][j];
            if(array[i][j] == 1){
                onepos[0] = i;
                onepos[1] = j;
            }
        }
    }
    std::cout << abs(2 - onepos[0]) + abs(2 - onepos[1]);
    return 0;
}