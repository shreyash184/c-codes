int gc(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gc(b % a, a); 
} 
int Solution::gcd(int A, int B) {
    //if(A==B)return 1;
    return gc(A,B);
}
