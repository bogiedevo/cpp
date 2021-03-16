Negate the Vector of Numbers
Given a vector of numbers, negate all elements contained within.
Negating a positive value -+n will return -n, because all +'s are removed.
Negating a negative value --n will return n, because the first - turns the second minus into a +..
Examples
negate({1, 2, 3, 4}) ➞ {-1, -2, -3, -4}
negate({-1, 2, -3, 4}) ➞ {1, -2, 3, -4}
--------------------------------------------------_
std::vector<int> negate(std::vector<int> vi){
for(int i=0;i < vi.size();i++){
vi[i] *=-1;                       
}
return vi;