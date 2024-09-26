// #include<iostream>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int ans = 0;
//     int i = 1;

//     while(n != 0){
//         int bit = n & 1;
//         ans = (bit * i) + ans;
//         n = n>>1;
//         i = i*10;   
//     }
//     cout<<"Answer is  "<<ans<<endl;
//     return 0;   
// }

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isNegative = (n < 0);
    n = abs(n);  // Take absolute value for binary conversion

    int ans = 0;
    int i = 1;

    while(n != 0){
        int bit = n & 1;
        ans = (bit * i) + ans;
        n = n >> 1;
        i = i * 10;
    }

    if (isNegative) {
        cout << "Answer (for absolute value) is -" << ans << endl;
    } else {
        cout << "Answer is " << ans << endl;
    }

    return 0;
}
