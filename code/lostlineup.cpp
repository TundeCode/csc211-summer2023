#include <iostream>
#include <vector>

int main(){

    int n, input;
    std::vector<int> lineup, position;

    std::cin >> n;

    //collect the input
    for(int i = 0 ; i < n - 1; i++){
        std::cin >> input;
        lineup.push_back(input);

        //for each person in line, their "position" in line is how many people are between
        //them and the leader

        //so if there are 0 people between the leader and a person, they are second in line (0 + 2),
        // if there are 2 people between a person and the leader, they are 4th in line (2 + 2)
        //because the second line of input tells us how many people are between that persion (di) and the leader,
        // their actual position in the correct line is (the number of people between the leader + 2)

        //the position vector is holding the true position of each person in the original line
        position.push_back(i + 2);
    }

    std::cout << "1";
    for(int i = 0 ; i < lineup.size(); i++){
        for(int j = 0 ; j < position.size(); j++){
            if(i == lineup[j]){
                std::cout << " " << position[j];
            }

        }

    }


    // test case

    // input:
    // 4
    // 1 2 0

    // output:
    // 1 4 2 3

    // the input does not include the position of the line leader
    // therefor, the output will always start with 1

    //after the 1 in the output, the following numbers are what the line up should be.
    //4 is the second output, beause the 4th person in the input line (ignoring the leader)
    //had 0 people between them and the line leader. so the true line
    //should be 1 4 (the 4th person in the) input line.





    return 0;
}