# include <iostream>
# include<vector>
# include <iterator>

using namespace std;





int main() {
    
    vector<int> arr = {1,2,3,4,5};
    vector<int> new_arr(arr.size());
    copy(arr.begin(), arr.end(), new_arr.begin());

    cout<<"New Array : " ;
    copy(new_arr.begin(), new_arr.end(),
    std ::ostream_iterator<int> (cout, " "));
    
    return 0;

    

}