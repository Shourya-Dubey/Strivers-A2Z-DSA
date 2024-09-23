#include<bits/stdc++.h>
using namespace std;
main() {
pair<int, int> p = {1,5};
cout<<p.first<<" "<<p.second<<endl;

pair<int, pair<int, int>> q = {1, {3, 6}};
cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
cout<<arr[1].first<<" "<<arr[0].second<<endl;



// Vector
vector<int>v;
v.push_back(1);
v.emplace_back(2);

// vector<pair<int, int>>vec;


// vector<int> v(5,100);

// vector<int> v(5);

// vector<int> v1(5,10);
// vector<int> v2(v1);

vector<int>::iterator it = v.begin();
it++;
cout<<*(it)<<" ";

it = it + 2;

vector<int>::iterator it = v.end();
vector<int>:: iterator it = v.rend();
vector<int>::iterator it = v.rbegin();

cout<<v[0];
cout<<v.back()<<" ";

for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
    cout<<*(it)<<" ";
}

for(auto it = v.begin(); it!=v.end(); it++){
    cout<<*(it)<<" ";
}

for(auto it:v){
    cout<<it<<" ";
}

// {10, 20, 30, 40, 50}
v.erase(v.begin()+1 , v.begin()+4); //{10, 50}
v.insert(v.begin(), 100); //{100, 10, 50}
v.insert(v.begin()+1, 2, 30); //{100, 30, 30, 10, 50}

vector<int>copy(2,50); //{50, 50}
v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,100, 30, 30, 10, 50}

//{10, 20}
cout<<v.size(); //2

//{10,20}
v.pop_back(); //10

// v1->{10,20}
// v2->{30,40}
v1.swap(v2); //{v1->30,40  || v2->10,20}

v.clear();

cout<<v.empty();

//LIST
list<int> ls;
ls.push_front(2); //{2}
ls.push_back(3); //{2,3}
ls.emplace_back(4); //{2,3,4}
ls.emplace_front();

//Deque
deque<int>dq;
dq.push_back(1); //{1}
dq.emplace_back(2); //{1,2}
dq.push_front(3); //{2,1,2}
dq.push_back(4); //{2,1,2,4}

dq.pop_back(); //{2,1,2}
dq.pop_front(); //{1,2}

dq.back();
dq.front();


//STACK
stack<int> st;
st.push(1); //{1}
st.push(2); //{2,1}
st.push(3); //{3,2,1}
st.emplace(4); //{4,3,2,1}

cout<<st.top()<<" "; //{4}

st.pop(); //{3,2,1}
st.size(); //4
st.empty(); //false

stack<int> st1 , st2;
st1.swap(st2);

//QUEUE
queue<int> qu;
qu.push(1); //{1}
qu.push(2); //{1,2}
qu.emplace(3); //{1,2,3}

qu.back() += 5; //{1,2,8}
cout<<qu.back()<<" "; //{9}
cout<<qu.front()<<" "; //{1}
qu.pop(); //{2,8,9}
cout<<qu.front(); //{2}


//Priority_queue
priority_queue<int> pq; //MaxHeap
pq.push(2); //{2}
pq.push(5); //{5,2}
pq.push(1); //{5,2,1}
pq.push(7); //{7,5,2,1}

cout<<pq.top(); //{7}

pq.pop(); //{5,2,1}
cout<<pq.top(); //{5}

priority_queue<int, vector<int>, greater<int>> pqi; //MinHeap 
pqi.push(5); // {5}
pqi.push(2); //{2,5}
pqi.push(4); //{2,4,5}
pqi.emplace(1); //{1,2,4,5}

cout<<pqi.top(); //{1}
pqi.pop(); // {2,4,5}
pqi.top(); //{2}


//SET {sorted and unique}
set<int> st;
st.push(3); //{3}
st.push(2); //{2,3}
st.push(2); //{2,3}
st.emplace(1); //{1,2,3}

st.erase(2);


//MultiSet {sorted}
multiset<int> ms;
ms.insert(1);
ms.insert(1);
ms.insert(1); //{1,1,1}

ms.erase(ms.find(1)); //{1,1} erase only single element
ms.erase(ms.find(1), ms.find(1)+2);

//UnderdedSet {unique element}
unordered_set<int> us; //O(1)


map<int, int> mpp;
map<pair<int, int> , int> map2;

mpp[1] = 3;
mpp.insert({4,2});
mpp.emplace({3,9});

map2[{2,1}]= 1;

for(auto it: mpp){
    cout<<it.first<<" "<<it.second<<endl;
}






return 0;
}