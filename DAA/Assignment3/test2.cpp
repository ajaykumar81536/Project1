#include <iostream>
#include<climits>
#include<fstream>

using namespace std;

pair<int, int> find_Stable_sequence(int* arr, int left, int mid, int right, int d) {

    int MinScore = arr[mid];
    int MaxScore = arr[mid];
    int StartIndex = mid;
    int EndIndex = mid;

    
    for (int i = mid ; i >= left; --i) {
        if (arr[i] <= MinScore) {
            MinScore = arr[i];
        } else if (arr[i] >= MaxScore) {
            MaxScore = arr[i];
        }
        if (MaxScore - MinScore <= d) {
            StartIndex = i;  
        } else {
            break;
        }
    }



    MinScore = arr[mid];

    MaxScore = arr[mid];

   
    for (int i = mid + 1; i <= right; ++i) {
        if (arr[i] <= MinScore) {
            MinScore = arr[i];
        } else if (arr[i] >= MaxScore) {
            MaxScore = arr[i];
        }
        if (MaxScore - MinScore <= d) {
            EndIndex = i;  
        } else {
            break;
        }
    }

    return make_pair(StartIndex, EndIndex);
}

pair<int, int> Find_longest_stable_seq(int* arr, int left, int right, int d) {
    if (left == right) {
        return make_pair(left, left);  
    }

    int mid = left + (right - left) / 2;

    
    auto leftStable = Find_longest_stable_seq(arr, left, mid, d);

    auto rightStable = Find_longest_stable_seq(arr, mid + 1, right, d);

    
    auto crossingStable = find_Stable_sequence(arr, left, mid, right, d);

    
    int leftLength = leftStable.second - leftStable.first + 1;
    int rightLength = rightStable.second - rightStable.first + 1;
    int crossingLength = crossingStable.second - crossingStable.first + 1;

    
    if (leftLength >= rightLength && leftLength >= crossingLength) {
        return leftStable;
    } else if (rightLength >= leftLength && rightLength >= crossingLength) {
        return rightStable;
    } else {
        return crossingStable;
    }
}

int main() {

  int no;
  int *arr;
  cout<<"Ente the Numbers of elements"<<endl;
  cin>>no;
  arr=(int*)malloc(sizeof(int)*no);

  ifstream in("input2.txt");
  for(int i=0;i<no;i++)
  {
  in>>arr[i];
  }
    int d = 3;
    auto indices = Find_longest_stable_seq(arr, 0, no - 1, d);

     ofstream out("output2.txt");
        out<< "Longest stable sequence starts at index " << indices.first;
        out << " and ends at index " << indices.second << endl;
        for(int i=0;i<no;i++)
        {
          out<<arr[i]<<" ";
        }
       out.close();
}