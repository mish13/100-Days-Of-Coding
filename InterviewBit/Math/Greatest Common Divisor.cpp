int Solution::gcd(int A, int B) {
    if(B>A)
        swap(A,B);
    while(B!=0)
    {
        int C = A%B;
        A = B;
        B = C;
    }
    return A;
}
