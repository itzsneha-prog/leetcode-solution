class Solution {
public:
    int trailingZeroes(int n) {
        int count5=0;
        int count2=0;
        for(int i=1;i<=n;i++){
            if(i%2==0 && i%5==0){
                count5++;
                count2++;
                int m=i/5;
                while( m%5==0){
                        count5++;
                    
                    m=m/5;
                }

                m=i/2;
                while(m>0){
                    if(m%2==0){
                        count2++;
                    }
                    m=m/2;
                }
            }else if(i%2==0){
                count2++;
                int m=i/2;
                while(m>0){
                    if(m%2==0){
                        count2++;
                    }
                    m=m/2;
                }
            }else if(i%5==0){
                count5++;
                int m=i/5;
                while(m%5==0){
                    
                        count5++;
                    m=m/5;
                }
            }
            

        }

        return min(count5,count2);



    // correct but it will over flow
    // int factorial(int n){
    //     if(n==1 || n==0){
    //         return n;
    //     }
    //     return n*factorial(n-1);
    // }

    // int trailingZeroes(int n) {
    //     int fac=factorial(n);
    //     int count0=0;
    //     while(fac>0){
    //         int rem=fac%10;
    //         if(rem==0){
    //             count0++;
    //         }else{
    //             return count0;
    //         }
    //         fac=fac/10;
    //     }
    //     return count0;
    }
};