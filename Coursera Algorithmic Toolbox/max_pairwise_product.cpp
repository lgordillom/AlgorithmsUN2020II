#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;
/*ll MaxPairwiseProduct2(const std::vector<int>& numbers) {
    ll max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            ll aux =numbers[first] * numbers[second];
            max_product = std::max(max_product, aux);
        }
    }

    return max_product;
}

*/



ll MaxPairwiseProduct(const std::vector<int>& numbers){
    ll result=0;
    ll maxnum1 = numbers[0];
    ll maxnum2 = numbers[1];

    for (int i = 2;  i< numbers.size(); i++) {
        if(numbers[i]>maxnum1){
            if(maxnum1> maxnum2){
                maxnum2 = maxnum1;
            }
            maxnum1 = numbers[i];

        }
        else {
            if(numbers[i] > maxnum2)
                maxnum2 = numbers[i];
        }
    }
    result = maxnum1*maxnum2;
    return result;
}

int main() {
    /*while(true) {
        int n = rand()%1000 +2;
        cout<<n<<endl;
        vector<int> a;
        for(int i=0; i<n; ++i){
            a.push_back(rand()%100000);
        }
        for (int i=0; i<n; ++i){
            cout<<a[i]<<" ";
        }
        cout<<" \n";
        ll res1 = MaxPairwiseProduct(a);
        ll res2 = MaxPairwiseProduct2(a);
        if (res1!= res2){
            cout<<"WA "<<res1<<" "<<res2<<endl;
            break;
        }
        else {
            cout<<"OK";
        }
    }

*/

    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";

    return 0;
}
