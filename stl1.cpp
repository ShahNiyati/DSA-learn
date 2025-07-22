#include<bits/stdc++.h>

using namespace std;
void explainpair(){
    pair<int ,int >p={1,2};
    cout<<p.first<<" "<<p.second<<endl;//1 2
    pair<int, pair<int,int >>p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;//1 3 2
    pair<int ,int >p2[]={{1,2},{3,4},{5,6}};
    cout<<p2[2].second<<endl;//6 will be printed
}
void explainvector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int ,int >>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int>vec1(5,100);//{100,100,100,100,100}
    vector<int>vec2(5);//{0,0,0,0,0}
    vector<int>vec3(vec1);//copy of vector 1

    vector<int>vec4={1,2,3,4,5};
    cout<<vec4[0]<<" "<<vec4.at(1)<<" ";//"0 1"printed.
    cout<<vec4.back()<<" ";//last element printed;
}
void explainiterator(){
    // vector<int>vec={10,20,30,40,50};

    // vector<int>:: iterator itr=vec.begin();
    // cout<< *(itr)<<endl;//prints 10
    // itr++;
    // cout<< *(itr)<<endl;//prints 20

    // vector<int> v1={1,2,3,4,5};
    // vector<int>:: iterator it1=v1.end();
    // it1--;
    // cout<< *(it1)<<endl;//prints 5
    
    // vector<int>:: reverse_iterator it2=v1.rend();
    // it2--;
    // cout<< *(it2)<<endl;//gives 1

    // vector<int>:: reverse_iterator it3=v1.rbegin();
    // cout<< *(it3)<<endl;//gives 5
    // it3++;
    // cout<<*(it3)<<endl;//gives 4

    //Types of iteration of vectors : 
    // //method 1 
    // vector<int>vec5={5,6,7,8,9,10,11};
    // for(vector<int>::iterator it=vec5.begin();it!=vec5.end();it++){
    //     cout<<*(it)<<"  ";
    // }
    // cout<<endl;
    // //method 2
    // for(auto it=vec5.begin();it!=vec5.end();it++){
    //     cout<< *(it)<<"  ";
    // }
    // cout<<endl;
    // //method 3
    // for(auto it : vec5){
    //     cout<< it<<"  ";
    // }

    // erasing element from the vector : 
    // vector<int>vec6={2,3,4,5,6,8,9};
    // vec6.erase(vec6.begin()+1);//erase 3;
    // cout<<endl;
    // for(auto it : vec6){
    //     cout<< it<<"  ";//prints 2 4 5 6 8 9
    // }
    // vec6.erase(vec6.begin()+1,vec6.begin()+5);//erase 4,5,6,8
    //  cout<<endl;
    // for(auto it : vec6){
    //     cout<< it<<"  ";//prints 2 9
    // }

    //insert vector
    vector<int>vec7(2,50);//{50,50}
    // vec7.insert(vec7.begin(),20);//{20,50,50}
    // for(auto it=vec7.begin();it!=vec7.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // vec7.insert(vec7.begin()+2,3,10);//{20,50,10,10,10,50}
    // for(auto it=vec7.begin();it!=vec7.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    vector<int>vec8(3,4);//{4,4,4}
    // vec7.insert(vec7.begin(),vec8.begin(),vec8.end());//{4,4,4,20,50,10,10,10,50}
    // for(auto it=vec7.begin();it!=vec7.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // cout<<vec7.size();//9
    // cout<<endl;
    vec7.pop_back();//removes 50 from the last
    for(auto it=vec7.begin();it!=vec7.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    vec7.swap(vec8);
    for(auto it=vec7.begin();it!=vec7.end();it++){
        cout<<*it<<" ";
    }//{4,4,4}
    cout<<endl;
    for(auto it=vec8.begin();it!=vec8.end();it++){
        cout<<*it<<" ";
    }//{4,4,4,20,50,10,10,10}
    cout<<endl;
    vec7.clear();//{}
     for(auto it=vec7.begin();it!=vec7.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
   cout<<vec7.empty();//gives 1 because it is true;
}
void explainlist(){
    list<int> ls={1,2,3};
    ls.push_back(4);//{1,2,3,4}
    ls.emplace_back(5);//{1,2,3,4,5}
    ls.push_front(0);//{0,1,2,3,4,5}
    ls.emplace_front(-1);//{-1,0,1,2,3,4,5}
    
    for(auto it=ls.begin();it!=ls.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it=ls.rbegin();
    cout<<*(it)<<endl;//gives 5
    it++;
    cout<<*(it)<<endl;//gives 4
    auto i=ls.rend();
    i--;
    cout<<*(i)<<endl;//gives -1
    //same function works vectors as well as list
}
void explaindeque(){
    deque<int>d={1,2,3};
    d.push_back(4);//{1,2,3,4}
    d.push_front(0);//{0,1,2,3,4}
    d.emplace_back(5);//{0,1,2,3,4,5}
    d.emplace_front(-1);//{-1,0,1,2,3,4,5}
    d.pop_back();//{-1,0,1,2,3,4}
    d.pop_front();//{0,1,2,3,4}
    for(auto it=d.begin();it!=d.end();it++){
        cout<<*(it)<<" ";
    }
}
int main()
{
    //explainpair();
    //explainvector();
    //explainiterator();
    //explainlist();
    explaindeque();
    
    return 0;
}