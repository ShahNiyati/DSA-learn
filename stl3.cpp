#include<bits/stdc++.h>
using namespace std;
void explainmap(){
    map<int,int>mp1;
    map<int,pair<int,int>>mp2;
    map<pair<int,int>,int>mp3;//mp3[{2,3}]=11; 
    mp1[1]=2;//{1,2}//{key,value}
    mp1.emplace(4,5);
    mp1.insert({3,4});//({1,2}),{3,4},{4,5})
    for(auto it : mp1){
        cout<<it.first<<"  "<<it.second<<endl;
    }
    cout<<mp1[1]<<endl;//prints 2 because value is 2
    cout<<mp1[4]<<endl;//prints 5

//     auto it=mp1.find(3);
//     cout << *(it.second);
    // auto it=mp1.find[(6);
    // cout<<*(it);

    // auto it=mp1.lower_bound(2);
    // auto it=mp1.upper_bound(3);
}
void explainextra(){
    int a[5]={5,3,4,2,1};
    //method 1
    sort(a,a+5);//a+5 is denote after a[4] element space
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //method 2
    vector<int> v={9,10,6,8,3};
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //decending order 
    // sort(a,a+5,greater<int>);
    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }

    //when we want to sort an array in my way 
    //lets say I have a pair ={{1,2},{3,4},{4,4}}
    //I want to sort accodring to second element and if second element are same then sort with deceding order 
    // pair<int,int> p[]={{3,4},{1,2},{4,4}};
    // sort(p,p+3,comp);//comp is function which return boolean value and self return comparator
    // for(int i=0;i<3;i++){
    //     cout<<p[i].first<<" "<<p[i].second<<endl;
    // }
    int num=7;
    int cnt=__builtin_popcount(7);
    cout<<cnt<<endl;//binary of 7 0111//return 3 set
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    int maxi=*max_element(a,a+5);
    cout<<maxi<<endl;//prints 5

}
// bool comp(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second){
//         return 1;
//     }
//     else if(p1.second>p2.second){
//         return 0;
//     }
//     else if(p1.first>p2.first){
//         return 1;
//     }
//     else 0;
// }
int main()
{
    //explainmap();
    explainextra();
    return 0;
}