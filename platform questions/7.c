//Smallest Even Multiple
//https://leetcode.com/problems/smallest-even-multiple/description/
int smallestEvenMultiple(int n) {
    int i=1;
    while(1){
 
        if(i%n==0 && i%2==0){
            break;
        }
 
        ++i;
    }
    return i ;
}
