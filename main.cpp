#include <iostream>

using namespace std;
int main() {
    int countTasks, sum = 0;
    cin >> countTasks;
    
    for (int i = 0; i < countTasks; i++) {
        int onesCount = 0;
        string resultPeople;
        cin >> resultPeople;

        for (size_t a = 0; a < resultPeople.length(); a++) {
            if (resultPeople[a] == '1'){
                onesCount++;
            }
        }
        if (onesCount >= 2){
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
