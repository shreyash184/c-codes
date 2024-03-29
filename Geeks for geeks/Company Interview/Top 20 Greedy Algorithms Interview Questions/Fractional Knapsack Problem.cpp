#include <bits/stdc++.h>

using namespace std;
struct Item{
    int value,weight;
    Item(int value, int weight) : value(value), weight(weight){}
};

bool comp(Item a, Item b){
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    return r1>r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n){
    sort(arr, arr+n, comp);
    int curWeight = 0;
    double finalValue = 0.0;
    for(int i=0;i<n;i++){
        if(curWeight+arr[i].weight <= W){
            curWeight+=arr[i].weight;
            finalValue+=arr[i].value;
        }else{
            int remain = W-curWeight;
            finalValue+= arr[i].value * ((double)remain/arr[i].weight);
            break;
        }
    }
    return finalValue;
}
int main()
{
    int W = 50;   //    Weight of knapsack
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);
    return 0;
}
