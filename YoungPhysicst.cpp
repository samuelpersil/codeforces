#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    int array[] = {0,0,0};
    std::vector<int> vetor(3, 0);
    for(int i=0; i<n; i++){
        std::cin >> array[0] >> array[1] >> array[2];
        vetor[0] += array[0];
        vetor[1] += array[1];
        vetor[2] += array[2];
    }
    (vetor[0] == 0 && vetor[1] == 0 && vetor[2] == 0) ? std::cout << "YES" : std::cout << "NO";

    return 0;
}