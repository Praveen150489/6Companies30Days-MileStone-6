// Remove Colored Pieces if Both Neighbors are the Same Color.

class Solution {
public:
    bool winnerOfGame(string colors) {
        bool ans=false;
        int countA=0;
        int countB=0;
        int count=1;
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
                count++;
            }
            else{
                if(colors[i-1]=='A'){
                    if(count>=3){
                        countA+=(count-2);
                    }
                }
                if(colors[i-1]=='B'){
                    if(count>=3){
                        countB+=(count-2);
                    }
                }
                count=1;
            }
        }
        if(count>=3){
            if(colors[colors.size()-1]=='A'){
                countA+=(count-2);
            }
            if(colors[colors.size()-1]=='B'){
                countB+=(count-2);
            }
        }
        if(countA<=countB){
            return false;
        }
        return true;
    }
};
