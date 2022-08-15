//                                          Date: 4 Aug, 2022


// Problem: MirrorReflection

/*


So, this problem can be transformed into finding m * p = n * q, where
m = the number of room extension + 1.
n = the number of light reflection + 1.
If the number of light reflection is odd (which means n is even), it means the corner is on the left-hand side. The possible 
corner is 2.
Otherwise, the corner is on the right-hand side. The possible corners are 0 and 1.
Given the corner is on the right-hand side.
If the number of room extension is even (which means m is odd), it means the corner is 1. Otherwise, the corner is 0.
    m is even & n is odd => return 0.
    m is odd & n is odd => return 1.
    m is odd & n is even => return 2.
Note: The case m is even & n is even is impossible. Because in the equation m * q = n * p, if m and n are even, we can divide 
both m and n by 2. Then, m or n must be odd.

--
Because we want to find m * p = n * q, where either m or n is odd, we can do it this way.



*/





/*


// extension*p = ref*q;
class Solution {
public:
    int mirrorReflection(int p, int q) {
        int ext = q, ref = p;
        while(ext%2==0 && ref%2==0){
            ext = ext/2;
            ref = ref/2;
        }
        if(ext%2==0 && ref%2!=0)  return 0;
        if(ext%2!=0 && ref%2!=0) return 1;
        if(ext%2!=0 && ref%2==0) return 2;
        return -1;
    }
};

*/


// -----------------------------------------------------------------------------------------



/*


When I reviewed the problems for my discuss article, I finaly realised only odd or even matter.

Divide p,q by 2 until at least one odd.

If p = odd, q = even: return 0
If p = even, q = odd: return 2
If p = odd, q = odd: return 1
I summary it as return 1 - p % 2 + q % 2


*/
/*

class Solution {
public:
    int mirrorReflection(int p, int q) {
        while (p % 2 == 0 && q % 2 == 0){ 
            p/=2;
            q/=2;
        }
        return 1 - p % 2 + q % 2;
    }
};


*/


// -------------------------------------------------------------------------------------
/*
Time Complexity
Time for 4 bit manipulations and 2 comparations.
*/

/*


     return (p & -p) > (q & -q) ? 2 : (p & -p) < (q & -q) ? 0:1;
*/